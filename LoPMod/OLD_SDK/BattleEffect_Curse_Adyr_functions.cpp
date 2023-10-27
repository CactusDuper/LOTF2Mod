#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_Curse_Adyr.BattleEffect_Curse_Adyr_C
// (None)

class UClass* UBattleEffect_Curse_Adyr_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_Curse_Adyr_C");

	return Clss;
}


// BattleEffect_Curse_Adyr_C BattleEffect_Curse_Adyr.Default__BattleEffect_Curse_Adyr_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_Curse_Adyr_C* UBattleEffect_Curse_Adyr_C::GetDefaultObj()
{
	static class UBattleEffect_Curse_Adyr_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_Curse_Adyr_C*>(UBattleEffect_Curse_Adyr_C::StaticClass()->DefaultObject);

	return Default;
}

}


