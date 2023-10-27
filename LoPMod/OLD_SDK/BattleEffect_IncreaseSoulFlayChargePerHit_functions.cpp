#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_IncreaseSoulFlayChargePerHit.BattleEffect_IncreaseSoulFlayChargePerHit_C
// (None)

class UClass* UBattleEffect_IncreaseSoulFlayChargePerHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_IncreaseSoulFlayChargePerHit_C");

	return Clss;
}


// BattleEffect_IncreaseSoulFlayChargePerHit_C BattleEffect_IncreaseSoulFlayChargePerHit.Default__BattleEffect_IncreaseSoulFlayChargePerHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_IncreaseSoulFlayChargePerHit_C* UBattleEffect_IncreaseSoulFlayChargePerHit_C::GetDefaultObj()
{
	static class UBattleEffect_IncreaseSoulFlayChargePerHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_IncreaseSoulFlayChargePerHit_C*>(UBattleEffect_IncreaseSoulFlayChargePerHit_C::StaticClass()->DefaultObject);

	return Default;
}

}


