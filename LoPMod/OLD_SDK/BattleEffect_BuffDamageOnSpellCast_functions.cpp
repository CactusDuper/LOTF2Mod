#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_BuffDamageOnSpellCast.BattleEffect_BuffDamageOnSpellCast_C
// (None)

class UClass* UBattleEffect_BuffDamageOnSpellCast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_BuffDamageOnSpellCast_C");

	return Clss;
}


// BattleEffect_BuffDamageOnSpellCast_C BattleEffect_BuffDamageOnSpellCast.Default__BattleEffect_BuffDamageOnSpellCast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_BuffDamageOnSpellCast_C* UBattleEffect_BuffDamageOnSpellCast_C::GetDefaultObj()
{
	static class UBattleEffect_BuffDamageOnSpellCast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_BuffDamageOnSpellCast_C*>(UBattleEffect_BuffDamageOnSpellCast_C::StaticClass()->DefaultObject);

	return Default;
}

}


