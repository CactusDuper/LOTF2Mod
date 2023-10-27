#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_BUFF_EstusAlsoRecoversManaJewel.BattleEffect_BUFF_EstusAlsoRecoversManaJewel_C
// (None)

class UClass* UBattleEffect_BUFF_EstusAlsoRecoversManaJewel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_BUFF_EstusAlsoRecoversManaJewel_C");

	return Clss;
}


// BattleEffect_BUFF_EstusAlsoRecoversManaJewel_C BattleEffect_BUFF_EstusAlsoRecoversManaJewel.Default__BattleEffect_BUFF_EstusAlsoRecoversManaJewel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_BUFF_EstusAlsoRecoversManaJewel_C* UBattleEffect_BUFF_EstusAlsoRecoversManaJewel_C::GetDefaultObj()
{
	static class UBattleEffect_BUFF_EstusAlsoRecoversManaJewel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_BUFF_EstusAlsoRecoversManaJewel_C*>(UBattleEffect_BUFF_EstusAlsoRecoversManaJewel_C::StaticClass()->DefaultObject);

	return Default;
}

}


