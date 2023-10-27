#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_004ModifyMaxStamina.BattleEffect_004ModifyMaxStamina_C
// (None)

class UClass* UBattleEffect_004ModifyMaxStamina_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_004ModifyMaxStamina_C");

	return Clss;
}


// BattleEffect_004ModifyMaxStamina_C BattleEffect_004ModifyMaxStamina.Default__BattleEffect_004ModifyMaxStamina_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_004ModifyMaxStamina_C* UBattleEffect_004ModifyMaxStamina_C::GetDefaultObj()
{
	static class UBattleEffect_004ModifyMaxStamina_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_004ModifyMaxStamina_C*>(UBattleEffect_004ModifyMaxStamina_C::StaticClass()->DefaultObject);

	return Default;
}

}


