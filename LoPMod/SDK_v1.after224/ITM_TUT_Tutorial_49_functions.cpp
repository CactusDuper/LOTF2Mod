#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ITM_TUT_Tutorial_49.ITM_TUT_Tutorial_49_C
// (None)

class UClass* UITM_TUT_Tutorial_49_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ITM_TUT_Tutorial_49_C");

	return Clss;
}


// ITM_TUT_Tutorial_49_C ITM_TUT_Tutorial_49.Default__ITM_TUT_Tutorial_49_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UITM_TUT_Tutorial_49_C* UITM_TUT_Tutorial_49_C::GetDefaultObj()
{
	static class UITM_TUT_Tutorial_49_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UITM_TUT_Tutorial_49_C*>(UITM_TUT_Tutorial_49_C::StaticClass()->DefaultObject);

	return Default;
}

}


