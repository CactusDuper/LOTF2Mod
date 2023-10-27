#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ItemSet_LampHunterWeapon_Buff.GE_ItemSet_LampHunterWeapon_Buff_C
// (None)

class UClass* UGE_ItemSet_LampHunterWeapon_Buff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ItemSet_LampHunterWeapon_Buff_C");

	return Clss;
}


// GE_ItemSet_LampHunterWeapon_Buff_C GE_ItemSet_LampHunterWeapon_Buff.Default__GE_ItemSet_LampHunterWeapon_Buff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ItemSet_LampHunterWeapon_Buff_C* UGE_ItemSet_LampHunterWeapon_Buff_C::GetDefaultObj()
{
	static class UGE_ItemSet_LampHunterWeapon_Buff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ItemSet_LampHunterWeapon_Buff_C*>(UGE_ItemSet_LampHunterWeapon_Buff_C::StaticClass()->DefaultObject);

	return Default;
}

}


