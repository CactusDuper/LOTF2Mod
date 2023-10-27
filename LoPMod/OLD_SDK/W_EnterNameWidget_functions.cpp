#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_EnterNameWidget.W_EnterNameWidget_C
// (None)

class UClass* UW_EnterNameWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_EnterNameWidget_C");

	return Clss;
}


// W_EnterNameWidget_C W_EnterNameWidget.Default__W_EnterNameWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_EnterNameWidget_C* UW_EnterNameWidget_C::GetDefaultObj()
{
	static class UW_EnterNameWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_EnterNameWidget_C*>(UW_EnterNameWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_EnterNameWidget.W_EnterNameWidget_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_EnterNameWidget_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_EnterNameWidget_C", "BP_GetDesiredFocusTarget");

	Params::UW_EnterNameWidget_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_EnterNameWidget.W_EnterNameWidget_C.BndEvt__W_EnterNameWidget_Button_Confirm_K2Node_ComponentBoundEvent_1_OnButtonActionComplete__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_EnterNameWidget_C::BndEvt__W_EnterNameWidget_Button_Confirm_K2Node_ComponentBoundEvent_1_OnButtonActionComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_EnterNameWidget_C", "BndEvt__W_EnterNameWidget_Button_Confirm_K2Node_ComponentBoundEvent_1_OnButtonActionComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_EnterNameWidget.W_EnterNameWidget_C.BndEvt__W_EnterNameWidget_Name_EditableText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_EnterNameWidget_C::BndEvt__W_EnterNameWidget_Name_EditableText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_EnterNameWidget_C", "BndEvt__W_EnterNameWidget_Name_EditableText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UW_EnterNameWidget_C_BndEvt__W_EnterNameWidget_Name_EditableText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_EnterNameWidget.W_EnterNameWidget_C.OnNameIsValid
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNameIsValid                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_EnterNameWidget_C::OnNameIsValid(bool bNameIsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_EnterNameWidget_C", "OnNameIsValid");

	Params::UW_EnterNameWidget_C_OnNameIsValid_Params Parms{};

	Parms.bNameIsValid = bNameIsValid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_EnterNameWidget.W_EnterNameWidget_C.ExecuteUbergraph_W_EnterNameWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bNameIsValid                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_EnterNameWidget_C::ExecuteUbergraph_W_EnterNameWidget(int32 EntryPoint, class FText CallFunc_GetText_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_Event_bNameIsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_EnterNameWidget_C", "ExecuteUbergraph_W_EnterNameWidget");

	Params::UW_EnterNameWidget_C_ExecuteUbergraph_W_EnterNameWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.K2Node_Event_bNameIsValid = K2Node_Event_bNameIsValid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_EnterNameWidget.W_EnterNameWidget_C.Show Animation Complete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_EnterNameWidget_C::Show_Animation_Complete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_EnterNameWidget_C", "Show Animation Complete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


