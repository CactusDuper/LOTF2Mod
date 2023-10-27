#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_DEV_ApplyPoison.BattleEffect_DEV_ApplyPoison_C
// (None)

class UClass* UBattleEffect_DEV_ApplyPoison_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_DEV_ApplyPoison_C");

	return Clss;
}


// BattleEffect_DEV_ApplyPoison_C BattleEffect_DEV_ApplyPoison.Default__BattleEffect_DEV_ApplyPoison_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_DEV_ApplyPoison_C* UBattleEffect_DEV_ApplyPoison_C::GetDefaultObj()
{
	static class UBattleEffect_DEV_ApplyPoison_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_DEV_ApplyPoison_C*>(UBattleEffect_DEV_ApplyPoison_C::StaticClass()->DefaultObject);

	return Default;
}

}


