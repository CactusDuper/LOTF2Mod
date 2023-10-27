#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LevelUp_StatValue_Increase_Style.LevelUp_StatValue_Increase_Style_C
// (None)

class UClass* ULevelUp_StatValue_Increase_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelUp_StatValue_Increase_Style_C");

	return Clss;
}


// LevelUp_StatValue_Increase_Style_C LevelUp_StatValue_Increase_Style.Default__LevelUp_StatValue_Increase_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULevelUp_StatValue_Increase_Style_C* ULevelUp_StatValue_Increase_Style_C::GetDefaultObj()
{
	static class ULevelUp_StatValue_Increase_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelUp_StatValue_Increase_Style_C*>(ULevelUp_StatValue_Increase_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


