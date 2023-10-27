#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WhiteBGBorder_Style.WhiteBGBorder_Style_C
// (None)

class UClass* UWhiteBGBorder_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WhiteBGBorder_Style_C");

	return Clss;
}


// WhiteBGBorder_Style_C WhiteBGBorder_Style.Default__WhiteBGBorder_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWhiteBGBorder_Style_C* UWhiteBGBorder_Style_C::GetDefaultObj()
{
	static class UWhiteBGBorder_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWhiteBGBorder_Style_C*>(UWhiteBGBorder_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


