#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ItemSet_LampHunterWeapon_Attack_Passive.GA_ItemSet_LampHunterWeapon_Attack_Passive_C
// (None)

class UClass* UGA_ItemSet_LampHunterWeapon_Attack_Passive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ItemSet_LampHunterWeapon_Attack_Passive_C");

	return Clss;
}


// GA_ItemSet_LampHunterWeapon_Attack_Passive_C GA_ItemSet_LampHunterWeapon_Attack_Passive.Default__GA_ItemSet_LampHunterWeapon_Attack_Passive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ItemSet_LampHunterWeapon_Attack_Passive_C* UGA_ItemSet_LampHunterWeapon_Attack_Passive_C::GetDefaultObj()
{
	static class UGA_ItemSet_LampHunterWeapon_Attack_Passive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ItemSet_LampHunterWeapon_Attack_Passive_C*>(UGA_ItemSet_LampHunterWeapon_Attack_Passive_C::StaticClass()->DefaultObject);

	return Default;
}

}


