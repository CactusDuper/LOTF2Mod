#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WhiteLineBorder_Style.WhiteLineBorder_Style_C
// (None)

class UClass* UWhiteLineBorder_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WhiteLineBorder_Style_C");

	return Clss;
}


// WhiteLineBorder_Style_C WhiteLineBorder_Style.Default__WhiteLineBorder_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWhiteLineBorder_Style_C* UWhiteLineBorder_Style_C::GetDefaultObj()
{
	static class UWhiteLineBorder_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWhiteLineBorder_Style_C*>(UWhiteLineBorder_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


