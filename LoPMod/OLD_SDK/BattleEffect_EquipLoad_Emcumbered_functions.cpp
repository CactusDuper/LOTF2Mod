#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_EquipLoad_Emcumbered.BattleEffect_EquipLoad_Emcumbered_C
// (None)

class UClass* UBattleEffect_EquipLoad_Emcumbered_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_EquipLoad_Emcumbered_C");

	return Clss;
}


// BattleEffect_EquipLoad_Emcumbered_C BattleEffect_EquipLoad_Emcumbered.Default__BattleEffect_EquipLoad_Emcumbered_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_EquipLoad_Emcumbered_C* UBattleEffect_EquipLoad_Emcumbered_C::GetDefaultObj()
{
	static class UBattleEffect_EquipLoad_Emcumbered_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_EquipLoad_Emcumbered_C*>(UBattleEffect_EquipLoad_Emcumbered_C::StaticClass()->DefaultObject);

	return Default;
}

}


