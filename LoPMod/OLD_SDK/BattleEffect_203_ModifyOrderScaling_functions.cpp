#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_203_ModifyOrderScaling.BattleEffect_203_ModifyOrderScaling_C
// (None)

class UClass* UBattleEffect_203_ModifyOrderScaling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_203_ModifyOrderScaling_C");

	return Clss;
}


// BattleEffect_203_ModifyOrderScaling_C BattleEffect_203_ModifyOrderScaling.Default__BattleEffect_203_ModifyOrderScaling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_203_ModifyOrderScaling_C* UBattleEffect_203_ModifyOrderScaling_C::GetDefaultObj()
{
	static class UBattleEffect_203_ModifyOrderScaling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_203_ModifyOrderScaling_C*>(UBattleEffect_203_ModifyOrderScaling_C::StaticClass()->DefaultObject);

	return Default;
}

}


