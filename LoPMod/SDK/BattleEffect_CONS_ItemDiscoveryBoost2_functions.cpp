#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_CONS_ItemDiscoveryBoost2.BattleEffect_CONS_ItemDiscoveryBoost2_C
// (None)

class UClass* UBattleEffect_CONS_ItemDiscoveryBoost2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_CONS_ItemDiscoveryBoost2_C");

	return Clss;
}


// BattleEffect_CONS_ItemDiscoveryBoost2_C BattleEffect_CONS_ItemDiscoveryBoost2.Default__BattleEffect_CONS_ItemDiscoveryBoost2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_CONS_ItemDiscoveryBoost2_C* UBattleEffect_CONS_ItemDiscoveryBoost2_C::GetDefaultObj()
{
	static class UBattleEffect_CONS_ItemDiscoveryBoost2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_CONS_ItemDiscoveryBoost2_C*>(UBattleEffect_CONS_ItemDiscoveryBoost2_C::StaticClass()->DefaultObject);

	return Default;
}

}


