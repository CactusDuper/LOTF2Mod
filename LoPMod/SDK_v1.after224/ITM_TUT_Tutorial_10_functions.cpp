#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ITM_TUT_Tutorial_10.ITM_TUT_Tutorial_10_C
// (None)

class UClass* UITM_TUT_Tutorial_10_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ITM_TUT_Tutorial_10_C");

	return Clss;
}


// ITM_TUT_Tutorial_10_C ITM_TUT_Tutorial_10.Default__ITM_TUT_Tutorial_10_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UITM_TUT_Tutorial_10_C* UITM_TUT_Tutorial_10_C::GetDefaultObj()
{
	static class UITM_TUT_Tutorial_10_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UITM_TUT_Tutorial_10_C*>(UITM_TUT_Tutorial_10_C::StaticClass()->DefaultObject);

	return Default;
}

}


