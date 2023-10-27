#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_061ModifyFlatSoulFlayChargePerHit.BattleEffect_061ModifyFlatSoulFlayChargePerHit_C
// (None)

class UClass* UBattleEffect_061ModifyFlatSoulFlayChargePerHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_061ModifyFlatSoulFlayChargePerHit_C");

	return Clss;
}


// BattleEffect_061ModifyFlatSoulFlayChargePerHit_C BattleEffect_061ModifyFlatSoulFlayChargePerHit.Default__BattleEffect_061ModifyFlatSoulFlayChargePerHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_061ModifyFlatSoulFlayChargePerHit_C* UBattleEffect_061ModifyFlatSoulFlayChargePerHit_C::GetDefaultObj()
{
	static class UBattleEffect_061ModifyFlatSoulFlayChargePerHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_061ModifyFlatSoulFlayChargePerHit_C*>(UBattleEffect_061ModifyFlatSoulFlayChargePerHit_C::StaticClass()->DefaultObject);

	return Default;
}

}


