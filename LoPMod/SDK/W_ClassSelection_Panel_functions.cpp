#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_ClassSelection_Panel.W_ClassSelection_Panel_C
// (None)

class UClass* UW_ClassSelection_Panel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_ClassSelection_Panel_C");

	return Clss;
}


// W_ClassSelection_Panel_C W_ClassSelection_Panel.Default__W_ClassSelection_Panel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_ClassSelection_Panel_C* UW_ClassSelection_Panel_C::GetDefaultObj()
{
	static class UW_ClassSelection_Panel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_ClassSelection_Panel_C*>(UW_ClassSelection_Panel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.Update Body Type button
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECharacterBodyType      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Play_sound                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAkAnathemaEvent            K2Node_MakeStruct_AkAnathemaEvent                                (None)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAkAnathemaEvent            K2Node_MakeStruct_AkAnathemaEvent_1                              (None)
// class USoundManager_BP_C*          CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_ClassSelection_Panel_C::Update_Body_Type_button(enum class ECharacterBodyType Selection, bool Play_sound, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FAkAnathemaEvent& K2Node_MakeStruct_AkAnathemaEvent, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FAkAnathemaEvent& K2Node_MakeStruct_AkAnathemaEvent_1, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "Update Body Type button");

	Params::UW_ClassSelection_Panel_C_Update_Body_Type_button_Params Parms{};

	Parms.Selection = Selection;
	Parms.Play_sound = Play_sound;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_MakeStruct_AkAnathemaEvent = K2Node_MakeStruct_AkAnathemaEvent;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.K2Node_MakeStruct_AkAnathemaEvent_1 = K2Node_MakeStruct_AkAnathemaEvent_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.GetDesiredFocusTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_ClassSelection_Panel_C::GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "GetDesiredFocusTarget");

	Params::UW_ClassSelection_Panel_C_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.OnShown_D72D9A174586921887A7B4AE7D38CFBA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ClassSelection_Panel_C::OnShown_D72D9A174586921887A7B4AE7D38CFBA(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "OnShown_D72D9A174586921887A7B4AE7D38CFBA");

	Params::UW_ClassSelection_Panel_C_OnShown_D72D9A174586921887A7B4AE7D38CFBA_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.OnResultNamed_D72D9A174586921887A7B4AE7D38CFBA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ClassSelection_Panel_C::OnResultNamed_D72D9A174586921887A7B4AE7D38CFBA(enum class EMessagingResult Result, class FName ActionId, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "OnResultNamed_D72D9A174586921887A7B4AE7D38CFBA");

	Params::UW_ClassSelection_Panel_C_OnResultNamed_D72D9A174586921887A7B4AE7D38CFBA_Params Parms{};

	Parms.Result = Result;
	Parms.ActionId = ActionId;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.OnResult_D72D9A174586921887A7B4AE7D38CFBA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ClassSelection_Panel_C::OnResult_D72D9A174586921887A7B4AE7D38CFBA(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "OnResult_D72D9A174586921887A7B4AE7D38CFBA");

	Params::UW_ClassSelection_Panel_C_OnResult_D72D9A174586921887A7B4AE7D38CFBA_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.OnShown_A673DE79409B3EE33D77699E96C786FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ClassSelection_Panel_C::OnShown_A673DE79409B3EE33D77699E96C786FB(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "OnShown_A673DE79409B3EE33D77699E96C786FB");

	Params::UW_ClassSelection_Panel_C_OnShown_A673DE79409B3EE33D77699E96C786FB_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.OnResultNamed_A673DE79409B3EE33D77699E96C786FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ClassSelection_Panel_C::OnResultNamed_A673DE79409B3EE33D77699E96C786FB(enum class EMessagingResult Result, class FName ActionId, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "OnResultNamed_A673DE79409B3EE33D77699E96C786FB");

	Params::UW_ClassSelection_Panel_C_OnResultNamed_A673DE79409B3EE33D77699E96C786FB_Params Parms{};

	Parms.Result = Result;
	Parms.ActionId = ActionId;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.OnResult_A673DE79409B3EE33D77699E96C786FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_ClassSelection_Panel_C::OnResult_A673DE79409B3EE33D77699E96C786FB(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "OnResult_A673DE79409B3EE33D77699E96C786FB");

	Params::UW_ClassSelection_Panel_C_OnResult_A673DE79409B3EE33D77699E96C786FB_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.BndEvt__W_ClassSelection_List_CharacterClasses_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsHovered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ClassSelection_Panel_C::BndEvt__W_ClassSelection_List_CharacterClasses_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "BndEvt__W_ClassSelection_List_CharacterClasses_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature");

	Params::UW_ClassSelection_Panel_C_BndEvt__W_ClassSelection_List_CharacterClasses_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.bIsHovered = bIsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.BP_PanelActivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ClassSelection_Panel_C::BP_PanelActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "BP_PanelActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.BndEvt__W_ClassSelection_Panel_List_CharacterClasses_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ClassSelection_Panel_C::BndEvt__W_ClassSelection_Panel_List_CharacterClasses_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "BndEvt__W_ClassSelection_Panel_List_CharacterClasses_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature");

	Params::UW_ClassSelection_Panel_C_BndEvt__W_ClassSelection_Panel_List_CharacterClasses_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.BP_SelectClass
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     ClassListItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_ClassSelection_Panel_C::BP_SelectClass(class UObject* ClassListItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "BP_SelectClass");

	Params::UW_ClassSelection_Panel_C_BP_SelectClass_Params Parms{};

	Parms.ClassListItem = ClassListItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.On Dissolve End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ClassSelection_Panel_C::On_Dissolve_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "On Dissolve End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.BP_OnMeshChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bForced                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ClassSelection_Panel_C::BP_OnMeshChanged(bool bForced)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "BP_OnMeshChanged");

	Params::UW_ClassSelection_Panel_C_BP_OnMeshChanged_Params Parms{};

	Parms.bForced = bForced;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.On Dissolve Reverse End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ClassSelection_Panel_C::On_Dissolve_Reverse_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "On Dissolve Reverse End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.BP_UpdateEquipmentStatus
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ClassSelection_Panel_C::BP_UpdateEquipmentStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "BP_UpdateEquipmentStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.BndEvt__W_ClassSelection_Panel_W_BottomBarButton_K2Node_ComponentBoundEvent_4_OnButtonActionComplete__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ClassSelection_Panel_C::BndEvt__W_ClassSelection_Panel_W_BottomBarButton_K2Node_ComponentBoundEvent_4_OnButtonActionComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "BndEvt__W_ClassSelection_Panel_W_BottomBarButton_K2Node_ComponentBoundEvent_4_OnButtonActionComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.BP_PanelDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ClassSelection_Panel_C::BP_PanelDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "BP_PanelDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.BndEvt__W_ClassSelection_Panel_Button_BodyType_K2Node_ComponentBoundEvent_0_OnButtonActionComplete__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ClassSelection_Panel_C::BndEvt__W_ClassSelection_Panel_Button_BodyType_K2Node_ComponentBoundEvent_0_OnButtonActionComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "BndEvt__W_ClassSelection_Panel_Button_BodyType_K2Node_ComponentBoundEvent_0_OnButtonActionComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.BP_ShowCustomizationWarning
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_ClassSelection_Panel_C::BP_ShowCustomizationWarning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "BP_ShowCustomizationWarning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.BP_OnListPopulated
// (BlueprintEvent)
// Parameters:

