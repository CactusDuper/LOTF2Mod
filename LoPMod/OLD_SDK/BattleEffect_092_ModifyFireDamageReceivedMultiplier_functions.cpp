#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_092_ModifyFireDamageReceivedMultiplier.BattleEffect_092_ModifyFireDamageReceivedMultiplier_C
// (None)

class UClass* UBattleEffect_092_ModifyFireDamageReceivedMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_092_ModifyFireDamageReceivedMultiplier_C");

	return Clss;
}


// BattleEffect_092_ModifyFireDamageReceivedMultiplier_C BattleEffect_092_ModifyFireDamageReceivedMultiplier.Default__BattleEffect_092_ModifyFireDamageReceivedMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_092_ModifyFireDamageReceivedMultiplier_C* UBattleEffect_092_ModifyFireDamageReceivedMultiplier_C::GetDefaultObj()
{
	static class UBattleEffect_092_ModifyFireDamageReceivedMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_092_ModifyFireDamageReceivedMultiplier_C*>(UBattleEffect_092_ModifyFireDamageReceivedMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


