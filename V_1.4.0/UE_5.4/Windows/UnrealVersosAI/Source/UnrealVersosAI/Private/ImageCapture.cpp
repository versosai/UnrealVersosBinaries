/**
 *  Copyright 2024 Versos AI Inc. All rights reserved
 */
#include "ImageCapture.h"
#include <iostream>
#include <vector>
#include <string>

#include "WorkSans-Light.h"
#include "stb.h"
#include "Misc/Paths.h"

FGridDimensions
draw_grid_and_numbers(int cellSize, unsigned char* image, int width, int height, int channels, const unsigned char* fontBuffer) {
    int gridWidth = width / cellSize;
    int gridHeight = height / cellSize;

    // Load the font
    stb::stbtt_fontinfo font;
    if (!stb::stbtt_InitFont(&font, fontBuffer, stb::stbtt_GetFontOffsetForIndex(fontBuffer,0))) {
        ::std::cerr << "Error: Could not load font." << ::std::endl;
        FGridDimensions retn;
        retn.MaxX = 0;
        retn.MaxY = 0;
        return retn;
    }

    int fontSize = 36;
    float scale = stbtt_ScaleForPixelHeight(&font, fontSize);

    // Drawing black lines for the grid
    for (int x = 0; x <= gridWidth; ++x) {
        for (int y = 0; y < height; ++y) {
            if (x < gridWidth) {
                image[(y * width + x * cellSize) * channels + 0] = 0; // R
                image[(y * width + x * cellSize) * channels + 1] = 0; // G
                image[(y * width + x * cellSize) * channels + 2] = 0; // B
            }
        }
    }
    for (int y = 0; y <= gridHeight; ++y) {
        for (int x = 0; x < width; ++x) {
            if (y < gridHeight) {
                image[(y * cellSize * width + x) * channels + 0] = 0; // R
                image[(y * cellSize * width + x) * channels + 1] = 0; // G
                image[(y * cellSize * width + x) * channels + 2] = 0; // B
            }
        }
    }

    // Drawing numbers in each cell, centered
    int counter = 1;
    for (int j = 0; j < gridHeight; ++j) {
        for (int i = 0; i < gridWidth; ++i) {
            char number[4];
            snprintf(number, 4, "%d", counter++);
            int totalWidth = 0;
            int maxHeight = 0;

            // First, calculate total width and max height of the number to be drawn
            for (size_t n = 0; n < strlen(number); ++n) {
                int x0, y0, x1, y1;
                stbtt_GetCodepointBitmapBox(&font, number[n], scale, scale, &x0, &y0, &x1, &y1);
                totalWidth += (x1 - x0);
                if ((y1 - y0) > maxHeight) {
                    maxHeight = y1 - y0;
                }
            }

            // Calculate center of the cell
            int cellCenterX = i * cellSize + cellSize / 2;
            int cellCenterY = j * cellSize + cellSize / 2;

            // Starting position for drawing, adjusted to center the number
            int startX = cellCenterX - totalWidth / 2;
            int startY = cellCenterY - maxHeight / 2;

            int x_offset = 0;
            for (size_t n = 0; n < strlen(number); ++n) {
                int x0, y0, x1, y1;
                stbtt_GetCodepointBitmapBox(&font, number[n], scale, scale, &x0, &y0, &x1, &y1);
                std::vector<unsigned char> bitmap((x1 - x0) * (y1 - y0), 0);
                stbtt_MakeCodepointBitmap(&font, &bitmap[0], x1-x0, y1-y0, x1-x0, scale, scale, number[n]);

                // Adjust placement for each digit, centering the number
                for (int y = 0; y < y1-y0; ++y) {
                    for (int x = 0; x < x1-x0; ++x) {
                        if (bitmap[y * (x1 - x0) + x] > 0) {
                            int idx = ((startY + y) * width + (startX + x + x_offset)) * channels;
                            image[idx + 0] = 0; // R
                            image[idx + 1] = 0; // G
                            image[idx + 2] = 0; // B
                        }
                    }
                }
                x_offset += x1 - x0; // Update x_offset for the next digit
            }
        }
    }

    FGridDimensions retn;
    retn.MaxX = gridWidth;
    retn.MaxY = gridHeight;
    return retn;
}

FGridDimensions make_waffle_image(::std::string path_to_image, ::std::string path_to_output_image, int cell_size) {
    int width, height, channels;
    unsigned char* image = stb::stbi_load(path_to_image.c_str(), &width, &height, &channels, 0);
    if (image == nullptr) {
        ::std::cerr << "Error in loading the image" << ::std::endl;
        FGridDimensions retn;
        retn.MaxX = 0;
        retn.MaxY = 0;
        return retn;
    }

    FGridDimensions retn = draw_grid_and_numbers(cell_size, image, width, height, channels, WorkSans_Light);

    if(path_to_output_image.ends_with("png"))
        stb::stbi_write_png(path_to_output_image.c_str(), width, height, channels, image, width * channels);
    else if(path_to_output_image.ends_with("jpg") || path_to_output_image.ends_with("jpeg"))
        stb::stbi_write_jpg(path_to_output_image.c_str(), width, height, channels, image, width * channels);
    else
        ::std::cerr << "Unsupported format: " << path_to_output_image << ::std::endl;

    stb::stbi_image_free(image);
    return retn;
}


