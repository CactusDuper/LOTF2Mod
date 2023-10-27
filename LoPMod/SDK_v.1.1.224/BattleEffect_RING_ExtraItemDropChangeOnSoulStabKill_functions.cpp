#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_RING_ExtraItemDropChangeOnSoulStabKill.BattleEffect_RING_ExtraItemDropChangeOnSoulStabKill_C
// (None)

class UClass* UBattleEffect_RING_ExtraItemDropChangeOnSoulStabKill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_RING_ExtraItemDropChangeOnSoulStabKill_C");

	return Clss;
}


// BattleEffect_RING_ExtraItemDropChangeOnSoulStabKill_C BattleEffect_RING_ExtraItemDropChangeOnSoulStabKill.Default__BattleEffect_RING_ExtraItemDropChangeOnSoulStabKill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_RING_ExtraItemDropChangeOnSoulStabKill_C* UBattleEffect_RING_ExtraItemDropChangeOnSoulStabKill_C::GetDefaultObj()
{
	static class UBattleEffect_RING_ExtraItemDropChangeOnSoulStabKill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_RING_ExtraItemDropChangeOnSoulStabKill_C*>(UBattleEffect_RING_ExtraItemDropChangeOnSoulStabKill_C::StaticClass()->DefaultObject);

	return Default;
}

}


