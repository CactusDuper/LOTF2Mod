#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PhotosDataSaveGame.BP_PhotosDataSaveGame_C
// (None)

class UClass* UBP_PhotosDataSaveGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PhotosDataSaveGame_C");

	return Clss;
}


// BP_PhotosDataSaveGame_C BP_PhotosDataSaveGame.Default__BP_PhotosDataSaveGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PhotosDataSaveGame_C* UBP_PhotosDataSaveGame_C::GetDefaultObj()
{
	static class UBP_PhotosDataSaveGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PhotosDataSaveGame_C*>(UBP_PhotosDataSaveGame_C::StaticClass()->DefaultObject);

	return Default;
}

}


