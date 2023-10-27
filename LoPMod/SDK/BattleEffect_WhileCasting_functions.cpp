#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_WhileCasting.BattleEffect_WhileCasting_C
// (None)

class UClass* UBattleEffect_WhileCasting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_WhileCasting_C");

	return Clss;
}


// BattleEffect_WhileCasting_C BattleEffect_WhileCasting.Default__BattleEffect_WhileCasting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_WhileCasting_C* UBattleEffect_WhileCasting_C::GetDefaultObj()
{
	static class UBattleEffect_WhileCasting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_WhileCasting_C*>(UBattleEffect_WhileCasting_C::StaticClass()->DefaultObject);

	return Default;
}

}


