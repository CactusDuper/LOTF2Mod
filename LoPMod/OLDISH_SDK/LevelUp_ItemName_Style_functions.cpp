#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LevelUp_ItemName_Style.LevelUp_ItemName_Style_C
// (None)

class UClass* ULevelUp_ItemName_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelUp_ItemName_Style_C");

	return Clss;
}


// LevelUp_ItemName_Style_C LevelUp_ItemName_Style.Default__LevelUp_ItemName_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULevelUp_ItemName_Style_C* ULevelUp_ItemName_Style_C::GetDefaultObj()
{
	static class ULevelUp_ItemName_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelUp_ItemName_Style_C*>(ULevelUp_ItemName_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


