#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_Miracle_Heal.BattleEffect_Miracle_Heal_C
// (None)

class UClass* UBattleEffect_Miracle_Heal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_Miracle_Heal_C");

	return Clss;
}


// BattleEffect_Miracle_Heal_C BattleEffect_Miracle_Heal.Default__BattleEffect_Miracle_Heal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_Miracle_Heal_C* UBattleEffect_Miracle_Heal_C::GetDefaultObj()
{
	static class UBattleEffect_Miracle_Heal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_Miracle_Heal_C*>(UBattleEffect_Miracle_Heal_C::StaticClass()->DefaultObject);

	return Default;
}

}


