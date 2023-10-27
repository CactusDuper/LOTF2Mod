#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_ApplyBattleEffectOnHitToTarget.BattleEffect_ApplyBattleEffectOnHitToTarget_C
// (None)

class UClass* UBattleEffect_ApplyBattleEffectOnHitToTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_ApplyBattleEffectOnHitToTarget_C");

	return Clss;
}


// BattleEffect_ApplyBattleEffectOnHitToTarget_C BattleEffect_ApplyBattleEffectOnHitToTarget.Default__BattleEffect_ApplyBattleEffectOnHitToTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_ApplyBattleEffectOnHitToTarget_C* UBattleEffect_ApplyBattleEffectOnHitToTarget_C::GetDefaultObj()
{
	static class UBattleEffect_ApplyBattleEffectOnHitToTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_ApplyBattleEffectOnHitToTarget_C*>(UBattleEffect_ApplyBattleEffectOnHitToTarget_C::StaticClass()->DefaultObject);

	return Default;
}

}


