#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffectAbility_ApplyBattleEffectOnHitToOwner.BattleEffectAbility_ApplyBattleEffectOnHitToOwner_C
// (None)

class UClass* UBattleEffectAbility_ApplyBattleEffectOnHitToOwner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffectAbility_ApplyBattleEffectOnHitToOwner_C");

	return Clss;
}


// BattleEffectAbility_ApplyBattleEffectOnHitToOwner_C BattleEffectAbility_ApplyBattleEffectOnHitToOwner.Default__BattleEffectAbility_ApplyBattleEffectOnHitToOwner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffectAbility_ApplyBattleEffectOnHitToOwner_C* UBattleEffectAbility_ApplyBattleEffectOnHitToOwner_C::GetDefaultObj()
{
	static class UBattleEffectAbility_ApplyBattleEffectOnHitToOwner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffectAbility_ApplyBattleEffectOnHitToOwner_C*>(UBattleEffectAbility_ApplyBattleEffectOnHitToOwner_C::StaticClass()->DefaultObject);

	return Default;
}

}


