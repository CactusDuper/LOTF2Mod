#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_096_ModifyPoiseDamageReceivedMultiplier.BattleEffect_096_ModifyPoiseDamageReceivedMultiplier_C
// (None)

class UClass* UBattleEffect_096_ModifyPoiseDamageReceivedMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_096_ModifyPoiseDamageReceivedMultiplier_C");

	return Clss;
}


// BattleEffect_096_ModifyPoiseDamageReceivedMultiplier_C BattleEffect_096_ModifyPoiseDamageReceivedMultiplier.Default__BattleEffect_096_ModifyPoiseDamageReceivedMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_096_ModifyPoiseDamageReceivedMultiplier_C* UBattleEffect_096_ModifyPoiseDamageReceivedMultiplier_C::GetDefaultObj()
{
	static class UBattleEffect_096_ModifyPoiseDamageReceivedMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_096_ModifyPoiseDamageReceivedMultiplier_C*>(UBattleEffect_096_ModifyPoiseDamageReceivedMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


