#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SettingListEntry_SessionKey.WBP_SettingListEntry_SessionKey_C
// (None)

class UClass* UWBP_SettingListEntry_SessionKey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SettingListEntry_SessionKey_C");

	return Clss;
}


// WBP_SettingListEntry_SessionKey_C WBP_SettingListEntry_SessionKey.Default__WBP_SettingListEntry_SessionKey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SettingListEntry_SessionKey_C* UWBP_SettingListEntry_SessionKey_C::GetDefaultObj()
{
	static class UWBP_SettingListEntry_SessionKey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SettingListEntry_SessionKey_C*>(UWBP_SettingListEntry_SessionKey_C::StaticClass()->DefaultObject);

	return Default;
}

}


