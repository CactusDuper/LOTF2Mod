#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_HealPellet1.BattleEffect_HealPellet1_C
// (None)

class UClass* UBattleEffect_HealPellet1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_HealPellet1_C");

	return Clss;
}


// BattleEffect_HealPellet1_C BattleEffect_HealPellet1.Default__BattleEffect_HealPellet1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_HealPellet1_C* UBattleEffect_HealPellet1_C::GetDefaultObj()
{
	static class UBattleEffect_HealPellet1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_HealPellet1_C*>(UBattleEffect_HealPellet1_C::StaticClass()->DefaultObject);

	return Default;
}

}


