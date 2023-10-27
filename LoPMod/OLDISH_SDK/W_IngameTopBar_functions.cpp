#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_IngameTopBar.W_IngameTopBar_C
// (None)

class UClass* UW_IngameTopBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_IngameTopBar_C");

	return Clss;
}


// W_IngameTopBar_C W_IngameTopBar.Default__W_IngameTopBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_IngameTopBar_C* UW_IngameTopBar_C::GetDefaultObj()
{
	static class UW_IngameTopBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_IngameTopBar_C*>(UW_IngameTopBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_IngameTopBar.W_IngameTopBar_C.Setup Spectator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_Spectator                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_IngameTopBar_C::Setup_Spectator(bool Is_Spectator, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_IngameTopBar_C", "Setup Spectator");

	Params::UW_IngameTopBar_C_Setup_Spectator_Params Parms{};

	Parms.Is_Spectator = Is_Spectator;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_IngameTopBar.W_IngameTopBar_C.Set Visibility Options
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Buttons_Visible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Navigation_Visible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Title_Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Title_Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDeveloperMenuSubsystem*     CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_IngameTopBar_C::Set_Visibility_Options(bool Buttons_Visible, bool Navigation_Visible, bool Title_Visible, class FText Title_Text, class UDeveloperMenuSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue, bool CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_IngameTopBar_C", "Set Visibility Options");

	Params::UW_IngameTopBar_C_Set_Visibility_Options_Params Parms{};

	Parms.Buttons_Visible = Buttons_Visible;
	Parms.Navigation_Visible = Navigation_Visible;
	Parms.Title_Visible = Title_Visible;
	Parms.Title_Text = Title_Text;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue = CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue;
	Parms.CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue_1 = CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_IngameTopBar.W_IngameTopBar_C.Reset Extension Points
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHexLocalPlayer*             LocalPlayer                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_1                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_2                    (NoDestructor, HasGetValueTypeHash)

void UW_IngameTopBar_C::Reset_Extension_Points(class UHexLocalPlayer* LocalPlayer, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_IngameTopBar_C", "Reset Extension Points");

	Params::UW_IngameTopBar_C_Reset_Extension_Points_Params Parms{};

	Parms.LocalPlayer = LocalPlayer;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_1 = CallFunc_MakeLiteralGameplayTag_ReturnValue_1;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_2 = CallFunc_MakeLiteralGameplayTag_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_IngameTopBar.W_IngameTopBar_C.Update Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputActionImage*           Input_Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetInputAction_ReturnValue                              (NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetControllerIconByEventName_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_IngameTopBar_C::Update_Icon(class UInputActionImage* Input_Image, const struct FGameplayTag& CallFunc_GetInputAction_ReturnValue, class UTexture2D* CallFunc_GetControllerIconByEventName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_IngameTopBar_C", "Update Icon");

	Params::UW_IngameTopBar_C_Update_Icon_Params Parms{};

	Parms.Input_Image = Input_Image;
	Parms.CallFunc_GetInputAction_ReturnValue = CallFunc_GetInputAction_ReturnValue;
	Parms.CallFunc_GetControllerIconByEventName_ReturnValue = CallFunc_GetControllerIconByEventName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_IngameTopBar.W_IngameTopBar_C.SetOnlineText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        OnlineText                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_IngameTopBar_C::SetOnlineText(class FText& OnlineText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_IngameTopBar_C", "SetOnlineText");

	Params::UW_IngameTopBar_C_SetOnlineText_Params Parms{};

	Parms.OnlineText = OnlineText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_IngameTopBar.W_IngameTopBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_IngameTopBar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_IngameTopBar_C", "PreConstruct");

	Params::UW_IngameTopBar_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_IngameTopBar.W_IngameTopBar_C.On Input Method Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_IngameTopBar_C::On_Input_Method_Changed(enum class ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_IngameTopBar_C", "On Input Method Changed");

	Params::UW_IngameTopBar_C_On_Input_Method_Changed_Params Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_IngameTopBar.W_IngameTopBar_C.SetVisibilityOptions
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bButtonsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bNavigationVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bTitleVisible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Title                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_IngameTopBar_C::SetVisibilityOptions(bool bButtonsVisible, bool bNavigationVisible, bool bTitleVisible, class FText& Title)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_IngameTopBar_C", "SetVisibilityOptions");

	Params::UW_IngameTopBar_C_SetVisibilityOptions_Params Parms{};

	Parms.bButtonsVisible = bButtonsVisible;
	Parms.bNavigationVisible = bNavigationVisible;
	Parms.bTitleVisible = bTitleVisible;
	Parms.Title = Title;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_IngameTopBar.W_IngameTopBar_C.SetPanelTitle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_IngameTopBar_C::SetPanelTitle(class FText& Title)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_IngameTopBar_C", "SetPanelTitle");

	Params::UW_IngameTopBar_C_SetPanelTitle_Params Parms{};

	Parms.Title = Title;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_IngameTopBar.W_IngameTopBar_C.ExecuteUbergraph_W_IngameTopBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_onlineText                                          (ConstParm)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_CustomEvent_bNewInputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bButtonsVisible                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bNavigationVisible                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bTitleVisible                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_title_1                                             (ConstParm)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSpectator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_title                                               (ConstParm)

void UW_IngameTopBar_C::ExecuteUbergraph_W_IngameTopBar(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText K2Node_Event_onlineText, bool K2Node_Event_IsDesignTime, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool K2Node_Event_bButtonsVisible, bool K2Node_Event_bNavigationVisible, bool K2Node_Event_bTitleVisible, class FText K2Node_Event_title_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsSpectator_ReturnValue, class FText K2Node_Event_title)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_IngameTopBar_C", "ExecuteUbergraph_W_IngameTopBar");

	Params::UW_IngameTopBar_C_ExecuteUbergraph_W_IngameTopBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_onlineText = K2Node_Event_onlineText;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.K2Node_Event_bButtonsVisible = K2Node_Event_bButtonsVisible;
	Parms.K2Node_Event_bNavigationVisible = K2Node_Event_bNavigationVisible;
	Parms.K2Node_Event_bTitleVisible = K2Node_Event_bTitleVisible;
	Parms.K2Node_Event_title_1 = K2Node_Event_title_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_IsSpectator_ReturnValue = CallFunc_IsSpectator_ReturnValue;
	Parms.K2Node_Event_title = K2Node_Event_title;

	UObject::ProcessEvent(Func, &Parms);

}

}


