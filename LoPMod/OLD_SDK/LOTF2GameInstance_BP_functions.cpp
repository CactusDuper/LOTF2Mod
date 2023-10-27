#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LOTF2GameInstance_BP.LOTF2GameInstance_BP_C
// (None)

class UClass* ULOTF2GameInstance_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LOTF2GameInstance_BP_C");

	return Clss;
}


// LOTF2GameInstance_BP_C LOTF2GameInstance_BP.Default__LOTF2GameInstance_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULOTF2GameInstance_BP_C* ULOTF2GameInstance_BP_C::GetDefaultObj()
{
	static class ULOTF2GameInstance_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULOTF2GameInstance_BP_C*>(ULOTF2GameInstance_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


