#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_095_ModifyStaminaDamageReceivedMultiplier.BattleEffect_095_ModifyStaminaDamageReceivedMultiplier_C
// (None)

class UClass* UBattleEffect_095_ModifyStaminaDamageReceivedMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_095_ModifyStaminaDamageReceivedMultiplier_C");

	return Clss;
}


// BattleEffect_095_ModifyStaminaDamageReceivedMultiplier_C BattleEffect_095_ModifyStaminaDamageReceivedMultiplier.Default__BattleEffect_095_ModifyStaminaDamageReceivedMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_095_ModifyStaminaDamageReceivedMultiplier_C* UBattleEffect_095_ModifyStaminaDamageReceivedMultiplier_C::GetDefaultObj()
{
	static class UBattleEffect_095_ModifyStaminaDamageReceivedMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_095_ModifyStaminaDamageReceivedMultiplier_C*>(UBattleEffect_095_ModifyStaminaDamageReceivedMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


