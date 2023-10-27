#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SetCameraTransition_Lantern.GE_SetCameraTransition_Lantern_C
// (None)

class UClass* UGE_SetCameraTransition_Lantern_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SetCameraTransition_Lantern_C");

	return Clss;
}


// GE_SetCameraTransition_Lantern_C GE_SetCameraTransition_Lantern.Default__GE_SetCameraTransition_Lantern_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SetCameraTransition_Lantern_C* UGE_SetCameraTransition_Lantern_C::GetDefaultObj()
{
	static class UGE_SetCameraTransition_Lantern_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SetCameraTransition_Lantern_C*>(UGE_SetCameraTransition_Lantern_C::StaticClass()->DefaultObject);

	return Default;
}

}


