#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_DualHandedStanceDamageDecrease.BattleEffect_DualHandedStanceDamageDecrease_C
// (None)

class UClass* UBattleEffect_DualHandedStanceDamageDecrease_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_DualHandedStanceDamageDecrease_C");

	return Clss;
}


// BattleEffect_DualHandedStanceDamageDecrease_C BattleEffect_DualHandedStanceDamageDecrease.Default__BattleEffect_DualHandedStanceDamageDecrease_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_DualHandedStanceDamageDecrease_C* UBattleEffect_DualHandedStanceDamageDecrease_C::GetDefaultObj()
{
	static class UBattleEffect_DualHandedStanceDamageDecrease_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_DualHandedStanceDamageDecrease_C*>(UBattleEffect_DualHandedStanceDamageDecrease_C::StaticClass()->DefaultObject);

	return Default;
}

}


