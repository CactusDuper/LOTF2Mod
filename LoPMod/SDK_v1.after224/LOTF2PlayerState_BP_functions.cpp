#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LOTF2PlayerState_BP.LOTF2PlayerState_BP_C
// (Actor)

class UClass* ALOTF2PlayerState_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LOTF2PlayerState_BP_C");

	return Clss;
}


// LOTF2PlayerState_BP_C LOTF2PlayerState_BP.Default__LOTF2PlayerState_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALOTF2PlayerState_BP_C* ALOTF2PlayerState_BP_C::GetDefaultObj()
{
	static class ALOTF2PlayerState_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALOTF2PlayerState_BP_C*>(ALOTF2PlayerState_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


