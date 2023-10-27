#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PerfectDodgeSoulFlayBoost.GE_PerfectDodgeSoulFlayBoost_C
// (None)

class UClass* UGE_PerfectDodgeSoulFlayBoost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PerfectDodgeSoulFlayBoost_C");

	return Clss;
}


// GE_PerfectDodgeSoulFlayBoost_C GE_PerfectDodgeSoulFlayBoost.Default__GE_PerfectDodgeSoulFlayBoost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PerfectDodgeSoulFlayBoost_C* UGE_PerfectDodgeSoulFlayBoost_C::GetDefaultObj()
{
	static class UGE_PerfectDodgeSoulFlayBoost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PerfectDodgeSoulFlayBoost_C*>(UGE_PerfectDodgeSoulFlayBoost_C::StaticClass()->DefaultObject);

	return Default;
}

}


