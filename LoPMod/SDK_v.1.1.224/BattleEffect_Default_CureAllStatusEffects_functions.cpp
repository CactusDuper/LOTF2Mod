#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_Default_CureAllStatusEffects.BattleEffect_Default_CureAllStatusEffects_C
// (None)

class UClass* UBattleEffect_Default_CureAllStatusEffects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_Default_CureAllStatusEffects_C");

	return Clss;
}


// BattleEffect_Default_CureAllStatusEffects_C BattleEffect_Default_CureAllStatusEffects.Default__BattleEffect_Default_CureAllStatusEffects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_Default_CureAllStatusEffects_C* UBattleEffect_Default_CureAllStatusEffects_C::GetDefaultObj()
{
	static class UBattleEffect_Default_CureAllStatusEffects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_Default_CureAllStatusEffects_C*>(UBattleEffect_Default_CureAllStatusEffects_C::StaticClass()->DefaultObject);

	return Default;
}

}


