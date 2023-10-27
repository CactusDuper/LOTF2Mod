#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ITM_GES_Gesture_013.ITM_GES_Gesture_013_C
// (None)

class UClass* UITM_GES_Gesture_013_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ITM_GES_Gesture_013_C");

	return Clss;
}


// ITM_GES_Gesture_013_C ITM_GES_Gesture_013.Default__ITM_GES_Gesture_013_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UITM_GES_Gesture_013_C* UITM_GES_Gesture_013_C::GetDefaultObj()
{
	static class UITM_GES_Gesture_013_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UITM_GES_Gesture_013_C*>(UITM_GES_Gesture_013_C::StaticClass()->DefaultObject);

	return Default;
}

}


