#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_AMUL_MaxHealth.BattleEffect_AMUL_MaxHealth_C
// (None)

class UClass* UBattleEffect_AMUL_MaxHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_AMUL_MaxHealth_C");

	return Clss;
}


// BattleEffect_AMUL_MaxHealth_C BattleEffect_AMUL_MaxHealth.Default__BattleEffect_AMUL_MaxHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_AMUL_MaxHealth_C* UBattleEffect_AMUL_MaxHealth_C::GetDefaultObj()
{
	static class UBattleEffect_AMUL_MaxHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_AMUL_MaxHealth_C*>(UBattleEffect_AMUL_MaxHealth_C::StaticClass()->DefaultObject);

	return Default;
}

}


