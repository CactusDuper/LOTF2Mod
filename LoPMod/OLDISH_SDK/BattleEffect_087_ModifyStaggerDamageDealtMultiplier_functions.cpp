#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_087_ModifyStaggerDamageDealtMultiplier.BattleEffect_087_ModifyStaggerDamageDealtMultiplier_C
// (None)

class UClass* UBattleEffect_087_ModifyStaggerDamageDealtMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_087_ModifyStaggerDamageDealtMultiplier_C");

	return Clss;
}


// BattleEffect_087_ModifyStaggerDamageDealtMultiplier_C BattleEffect_087_ModifyStaggerDamageDealtMultiplier.Default__BattleEffect_087_ModifyStaggerDamageDealtMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_087_ModifyStaggerDamageDealtMultiplier_C* UBattleEffect_087_ModifyStaggerDamageDealtMultiplier_C::GetDefaultObj()
{
	static class UBattleEffect_087_ModifyStaggerDamageDealtMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_087_ModifyStaggerDamageDealtMultiplier_C*>(UBattleEffect_087_ModifyStaggerDamageDealtMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


