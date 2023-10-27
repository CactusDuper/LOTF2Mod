#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_081_ModifyPhysicalDamageDealtMultiplier.BattleEffect_081_ModifyPhysicalDamageDealtMultiplier_C
// (None)

class UClass* UBattleEffect_081_ModifyPhysicalDamageDealtMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_081_ModifyPhysicalDamageDealtMultiplier_C");

	return Clss;
}


// BattleEffect_081_ModifyPhysicalDamageDealtMultiplier_C BattleEffect_081_ModifyPhysicalDamageDealtMultiplier.Default__BattleEffect_081_ModifyPhysicalDamageDealtMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_081_ModifyPhysicalDamageDealtMultiplier_C* UBattleEffect_081_ModifyPhysicalDamageDealtMultiplier_C::GetDefaultObj()
{
	static class UBattleEffect_081_ModifyPhysicalDamageDealtMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_081_ModifyPhysicalDamageDealtMultiplier_C*>(UBattleEffect_081_ModifyPhysicalDamageDealtMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


