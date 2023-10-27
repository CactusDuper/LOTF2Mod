#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_BOSS_Pieta_BattleStart.BattleEffect_BOSS_Pieta_BattleStart_C
// (None)

class UClass* UBattleEffect_BOSS_Pieta_BattleStart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_BOSS_Pieta_BattleStart_C");

	return Clss;
}


// BattleEffect_BOSS_Pieta_BattleStart_C BattleEffect_BOSS_Pieta_BattleStart.Default__BattleEffect_BOSS_Pieta_BattleStart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_BOSS_Pieta_BattleStart_C* UBattleEffect_BOSS_Pieta_BattleStart_C::GetDefaultObj()
{
	static class UBattleEffect_BOSS_Pieta_BattleStart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_BOSS_Pieta_BattleStart_C*>(UBattleEffect_BOSS_Pieta_BattleStart_C::StaticClass()->DefaultObject);

	return Default;
}

}


