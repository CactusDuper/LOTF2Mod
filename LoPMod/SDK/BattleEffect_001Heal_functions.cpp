#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_001Heal.BattleEffect_001Heal_C
// (None)

class UClass* UBattleEffect_001Heal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_001Heal_C");

	return Clss;
}


// BattleEffect_001Heal_C BattleEffect_001Heal.Default__BattleEffect_001Heal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_001Heal_C* UBattleEffect_001Heal_C::GetDefaultObj()
{
	static class UBattleEffect_001Heal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_001Heal_C*>(UBattleEffect_001Heal_C::StaticClass()->DefaultObject);

	return Default;
}

}


