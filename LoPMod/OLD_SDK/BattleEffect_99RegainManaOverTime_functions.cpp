#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_99RegainManaOverTime.BattleEffect_99RegainManaOverTime_C
// (None)

class UClass* UBattleEffect_99RegainManaOverTime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_99RegainManaOverTime_C");

	return Clss;
}


// BattleEffect_99RegainManaOverTime_C BattleEffect_99RegainManaOverTime.Default__BattleEffect_99RegainManaOverTime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_99RegainManaOverTime_C* UBattleEffect_99RegainManaOverTime_C::GetDefaultObj()
{
	static class UBattleEffect_99RegainManaOverTime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_99RegainManaOverTime_C*>(UBattleEffect_99RegainManaOverTime_C::StaticClass()->DefaultObject);

	return Default;
}

}


