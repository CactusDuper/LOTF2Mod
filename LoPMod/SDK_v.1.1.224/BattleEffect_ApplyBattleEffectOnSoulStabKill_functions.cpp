#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_ApplyBattleEffectOnSoulStabKill.BattleEffect_ApplyBattleEffectOnSoulStabKill_C
// (None)

class UClass* UBattleEffect_ApplyBattleEffectOnSoulStabKill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_ApplyBattleEffectOnSoulStabKill_C");

	return Clss;
}


// BattleEffect_ApplyBattleEffectOnSoulStabKill_C BattleEffect_ApplyBattleEffectOnSoulStabKill.Default__BattleEffect_ApplyBattleEffectOnSoulStabKill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_ApplyBattleEffectOnSoulStabKill_C* UBattleEffect_ApplyBattleEffectOnSoulStabKill_C::GetDefaultObj()
{
	static class UBattleEffect_ApplyBattleEffectOnSoulStabKill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_ApplyBattleEffectOnSoulStabKill_C*>(UBattleEffect_ApplyBattleEffectOnSoulStabKill_C::StaticClass()->DefaultObject);

	return Default;
}

}


