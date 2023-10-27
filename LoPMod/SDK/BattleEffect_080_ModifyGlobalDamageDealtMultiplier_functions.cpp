#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_080_ModifyGlobalDamageDealtMultiplier.BattleEffect_080_ModifyGlobalDamageDealtMultiplier_C
// (None)

class UClass* UBattleEffect_080_ModifyGlobalDamageDealtMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_080_ModifyGlobalDamageDealtMultiplier_C");

	return Clss;
}


// BattleEffect_080_ModifyGlobalDamageDealtMultiplier_C BattleEffect_080_ModifyGlobalDamageDealtMultiplier.Default__BattleEffect_080_ModifyGlobalDamageDealtMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_080_ModifyGlobalDamageDealtMultiplier_C* UBattleEffect_080_ModifyGlobalDamageDealtMultiplier_C::GetDefaultObj()
{
	static class UBattleEffect_080_ModifyGlobalDamageDealtMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_080_ModifyGlobalDamageDealtMultiplier_C*>(UBattleEffect_080_ModifyGlobalDamageDealtMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


