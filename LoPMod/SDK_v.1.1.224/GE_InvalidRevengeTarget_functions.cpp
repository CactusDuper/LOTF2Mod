#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_InvalidRevengeTarget.GE_InvalidRevengeTarget_C
// (None)

class UClass* UGE_InvalidRevengeTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_InvalidRevengeTarget_C");

	return Clss;
}


// GE_InvalidRevengeTarget_C GE_InvalidRevengeTarget.Default__GE_InvalidRevengeTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_InvalidRevengeTarget_C* UGE_InvalidRevengeTarget_C::GetDefaultObj()
{
	static class UGE_InvalidRevengeTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_InvalidRevengeTarget_C*>(UGE_InvalidRevengeTarget_C::StaticClass()->DefaultObject);

	return Default;
}

}


