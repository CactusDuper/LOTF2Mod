#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_RING_PoiseAdd.BattleEffect_RING_PoiseAdd_C
// (None)

class UClass* UBattleEffect_RING_PoiseAdd_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_RING_PoiseAdd_C");

	return Clss;
}


// BattleEffect_RING_PoiseAdd_C BattleEffect_RING_PoiseAdd.Default__BattleEffect_RING_PoiseAdd_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_RING_PoiseAdd_C* UBattleEffect_RING_PoiseAdd_C::GetDefaultObj()
{
	static class UBattleEffect_RING_PoiseAdd_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_RING_PoiseAdd_C*>(UBattleEffect_RING_PoiseAdd_C::StaticClass()->DefaultObject);

	return Default;
}

}


