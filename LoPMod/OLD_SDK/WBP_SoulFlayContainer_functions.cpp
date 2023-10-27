#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SoulFlayContainer.WBP_SoulFlayContainer_C
// (None)

class UClass* UWBP_SoulFlayContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SoulFlayContainer_C");

	return Clss;
}


// WBP_SoulFlayContainer_C WBP_SoulFlayContainer.Default__WBP_SoulFlayContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SoulFlayContainer_C* UWBP_SoulFlayContainer_C::GetDefaultObj()
{
	static class UWBP_SoulFlayContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SoulFlayContainer_C*>(UWBP_SoulFlayContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


