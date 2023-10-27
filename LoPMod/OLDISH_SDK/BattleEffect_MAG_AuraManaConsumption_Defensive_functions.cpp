#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_MAG_AuraManaConsumption_Defensive.BattleEffect_MAG_AuraManaConsumption_Defensive_C
// (None)

class UClass* UBattleEffect_MAG_AuraManaConsumption_Defensive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_MAG_AuraManaConsumption_Defensive_C");

	return Clss;
}


// BattleEffect_MAG_AuraManaConsumption_Defensive_C BattleEffect_MAG_AuraManaConsumption_Defensive.Default__BattleEffect_MAG_AuraManaConsumption_Defensive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_MAG_AuraManaConsumption_Defensive_C* UBattleEffect_MAG_AuraManaConsumption_Defensive_C::GetDefaultObj()
{
	static class UBattleEffect_MAG_AuraManaConsumption_Defensive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_MAG_AuraManaConsumption_Defensive_C*>(UBattleEffect_MAG_AuraManaConsumption_Defensive_C::StaticClass()->DefaultObject);

	return Default;
}

}


