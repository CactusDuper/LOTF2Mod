#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_000DEV_RecoverSoulFlayCharge.BattleEffect_000DEV_RecoverSoulFlayCharge_C
// (None)

class UClass* UBattleEffect_000DEV_RecoverSoulFlayCharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_000DEV_RecoverSoulFlayCharge_C");

	return Clss;
}


// BattleEffect_000DEV_RecoverSoulFlayCharge_C BattleEffect_000DEV_RecoverSoulFlayCharge.Default__BattleEffect_000DEV_RecoverSoulFlayCharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_000DEV_RecoverSoulFlayCharge_C* UBattleEffect_000DEV_RecoverSoulFlayCharge_C::GetDefaultObj()
{
	static class UBattleEffect_000DEV_RecoverSoulFlayCharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_000DEV_RecoverSoulFlayCharge_C*>(UBattleEffect_000DEV_RecoverSoulFlayCharge_C::StaticClass()->DefaultObject);

	return Default;
}

}


