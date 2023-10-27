#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_CON_IncreaseMagicDefense.BattleEffect_CON_IncreaseMagicDefense_C
// (None)

class UClass* UBattleEffect_CON_IncreaseMagicDefense_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_CON_IncreaseMagicDefense_C");

	return Clss;
}


// BattleEffect_CON_IncreaseMagicDefense_C BattleEffect_CON_IncreaseMagicDefense.Default__BattleEffect_CON_IncreaseMagicDefense_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_CON_IncreaseMagicDefense_C* UBattleEffect_CON_IncreaseMagicDefense_C::GetDefaultObj()
{
	static class UBattleEffect_CON_IncreaseMagicDefense_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_CON_IncreaseMagicDefense_C*>(UBattleEffect_CON_IncreaseMagicDefense_C::StaticClass()->DefaultObject);

	return Default;
}

}


