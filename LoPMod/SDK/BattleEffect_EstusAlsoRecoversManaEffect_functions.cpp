#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_EstusAlsoRecoversManaEffect.BattleEffect_EstusAlsoRecoversManaEffect_C
// (None)

class UClass* UBattleEffect_EstusAlsoRecoversManaEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_EstusAlsoRecoversManaEffect_C");

	return Clss;
}


// BattleEffect_EstusAlsoRecoversManaEffect_C BattleEffect_EstusAlsoRecoversManaEffect.Default__BattleEffect_EstusAlsoRecoversManaEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_EstusAlsoRecoversManaEffect_C* UBattleEffect_EstusAlsoRecoversManaEffect_C::GetDefaultObj()
{
	static class UBattleEffect_EstusAlsoRecoversManaEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_EstusAlsoRecoversManaEffect_C*>(UBattleEffect_EstusAlsoRecoversManaEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


