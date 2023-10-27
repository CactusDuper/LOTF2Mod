#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_RevengeCooldownReduction.BattleEffect_RevengeCooldownReduction_C
// (None)

class UClass* UBattleEffect_RevengeCooldownReduction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_RevengeCooldownReduction_C");

	return Clss;
}


// BattleEffect_RevengeCooldownReduction_C BattleEffect_RevengeCooldownReduction.Default__BattleEffect_RevengeCooldownReduction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_RevengeCooldownReduction_C* UBattleEffect_RevengeCooldownReduction_C::GetDefaultObj()
{
	static class UBattleEffect_RevengeCooldownReduction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_RevengeCooldownReduction_C*>(UBattleEffect_RevengeCooldownReduction_C::StaticClass()->DefaultObject);

	return Default;
}

}


