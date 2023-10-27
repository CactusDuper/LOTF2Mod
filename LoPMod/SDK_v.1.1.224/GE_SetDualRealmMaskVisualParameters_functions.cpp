#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SetDualRealmMaskVisualParameters.GE_SetDualRealmMaskVisualParameters_C
// (None)

class UClass* UGE_SetDualRealmMaskVisualParameters_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SetDualRealmMaskVisualParameters_C");

	return Clss;
}


// GE_SetDualRealmMaskVisualParameters_C GE_SetDualRealmMaskVisualParameters.Default__GE_SetDualRealmMaskVisualParameters_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SetDualRealmMaskVisualParameters_C* UGE_SetDualRealmMaskVisualParameters_C::GetDefaultObj()
{
	static class UGE_SetDualRealmMaskVisualParameters_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SetDualRealmMaskVisualParameters_C*>(UGE_SetDualRealmMaskVisualParameters_C::StaticClass()->DefaultObject);

	return Default;
}

}


