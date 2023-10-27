#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SettingDetailViewPanel.WBP_SettingDetailViewPanel_C
// (None)

class UClass* UWBP_SettingDetailViewPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SettingDetailViewPanel_C");

	return Clss;
}


// WBP_SettingDetailViewPanel_C WBP_SettingDetailViewPanel.Default__WBP_SettingDetailViewPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SettingDetailViewPanel_C* UWBP_SettingDetailViewPanel_C::GetDefaultObj()
{
	static class UWBP_SettingDetailViewPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SettingDetailViewPanel_C*>(UWBP_SettingDetailViewPanel_C::StaticClass()->DefaultObject);

	return Default;
}

}