TArray<FString> split_image_into_quads(const FString& inputPathFstr) {
    TArray<FString> retn;
    std::string inputPath = TCHAR_TO_UTF8(*inputPathFstr);
    int width, height, channels;
    unsigned char* img = stb::stbi_load(inputPath.c_str(), &width, &height, &channels, 0);
    if (img == nullptr) {
        UE_LOG(LogTemp, Log, TEXT("Error laoding Image: %hs"), inputPath.c_str());
        return TArray<FString>();
    }

    int quadrantWidth = width / 2;
    int quadrantHeight = height / 2;
    int size = quadrantWidth * quadrantHeight * channels;

    std::vector<unsigned char> topLeft(size), topRight(size), bottomLeft(size), bottomRight(size);

    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            int i = (y * width + x) * channels;
            int qx = (x < quadrantWidth) ? 0 : quadrantWidth;
            int qy = (y < quadrantHeight) ? 0 : quadrantHeight;
            int qi = ((y - qy) * quadrantWidth + (x - qx)) * channels;

            std::vector<unsigned char>* quadrant;
            if (x < quadrantWidth && y < quadrantHeight) quadrant = &topLeft;
            else if (x >= quadrantWidth && y < quadrantHeight) quadrant = &topRight;
            else if (x < quadrantWidth && y >= quadrantHeight) quadrant = &bottomLeft;
            else quadrant = &bottomRight;

            for (int c = 0; c < channels; ++c) {
                (*quadrant)[qi + c] = img[i + c];
            }
        }
    }
    FString ImageTL = inputPathFstr + "_top_left.png";
    stb::stbi_write_png(TCHAR_TO_ANSI(*ImageTL), quadrantWidth, quadrantHeight, channels, topLeft.data(), quadrantWidth * channels);
    FString ImageTR = inputPathFstr + "_top_right.png";
    stb::stbi_write_png(TCHAR_TO_ANSI(*ImageTR), quadrantWidth, quadrantHeight, channels, topRight.data(), quadrantWidth * channels);
    FString ImageBL = inputPathFstr + "_bottom_left.png";
    stb::stbi_write_png(TCHAR_TO_ANSI(*ImageBL), quadrantWidth, quadrantHeight, channels, bottomLeft.data(), quadrantWidth * channels);
    FString ImageBR = inputPathFstr + "_bottom_right.png";
    stb::stbi_write_png(TCHAR_TO_ANSI(*ImageBR), quadrantWidth, quadrantHeight, channels, bottomRight.data(), quadrantWidth * channels);

    retn.Add(ImageTL);
    retn.Add(ImageTR);
    retn.Add(ImageBL);
    retn.Add(ImageBR);
    
    stb::stbi_image_free(img);

    return retn;
}

FIntPoint get_image_size(const FString& InputPath)
{
    int Width, Height, Channels;
    std::string InputPathStd = TCHAR_TO_UTF8(*InputPath);
    unsigned char* Img = stb::stbi_load(InputPathStd.c_str(), &Width, &Height, &Channels, 0);
    if (Img == nullptr) {
        //UE_LOG(LogTemp, Error, TEXT("Error in loading the image"));
        return FIntPoint(0, 0);
    }

    return FIntPoint(Width, Height);
}

int32 crop_to_square(const FString& InputPath) {
    int Width, Height, Channels;
    std::string InputPathStd = TCHAR_TO_UTF8(*InputPath);
    unsigned char* Img = stb::stbi_load(InputPathStd.c_str(), &Width, &Height, &Channels, 0);
    if (Img == nullptr) {
        //UE_LOG(LogTemp, Error, TEXT("Error in loading the image"));
        return -1;
    }

    int32 SquareSize = FMath::Min(Width, Height);
    int X = (Width - SquareSize) / 2;
    int Y = (Height - SquareSize) / 2;

    unsigned char* CroppedImg = new unsigned char[SquareSize * SquareSize * Channels];

    for (int i = 0; i < SquareSize; ++i) {
        for (int j = 0; j < SquareSize; ++j) {
            for (int k = 0; k < Channels; ++k) {
                int NewIndex = (i * SquareSize + j) * Channels + k;
                int OldIndex = ((Y + i) * Width + (X + j)) * Channels + k;
                CroppedImg[NewIndex] = Img[OldIndex];
            }
        }
    }


    FString OutputPath = FPaths::GetPath(InputPath) + "/" + FPaths::GetBaseFilename(InputPath, true) + "_cropped." + FPaths::GetExtension(InputPath);
    std::string OutputPathStd = TCHAR_TO_UTF8(*OutputPath);
    
    stb::stbi_write_png(OutputPathStd.c_str(), SquareSize, SquareSize, Channels, CroppedImg, SquareSize * Channels);

    stb::stbi_image_free(Img);
    delete[] CroppedImg;

    return SquareSize;
}

