#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_ApplyBattleEffectOnHitToOwner.BattleEffect_ApplyBattleEffectOnHitToOwner_C
// (None)

class UClass* UBattleEffect_ApplyBattleEffectOnHitToOwner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_ApplyBattleEffectOnHitToOwner_C");

	return Clss;
}


// BattleEffect_ApplyBattleEffectOnHitToOwner_C BattleEffect_ApplyBattleEffectOnHitToOwner.Default__BattleEffect_ApplyBattleEffectOnHitToOwner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_ApplyBattleEffectOnHitToOwner_C* UBattleEffect_ApplyBattleEffectOnHitToOwner_C::GetDefaultObj()
{
	static class UBattleEffect_ApplyBattleEffectOnHitToOwner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_ApplyBattleEffectOnHitToOwner_C*>(UBattleEffect_ApplyBattleEffectOnHitToOwner_C::StaticClass()->DefaultObject);

	return Default;
}

}


