#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_022ModifyFlatHolyDamage.BattleEffect_022ModifyFlatHolyDamage_C
// (None)

class UClass* UBattleEffect_022ModifyFlatHolyDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_022ModifyFlatHolyDamage_C");

	return Clss;
}


// BattleEffect_022ModifyFlatHolyDamage_C BattleEffect_022ModifyFlatHolyDamage.Default__BattleEffect_022ModifyFlatHolyDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_022ModifyFlatHolyDamage_C* UBattleEffect_022ModifyFlatHolyDamage_C::GetDefaultObj()
{
	static class UBattleEffect_022ModifyFlatHolyDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_022ModifyFlatHolyDamage_C*>(UBattleEffect_022ModifyFlatHolyDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


