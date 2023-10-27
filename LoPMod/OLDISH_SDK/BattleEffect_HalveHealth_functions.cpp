#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_HalveHealth.BattleEffect_HalveHealth_C
// (None)

class UClass* UBattleEffect_HalveHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_HalveHealth_C");

	return Clss;
}


// BattleEffect_HalveHealth_C BattleEffect_HalveHealth.Default__BattleEffect_HalveHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_HalveHealth_C* UBattleEffect_HalveHealth_C::GetDefaultObj()
{
	static class UBattleEffect_HalveHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_HalveHealth_C*>(UBattleEffect_HalveHealth_C::StaticClass()->DefaultObject);

	return Default;
}

}


