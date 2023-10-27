#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_CON_IncreaseFireDefense.BattleEffect_CON_IncreaseFireDefense_C
// (None)

class UClass* UBattleEffect_CON_IncreaseFireDefense_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_CON_IncreaseFireDefense_C");

	return Clss;
}


// BattleEffect_CON_IncreaseFireDefense_C BattleEffect_CON_IncreaseFireDefense.Default__BattleEffect_CON_IncreaseFireDefense_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_CON_IncreaseFireDefense_C* UBattleEffect_CON_IncreaseFireDefense_C::GetDefaultObj()
{
	static class UBattleEffect_CON_IncreaseFireDefense_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_CON_IncreaseFireDefense_C*>(UBattleEffect_CON_IncreaseFireDefense_C::StaticClass()->DefaultObject);

	return Default;
}

}


