#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PerfectDodgeWindowTiming.GE_PerfectDodgeWindowTiming_C
// (None)

class UClass* UGE_PerfectDodgeWindowTiming_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PerfectDodgeWindowTiming_C");

	return Clss;
}


// GE_PerfectDodgeWindowTiming_C GE_PerfectDodgeWindowTiming.Default__GE_PerfectDodgeWindowTiming_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PerfectDodgeWindowTiming_C* UGE_PerfectDodgeWindowTiming_C::GetDefaultObj()
{
	static class UGE_PerfectDodgeWindowTiming_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PerfectDodgeWindowTiming_C*>(UGE_PerfectDodgeWindowTiming_C::StaticClass()->DefaultObject);

	return Default;
}

}


