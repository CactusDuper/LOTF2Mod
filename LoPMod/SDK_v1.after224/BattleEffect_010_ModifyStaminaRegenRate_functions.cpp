#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_010_ModifyStaminaRegenRate.BattleEffect_010_ModifyStaminaRegenRate_C
// (None)

class UClass* UBattleEffect_010_ModifyStaminaRegenRate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_010_ModifyStaminaRegenRate_C");

	return Clss;
}


// BattleEffect_010_ModifyStaminaRegenRate_C BattleEffect_010_ModifyStaminaRegenRate.Default__BattleEffect_010_ModifyStaminaRegenRate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_010_ModifyStaminaRegenRate_C* UBattleEffect_010_ModifyStaminaRegenRate_C::GetDefaultObj()
{
	static class UBattleEffect_010_ModifyStaminaRegenRate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_010_ModifyStaminaRegenRate_C*>(UBattleEffect_010_ModifyStaminaRegenRate_C::StaticClass()->DefaultObject);

	return Default;
}

}


