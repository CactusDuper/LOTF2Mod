#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_GEN_Mechanic_Transition_Immunity_Temporary.GE_GEN_Mechanic_Transition_Immunity_Temporary_C
// (None)

class UClass* UGE_GEN_Mechanic_Transition_Immunity_Temporary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_GEN_Mechanic_Transition_Immunity_Temporary_C");

	return Clss;
}


// GE_GEN_Mechanic_Transition_Immunity_Temporary_C GE_GEN_Mechanic_Transition_Immunity_Temporary.Default__GE_GEN_Mechanic_Transition_Immunity_Temporary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_GEN_Mechanic_Transition_Immunity_Temporary_C* UGE_GEN_Mechanic_Transition_Immunity_Temporary_C::GetDefaultObj()
{
	static class UGE_GEN_Mechanic_Transition_Immunity_Temporary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_GEN_Mechanic_Transition_Immunity_Temporary_C*>(UGE_GEN_Mechanic_Transition_Immunity_Temporary_C::StaticClass()->DefaultObject);

	return Default;
}

}


