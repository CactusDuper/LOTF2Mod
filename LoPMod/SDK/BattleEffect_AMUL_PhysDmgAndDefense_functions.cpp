#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_AMUL_PhysDmgAndDefense.BattleEffect_AMUL_PhysDmgAndDefense_C
// (None)

class UClass* UBattleEffect_AMUL_PhysDmgAndDefense_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_AMUL_PhysDmgAndDefense_C");

	return Clss;
}


// BattleEffect_AMUL_PhysDmgAndDefense_C BattleEffect_AMUL_PhysDmgAndDefense.Default__BattleEffect_AMUL_PhysDmgAndDefense_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_AMUL_PhysDmgAndDefense_C* UBattleEffect_AMUL_PhysDmgAndDefense_C::GetDefaultObj()
{
	static class UBattleEffect_AMUL_PhysDmgAndDefense_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_AMUL_PhysDmgAndDefense_C*>(UBattleEffect_AMUL_PhysDmgAndDefense_C::StaticClass()->DefaultObject);

	return Default;
}

}

