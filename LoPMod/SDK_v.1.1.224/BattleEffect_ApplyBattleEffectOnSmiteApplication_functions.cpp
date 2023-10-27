#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_ApplyBattleEffectOnSmiteApplication.BattleEffect_ApplyBattleEffectOnSmiteApplication_C
// (None)

class UClass* UBattleEffect_ApplyBattleEffectOnSmiteApplication_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_ApplyBattleEffectOnSmiteApplication_C");

	return Clss;
}


// BattleEffect_ApplyBattleEffectOnSmiteApplication_C BattleEffect_ApplyBattleEffectOnSmiteApplication.Default__BattleEffect_ApplyBattleEffectOnSmiteApplication_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_ApplyBattleEffectOnSmiteApplication_C* UBattleEffect_ApplyBattleEffectOnSmiteApplication_C::GetDefaultObj()
{
	static class UBattleEffect_ApplyBattleEffectOnSmiteApplication_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_ApplyBattleEffectOnSmiteApplication_C*>(UBattleEffect_ApplyBattleEffectOnSmiteApplication_C::StaticClass()->DefaultObject);

	return Default;
}

}


