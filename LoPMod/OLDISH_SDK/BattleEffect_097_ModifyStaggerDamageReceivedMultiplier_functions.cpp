#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_097_ModifyStaggerDamageReceivedMultiplier.BattleEffect_097_ModifyStaggerDamageReceivedMultiplier_C
// (None)

class UClass* UBattleEffect_097_ModifyStaggerDamageReceivedMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_097_ModifyStaggerDamageReceivedMultiplier_C");

	return Clss;
}


// BattleEffect_097_ModifyStaggerDamageReceivedMultiplier_C BattleEffect_097_ModifyStaggerDamageReceivedMultiplier.Default__BattleEffect_097_ModifyStaggerDamageReceivedMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_097_ModifyStaggerDamageReceivedMultiplier_C* UBattleEffect_097_ModifyStaggerDamageReceivedMultiplier_C::GetDefaultObj()
{
	static class UBattleEffect_097_ModifyStaggerDamageReceivedMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_097_ModifyStaggerDamageReceivedMultiplier_C*>(UBattleEffect_097_ModifyStaggerDamageReceivedMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


