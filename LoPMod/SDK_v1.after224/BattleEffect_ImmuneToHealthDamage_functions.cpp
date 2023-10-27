#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_ImmuneToHealthDamage.BattleEffect_ImmuneToHealthDamage_C
// (None)

class UClass* UBattleEffect_ImmuneToHealthDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_ImmuneToHealthDamage_C");

	return Clss;
}


// BattleEffect_ImmuneToHealthDamage_C BattleEffect_ImmuneToHealthDamage.Default__BattleEffect_ImmuneToHealthDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_ImmuneToHealthDamage_C* UBattleEffect_ImmuneToHealthDamage_C::GetDefaultObj()
{
	static class UBattleEffect_ImmuneToHealthDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_ImmuneToHealthDamage_C*>(UBattleEffect_ImmuneToHealthDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


