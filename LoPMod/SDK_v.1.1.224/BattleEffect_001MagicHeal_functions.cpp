#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_001MagicHeal.BattleEffect_001MagicHeal_C
// (None)

class UClass* UBattleEffect_001MagicHeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_001MagicHeal_C");

	return Clss;
}


// BattleEffect_001MagicHeal_C BattleEffect_001MagicHeal.Default__BattleEffect_001MagicHeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_001MagicHeal_C* UBattleEffect_001MagicHeal_C::GetDefaultObj()
{
	static class UBattleEffect_001MagicHeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_001MagicHeal_C*>(UBattleEffect_001MagicHeal_C::StaticClass()->DefaultObject);

	return Default;
}

}


