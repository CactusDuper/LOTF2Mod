#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_200_ModifyStrengthScaling.BattleEffect_200_ModifyStrengthScaling_C
// (None)

class UClass* UBattleEffect_200_ModifyStrengthScaling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_200_ModifyStrengthScaling_C");

	return Clss;
}


// BattleEffect_200_ModifyStrengthScaling_C BattleEffect_200_ModifyStrengthScaling.Default__BattleEffect_200_ModifyStrengthScaling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_200_ModifyStrengthScaling_C* UBattleEffect_200_ModifyStrengthScaling_C::GetDefaultObj()
{
	static class UBattleEffect_200_ModifyStrengthScaling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_200_ModifyStrengthScaling_C*>(UBattleEffect_200_ModifyStrengthScaling_C::StaticClass()->DefaultObject);

	return Default;
}

}


