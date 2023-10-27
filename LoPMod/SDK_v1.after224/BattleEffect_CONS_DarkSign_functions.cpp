#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_CONS_DarkSign.BattleEffect_CONS_DarkSign_C
// (None)

class UClass* UBattleEffect_CONS_DarkSign_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_CONS_DarkSign_C");

	return Clss;
}


// BattleEffect_CONS_DarkSign_C BattleEffect_CONS_DarkSign.Default__BattleEffect_CONS_DarkSign_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_CONS_DarkSign_C* UBattleEffect_CONS_DarkSign_C::GetDefaultObj()
{
	static class UBattleEffect_CONS_DarkSign_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_CONS_DarkSign_C*>(UBattleEffect_CONS_DarkSign_C::StaticClass()->DefaultObject);

	return Default;
}

}


