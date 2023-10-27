#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_StaminaRegenPotion.BattleEffect_StaminaRegenPotion_C
// (None)

class UClass* UBattleEffect_StaminaRegenPotion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_StaminaRegenPotion_C");

	return Clss;
}


// BattleEffect_StaminaRegenPotion_C BattleEffect_StaminaRegenPotion.Default__BattleEffect_StaminaRegenPotion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_StaminaRegenPotion_C* UBattleEffect_StaminaRegenPotion_C::GetDefaultObj()
{
	static class UBattleEffect_StaminaRegenPotion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_StaminaRegenPotion_C*>(UBattleEffect_StaminaRegenPotion_C::StaticClass()->DefaultObject);

	return Default;
}

}


