#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_Miracle_DeepProtection_AttackIncrease.BattleEffect_Miracle_DeepProtection_AttackIncrease_C
// (None)

class UClass* UBattleEffect_Miracle_DeepProtection_AttackIncrease_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_Miracle_DeepProtection_AttackIncrease_C");

	return Clss;
}


// BattleEffect_Miracle_DeepProtection_AttackIncrease_C BattleEffect_Miracle_DeepProtection_AttackIncrease.Default__BattleEffect_Miracle_DeepProtection_AttackIncrease_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_Miracle_DeepProtection_AttackIncrease_C* UBattleEffect_Miracle_DeepProtection_AttackIncrease_C::GetDefaultObj()
{
	static class UBattleEffect_Miracle_DeepProtection_AttackIncrease_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_Miracle_DeepProtection_AttackIncrease_C*>(UBattleEffect_Miracle_DeepProtection_AttackIncrease_C::StaticClass()->DefaultObject);

	return Default;
}

}


