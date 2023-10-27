#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_094_ModifyDarkDamageReceivedMultiplier.BattleEffect_094_ModifyDarkDamageReceivedMultiplier_C
// (None)

class UClass* UBattleEffect_094_ModifyDarkDamageReceivedMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_094_ModifyDarkDamageReceivedMultiplier_C");

	return Clss;
}


// BattleEffect_094_ModifyDarkDamageReceivedMultiplier_C BattleEffect_094_ModifyDarkDamageReceivedMultiplier.Default__BattleEffect_094_ModifyDarkDamageReceivedMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_094_ModifyDarkDamageReceivedMultiplier_C* UBattleEffect_094_ModifyDarkDamageReceivedMultiplier_C::GetDefaultObj()
{
	static class UBattleEffect_094_ModifyDarkDamageReceivedMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_094_ModifyDarkDamageReceivedMultiplier_C*>(UBattleEffect_094_ModifyDarkDamageReceivedMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


