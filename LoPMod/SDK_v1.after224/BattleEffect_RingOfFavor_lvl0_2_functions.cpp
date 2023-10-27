#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_RingOfFavor_lvl0_2.BattleEffect_RingOfFavor_lvl0_2_C
// (None)

class UClass* UBattleEffect_RingOfFavor_lvl0_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_RingOfFavor_lvl0_2_C");

	return Clss;
}


// BattleEffect_RingOfFavor_lvl0_2_C BattleEffect_RingOfFavor_lvl0_2.Default__BattleEffect_RingOfFavor_lvl0_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_RingOfFavor_lvl0_2_C* UBattleEffect_RingOfFavor_lvl0_2_C::GetDefaultObj()
{
	static class UBattleEffect_RingOfFavor_lvl0_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_RingOfFavor_lvl0_2_C*>(UBattleEffect_RingOfFavor_lvl0_2_C::StaticClass()->DefaultObject);

	return Default;
}

}


