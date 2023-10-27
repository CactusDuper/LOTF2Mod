#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_RING_HolyDef.BattleEffect_RING_HolyDef_C
// (None)

class UClass* UBattleEffect_RING_HolyDef_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_RING_HolyDef_C");

	return Clss;
}


// BattleEffect_RING_HolyDef_C BattleEffect_RING_HolyDef.Default__BattleEffect_RING_HolyDef_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_RING_HolyDef_C* UBattleEffect_RING_HolyDef_C::GetDefaultObj()
{
	static class UBattleEffect_RING_HolyDef_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_RING_HolyDef_C*>(UBattleEffect_RING_HolyDef_C::StaticClass()->DefaultObject);

	return Default;
}

}


