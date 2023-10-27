#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ITM_TUT_Tutorial_12.ITM_TUT_Tutorial_12_C
// (None)

class UClass* UITM_TUT_Tutorial_12_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ITM_TUT_Tutorial_12_C");

	return Clss;
}


// ITM_TUT_Tutorial_12_C ITM_TUT_Tutorial_12.Default__ITM_TUT_Tutorial_12_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UITM_TUT_Tutorial_12_C* UITM_TUT_Tutorial_12_C::GetDefaultObj()
{
	static class UITM_TUT_Tutorial_12_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UITM_TUT_Tutorial_12_C*>(UITM_TUT_Tutorial_12_C::StaticClass()->DefaultObject);

	return Default;
}

}


