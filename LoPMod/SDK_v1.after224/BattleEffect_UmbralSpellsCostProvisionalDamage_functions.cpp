#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_UmbralSpellsCostProvisionalDamage.BattleEffect_UmbralSpellsCostProvisionalDamage_C
// (None)

class UClass* UBattleEffect_UmbralSpellsCostProvisionalDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_UmbralSpellsCostProvisionalDamage_C");

	return Clss;
}


// BattleEffect_UmbralSpellsCostProvisionalDamage_C BattleEffect_UmbralSpellsCostProvisionalDamage.Default__BattleEffect_UmbralSpellsCostProvisionalDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_UmbralSpellsCostProvisionalDamage_C* UBattleEffect_UmbralSpellsCostProvisionalDamage_C::GetDefaultObj()
{
	static class UBattleEffect_UmbralSpellsCostProvisionalDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_UmbralSpellsCostProvisionalDamage_C*>(UBattleEffect_UmbralSpellsCostProvisionalDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


