#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SetLanternVisualParameters.GE_SetLanternVisualParameters_C
// (None)

class UClass* UGE_SetLanternVisualParameters_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SetLanternVisualParameters_C");

	return Clss;
}


// GE_SetLanternVisualParameters_C GE_SetLanternVisualParameters.Default__GE_SetLanternVisualParameters_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SetLanternVisualParameters_C* UGE_SetLanternVisualParameters_C::GetDefaultObj()
{
	static class UGE_SetLanternVisualParameters_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SetLanternVisualParameters_C*>(UGE_SetLanternVisualParameters_C::StaticClass()->DefaultObject);

	return Default;
}

}


