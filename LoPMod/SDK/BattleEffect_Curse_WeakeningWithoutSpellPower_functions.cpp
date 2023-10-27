#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_Curse_WeakeningWithoutSpellPower.BattleEffect_Curse_WeakeningWithoutSpellPower_C
// (None)

class UClass* UBattleEffect_Curse_WeakeningWithoutSpellPower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_Curse_WeakeningWithoutSpellPower_C");

	return Clss;
}


// BattleEffect_Curse_WeakeningWithoutSpellPower_C BattleEffect_Curse_WeakeningWithoutSpellPower.Default__BattleEffect_Curse_WeakeningWithoutSpellPower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_Curse_WeakeningWithoutSpellPower_C* UBattleEffect_Curse_WeakeningWithoutSpellPower_C::GetDefaultObj()
{
	static class UBattleEffect_Curse_WeakeningWithoutSpellPower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_Curse_WeakeningWithoutSpellPower_C*>(UBattleEffect_Curse_WeakeningWithoutSpellPower_C::StaticClass()->DefaultObject);

	return Default;
}

}


