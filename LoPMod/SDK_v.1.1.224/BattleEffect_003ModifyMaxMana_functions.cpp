#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_003ModifyMaxMana.BattleEffect_003ModifyMaxMana_C
// (None)

class UClass* UBattleEffect_003ModifyMaxMana_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_003ModifyMaxMana_C");

	return Clss;
}


// BattleEffect_003ModifyMaxMana_C BattleEffect_003ModifyMaxMana.Default__BattleEffect_003ModifyMaxMana_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_003ModifyMaxMana_C* UBattleEffect_003ModifyMaxMana_C::GetDefaultObj()
{
	static class UBattleEffect_003ModifyMaxMana_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_003ModifyMaxMana_C*>(UBattleEffect_003ModifyMaxMana_C::StaticClass()->DefaultObject);

	return Default;
}

}


