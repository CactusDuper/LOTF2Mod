#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_AMO_TH_Flask_HolyWater_Allies.BattleEffect_AMO_TH_Flask_HolyWater_Allies_C
// (None)

class UClass* UBattleEffect_AMO_TH_Flask_HolyWater_Allies_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_AMO_TH_Flask_HolyWater_Allies_C");

	return Clss;
}


// BattleEffect_AMO_TH_Flask_HolyWater_Allies_C BattleEffect_AMO_TH_Flask_HolyWater_Allies.Default__BattleEffect_AMO_TH_Flask_HolyWater_Allies_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_AMO_TH_Flask_HolyWater_Allies_C* UBattleEffect_AMO_TH_Flask_HolyWater_Allies_C::GetDefaultObj()
{
	static class UBattleEffect_AMO_TH_Flask_HolyWater_Allies_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_AMO_TH_Flask_HolyWater_Allies_C*>(UBattleEffect_AMO_TH_Flask_HolyWater_Allies_C::StaticClass()->DefaultObject);

	return Default;
}

}


