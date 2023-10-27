#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_LowerWeightGrantsHigherDamage.BattleEffect_LowerWeightGrantsHigherDamage_C
// (None)

class UClass* UBattleEffect_LowerWeightGrantsHigherDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_LowerWeightGrantsHigherDamage_C");

	return Clss;
}


// BattleEffect_LowerWeightGrantsHigherDamage_C BattleEffect_LowerWeightGrantsHigherDamage.Default__BattleEffect_LowerWeightGrantsHigherDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_LowerWeightGrantsHigherDamage_C* UBattleEffect_LowerWeightGrantsHigherDamage_C::GetDefaultObj()
{
	static class UBattleEffect_LowerWeightGrantsHigherDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_LowerWeightGrantsHigherDamage_C*>(UBattleEffect_LowerWeightGrantsHigherDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


