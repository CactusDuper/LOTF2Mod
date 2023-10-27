#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_CatalystManaRegenAdd1.BattleEffect_CatalystManaRegenAdd1_C
// (None)

class UClass* UBattleEffect_CatalystManaRegenAdd1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_CatalystManaRegenAdd1_C");

	return Clss;
}


// BattleEffect_CatalystManaRegenAdd1_C BattleEffect_CatalystManaRegenAdd1.Default__BattleEffect_CatalystManaRegenAdd1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_CatalystManaRegenAdd1_C* UBattleEffect_CatalystManaRegenAdd1_C::GetDefaultObj()
{
	static class UBattleEffect_CatalystManaRegenAdd1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_CatalystManaRegenAdd1_C*>(UBattleEffect_CatalystManaRegenAdd1_C::StaticClass()->DefaultObject);

	return Default;
}

}


