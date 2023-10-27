#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_SpawnPlasmaMineOnDarkDamageKill.BattleEffect_SpawnPlasmaMineOnDarkDamageKill_C
// (None)

class UClass* UBattleEffect_SpawnPlasmaMineOnDarkDamageKill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_SpawnPlasmaMineOnDarkDamageKill_C");

	return Clss;
}


// BattleEffect_SpawnPlasmaMineOnDarkDamageKill_C BattleEffect_SpawnPlasmaMineOnDarkDamageKill.Default__BattleEffect_SpawnPlasmaMineOnDarkDamageKill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_SpawnPlasmaMineOnDarkDamageKill_C* UBattleEffect_SpawnPlasmaMineOnDarkDamageKill_C::GetDefaultObj()
{
	static class UBattleEffect_SpawnPlasmaMineOnDarkDamageKill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_SpawnPlasmaMineOnDarkDamageKill_C*>(UBattleEffect_SpawnPlasmaMineOnDarkDamageKill_C::StaticClass()->DefaultObject);

	return Default;
}

}


