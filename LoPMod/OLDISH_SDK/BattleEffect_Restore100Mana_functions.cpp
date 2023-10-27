#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_Restore100Mana.BattleEffect_Restore100Mana_C
// (None)

class UClass* UBattleEffect_Restore100Mana_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_Restore100Mana_C");

	return Clss;
}


// BattleEffect_Restore100Mana_C BattleEffect_Restore100Mana.Default__BattleEffect_Restore100Mana_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_Restore100Mana_C* UBattleEffect_Restore100Mana_C::GetDefaultObj()
{
	static class UBattleEffect_Restore100Mana_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_Restore100Mana_C*>(UBattleEffect_Restore100Mana_C::StaticClass()->DefaultObject);

	return Default;
}

}


