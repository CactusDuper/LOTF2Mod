#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_085_ModifyStaminaDamageDealtMultiplier.BattleEffect_085_ModifyStaminaDamageDealtMultiplier_C
// (None)

class UClass* UBattleEffect_085_ModifyStaminaDamageDealtMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_085_ModifyStaminaDamageDealtMultiplier_C");

	return Clss;
}


// BattleEffect_085_ModifyStaminaDamageDealtMultiplier_C BattleEffect_085_ModifyStaminaDamageDealtMultiplier.Default__BattleEffect_085_ModifyStaminaDamageDealtMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_085_ModifyStaminaDamageDealtMultiplier_C* UBattleEffect_085_ModifyStaminaDamageDealtMultiplier_C::GetDefaultObj()
{
	static class UBattleEffect_085_ModifyStaminaDamageDealtMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_085_ModifyStaminaDamageDealtMultiplier_C*>(UBattleEffect_085_ModifyStaminaDamageDealtMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


