#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ItemSet_LampHunterWeapon_Attack_Cost.GE_ItemSet_LampHunterWeapon_Attack_Cost_C
// (None)

class UClass* UGE_ItemSet_LampHunterWeapon_Attack_Cost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ItemSet_LampHunterWeapon_Attack_Cost_C");

	return Clss;
}


// GE_ItemSet_LampHunterWeapon_Attack_Cost_C GE_ItemSet_LampHunterWeapon_Attack_Cost.Default__GE_ItemSet_LampHunterWeapon_Attack_Cost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ItemSet_LampHunterWeapon_Attack_Cost_C* UGE_ItemSet_LampHunterWeapon_Attack_Cost_C::GetDefaultObj()
{
	static class UGE_ItemSet_LampHunterWeapon_Attack_Cost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ItemSet_LampHunterWeapon_Attack_Cost_C*>(UGE_ItemSet_LampHunterWeapon_Attack_Cost_C::StaticClass()->DefaultObject);

	return Default;
}

}


