#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_MainMenu_Panel.W_MainMenu_Panel_C
// (None)

class UClass* UW_MainMenu_Panel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_MainMenu_Panel_C");

	return Clss;
}


// W_MainMenu_Panel_C W_MainMenu_Panel.Default__W_MainMenu_Panel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_MainMenu_Panel_C* UW_MainMenu_Panel_C::GetDefaultObj()
{
	static class UW_MainMenu_Panel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_MainMenu_Panel_C*>(UW_MainMenu_Panel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.GetDesiredFocusTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_MainMenu_Panel_C::GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "GetDesiredFocusTarget");

	Params::UW_MainMenu_Panel_C_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.Finished_38090C5345B412FAECF3B889DC3784F1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_Panel_C::Finished_38090C5345B412FAECF3B889DC3784F1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "Finished_38090C5345B412FAECF3B889DC3784F1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.OnShown_8098D1934FCFA64582AB53BD744A058A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_Panel_C::OnShown_8098D1934FCFA64582AB53BD744A058A(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "OnShown_8098D1934FCFA64582AB53BD744A058A");

	Params::UW_MainMenu_Panel_C_OnShown_8098D1934FCFA64582AB53BD744A058A_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.OnResultNamed_8098D1934FCFA64582AB53BD744A058A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_Panel_C::OnResultNamed_8098D1934FCFA64582AB53BD744A058A(enum class EMessagingResult Result, class FName ActionId, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "OnResultNamed_8098D1934FCFA64582AB53BD744A058A");

	Params::UW_MainMenu_Panel_C_OnResultNamed_8098D1934FCFA64582AB53BD744A058A_Params Parms{};

	Parms.Result = Result;
	Parms.ActionId = ActionId;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.OnResult_8098D1934FCFA64582AB53BD744A058A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_Panel_C::OnResult_8098D1934FCFA64582AB53BD744A058A(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "OnResult_8098D1934FCFA64582AB53BD744A058A");

	Params::UW_MainMenu_Panel_C_OnResult_8098D1934FCFA64582AB53BD744A058A_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.Finished_D0604FDC432653A208F54A9FA75F702D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_Panel_C::Finished_D0604FDC432653A208F54A9FA75F702D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "Finished_D0604FDC432653A208F54A9FA75F702D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.OnShown_C5076E0348CA842B160183A25C97F7F2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_Panel_C::OnShown_C5076E0348CA842B160183A25C97F7F2(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "OnShown_C5076E0348CA842B160183A25C97F7F2");

	Params::UW_MainMenu_Panel_C_OnShown_C5076E0348CA842B160183A25C97F7F2_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.OnResultNamed_C5076E0348CA842B160183A25C97F7F2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_Panel_C::OnResultNamed_C5076E0348CA842B160183A25C97F7F2(enum class EMessagingResult Result, class FName ActionId, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "OnResultNamed_C5076E0348CA842B160183A25C97F7F2");

	Params::UW_MainMenu_Panel_C_OnResultNamed_C5076E0348CA842B160183A25C97F7F2_Params Parms{};

	Parms.Result = Result;
	Parms.ActionId = ActionId;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.OnResult_C5076E0348CA842B160183A25C97F7F2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_Panel_C::OnResult_C5076E0348CA842B160183A25C97F7F2(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "OnResult_C5076E0348CA842B160183A25C97F7F2");

	Params::UW_MainMenu_Panel_C_OnResult_C5076E0348CA842B160183A25C97F7F2_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.OnShown_D76085BC4541DDC369E91DBA2D6F6E8F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_Panel_C::OnShown_D76085BC4541DDC369E91DBA2D6F6E8F(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "OnShown_D76085BC4541DDC369E91DBA2D6F6E8F");

	Params::UW_MainMenu_Panel_C_OnShown_D76085BC4541DDC369E91DBA2D6F6E8F_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.OnResultNamed_D76085BC4541DDC369E91DBA2D6F6E8F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_Panel_C::OnResultNamed_D76085BC4541DDC369E91DBA2D6F6E8F(enum class EMessagingResult Result, class FName ActionId, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "OnResultNamed_D76085BC4541DDC369E91DBA2D6F6E8F");

	Params::UW_MainMenu_Panel_C_OnResultNamed_D76085BC4541DDC369E91DBA2D6F6E8F_Params Parms{};

	Parms.Result = Result;
	Parms.ActionId = ActionId;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.OnResult_D76085BC4541DDC369E91DBA2D6F6E8F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_Panel_C::OnResult_D76085BC4541DDC369E91DBA2D6F6E8F(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "OnResult_D76085BC4541DDC369E91DBA2D6F6E8F");

	Params::UW_MainMenu_Panel_C_OnResult_D76085BC4541DDC369E91DBA2D6F6E8F_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.OnShown_559714994FE216670B5539AC57AD3F9E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_Panel_C::OnShown_559714994FE216670B5539AC57AD3F9E(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "OnShown_559714994FE216670B5539AC57AD3F9E");

	Params::UW_MainMenu_Panel_C_OnShown_559714994FE216670B5539AC57AD3F9E_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.OnResultNamed_559714994FE216670B5539AC57AD3F9E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_Panel_C::OnResultNamed_559714994FE216670B5539AC57AD3F9E(enum class EMessagingResult Result, class FName ActionId, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "OnResultNamed_559714994FE216670B5539AC57AD3F9E");

	Params::UW_MainMenu_Panel_C_OnResultNamed_559714994FE216670B5539AC57AD3F9E_Params Parms{};

	Parms.Result = Result;
	Parms.ActionId = ActionId;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.OnResult_559714994FE216670B5539AC57AD3F9E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_Panel_C::OnResult_559714994FE216670B5539AC57AD3F9E(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "OnResult_559714994FE216670B5539AC57AD3F9E");

	Params::UW_MainMenu_Panel_C_OnResult_559714994FE216670B5539AC57AD3F9E_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.BndEvt__W_MainMenu_Panel_Button_LoadGame_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_MainMenu_Panel_C::BndEvt__W_MainMenu_Panel_Button_LoadGame_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "BndEvt__W_MainMenu_Panel_Button_LoadGame_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.BndEvt__W_MainMenu_Panel_Button_CreateChar_K2Node_ComponentBoundEvent_1_OnButtonClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_MainMenu_Panel_C::BndEvt__W_MainMenu_Panel_Button_CreateChar_K2Node_ComponentBoundEvent_1_OnButtonClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "BndEvt__W_MainMenu_Panel_Button_CreateChar_K2Node_ComponentBoundEvent_1_OnButtonClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.BP_PanelActivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_Panel_C::BP_PanelActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "BP_PanelActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.BndEvt__W_MainMenu_Panel_Button_Settings_K2Node_ComponentBoundEvent_3_OnButtonClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_MainMenu_Panel_C::BndEvt__W_MainMenu_Panel_Button_Settings_K2Node_ComponentBoundEvent_3_OnButtonClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "BndEvt__W_MainMenu_Panel_Button_Settings_K2Node_ComponentBoundEvent_3_OnButtonClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.BndEvt__W_MainMenu_Panel_Button_SceneStates_K2Node_ComponentBoundEvent_4_OnButtonClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_MainMenu_Panel_C::BndEvt__W_MainMenu_Panel_Button_SceneStates_K2Node_ComponentBoundEvent_4_OnButtonClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "BndEvt__W_MainMenu_Panel_Button_SceneStates_K2Node_ComponentBoundEvent_4_OnButtonClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.BP_SetFocusDelayed
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_Panel_C::BP_SetFocusDelayed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "BP_SetFocusDelayed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.On Enter Char Creation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_Panel_C::On_Enter_Char_Creation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "On Enter Char Creation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.BP_ShowHDDMessage
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_Panel_C::BP_ShowHDDMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "BP_ShowHDDMessage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.OnAudioPlayed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_MainMenu_Panel_C::OnAudioPlayed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "OnAudioPlayed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.OnAudioStopped
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_MainMenu_Panel_C::OnAudioStopped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "OnAudioStopped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.PlayFadeIn
// (BlueprintEvent)
// Parameters:

void UW_MainMenu_Panel_C::PlayFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "PlayFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.BndEvt__MainMenuWidget_Button_Quit_K2Node_ComponentBoundEvent_11_OnButtonClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_MainMenu_Panel_C::BndEvt__MainMenuWidget_Button_Quit_K2Node_ComponentBoundEvent_11_OnButtonClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "BndEvt__MainMenuWidget_Button_Quit_K2Node_ComponentBoundEvent_11_OnButtonClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.BP_EndDissolve
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_Panel_C::BP_EndDissolve()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "BP_EndDissolve");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.On Dissolve Reverse End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_Panel_C::On_Dissolve_Reverse_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "On Dissolve Reverse End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.Prepare To Enter Class Selection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_Panel_C::Prepare_To_Enter_Class_Selection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "Prepare To Enter Class Selection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.OnDissolveEnd_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_Panel_C::OnDissolveEnd_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "OnDissolveEnd_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_Panel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "Tick");

	Params::UW_MainMenu_Panel_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.BP_ShowNewOwnedDLC
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDLCName                DLCName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDLCOwnedMessage            DlcInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UW_MainMenu_Panel_C::BP_ShowNewOwnedDLC(enum class EDLCName DLCName, struct FDLCOwnedMessage& DlcInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "BP_ShowNewOwnedDLC");

	Params::UW_MainMenu_Panel_C_BP_ShowNewOwnedDLC_Params Parms{};

	Parms.DLCName = DLCName;
	Parms.DlcInfo = DlcInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.BP_StartDLCShowQueue
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_MainMenu_Panel_C::BP_StartDLCShowQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "BP_StartDLCShowQueue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_MainMenu_Panel.W_MainMenu_Panel_C.ExecuteUbergraph_W_MainMenu_Panel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_11                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_11                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_10                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ActionId_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_10                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_9                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_9                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FModifyContextOptions       Temp_struct_Variable                                             (ConstParm, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_8                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_8                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ActionId_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_7                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_6                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Temp_object_Variable_1                                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ConfirmationWidget_C*   K2Node_DynamicCast_AsWBP_Confirmation_Widget                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncAction_ShowConfirmationDialog*CallFunc_ShowConfirmationOk_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDeveloperMenuSubsystem*     CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_5                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ActionId_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_4                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_3                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Temp_object_Variable_2                                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_NewClassUnlocked_C*       K2Node_DynamicCast_AsW_New_Class_Unlocked                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_2                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ActionId                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_1                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Temp_object_Variable_3                                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_DLC_OwnedConfirmation_C*  K2Node_DynamicCast_AsW_DLC_Owned_Confirmation                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class UAsyncAction_ShowConfirmationDialog*CallFunc_ShowConfirmationOkCancel_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2StartupGameMode_BP_C*  K2Node_DynamicCast_AsLOTF2Startup_Game_Mode_BP                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2StartupGameMode_BP_C*  K2Node_DynamicCast_AsLOTF2Startup_Game_Mode_BP_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACustomizationLevelScript*   CallFunc_GetCustomizationLevel_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACinematicPlayer*            CallFunc_GetCinematicPlayerCharCreationVideo_ReturnValue         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEnhancedInputLocalPlayerSubsystem*CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEnhancedInputSubsystemInterface>CallFunc_AddMappingContext_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAvailableSlots_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectAndFocus_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDissolveFXComponent_C*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDissolveFXComponent_C*      CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDLCName                K2Node_Event_dlcName                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDLCOwnedMessage            K2Node_Event_dlcInfo                                             (ConstParm)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncAction_ShowConfirmationDialog*CallFunc_ShowConfirmationOkCancelCustomDialog_ReturnValue        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncAction_ShowConfirmationDialog*CallFunc_ShowConfirmationOkCancelCustomDialog_ReturnValue_1      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_MainMenu_Panel_C::ExecuteUbergraph_W_MainMenu_Panel(int32 EntryPoint, enum class EMessagingResult K2Node_CustomEvent_Result_11, class UHexGameDialog* K2Node_CustomEvent_Dialog_11, enum class EMessagingResult K2Node_CustomEvent_Result_10, class FName K2Node_CustomEvent_ActionId_3, class UHexGameDialog* K2Node_CustomEvent_Dialog_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EMessagingResult K2Node_CustomEvent_Result_9, class UHexGameDialog* K2Node_CustomEvent_Dialog_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UHexGameDialog* Temp_object_Variable, enum class EMessagingResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, const struct FModifyContextOptions& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, enum class EMessagingResult K2Node_CustomEvent_Result_8, class UHexGameDialog* K2Node_CustomEvent_Dialog_8, enum class EMessagingResult K2Node_CustomEvent_Result_7, class FName K2Node_CustomEvent_ActionId_2, class UHexGameDialog* K2Node_CustomEvent_Dialog_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, enum class EMessagingResult K2Node_CustomEvent_Result_6, class UHexGameDialog* K2Node_CustomEvent_Dialog_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UHexGameDialog* Temp_object_Variable_1, enum class EMessagingResult Temp_byte_Variable_1, class UWBP_ConfirmationWidget_C* K2Node_DynamicCast_AsWBP_Confirmation_Widget, bool K2Node_DynamicCast_bSuccess, class UAsyncAction_ShowConfirmationDialog* CallFunc_ShowConfirmationOk_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UDeveloperMenuSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, enum class EMessagingResult K2Node_CustomEvent_Result_5, class UHexGameDialog* K2Node_CustomEvent_Dialog_5, enum class EMessagingResult K2Node_CustomEvent_Result_4, class FName K2Node_CustomEvent_ActionId_1, class UHexGameDialog* K2Node_CustomEvent_Dialog_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, enum class EMessagingResult K2Node_CustomEvent_Result_3, class UHexGameDialog* K2Node_CustomEvent_Dialog_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class UHexGameDialog* Temp_object_Variable_2, enum class EMessagingResult Temp_byte_Variable_2, class UW_NewClassUnlocked_C* K2Node_DynamicCast_AsW_New_Class_Unlocked, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, enum class EMessagingResult K2Node_CustomEvent_Result_2, class UHexGameDialog* K2Node_CustomEvent_Dialog_2, enum class EMessagingResult K2Node_CustomEvent_Result_1, class FName K2Node_CustomEvent_ActionId, class UHexGameDialog* K2Node_CustomEvent_Dialog_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, enum class EMessagingResult K2Node_CustomEvent_Result, class UHexGameDialog* K2Node_CustomEvent_Dialog, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UHexGameDialog* Temp_object_Variable_3, enum class EMessagingResult Temp_byte_Variable_3, class UW_DLC_OwnedConfirmation_C* K2Node_DynamicCast_AsW_DLC_Owned_Confirmation, bool K2Node_DynamicCast_bSuccess_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class UAsyncAction_ShowConfirmationDialog* CallFunc_ShowConfirmationOkCancel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ALOTF2StartupGameMode_BP_C* K2Node_DynamicCast_AsLOTF2Startup_Game_Mode_BP, bool K2Node_DynamicCast_bSuccess_3, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class ALOTF2StartupGameMode_BP_C* K2Node_DynamicCast_AsLOTF2Startup_Game_Mode_BP_1, bool K2Node_DynamicCast_bSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class ACustomizationLevelScript* CallFunc_GetCustomizationLevel_ReturnValue, class ACinematicPlayer* CallFunc_GetCinematicPlayerCharCreationVideo_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UEnhancedInputLocalPlayerSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, TScriptInterface<class IEnhancedInputSubsystemInterface> CallFunc_AddMappingContext_self_CastInput, bool CallFunc_HasAvailableSlots_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_SelectAndFocus_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, int32 CallFunc_PostEvent_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result_1, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess_5, class UDissolveFXComponent_C* CallFunc_GetComponentByClass_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_1, bool K2Node_DynamicCast_bSuccess_6, class UDissolveFXComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_Not_PreBool_ReturnValue, enum class EDLCName K2Node_Event_dlcName, const struct FDLCOwnedMessage& K2Node_Event_dlcInfo, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UAsyncAction_ShowConfirmationDialog* CallFunc_ShowConfirmationOkCancelCustomDialog_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class UAsyncAction_ShowConfirmationDialog* CallFunc_ShowConfirmationOkCancelCustomDialog_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_MainMenu_Panel_C", "ExecuteUbergraph_W_MainMenu_Panel");

	Params::UW_MainMenu_Panel_C_ExecuteUbergraph_W_MainMenu_Panel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Result_11 = K2Node_CustomEvent_Result_11;
	Parms.K2Node_CustomEvent_Dialog_11 = K2Node_CustomEvent_Dialog_11;
	Parms.K2Node_CustomEvent_Result_10 = K2Node_CustomEvent_Result_10;
	Parms.K2Node_CustomEvent_ActionId_3 = K2Node_CustomEvent_ActionId_3;
	Parms.K2Node_CustomEvent_Dialog_10 = K2Node_CustomEvent_Dialog_10;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Result_9 = K2Node_CustomEvent_Result_9;
	Parms.K2Node_CustomEvent_Dialog_9 = K2Node_CustomEvent_Dialog_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_Result_8 = K2Node_CustomEvent_Result_8;
	Parms.K2Node_CustomEvent_Dialog_8 = K2Node_CustomEvent_Dialog_8;
	Parms.K2Node_CustomEvent_Result_7 = K2Node_CustomEvent_Result_7;
	Parms.K2Node_CustomEvent_ActionId_2 = K2Node_CustomEvent_ActionId_2;
	Parms.K2Node_CustomEvent_Dialog_7 = K2Node_CustomEvent_Dialog_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_Result_6 = K2Node_CustomEvent_Result_6;
	Parms.K2Node_CustomEvent_Dialog_6 = K2Node_CustomEvent_Dialog_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_DynamicCast_AsWBP_Confirmation_Widget = K2Node_DynamicCast_AsWBP_Confirmation_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ShowConfirmationOk_ReturnValue = CallFunc_ShowConfirmationOk_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue = CallFunc_GetDeveloperMenuRuntimeSettingsValueByName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_Result_5 = K2Node_CustomEvent_Result_5;
	Parms.K2Node_CustomEvent_Dialog_5 = K2Node_CustomEvent_Dialog_5;
	Parms.K2Node_CustomEvent_Result_4 = K2Node_CustomEvent_Result_4;
	Parms.K2Node_CustomEvent_ActionId_1 = K2Node_CustomEvent_ActionId_1;
	Parms.K2Node_CustomEvent_Dialog_4 = K2Node_CustomEvent_Dialog_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CustomEvent_Result_3 = K2Node_CustomEvent_Result_3;
	Parms.K2Node_CustomEvent_Dialog_3 = K2Node_CustomEvent_Dialog_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_DynamicCast_AsW_New_Class_Unlocked = K2Node_DynamicCast_AsW_New_Class_Unlocked;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CustomEvent_Result_2 = K2Node_CustomEvent_Result_2;
	Parms.K2Node_CustomEvent_Dialog_2 = K2Node_CustomEvent_Dialog_2;
	Parms.K2Node_CustomEvent_Result_1 = K2Node_CustomEvent_Result_1;
	Parms.K2Node_CustomEvent_ActionId = K2Node_CustomEvent_ActionId;
	Parms.K2Node_CustomEvent_Dialog_1 = K2Node_CustomEvent_Dialog_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_Dialog = K2Node_CustomEvent_Dialog;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_DynamicCast_AsW_DLC_Owned_Confirmation = K2Node_DynamicCast_AsW_DLC_Owned_Confirmation;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_ShowConfirmationOkCancel_ReturnValue = CallFunc_ShowConfirmationOkCancel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsLOTF2Startup_Game_Mode_BP = K2Node_DynamicCast_AsLOTF2Startup_Game_Mode_BP;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsLOTF2Startup_Game_Mode_BP_1 = K2Node_DynamicCast_AsLOTF2Startup_Game_Mode_BP_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.CallFunc_GetCustomizationLevel_ReturnValue = CallFunc_GetCustomizationLevel_ReturnValue;
	Parms.CallFunc_GetCinematicPlayerCharCreationVideo_ReturnValue = CallFunc_GetCinematicPlayerCharCreationVideo_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.CallFunc_AddMappingContext_self_CastInput = CallFunc_AddMappingContext_self_CastInput;
	Parms.CallFunc_HasAvailableSlots_ReturnValue = CallFunc_HasAvailableSlots_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_SelectAndFocus_ReturnValue = CallFunc_SelectAndFocus_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result_1 = CallFunc_CreatePlayAnimationProxyObject_Result_1;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1 = CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsLOTF2Character_1 = K2Node_DynamicCast_AsLOTF2Character_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_dlcName = K2Node_Event_dlcName;
	Parms.K2Node_Event_dlcInfo = K2Node_Event_dlcInfo;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_ShowConfirmationOkCancelCustomDialog_ReturnValue = CallFunc_ShowConfirmationOkCancelCustomDialog_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_ShowConfirmationOkCancelCustomDialog_ReturnValue_1 = CallFunc_ShowConfirmationOkCancelCustomDialog_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;

	UObject::ProcessEvent(Func, &Parms);

}

}


