#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_BUFF_HealOnSmiteApplicationEffect.BattleEffect_BUFF_HealOnSmiteApplicationEffect_C
// (None)

class UClass* UBattleEffect_BUFF_HealOnSmiteApplicationEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_BUFF_HealOnSmiteApplicationEffect_C");

	return Clss;
}


// BattleEffect_BUFF_HealOnSmiteApplicationEffect_C BattleEffect_BUFF_HealOnSmiteApplicationEffect.Default__BattleEffect_BUFF_HealOnSmiteApplicationEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_BUFF_HealOnSmiteApplicationEffect_C* UBattleEffect_BUFF_HealOnSmiteApplicationEffect_C::GetDefaultObj()
{
	static class UBattleEffect_BUFF_HealOnSmiteApplicationEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_BUFF_HealOnSmiteApplicationEffect_C*>(UBattleEffect_BUFF_HealOnSmiteApplicationEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


