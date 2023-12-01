// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class HCI_FINALPROJECT_API UFileBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintPure, Category = "File Stuff", meta = (Keywords = "Load Text File"))
		static bool LoadTxt(FString FileName, FString& SaveText);

	UFUNCTION(BlueprintCallable, Category = "File Stuff", meta = (Keywords = "Save Text File"))
		static bool SaveTxt(FString SaveText, FString FileName);
	
};
