#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ITM_TUT_Tutorial_42.ITM_TUT_Tutorial_42_C
// (None)

class UClass* UITM_TUT_Tutorial_42_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ITM_TUT_Tutorial_42_C");

	return Clss;
}


// ITM_TUT_Tutorial_42_C ITM_TUT_Tutorial_42.Default__ITM_TUT_Tutorial_42_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UITM_TUT_Tutorial_42_C* UITM_TUT_Tutorial_42_C::GetDefaultObj()
{
	static class UITM_TUT_Tutorial_42_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UITM_TUT_Tutorial_42_C*>(UITM_TUT_Tutorial_42_C::StaticClass()->DefaultObject);

	return Default;
}

}


