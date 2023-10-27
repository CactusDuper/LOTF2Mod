#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BattleEffect_Quest_ThehkIhir_Step10_AbbessHP.BattleEffect_Quest_ThehkIhir_Step10_AbbessHP_C
// (None)

class UClass* UBattleEffect_Quest_ThehkIhir_Step10_AbbessHP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattleEffect_Quest_ThehkIhir_Step10_AbbessHP_C");

	return Clss;
}


// BattleEffect_Quest_ThehkIhir_Step10_AbbessHP_C BattleEffect_Quest_ThehkIhir_Step10_AbbessHP.Default__BattleEffect_Quest_ThehkIhir_Step10_AbbessHP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattleEffect_Quest_ThehkIhir_Step10_AbbessHP_C* UBattleEffect_Quest_ThehkIhir_Step10_AbbessHP_C::GetDefaultObj()
{
	static class UBattleEffect_Quest_ThehkIhir_Step10_AbbessHP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattleEffect_Quest_ThehkIhir_Step10_AbbessHP_C*>(UBattleEffect_Quest_ThehkIhir_Step10_AbbessHP_C::StaticClass()->DefaultObject);

	return Default;
}

}


