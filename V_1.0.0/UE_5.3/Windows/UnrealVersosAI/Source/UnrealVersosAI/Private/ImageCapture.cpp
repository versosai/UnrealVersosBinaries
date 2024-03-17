#include "ImageCapture.h"
#include "WorkSans-Light.h"

namespace stb
{
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"
#define STB_TRUETYPE_IMPLEMENTATION
#include "stb_truetype.h"
}

#include <iostream>
#include <vector>
#include <string>

    
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

