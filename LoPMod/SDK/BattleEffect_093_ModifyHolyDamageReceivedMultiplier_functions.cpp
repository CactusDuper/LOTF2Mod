#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_093_ModifyHolyDamageReceivedMultiplier.BattleEffect_093_ModifyHolyDamageReceivedMultiplier_C
// (None)

class UClass* UBattleEffect_093_ModifyHolyDamageReceivedMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_093_ModifyHolyDamageReceivedMultiplier_C");

	return Clss;
}


// BattleEffect_093_ModifyHolyDamageReceivedMultiplier_C BattleEffect_093_ModifyHolyDamageReceivedMultiplier.Default__BattleEffect_093_ModifyHolyDamageReceivedMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_093_ModifyHolyDamageReceivedMultiplier_C* UBattleEffect_093_ModifyHolyDamageReceivedMultiplier_C::GetDefaultObj()
{
	static class UBattleEffect_093_ModifyHolyDamageReceivedMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_093_ModifyHolyDamageReceivedMultiplier_C*>(UBattleEffect_093_ModifyHolyDamageReceivedMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


