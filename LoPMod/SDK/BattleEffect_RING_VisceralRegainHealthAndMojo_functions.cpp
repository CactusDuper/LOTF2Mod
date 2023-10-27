#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_RING_VisceralRegainHealthAndMojo.BattleEffect_RING_VisceralRegainHealthAndMojo_C
// (None)

class UClass* UBattleEffect_RING_VisceralRegainHealthAndMojo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_RING_VisceralRegainHealthAndMojo_C");

	return Clss;
}


// BattleEffect_RING_VisceralRegainHealthAndMojo_C BattleEffect_RING_VisceralRegainHealthAndMojo.Default__BattleEffect_RING_VisceralRegainHealthAndMojo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_RING_VisceralRegainHealthAndMojo_C* UBattleEffect_RING_VisceralRegainHealthAndMojo_C::GetDefaultObj()
{
	static class UBattleEffect_RING_VisceralRegainHealthAndMojo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_RING_VisceralRegainHealthAndMojo_C*>(UBattleEffect_RING_VisceralRegainHealthAndMojo_C::StaticClass()->DefaultObject);

	return Default;
}

}


