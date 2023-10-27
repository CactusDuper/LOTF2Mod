#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DynamicHitstop.GE_DynamicHitstop_C
// (None)

class UClass* UGE_DynamicHitstop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DynamicHitstop_C");

	return Clss;
}


// GE_DynamicHitstop_C GE_DynamicHitstop.Default__GE_DynamicHitstop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DynamicHitstop_C* UGE_DynamicHitstop_C::GetDefaultObj()
{
	static class UGE_DynamicHitstop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DynamicHitstop_C*>(UGE_DynamicHitstop_C::StaticClass()->DefaultObject);

	return Default;
}

}


