#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_RING_FaithAdd.BattleEffect_RING_FaithAdd_C
// (None)

class UClass* UBattleEffect_RING_FaithAdd_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_RING_FaithAdd_C");

	return Clss;
}


// BattleEffect_RING_FaithAdd_C BattleEffect_RING_FaithAdd.Default__BattleEffect_RING_FaithAdd_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_RING_FaithAdd_C* UBattleEffect_RING_FaithAdd_C::GetDefaultObj()
{
	static class UBattleEffect_RING_FaithAdd_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_RING_FaithAdd_C*>(UBattleEffect_RING_FaithAdd_C::StaticClass()->DefaultObject);

	return Default;
}

}


