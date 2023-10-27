#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_BodyShape.WBP_BodyShape_C
// (None)

class UClass* UWBP_BodyShape_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_BodyShape_C");

	return Clss;
}


// WBP_BodyShape_C WBP_BodyShape.Default__WBP_BodyShape_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_BodyShape_C* UWBP_BodyShape_C::GetDefaultObj()
{
	static class UWBP_BodyShape_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_BodyShape_C*>(UWBP_BodyShape_C::StaticClass()->DefaultObject);

	return Default;
}

}


