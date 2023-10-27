#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_083_ModifyHolyDamageDealtMultiplier.BattleEffect_083_ModifyHolyDamageDealtMultiplier_C
// (None)

class UClass* UBattleEffect_083_ModifyHolyDamageDealtMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_083_ModifyHolyDamageDealtMultiplier_C");

	return Clss;
}


// BattleEffect_083_ModifyHolyDamageDealtMultiplier_C BattleEffect_083_ModifyHolyDamageDealtMultiplier.Default__BattleEffect_083_ModifyHolyDamageDealtMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_083_ModifyHolyDamageDealtMultiplier_C* UBattleEffect_083_ModifyHolyDamageDealtMultiplier_C::GetDefaultObj()
{
	static class UBattleEffect_083_ModifyHolyDamageDealtMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_083_ModifyHolyDamageDealtMultiplier_C*>(UBattleEffect_083_ModifyHolyDamageDealtMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


