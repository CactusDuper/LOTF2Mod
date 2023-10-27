#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Warning_Border_Style.Warning_Border_Style_C
// (None)

class UClass* UWarning_Border_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Warning_Border_Style_C");

	return Clss;
}


// Warning_Border_Style_C Warning_Border_Style.Default__Warning_Border_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWarning_Border_Style_C* UWarning_Border_Style_C::GetDefaultObj()
{
	static class UWarning_Border_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWarning_Border_Style_C*>(UWarning_Border_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


