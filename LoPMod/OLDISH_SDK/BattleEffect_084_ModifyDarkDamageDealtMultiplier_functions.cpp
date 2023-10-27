#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_084_ModifyDarkDamageDealtMultiplier.BattleEffect_084_ModifyDarkDamageDealtMultiplier_C
// (None)

class UClass* UBattleEffect_084_ModifyDarkDamageDealtMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_084_ModifyDarkDamageDealtMultiplier_C");

	return Clss;
}


// BattleEffect_084_ModifyDarkDamageDealtMultiplier_C BattleEffect_084_ModifyDarkDamageDealtMultiplier.Default__BattleEffect_084_ModifyDarkDamageDealtMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_084_ModifyDarkDamageDealtMultiplier_C* UBattleEffect_084_ModifyDarkDamageDealtMultiplier_C::GetDefaultObj()
{
	static class UBattleEffect_084_ModifyDarkDamageDealtMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_084_ModifyDarkDamageDealtMultiplier_C*>(UBattleEffect_084_ModifyDarkDamageDealtMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


