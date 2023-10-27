#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_98_RegainMana.BattleEffect_98_RegainMana_C
// (None)

class UClass* UBattleEffect_98_RegainMana_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_98_RegainMana_C");

	return Clss;
}


// BattleEffect_98_RegainMana_C BattleEffect_98_RegainMana.Default__BattleEffect_98_RegainMana_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_98_RegainMana_C* UBattleEffect_98_RegainMana_C::GetDefaultObj()
{
	static class UBattleEffect_98_RegainMana_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_98_RegainMana_C*>(UBattleEffect_98_RegainMana_C::StaticClass()->DefaultObject);

	return Default;
}

}


