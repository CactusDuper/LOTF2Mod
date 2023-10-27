#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavigationBox_Text_Style.NavigationBox_Text_Style_C
// (None)

class UClass* UNavigationBox_Text_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavigationBox_Text_Style_C");

	return Clss;
}


// NavigationBox_Text_Style_C NavigationBox_Text_Style.Default__NavigationBox_Text_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavigationBox_Text_Style_C* UNavigationBox_Text_Style_C::GetDefaultObj()
{
	static class UNavigationBox_Text_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavigationBox_Text_Style_C*>(UNavigationBox_Text_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


