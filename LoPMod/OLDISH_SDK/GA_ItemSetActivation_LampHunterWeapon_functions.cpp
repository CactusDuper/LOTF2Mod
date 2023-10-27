#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ItemSetActivation_LampHunterWeapon.GA_ItemSetActivation_LampHunterWeapon_C
// (None)

class UClass* UGA_ItemSetActivation_LampHunterWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ItemSetActivation_LampHunterWeapon_C");

	return Clss;
}


// GA_ItemSetActivation_LampHunterWeapon_C GA_ItemSetActivation_LampHunterWeapon.Default__GA_ItemSetActivation_LampHunterWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ItemSetActivation_LampHunterWeapon_C* UGA_ItemSetActivation_LampHunterWeapon_C::GetDefaultObj()
{
	static class UGA_ItemSetActivation_LampHunterWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ItemSetActivation_LampHunterWeapon_C*>(UGA_ItemSetActivation_LampHunterWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


