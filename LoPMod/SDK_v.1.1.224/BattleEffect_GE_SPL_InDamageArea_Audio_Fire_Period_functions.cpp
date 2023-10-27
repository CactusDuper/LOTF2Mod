#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_GE_SPL_InDamageArea_Audio_Fire_Period.BattleEffect_GE_SPL_InDamageArea_Audio_Fire_Period_C
// (None)

class UClass* UBattleEffect_GE_SPL_InDamageArea_Audio_Fire_Period_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_GE_SPL_InDamageArea_Audio_Fire_Period_C");

	return Clss;
}


// BattleEffect_GE_SPL_InDamageArea_Audio_Fire_Period_C BattleEffect_GE_SPL_InDamageArea_Audio_Fire_Period.Default__BattleEffect_GE_SPL_InDamageArea_Audio_Fire_Period_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_GE_SPL_InDamageArea_Audio_Fire_Period_C* UBattleEffect_GE_SPL_InDamageArea_Audio_Fire_Period_C::GetDefaultObj()
{
	static class UBattleEffect_GE_SPL_InDamageArea_Audio_Fire_Period_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_GE_SPL_InDamageArea_Audio_Fire_Period_C*>(UBattleEffect_GE_SPL_InDamageArea_Audio_Fire_Period_C::StaticClass()->DefaultObject);

	return Default;
}

}


