#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_060ModifySoulFlayChargePerHit.BattleEffect_060ModifySoulFlayChargePerHit_C
// (None)

class UClass* UBattleEffect_060ModifySoulFlayChargePerHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_060ModifySoulFlayChargePerHit_C");

	return Clss;
}


// BattleEffect_060ModifySoulFlayChargePerHit_C BattleEffect_060ModifySoulFlayChargePerHit.Default__BattleEffect_060ModifySoulFlayChargePerHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_060ModifySoulFlayChargePerHit_C* UBattleEffect_060ModifySoulFlayChargePerHit_C::GetDefaultObj()
{
	static class UBattleEffect_060ModifySoulFlayChargePerHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_060ModifySoulFlayChargePerHit_C*>(UBattleEffect_060ModifySoulFlayChargePerHit_C::StaticClass()->DefaultObject);

	return Default;
}

}


