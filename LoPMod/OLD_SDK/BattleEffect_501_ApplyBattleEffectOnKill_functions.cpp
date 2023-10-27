#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_501_ApplyBattleEffectOnKill.BattleEffect_501_ApplyBattleEffectOnKill_C
// (None)

class UClass* UBattleEffect_501_ApplyBattleEffectOnKill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_501_ApplyBattleEffectOnKill_C");

	return Clss;
}


// BattleEffect_501_ApplyBattleEffectOnKill_C BattleEffect_501_ApplyBattleEffectOnKill.Default__BattleEffect_501_ApplyBattleEffectOnKill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_501_ApplyBattleEffectOnKill_C* UBattleEffect_501_ApplyBattleEffectOnKill_C::GetDefaultObj()
{
	static class UBattleEffect_501_ApplyBattleEffectOnKill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_501_ApplyBattleEffectOnKill_C*>(UBattleEffect_501_ApplyBattleEffectOnKill_C::StaticClass()->DefaultObject);

	return Default;
}

}


