#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_Weapon_GrastCrestShield.BattleEffect_Weapon_GrastCrestShield_C
// (None)

class UClass* UBattleEffect_Weapon_GrastCrestShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_Weapon_GrastCrestShield_C");

	return Clss;
}


// BattleEffect_Weapon_GrastCrestShield_C BattleEffect_Weapon_GrastCrestShield.Default__BattleEffect_Weapon_GrastCrestShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_Weapon_GrastCrestShield_C* UBattleEffect_Weapon_GrastCrestShield_C::GetDefaultObj()
{
	static class UBattleEffect_Weapon_GrastCrestShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_Weapon_GrastCrestShield_C*>(UBattleEffect_Weapon_GrastCrestShield_C::StaticClass()->DefaultObject);

	return Default;
}

}


