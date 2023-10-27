#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_090_ModifyGlobalDamageReceivedMultiplier.BattleEffect_090_ModifyGlobalDamageReceivedMultiplier_C
// (None)

class UClass* UBattleEffect_090_ModifyGlobalDamageReceivedMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_090_ModifyGlobalDamageReceivedMultiplier_C");

	return Clss;
}


// BattleEffect_090_ModifyGlobalDamageReceivedMultiplier_C BattleEffect_090_ModifyGlobalDamageReceivedMultiplier.Default__BattleEffect_090_ModifyGlobalDamageReceivedMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_090_ModifyGlobalDamageReceivedMultiplier_C* UBattleEffect_090_ModifyGlobalDamageReceivedMultiplier_C::GetDefaultObj()
{
	static class UBattleEffect_090_ModifyGlobalDamageReceivedMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_090_ModifyGlobalDamageReceivedMultiplier_C*>(UBattleEffect_090_ModifyGlobalDamageReceivedMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


