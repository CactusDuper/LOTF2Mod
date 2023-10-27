#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_086_ModifyPoiseDamageDealtMultiplier.BattleEffect_086_ModifyPoiseDamageDealtMultiplier_C
// (None)

class UClass* UBattleEffect_086_ModifyPoiseDamageDealtMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_086_ModifyPoiseDamageDealtMultiplier_C");

	return Clss;
}


// BattleEffect_086_ModifyPoiseDamageDealtMultiplier_C BattleEffect_086_ModifyPoiseDamageDealtMultiplier.Default__BattleEffect_086_ModifyPoiseDamageDealtMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_086_ModifyPoiseDamageDealtMultiplier_C* UBattleEffect_086_ModifyPoiseDamageDealtMultiplier_C::GetDefaultObj()
{
	static class UBattleEffect_086_ModifyPoiseDamageDealtMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_086_ModifyPoiseDamageDealtMultiplier_C*>(UBattleEffect_086_ModifyPoiseDamageDealtMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


