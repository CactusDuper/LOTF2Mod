#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TriggerBlockAbilities_Jump_Axiom.GE_TriggerBlockAbilities_Jump_Axiom_C
// (None)

class UClass* UGE_TriggerBlockAbilities_Jump_Axiom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TriggerBlockAbilities_Jump_Axiom_C");

	return Clss;
}


// GE_TriggerBlockAbilities_Jump_Axiom_C GE_TriggerBlockAbilities_Jump_Axiom.Default__GE_TriggerBlockAbilities_Jump_Axiom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TriggerBlockAbilities_Jump_Axiom_C* UGE_TriggerBlockAbilities_Jump_Axiom_C::GetDefaultObj()
{
	static class UGE_TriggerBlockAbilities_Jump_Axiom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TriggerBlockAbilities_Jump_Axiom_C*>(UGE_TriggerBlockAbilities_Jump_Axiom_C::StaticClass()->DefaultObject);

	return Default;
}

}

