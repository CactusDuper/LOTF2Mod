#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ColorInputBorder_Style.ColorInputBorder_Style_C
// (None)

class UClass* UColorInputBorder_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ColorInputBorder_Style_C");

	return Clss;
}


// ColorInputBorder_Style_C ColorInputBorder_Style.Default__ColorInputBorder_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UColorInputBorder_Style_C* UColorInputBorder_Style_C::GetDefaultObj()
{
	static class UColorInputBorder_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UColorInputBorder_Style_C*>(UColorInputBorder_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


