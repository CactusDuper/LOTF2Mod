#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_EQUIP_StaveSpellpowerAdd.BattleEffect_EQUIP_StaveSpellpowerAdd_C
// (None)

class UClass* UBattleEffect_EQUIP_StaveSpellpowerAdd_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_EQUIP_StaveSpellpowerAdd_C");

	return Clss;
}


// BattleEffect_EQUIP_StaveSpellpowerAdd_C BattleEffect_EQUIP_StaveSpellpowerAdd.Default__BattleEffect_EQUIP_StaveSpellpowerAdd_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_EQUIP_StaveSpellpowerAdd_C* UBattleEffect_EQUIP_StaveSpellpowerAdd_C::GetDefaultObj()
{
	static class UBattleEffect_EQUIP_StaveSpellpowerAdd_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_EQUIP_StaveSpellpowerAdd_C*>(UBattleEffect_EQUIP_StaveSpellpowerAdd_C::StaticClass()->DefaultObject);

	return Default;
}

}