void UW_ClassSelection_Panel_C::BP_OnListPopulated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "BP_OnListPopulated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.BndEvt__W_ClassSelection_Panel_Button_ResetPreset_K2Node_ComponentBoundEvent_3_OnButtonActionComplete__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_ClassSelection_Panel_C::BndEvt__W_ClassSelection_Panel_Button_ResetPreset_K2Node_ComponentBoundEvent_3_OnButtonActionComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "BndEvt__W_ClassSelection_Panel_Button_ResetPreset_K2Node_ComponentBoundEvent_3_OnButtonActionComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.BP_SwitchBodyType
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECharacterBodyType      CurrentBodyType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ClassSelection_Panel_C::BP_SwitchBodyType(enum class ECharacterBodyType CurrentBodyType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "BP_SwitchBodyType");

	Params::UW_ClassSelection_Panel_C_BP_SwitchBodyType_Params Parms{};

	Parms.CurrentBodyType = CurrentBodyType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_ClassSelection_Panel.W_ClassSelection_Panel_C.ExecuteUbergraph_W_ClassSelection_Panel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_5                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ActionId_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_4                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_3                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncAction_ShowConfirmationDialog*CallFunc_ShowConfirmationOkCancel_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_2                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ActionId                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_1                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Temp_object_Variable_1                                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncAction_ShowConfirmationDialog*CallFunc_ShowConfirmationOkCancel_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsHovered                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidgetFromItem_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_ClassName_Entry_C*        K2Node_DynamicCast_AsW_Class_Name_Entry                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsSelected                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECharacterBodyType      CallFunc_GetBodyType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidgetFromItem_ReturnValue_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ClassName_Entry_C*        K2Node_DynamicCast_AsW_Class_Name_Entry_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDissolveFXComponent_C*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             CallFunc_GetListItems_ReturnValue                                (ConstParm, ReferenceParm)
