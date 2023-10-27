#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_MAG_SPL_Radiant_AoECureStatus.BattleEffect_MAG_SPL_Radiant_AoECureStatus_C
// (None)

class UClass* UBattleEffect_MAG_SPL_Radiant_AoECureStatus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_MAG_SPL_Radiant_AoECureStatus_C");

	return Clss;
}


// BattleEffect_MAG_SPL_Radiant_AoECureStatus_C BattleEffect_MAG_SPL_Radiant_AoECureStatus.Default__BattleEffect_MAG_SPL_Radiant_AoECureStatus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_MAG_SPL_Radiant_AoECureStatus_C* UBattleEffect_MAG_SPL_Radiant_AoECureStatus_C::GetDefaultObj()
{
	static class UBattleEffect_MAG_SPL_Radiant_AoECureStatus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_MAG_SPL_Radiant_AoECureStatus_C*>(UBattleEffect_MAG_SPL_Radiant_AoECureStatus_C::StaticClass()->DefaultObject);

	return Default;
}

}


