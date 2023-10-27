#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_SoulFlayChargePotion.BattleEffect_SoulFlayChargePotion_C
// (None)

class UClass* UBattleEffect_SoulFlayChargePotion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_SoulFlayChargePotion_C");

	return Clss;
}


// BattleEffect_SoulFlayChargePotion_C BattleEffect_SoulFlayChargePotion.Default__BattleEffect_SoulFlayChargePotion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_SoulFlayChargePotion_C* UBattleEffect_SoulFlayChargePotion_C::GetDefaultObj()
{
	static class UBattleEffect_SoulFlayChargePotion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_SoulFlayChargePotion_C*>(UBattleEffect_SoulFlayChargePotion_C::StaticClass()->DefaultObject);

	return Default;
}

}


