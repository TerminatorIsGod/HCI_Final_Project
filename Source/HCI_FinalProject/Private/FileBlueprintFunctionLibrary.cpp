// Fill out your copyright notice in the Description page of Project Settings.


#include "FileBlueprintFunctionLibrary.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"


bool UFileBlueprintFunctionLibrary::LoadTxt(FString FileName, FString& SaveText)
{
	return FFileHelper::LoadFileToString(SaveText, *(FPaths::ProjectDir() + FileName));
}

bool UFileBlueprintFunctionLibrary::SaveTxt(FString SaveText, FString FileName)
{
	return FFileHelper::SaveStringToFile(SaveText, *(FPaths::ProjectDir() + FileName));
}

