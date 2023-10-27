#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_MISC_IncreaseHealth40Percent.BattleEffect_MISC_IncreaseHealth40Percent_C
// (None)

class UClass* UBattleEffect_MISC_IncreaseHealth40Percent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_MISC_IncreaseHealth40Percent_C");

	return Clss;
}


// BattleEffect_MISC_IncreaseHealth40Percent_C BattleEffect_MISC_IncreaseHealth40Percent.Default__BattleEffect_MISC_IncreaseHealth40Percent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_MISC_IncreaseHealth40Percent_C* UBattleEffect_MISC_IncreaseHealth40Percent_C::GetDefaultObj()
{
	static class UBattleEffect_MISC_IncreaseHealth40Percent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_MISC_IncreaseHealth40Percent_C*>(UBattleEffect_MISC_IncreaseHealth40Percent_C::StaticClass()->DefaultObject);

	return Default;
}

}


