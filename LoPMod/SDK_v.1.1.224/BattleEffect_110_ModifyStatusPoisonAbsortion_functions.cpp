#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_110_ModifyStatusPoisonAbsortion.BattleEffect_110_ModifyStatusPoisonAbsortion_C
// (None)

class UClass* UBattleEffect_110_ModifyStatusPoisonAbsortion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_110_ModifyStatusPoisonAbsortion_C");

	return Clss;
}


// BattleEffect_110_ModifyStatusPoisonAbsortion_C BattleEffect_110_ModifyStatusPoisonAbsortion.Default__BattleEffect_110_ModifyStatusPoisonAbsortion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_110_ModifyStatusPoisonAbsortion_C* UBattleEffect_110_ModifyStatusPoisonAbsortion_C::GetDefaultObj()
{
	static class UBattleEffect_110_ModifyStatusPoisonAbsortion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_110_ModifyStatusPoisonAbsortion_C*>(UBattleEffect_110_ModifyStatusPoisonAbsortion_C::StaticClass()->DefaultObject);

	return Default;
}

}


