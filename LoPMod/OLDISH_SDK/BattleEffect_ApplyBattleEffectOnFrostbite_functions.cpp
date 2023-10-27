#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_ApplyBattleEffectOnFrostbite.BattleEffect_ApplyBattleEffectOnFrostbite_C
// (None)

class UClass* UBattleEffect_ApplyBattleEffectOnFrostbite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_ApplyBattleEffectOnFrostbite_C");

	return Clss;
}


// BattleEffect_ApplyBattleEffectOnFrostbite_C BattleEffect_ApplyBattleEffectOnFrostbite.Default__BattleEffect_ApplyBattleEffectOnFrostbite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_ApplyBattleEffectOnFrostbite_C* UBattleEffect_ApplyBattleEffectOnFrostbite_C::GetDefaultObj()
{
	static class UBattleEffect_ApplyBattleEffectOnFrostbite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_ApplyBattleEffectOnFrostbite_C*>(UBattleEffect_ApplyBattleEffectOnFrostbite_C::StaticClass()->DefaultObject);

	return Default;
}

}


