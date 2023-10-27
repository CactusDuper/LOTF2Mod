#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_063ModifyFlatSoulFlayChargePerVigor.BattleEffect_063ModifyFlatSoulFlayChargePerVigor_C
// (None)

class UClass* UBattleEffect_063ModifyFlatSoulFlayChargePerVigor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_063ModifyFlatSoulFlayChargePerVigor_C");

	return Clss;
}


// BattleEffect_063ModifyFlatSoulFlayChargePerVigor_C BattleEffect_063ModifyFlatSoulFlayChargePerVigor.Default__BattleEffect_063ModifyFlatSoulFlayChargePerVigor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_063ModifyFlatSoulFlayChargePerVigor_C* UBattleEffect_063ModifyFlatSoulFlayChargePerVigor_C::GetDefaultObj()
{
	static class UBattleEffect_063ModifyFlatSoulFlayChargePerVigor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_063ModifyFlatSoulFlayChargePerVigor_C*>(UBattleEffect_063ModifyFlatSoulFlayChargePerVigor_C::StaticClass()->DefaultObject);

	return Default;
}

}


