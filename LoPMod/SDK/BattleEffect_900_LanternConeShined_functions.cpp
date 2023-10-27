#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_900_LanternConeShined.BattleEffect_900_LanternConeShined_C
// (None)

class UClass* UBattleEffect_900_LanternConeShined_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_900_LanternConeShined_C");

	return Clss;
}


// BattleEffect_900_LanternConeShined_C BattleEffect_900_LanternConeShined.Default__BattleEffect_900_LanternConeShined_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_900_LanternConeShined_C* UBattleEffect_900_LanternConeShined_C::GetDefaultObj()
{
	static class UBattleEffect_900_LanternConeShined_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_900_LanternConeShined_C*>(UBattleEffect_900_LanternConeShined_C::StaticClass()->DefaultObject);

	return Default;
}

}


