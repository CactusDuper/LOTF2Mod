#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ConnectingToHost.WBP_ConnectingToHost_C
// (None)

class UClass* UWBP_ConnectingToHost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ConnectingToHost_C");

	return Clss;
}


// WBP_ConnectingToHost_C WBP_ConnectingToHost.Default__WBP_ConnectingToHost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ConnectingToHost_C* UWBP_ConnectingToHost_C::GetDefaultObj()
{
	static class UWBP_ConnectingToHost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ConnectingToHost_C*>(UWBP_ConnectingToHost_C::StaticClass()->DefaultObject);

	return Default;
}

}


