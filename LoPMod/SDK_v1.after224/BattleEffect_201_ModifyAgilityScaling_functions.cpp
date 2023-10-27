#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_201_ModifyAgilityScaling.BattleEffect_201_ModifyAgilityScaling_C
// (None)

class UClass* UBattleEffect_201_ModifyAgilityScaling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_201_ModifyAgilityScaling_C");

	return Clss;
}


// BattleEffect_201_ModifyAgilityScaling_C BattleEffect_201_ModifyAgilityScaling.Default__BattleEffect_201_ModifyAgilityScaling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_201_ModifyAgilityScaling_C* UBattleEffect_201_ModifyAgilityScaling_C::GetDefaultObj()
{
	static class UBattleEffect_201_ModifyAgilityScaling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_201_ModifyAgilityScaling_C*>(UBattleEffect_201_ModifyAgilityScaling_C::StaticClass()->DefaultObject);

	return Default;
}

}


