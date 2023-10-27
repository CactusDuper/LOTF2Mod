#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_EstusAlsoGivesHealthRegenJewel.BattleEffect_EstusAlsoGivesHealthRegenJewel_C
// (None)

class UClass* UBattleEffect_EstusAlsoGivesHealthRegenJewel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_EstusAlsoGivesHealthRegenJewel_C");

	return Clss;
}


// BattleEffect_EstusAlsoGivesHealthRegenJewel_C BattleEffect_EstusAlsoGivesHealthRegenJewel.Default__BattleEffect_EstusAlsoGivesHealthRegenJewel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_EstusAlsoGivesHealthRegenJewel_C* UBattleEffect_EstusAlsoGivesHealthRegenJewel_C::GetDefaultObj()
{
	static class UBattleEffect_EstusAlsoGivesHealthRegenJewel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_EstusAlsoGivesHealthRegenJewel_C*>(UBattleEffect_EstusAlsoGivesHealthRegenJewel_C::StaticClass()->DefaultObject);

	return Default;
}

}


