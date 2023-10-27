#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_001HealOverTime.BattleEffect_001HealOverTime_C
// (None)

class UClass* UBattleEffect_001HealOverTime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_001HealOverTime_C");

	return Clss;
}


// BattleEffect_001HealOverTime_C BattleEffect_001HealOverTime.Default__BattleEffect_001HealOverTime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_001HealOverTime_C* UBattleEffect_001HealOverTime_C::GetDefaultObj()
{
	static class UBattleEffect_001HealOverTime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_001HealOverTime_C*>(UBattleEffect_001HealOverTime_C::StaticClass()->DefaultObject);

	return Default;
}

}


