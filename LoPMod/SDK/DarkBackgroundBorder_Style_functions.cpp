#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DarkBackgroundBorder_Style.DarkBackgroundBorder_Style_C
// (None)

class UClass* UDarkBackgroundBorder_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DarkBackgroundBorder_Style_C");

	return Clss;
}


// DarkBackgroundBorder_Style_C DarkBackgroundBorder_Style.Default__DarkBackgroundBorder_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDarkBackgroundBorder_Style_C* UDarkBackgroundBorder_Style_C::GetDefaultObj()
{
	static class UDarkBackgroundBorder_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDarkBackgroundBorder_Style_C*>(UDarkBackgroundBorder_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


