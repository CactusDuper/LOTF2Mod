#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SettingsMenu.WBP_SettingsMenu_C
// (None)

class UClass* UWBP_SettingsMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SettingsMenu_C");

	return Clss;
}


// WBP_SettingsMenu_C WBP_SettingsMenu.Default__WBP_SettingsMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SettingsMenu_C* UWBP_SettingsMenu_C::GetDefaultObj()
{
	static class UWBP_SettingsMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SettingsMenu_C*>(UWBP_SettingsMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetDesiredFocusTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_SettingsMenu_C::GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "GetDesiredFocusTarget");

	Params::UWBP_SettingsMenu_C_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnNavigated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UGameSetting*                Setting                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::OnNavigated(class UGameSetting* Setting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "OnNavigated");

	Params::UWBP_SettingsMenu_C_OnNavigated_Params Parms{};

	Parms.Setting = Setting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.SetDetailsPanelPosition
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESettingScreenDetailsPanelPositionPosition                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::SetDetailsPanelPosition(enum class ESettingScreenDetailsPanelPosition Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "SetDetailsPanelPosition");

	Params::UWBP_SettingsMenu_C_SetDetailsPanelPosition_Params Parms{};

	Parms.Position = Position;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ExecuteUbergraph_WBP_SettingsMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESettingScreenDetailsPanelPositionTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESettingScreenDetailsPanelPositionTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESettingScreenDetailsPanelPositionTemp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESettingScreenDetailsPanelPositionTemp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameSetting*                K2Node_Event_setting                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetDevName_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESettingScreenDetailsPanelPositionK2Node_Event_position                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_GameSettingPanel_C*     K2Node_DynamicCast_AsWBP_Game_Setting_Panel                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESettingScreenDetailsPanelPositionK2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESettingScreenDetailsPanelPositionK2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsMenu_C::ExecuteUbergraph_WBP_SettingsMenu(int32 EntryPoint, bool Temp_bool_Variable, enum class ESettingScreenDetailsPanelPosition Temp_byte_Variable, enum class ESettingScreenDetailsPanelPosition Temp_byte_Variable_1, enum class ESettingScreenDetailsPanelPosition Temp_byte_Variable_2, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, enum class ESettingScreenDetailsPanelPosition Temp_byte_Variable_3, class UGameSetting* K2Node_Event_setting, class FName CallFunc_GetDevName_ReturnValue, enum class ESettingScreenDetailsPanelPosition K2Node_Event_position, bool CallFunc_Array_Contains_ReturnValue, bool K2Node_Select_Default, bool CallFunc_Array_Contains_ReturnValue_1, class UWBP_GameSettingPanel_C* K2Node_DynamicCast_AsWBP_Game_Setting_Panel, bool K2Node_DynamicCast_bSuccess, enum class ESettingScreenDetailsPanelPosition K2Node_Select_Default_1, enum class ESettingScreenDetailsPanelPosition K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsMenu_C", "ExecuteUbergraph_WBP_SettingsMenu");

	Params::UWBP_SettingsMenu_C_ExecuteUbergraph_WBP_SettingsMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Event_setting = K2Node_Event_setting;
	Parms.CallFunc_GetDevName_ReturnValue = CallFunc_GetDevName_ReturnValue;
	Parms.K2Node_Event_position = K2Node_Event_position;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWBP_Game_Setting_Panel = K2Node_DynamicCast_AsWBP_Game_Setting_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


