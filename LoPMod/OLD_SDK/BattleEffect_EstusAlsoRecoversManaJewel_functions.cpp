#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_EstusAlsoRecoversManaJewel.BattleEffect_EstusAlsoRecoversManaJewel_C
// (None)

class UClass* UBattleEffect_EstusAlsoRecoversManaJewel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_EstusAlsoRecoversManaJewel_C");

	return Clss;
}


// BattleEffect_EstusAlsoRecoversManaJewel_C BattleEffect_EstusAlsoRecoversManaJewel.Default__BattleEffect_EstusAlsoRecoversManaJewel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_EstusAlsoRecoversManaJewel_C* UBattleEffect_EstusAlsoRecoversManaJewel_C::GetDefaultObj()
{
	static class UBattleEffect_EstusAlsoRecoversManaJewel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_EstusAlsoRecoversManaJewel_C*>(UBattleEffect_EstusAlsoRecoversManaJewel_C::StaticClass()->DefaultObject);

	return Default;
}

}


