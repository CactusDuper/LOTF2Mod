#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_091_ModifyePhysicalDamageReceivedMultiplier.BattleEffect_091_ModifyePhysicalDamageReceivedMultiplier_C
// (None)

class UClass* UBattleEffect_091_ModifyePhysicalDamageReceivedMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_091_ModifyePhysicalDamageReceivedMultiplier_C");

	return Clss;
}


// BattleEffect_091_ModifyePhysicalDamageReceivedMultiplier_C BattleEffect_091_ModifyePhysicalDamageReceivedMultiplier.Default__BattleEffect_091_ModifyePhysicalDamageReceivedMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_091_ModifyePhysicalDamageReceivedMultiplier_C* UBattleEffect_091_ModifyePhysicalDamageReceivedMultiplier_C::GetDefaultObj()
{
	static class UBattleEffect_091_ModifyePhysicalDamageReceivedMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_091_ModifyePhysicalDamageReceivedMultiplier_C*>(UBattleEffect_091_ModifyePhysicalDamageReceivedMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


