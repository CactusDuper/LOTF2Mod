#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_EstusAlsoGivesHealthRegenEffect.BattleEffect_EstusAlsoGivesHealthRegenEffect_C
// (None)

class UClass* UBattleEffect_EstusAlsoGivesHealthRegenEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_EstusAlsoGivesHealthRegenEffect_C");

	return Clss;
}


// BattleEffect_EstusAlsoGivesHealthRegenEffect_C BattleEffect_EstusAlsoGivesHealthRegenEffect.Default__BattleEffect_EstusAlsoGivesHealthRegenEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_EstusAlsoGivesHealthRegenEffect_C* UBattleEffect_EstusAlsoGivesHealthRegenEffect_C::GetDefaultObj()
{
	static class UBattleEffect_EstusAlsoGivesHealthRegenEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_EstusAlsoGivesHealthRegenEffect_C*>(UBattleEffect_EstusAlsoGivesHealthRegenEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


