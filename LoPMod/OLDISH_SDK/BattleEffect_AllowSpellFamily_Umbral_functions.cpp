#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_AllowSpellFamily_Umbral.BattleEffect_AllowSpellFamily_Umbral_C
// (None)

class UClass* UBattleEffect_AllowSpellFamily_Umbral_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_AllowSpellFamily_Umbral_C");

	return Clss;
}


// BattleEffect_AllowSpellFamily_Umbral_C BattleEffect_AllowSpellFamily_Umbral.Default__BattleEffect_AllowSpellFamily_Umbral_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_AllowSpellFamily_Umbral_C* UBattleEffect_AllowSpellFamily_Umbral_C::GetDefaultObj()
{
	static class UBattleEffect_AllowSpellFamily_Umbral_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_AllowSpellFamily_Umbral_C*>(UBattleEffect_AllowSpellFamily_Umbral_C::StaticClass()->DefaultObject);

	return Default;
}

}


