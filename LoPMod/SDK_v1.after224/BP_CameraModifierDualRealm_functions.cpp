#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CameraModifierDualRealm.BP_CameraModifierDualRealm_C
// (None)

class UClass* UBP_CameraModifierDualRealm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CameraModifierDualRealm_C");

	return Clss;
}


// BP_CameraModifierDualRealm_C BP_CameraModifierDualRealm.Default__BP_CameraModifierDualRealm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CameraModifierDualRealm_C* UBP_CameraModifierDualRealm_C::GetDefaultObj()
{
	static class UBP_CameraModifierDualRealm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CameraModifierDualRealm_C*>(UBP_CameraModifierDualRealm_C::StaticClass()->DefaultObject);

	return Default;
}

}


