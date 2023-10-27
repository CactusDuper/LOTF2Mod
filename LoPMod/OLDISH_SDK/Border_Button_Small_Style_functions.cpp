#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_Button_Small_Style.Border_Button_Small_Style_C
// (None)

class UClass* UBorder_Button_Small_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_Button_Small_Style_C");

	return Clss;
}


// Border_Button_Small_Style_C Border_Button_Small_Style.Default__Border_Button_Small_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_Button_Small_Style_C* UBorder_Button_Small_Style_C::GetDefaultObj()
{
	static class UBorder_Button_Small_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_Button_Small_Style_C*>(UBorder_Button_Small_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


