#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CameraModifierCharacterDead.BP_CameraModifierCharacterDead_C
// (None)

class UClass* UBP_CameraModifierCharacterDead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CameraModifierCharacterDead_C");

	return Clss;
}


// BP_CameraModifierCharacterDead_C BP_CameraModifierCharacterDead.Default__BP_CameraModifierCharacterDead_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CameraModifierCharacterDead_C* UBP_CameraModifierCharacterDead_C::GetDefaultObj()
{
	static class UBP_CameraModifierCharacterDead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CameraModifierCharacterDead_C*>(UBP_CameraModifierCharacterDead_C::StaticClass()->DefaultObject);

	return Default;
}

}


