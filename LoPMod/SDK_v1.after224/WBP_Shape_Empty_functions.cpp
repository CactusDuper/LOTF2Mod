#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Shape_Empty.WBP_Shape_Empty_C
// (None)

class UClass* UWBP_Shape_Empty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Shape_Empty_C");

	return Clss;
}


// WBP_Shape_Empty_C WBP_Shape_Empty.Default__WBP_Shape_Empty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Shape_Empty_C* UWBP_Shape_Empty_C::GetDefaultObj()
{
	static class UWBP_Shape_Empty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Shape_Empty_C*>(UWBP_Shape_Empty_C::StaticClass()->DefaultObject);

	return Default;
}

}


