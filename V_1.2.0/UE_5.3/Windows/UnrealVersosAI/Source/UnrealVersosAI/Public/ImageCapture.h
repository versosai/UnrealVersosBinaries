#pragma once
#include <string>
#include "CoreMinimal.h"
#include "ImageCapture.generated.h"

USTRUCT(BlueprintType)
struct FGridDimensions
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category="Return Values")
	int32 MaxX;

	UPROPERTY(BlueprintReadWrite, Category="Return Values")
	int32 MaxY;

	FGridDimensions(int32 MaxX = 0, int32 MaxY = 0)
		: MaxX(MaxX),
		  MaxY(MaxY)
	{
	}
};

FGridDimensions make_waffle_image(::std::string path_to_image, ::std::string path_to_output_image, int cell_size);
TArray<FString> split_image_into_quads(const FString& inputPathFstr);
FIntPoint get_image_size(const FString& InputPath);
int32 crop_to_square(const FString& InputPath);