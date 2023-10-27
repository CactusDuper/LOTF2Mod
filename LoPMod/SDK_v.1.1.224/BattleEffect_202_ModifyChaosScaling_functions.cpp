#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_202_ModifyChaosScaling.BattleEffect_202_ModifyChaosScaling_C
// (None)

class UClass* UBattleEffect_202_ModifyChaosScaling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_202_ModifyChaosScaling_C");

	return Clss;
}


// BattleEffect_202_ModifyChaosScaling_C BattleEffect_202_ModifyChaosScaling.Default__BattleEffect_202_ModifyChaosScaling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_202_ModifyChaosScaling_C* UBattleEffect_202_ModifyChaosScaling_C::GetDefaultObj()
{
	static class UBattleEffect_202_ModifyChaosScaling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_202_ModifyChaosScaling_C*>(UBattleEffect_202_ModifyChaosScaling_C::StaticClass()->DefaultObject);

	return Default;
}

}


