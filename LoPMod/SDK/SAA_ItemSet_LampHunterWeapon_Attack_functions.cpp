#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_ItemSet_LampHunterWeapon_Attack.SAA_ItemSet_LampHunterWeapon_Attack_C
// (None)

class UClass* USAA_ItemSet_LampHunterWeapon_Attack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_ItemSet_LampHunterWeapon_Attack_C");

	return Clss;
}


// SAA_ItemSet_LampHunterWeapon_Attack_C SAA_ItemSet_LampHunterWeapon_Attack.Default__SAA_ItemSet_LampHunterWeapon_Attack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_ItemSet_LampHunterWeapon_Attack_C* USAA_ItemSet_LampHunterWeapon_Attack_C::GetDefaultObj()
{
	static class USAA_ItemSet_LampHunterWeapon_Attack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_ItemSet_LampHunterWeapon_Attack_C*>(USAA_ItemSet_LampHunterWeapon_Attack_C::StaticClass()->DefaultObject);

	return Default;
}

}


