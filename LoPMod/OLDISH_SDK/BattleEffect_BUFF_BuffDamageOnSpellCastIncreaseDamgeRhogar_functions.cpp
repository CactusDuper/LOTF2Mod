#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_BUFF_BuffDamageOnSpellCastIncreaseDamgeRhogar.BattleEffect_BUFF_BuffDamageOnSpellCastIncreaseDamgeRhogar_C
// (None)

class UClass* UBattleEffect_BUFF_BuffDamageOnSpellCastIncreaseDamgeRhogar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_BUFF_BuffDamageOnSpellCastIncreaseDamgeRhogar_C");

	return Clss;
}


// BattleEffect_BUFF_BuffDamageOnSpellCastIncreaseDamgeRhogar_C BattleEffect_BUFF_BuffDamageOnSpellCastIncreaseDamgeRhogar.Default__BattleEffect_BUFF_BuffDamageOnSpellCastIncreaseDamgeRhogar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_BUFF_BuffDamageOnSpellCastIncreaseDamgeRhogar_C* UBattleEffect_BUFF_BuffDamageOnSpellCastIncreaseDamgeRhogar_C::GetDefaultObj()
{
	static class UBattleEffect_BUFF_BuffDamageOnSpellCastIncreaseDamgeRhogar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_BUFF_BuffDamageOnSpellCastIncreaseDamgeRhogar_C*>(UBattleEffect_BUFF_BuffDamageOnSpellCastIncreaseDamgeRhogar_C::StaticClass()->DefaultObject);

	return Default;
}

}


