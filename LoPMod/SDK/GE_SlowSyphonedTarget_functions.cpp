#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SlowSyphonedTarget.GE_SlowSyphonedTarget_C
// (None)

class UClass* UGE_SlowSyphonedTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SlowSyphonedTarget_C");

	return Clss;
}


// GE_SlowSyphonedTarget_C GE_SlowSyphonedTarget.Default__GE_SlowSyphonedTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SlowSyphonedTarget_C* UGE_SlowSyphonedTarget_C::GetDefaultObj()
{
	static class UGE_SlowSyphonedTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SlowSyphonedTarget_C*>(UGE_SlowSyphonedTarget_C::StaticClass()->DefaultObject);

	return Default;
}

}


