#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DebugLongParryWindow.GE_DebugLongParryWindow_C
// (None)

class UClass* UGE_DebugLongParryWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DebugLongParryWindow_C");

	return Clss;
}


// GE_DebugLongParryWindow_C GE_DebugLongParryWindow.Default__GE_DebugLongParryWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DebugLongParryWindow_C* UGE_DebugLongParryWindow_C::GetDefaultObj()
{
	static class UGE_DebugLongParryWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DebugLongParryWindow_C*>(UGE_DebugLongParryWindow_C::StaticClass()->DefaultObject);

	return Default;
}

}


