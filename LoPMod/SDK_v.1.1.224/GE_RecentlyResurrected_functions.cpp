#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RecentlyResurrected.GE_RecentlyResurrected_C
// (None)

class UClass* UGE_RecentlyResurrected_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RecentlyResurrected_C");

	return Clss;
}


// GE_RecentlyResurrected_C GE_RecentlyResurrected.Default__GE_RecentlyResurrected_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RecentlyResurrected_C* UGE_RecentlyResurrected_C::GetDefaultObj()
{
	static class UGE_RecentlyResurrected_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RecentlyResurrected_C*>(UGE_RecentlyResurrected_C::StaticClass()->DefaultObject);

	return Default;
}

}


