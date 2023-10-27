#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RevengeTarget.GE_RevengeTarget_C
// (None)

class UClass* UGE_RevengeTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RevengeTarget_C");

	return Clss;
}


// GE_RevengeTarget_C GE_RevengeTarget.Default__GE_RevengeTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RevengeTarget_C* UGE_RevengeTarget_C::GetDefaultObj()
{
	static class UGE_RevengeTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RevengeTarget_C*>(UGE_RevengeTarget_C::StaticClass()->DefaultObject);

	return Default;
}

}


