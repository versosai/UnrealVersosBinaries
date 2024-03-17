#pragma once
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
};

FGridDimensions make_waffle_image(::std::string path_to_image, ::std::string path_to_output_image, int cell_size);
