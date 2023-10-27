#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_BloodlustShortsword.BattleEffect_BloodlustShortsword_C
// (None)

class UClass* UBattleEffect_BloodlustShortsword_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_BloodlustShortsword_C");

	return Clss;
}


// BattleEffect_BloodlustShortsword_C BattleEffect_BloodlustShortsword.Default__BattleEffect_BloodlustShortsword_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_BloodlustShortsword_C* UBattleEffect_BloodlustShortsword_C::GetDefaultObj()
{
	static class UBattleEffect_BloodlustShortsword_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_BloodlustShortsword_C*>(UBattleEffect_BloodlustShortsword_C::StaticClass()->DefaultObject);

	return Default;
}

}


