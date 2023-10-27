#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SoulFlayCost.GE_SoulFlayCost_C
// (None)

class UClass* UGE_SoulFlayCost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SoulFlayCost_C");

	return Clss;
}


// GE_SoulFlayCost_C GE_SoulFlayCost.Default__GE_SoulFlayCost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SoulFlayCost_C* UGE_SoulFlayCost_C::GetDefaultObj()
{
	static class UGE_SoulFlayCost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SoulFlayCost_C*>(UGE_SoulFlayCost_C::StaticClass()->DefaultObject);

	return Default;
}

}


