#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RelaxedIdle.GE_RelaxedIdle_C
// (None)

class UClass* UGE_RelaxedIdle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RelaxedIdle_C");

	return Clss;
}


// GE_RelaxedIdle_C GE_RelaxedIdle.Default__GE_RelaxedIdle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RelaxedIdle_C* UGE_RelaxedIdle_C::GetDefaultObj()
{
	static class UGE_RelaxedIdle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RelaxedIdle_C*>(UGE_RelaxedIdle_C::StaticClass()->DefaultObject);

	return Default;
}

}


