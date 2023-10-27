#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HUD_VigorAmount_Style.HUD_VigorAmount_Style_C
// (None)

class UClass* UHUD_VigorAmount_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD_VigorAmount_Style_C");

	return Clss;
}


// HUD_VigorAmount_Style_C HUD_VigorAmount_Style.Default__HUD_VigorAmount_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUD_VigorAmount_Style_C* UHUD_VigorAmount_Style_C::GetDefaultObj()
{
	static class UHUD_VigorAmount_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUD_VigorAmount_Style_C*>(UHUD_VigorAmount_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


