#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_MainMenu.W_MainMenu_C
// (None)

class UClass* UW_MainMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_MainMenu_C");

	return Clss;
}


// W_MainMenu_C W_MainMenu.Default__W_MainMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_MainMenu_C* UW_MainMenu_C::GetDefaultObj()
{
	static class UW_MainMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_MainMenu_C*>(UW_MainMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_MainMenu.W_MainMenu_C.InitForFirstPlayIfRequired
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInGameMenuPanel*            CallFunc_GetCurrentPanel_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexGameUserSettings*        K2Node_DynamicCast_AsHex_Game_User_Settings                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDisplayBrightnessCalibrationAtStart_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_C::InitForFirstPlayIfRequired(class UInGameMenuPanel* CallFunc_GetCurrentPanel_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UHexGameUserSettings* K2Node_DynamicCast_AsHex_Game_User_Settings, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetDisplayBrightnessCalibrationAtStart_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_C", "InitForFirstPlayIfRequired");

	Params::UW_MainMenu_C_InitForFirstPlayIfRequired_Params Parms{};

	Parms.CallFunc_GetCurrentPanel_ReturnValue = CallFunc_GetCurrentPanel_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsHex_Game_User_Settings = K2Node_DynamicCast_AsHex_Game_User_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDisplayBrightnessCalibrationAtStart_ReturnValue = CallFunc_GetDisplayBrightnessCalibrationAtStart_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu.W_MainMenu_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_MainMenu_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu.W_MainMenu_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_MainMenu_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu.W_MainMenu_C.ExecuteUbergraph_W_MainMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_C::ExecuteUbergraph_W_MainMenu(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_C", "ExecuteUbergraph_W_MainMenu");

	Params::UW_MainMenu_C_ExecuteUbergraph_W_MainMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue_1 = CallFunc_PostEventAtLocation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


