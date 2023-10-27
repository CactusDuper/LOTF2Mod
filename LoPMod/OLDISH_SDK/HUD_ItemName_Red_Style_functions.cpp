#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HUD_ItemName_Red_Style.HUD_ItemName_Red_Style_C
// (None)

class UClass* UHUD_ItemName_Red_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD_ItemName_Red_Style_C");

	return Clss;
}


// HUD_ItemName_Red_Style_C HUD_ItemName_Red_Style.Default__HUD_ItemName_Red_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUD_ItemName_Red_Style_C* UHUD_ItemName_Red_Style_C::GetDefaultObj()
{
	static class UHUD_ItemName_Red_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUD_ItemName_Red_Style_C*>(UHUD_ItemName_Red_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


