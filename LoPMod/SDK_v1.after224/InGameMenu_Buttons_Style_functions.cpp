#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InGameMenu_Buttons_Style.InGameMenu_Buttons_Style_C
// (None)

class UClass* UInGameMenu_Buttons_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InGameMenu_Buttons_Style_C");

	return Clss;
}


// InGameMenu_Buttons_Style_C InGameMenu_Buttons_Style.Default__InGameMenu_Buttons_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInGameMenu_Buttons_Style_C* UInGameMenu_Buttons_Style_C::GetDefaultObj()
{
	static class UInGameMenu_Buttons_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInGameMenu_Buttons_Style_C*>(UInGameMenu_Buttons_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


