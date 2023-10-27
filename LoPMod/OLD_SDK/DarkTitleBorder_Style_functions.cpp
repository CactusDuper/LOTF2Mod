#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DarkTitleBorder_Style.DarkTitleBorder_Style_C
// (None)

class UClass* UDarkTitleBorder_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DarkTitleBorder_Style_C");

	return Clss;
}


// DarkTitleBorder_Style_C DarkTitleBorder_Style.Default__DarkTitleBorder_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDarkTitleBorder_Style_C* UDarkTitleBorder_Style_C::GetDefaultObj()
{
	static class UDarkTitleBorder_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDarkTitleBorder_Style_C*>(UDarkTitleBorder_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