// class UObject*                     K2Node_Event_classListItem                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidgetFromItem_ReturnValue_2                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_ClassName_Entry_C*        K2Node_DynamicCast_AsW_Class_Name_Entry_2                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bForced                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character_2                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDissolveFXComponent_C*      CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character_3                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2StartupGameMode_BP_C*  K2Node_DynamicCast_AsLOTF2Startup_Game_Mode_BP                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsScrollbarVisible_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2StartupGameMode_BP_C*  K2Node_DynamicCast_AsLOTF2Startup_Game_Mode_BP_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCharacterCustomized_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECharacterBodyType      K2Node_Event_currentBodyType                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsScrollbarVisible_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_ClassSelection_Panel_C::ExecuteUbergraph_W_ClassSelection_Panel(int32 EntryPoint, enum class EMessagingResult K2Node_CustomEvent_Result_5, class UHexGameDialog* K2Node_CustomEvent_Dialog_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EMessagingResult K2Node_CustomEvent_Result_4, class FName K2Node_CustomEvent_ActionId_1, class UHexGameDialog* K2Node_CustomEvent_Dialog_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EMessagingResult K2Node_CustomEvent_Result_3, class UHexGameDialog* K2Node_CustomEvent_Dialog_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UHexGameDialog* Temp_object_Variable, enum class EMessagingResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UAsyncAction_ShowConfirmationDialog* CallFunc_ShowConfirmationOkCancel_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue, enum class EMessagingResult K2Node_CustomEvent_Result_2, class UHexGameDialog* K2Node_CustomEvent_Dialog_2, enum class EMessagingResult K2Node_CustomEvent_Result_1, class FName K2Node_CustomEvent_ActionId, class UHexGameDialog* K2Node_CustomEvent_Dialog_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, enum class EMessagingResult K2Node_CustomEvent_Result, class UHexGameDialog* K2Node_CustomEvent_Dialog, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UHexGameDialog* Temp_object_Variable_1, enum class EMessagingResult Temp_byte_Variable_1, bool K2Node_SwitchEnum_CmpSuccess_1, class UAsyncAction_ShowConfirmationDialog* CallFunc_ShowConfirmationOkCancel_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item_1, bool K2Node_ComponentBoundEvent_bIsHovered, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue, class UW_ClassName_Entry_C* K2Node_DynamicCast_AsW_Class_Name_Entry, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, enum class ECharacterBodyType CallFunc_GetBodyType_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_1, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_1, bool K2Node_DynamicCast_bSuccess_2, class UW_ClassName_Entry_C* K2Node_DynamicCast_AsW_Class_Name_Entry_1, bool K2Node_DynamicCast_bSuccess_3, class UDissolveFXComponent_C* CallFunc_GetComponentByClass_ReturnValue, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UObject* K2Node_Event_classListItem, class UObject* CallFunc_Array_Get_Item, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, class UW_ClassName_Entry_C* K2Node_DynamicCast_AsW_Class_Name_Entry_2, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Event_bForced, class APawn* CallFunc_GetPlayerPawn_ReturnValue_2, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_2, bool K2Node_DynamicCast_bSuccess_5, class UDissolveFXComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_3, bool K2Node_DynamicCast_bSuccess_6, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_5, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ALOTF2StartupGameMode_BP_C* K2Node_DynamicCast_AsLOTF2Startup_Game_Mode_BP, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsScrollbarVisible_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, class ALOTF2StartupGameMode_BP_C* K2Node_DynamicCast_AsLOTF2Startup_Game_Mode_BP_1, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_IsCharacterCustomized_ReturnValue, enum class ECharacterBodyType K2Node_Event_currentBodyType, bool CallFunc_IsScrollbarVisible_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_ClassSelection_Panel_C", "ExecuteUbergraph_W_ClassSelection_Panel");

	Params::UW_ClassSelection_Panel_C_ExecuteUbergraph_W_ClassSelection_Panel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Result_5 = K2Node_CustomEvent_Result_5;
	Parms.K2Node_CustomEvent_Dialog_5 = K2Node_CustomEvent_Dialog_5;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Result_4 = K2Node_CustomEvent_Result_4;
	Parms.K2Node_CustomEvent_ActionId_1 = K2Node_CustomEvent_ActionId_1;
	Parms.K2Node_CustomEvent_Dialog_4 = K2Node_CustomEvent_Dialog_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Result_3 = K2Node_CustomEvent_Result_3;
	Parms.K2Node_CustomEvent_Dialog_3 = K2Node_CustomEvent_Dialog_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ShowConfirmationOkCancel_ReturnValue = CallFunc_ShowConfirmationOkCancel_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Result_2 = K2Node_CustomEvent_Result_2;
	Parms.K2Node_CustomEvent_Dialog_2 = K2Node_CustomEvent_Dialog_2;
	Parms.K2Node_CustomEvent_Result_1 = K2Node_CustomEvent_Result_1;
	Parms.K2Node_CustomEvent_ActionId = K2Node_CustomEvent_ActionId;
	Parms.K2Node_CustomEvent_Dialog_1 = K2Node_CustomEvent_Dialog_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_Dialog = K2Node_CustomEvent_Dialog;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_ShowConfirmationOkCancel_ReturnValue_1 = CallFunc_ShowConfirmationOkCancel_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Item_1 = K2Node_ComponentBoundEvent_Item_1;
	Parms.K2Node_ComponentBoundEvent_bIsHovered = K2Node_ComponentBoundEvent_bIsHovered;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetWidgetFromItem_ReturnValue = CallFunc_GetWidgetFromItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Class_Name_Entry = K2Node_DynamicCast_AsW_Class_Name_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_bIsSelected = K2Node_ComponentBoundEvent_bIsSelected;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetBodyType_ReturnValue = CallFunc_GetBodyType_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.CallFunc_GetWidgetFromItem_ReturnValue_1 = CallFunc_GetWidgetFromItem_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsLOTF2Character_1 = K2Node_DynamicCast_AsLOTF2Character_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsW_Class_Name_Entry_1 = K2Node_DynamicCast_AsW_Class_Name_Entry_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetListItems_ReturnValue = CallFunc_GetListItems_ReturnValue;
	Parms.K2Node_Event_classListItem = K2Node_Event_classListItem;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetWidgetFromItem_ReturnValue_2 = CallFunc_GetWidgetFromItem_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Class_Name_Entry_2 = K2Node_DynamicCast_AsW_Class_Name_Entry_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_bForced = K2Node_Event_bForced;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_2 = CallFunc_GetPlayerPawn_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsLOTF2Character_2 = K2Node_DynamicCast_AsLOTF2Character_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsLOTF2Character_3 = K2Node_DynamicCast_AsLOTF2Character_3;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue_1 = CallFunc_PostEventAtLocation_ReturnValue_1;
	Parms.CallFunc_PostEventAtLocation_ReturnValue_2 = CallFunc_PostEventAtLocation_ReturnValue_2;
	Parms.CallFunc_PostEventAtLocation_ReturnValue_3 = CallFunc_PostEventAtLocation_ReturnValue_3;
	Parms.CallFunc_PostEventAtLocation_ReturnValue_4 = CallFunc_PostEventAtLocation_ReturnValue_4;
	Parms.CallFunc_PostEventAtLocation_ReturnValue_5 = CallFunc_PostEventAtLocation_ReturnValue_5;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsLOTF2Startup_Game_Mode_BP = K2Node_DynamicCast_AsLOTF2Startup_Game_Mode_BP;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_IsScrollbarVisible_ReturnValue = CallFunc_IsScrollbarVisible_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsLOTF2Startup_Game_Mode_BP_1 = K2Node_DynamicCast_AsLOTF2Startup_Game_Mode_BP_1;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_IsCharacterCustomized_ReturnValue = CallFunc_IsCharacterCustomized_ReturnValue;
	Parms.K2Node_Event_currentBodyType = K2Node_Event_currentBodyType;
	Parms.CallFunc_IsScrollbarVisible_ReturnValue_1 = CallFunc_IsScrollbarVisible_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


