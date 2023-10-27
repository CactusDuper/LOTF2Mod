#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PerfectDodgeHitstop.GE_PerfectDodgeHitstop_C
// (None)

class UClass* UGE_PerfectDodgeHitstop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PerfectDodgeHitstop_C");

	return Clss;
}


// GE_PerfectDodgeHitstop_C GE_PerfectDodgeHitstop.Default__GE_PerfectDodgeHitstop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PerfectDodgeHitstop_C* UGE_PerfectDodgeHitstop_C::GetDefaultObj()
{
	static class UGE_PerfectDodgeHitstop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PerfectDodgeHitstop_C*>(UGE_PerfectDodgeHitstop_C::StaticClass()->DefaultObject);

	return Default;
}

}


