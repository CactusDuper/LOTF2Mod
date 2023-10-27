#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_RING_AllElementalDef.BattleEffect_RING_AllElementalDef_C
// (None)

class UClass* UBattleEffect_RING_AllElementalDef_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_RING_AllElementalDef_C");

	return Clss;
}


// BattleEffect_RING_AllElementalDef_C BattleEffect_RING_AllElementalDef.Default__BattleEffect_RING_AllElementalDef_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_RING_AllElementalDef_C* UBattleEffect_RING_AllElementalDef_C::GetDefaultObj()
{
	static class UBattleEffect_RING_AllElementalDef_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_RING_AllElementalDef_C*>(UBattleEffect_RING_AllElementalDef_C::StaticClass()->DefaultObject);

	return Default;
}

}


