#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_AMUL_PhysDefense.BattleEffect_AMUL_PhysDefense_C
// (None)

class UClass* UBattleEffect_AMUL_PhysDefense_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_AMUL_PhysDefense_C");

	return Clss;
}


// BattleEffect_AMUL_PhysDefense_C BattleEffect_AMUL_PhysDefense.Default__BattleEffect_AMUL_PhysDefense_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_AMUL_PhysDefense_C* UBattleEffect_AMUL_PhysDefense_C::GetDefaultObj()
{
	static class UBattleEffect_AMUL_PhysDefense_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_AMUL_PhysDefense_C*>(UBattleEffect_AMUL_PhysDefense_C::StaticClass()->DefaultObject);

	return Default;
}

}


