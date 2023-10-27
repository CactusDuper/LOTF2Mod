#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PoisePVPStatusPoiseBar.WBP_PoisePVPStatusPoiseBar_C
// (None)

class UClass* UWBP_PoisePVPStatusPoiseBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PoisePVPStatusPoiseBar_C");

	return Clss;
}


// WBP_PoisePVPStatusPoiseBar_C WBP_PoisePVPStatusPoiseBar.Default__WBP_PoisePVPStatusPoiseBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PoisePVPStatusPoiseBar_C* UWBP_PoisePVPStatusPoiseBar_C::GetDefaultObj()
{
	static class UWBP_PoisePVPStatusPoiseBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PoisePVPStatusPoiseBar_C*>(UWBP_PoisePVPStatusPoiseBar_C::StaticClass()->DefaultObject);

	return Default;
}

}


