#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CameraModifierFollowCharacter.BP_CameraModifierFollowCharacter_C
// (None)

class UClass* UBP_CameraModifierFollowCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CameraModifierFollowCharacter_C");

	return Clss;
}


// BP_CameraModifierFollowCharacter_C BP_CameraModifierFollowCharacter.Default__BP_CameraModifierFollowCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CameraModifierFollowCharacter_C* UBP_CameraModifierFollowCharacter_C::GetDefaultObj()
{
	static class UBP_CameraModifierFollowCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CameraModifierFollowCharacter_C*>(UBP_CameraModifierFollowCharacter_C::StaticClass()->DefaultObject);

	return Default;
}

}


