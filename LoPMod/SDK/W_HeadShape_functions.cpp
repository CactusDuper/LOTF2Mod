#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_HeadShape.W_HeadShape_C
// (None)

class UClass* UW_HeadShape_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_HeadShape_C");

	return Clss;
}


// W_HeadShape_C W_HeadShape.Default__W_HeadShape_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_HeadShape_C* UW_HeadShape_C::GetDefaultObj()
{
	static class UW_HeadShape_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_HeadShape_C*>(UW_HeadShape_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_HeadShape.W_HeadShape_C.Deselect All
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HeadShape_C::Deselect_All()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadShape_C", "Deselect All");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HeadShape.W_HeadShape_C.OnShown_533C054F48598C1BC59B4BAC717A5E8C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_HeadShape_C::OnShown_533C054F48598C1BC59B4BAC717A5E8C(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadShape_C", "OnShown_533C054F48598C1BC59B4BAC717A5E8C");

	Params::UW_HeadShape_C_OnShown_533C054F48598C1BC59B4BAC717A5E8C_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadShape.W_HeadShape_C.OnResultNamed_533C054F48598C1BC59B4BAC717A5E8C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_HeadShape_C::OnResultNamed_533C054F48598C1BC59B4BAC717A5E8C(enum class EMessagingResult Result, class FName ActionId, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadShape_C", "OnResultNamed_533C054F48598C1BC59B4BAC717A5E8C");

	Params::UW_HeadShape_C_OnResultNamed_533C054F48598C1BC59B4BAC717A5E8C_Params Parms{};

	Parms.Result = Result;
	Parms.ActionId = ActionId;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadShape.W_HeadShape_C.OnResult_533C054F48598C1BC59B4BAC717A5E8C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMessagingResult        Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_HeadShape_C::OnResult_533C054F48598C1BC59B4BAC717A5E8C(enum class EMessagingResult Result, class UHexGameDialog* Dialog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadShape_C", "OnResult_533C054F48598C1BC59B4BAC717A5E8C");

	Params::UW_HeadShape_C_OnResult_533C054F48598C1BC59B4BAC717A5E8C_Params Parms{};

	Parms.Result = Result;
	Parms.Dialog = Dialog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadShape.W_HeadShape_C.BndEvt__W_HeadShape_Top_Head_K2Node_ComponentBoundEvent_3_On Head Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EHeadPresetLocation     Head_Location                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadShape_C::BndEvt__W_HeadShape_Top_Head_K2Node_ComponentBoundEvent_3_On_Head_Selected__DelegateSignature(enum class EHeadPresetLocation Head_Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadShape_C", "BndEvt__W_HeadShape_Top_Head_K2Node_ComponentBoundEvent_3_On Head Selected__DelegateSignature");

	Params::UW_HeadShape_C_BndEvt__W_HeadShape_Top_Head_K2Node_ComponentBoundEvent_3_On_Head_Selected__DelegateSignature_Params Parms{};

	Parms.Head_Location = Head_Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadShape.W_HeadShape_C.BndEvt__W_HeadShape_Left_Head_K2Node_ComponentBoundEvent_0_On Head Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EHeadPresetLocation     Head_Location                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadShape_C::BndEvt__W_HeadShape_Left_Head_K2Node_ComponentBoundEvent_0_On_Head_Selected__DelegateSignature(enum class EHeadPresetLocation Head_Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadShape_C", "BndEvt__W_HeadShape_Left_Head_K2Node_ComponentBoundEvent_0_On Head Selected__DelegateSignature");

	Params::UW_HeadShape_C_BndEvt__W_HeadShape_Left_Head_K2Node_ComponentBoundEvent_0_On_Head_Selected__DelegateSignature_Params Parms{};

	Parms.Head_Location = Head_Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadShape.W_HeadShape_C.BndEvt__W_HeadShape_Right_Head_K2Node_ComponentBoundEvent_1_On Head Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class EHeadPresetLocation     Head_Location                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadShape_C::BndEvt__W_HeadShape_Right_Head_K2Node_ComponentBoundEvent_1_On_Head_Selected__DelegateSignature(enum class EHeadPresetLocation Head_Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadShape_C", "BndEvt__W_HeadShape_Right_Head_K2Node_ComponentBoundEvent_1_On Head Selected__DelegateSignature");

	Params::UW_HeadShape_C_BndEvt__W_HeadShape_Right_Head_K2Node_ComponentBoundEvent_1_On_Head_Selected__DelegateSignature_Params Parms{};

	Parms.Head_Location = Head_Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadShape.W_HeadShape_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadShape_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadShape_C", "PreConstruct");

	Params::UW_HeadShape_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_HeadShape.W_HeadShape_C.BP_ShowWarningPopup
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_HeadShape_C::BP_ShowWarningPopup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadShape_C", "BP_ShowWarningPopup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_HeadShape.W_HeadShape_C.ExecuteUbergraph_W_HeadShape
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_2                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ActionId                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog_1                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              K2Node_CustomEvent_Dialog                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHexGameDialog*              Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EMessagingResult        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAsyncAction_ShowConfirmationDialog*CallFunc_ShowConfirmationOkCancel_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHeadPresetLocation     K2Node_ComponentBoundEvent_Head_Location_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHeadPresetLocation     K2Node_ComponentBoundEvent_Head_Location_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHeadPresetLocation     K2Node_ComponentBoundEvent_Head_Location                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_HeadShape_C::ExecuteUbergraph_W_HeadShape(int32 EntryPoint, enum class EMessagingResult K2Node_CustomEvent_Result_2, class UHexGameDialog* K2Node_CustomEvent_Dialog_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EMessagingResult K2Node_CustomEvent_Result_1, class FName K2Node_CustomEvent_ActionId, class UHexGameDialog* K2Node_CustomEvent_Dialog_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EMessagingResult K2Node_CustomEvent_Result, class UHexGameDialog* K2Node_CustomEvent_Dialog, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UHexGameDialog* Temp_object_Variable, enum class EMessagingResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UAsyncAction_ShowConfirmationDialog* CallFunc_ShowConfirmationOkCancel_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EHeadPresetLocation K2Node_ComponentBoundEvent_Head_Location_2, enum class EHeadPresetLocation K2Node_ComponentBoundEvent_Head_Location_1, enum class EHeadPresetLocation K2Node_ComponentBoundEvent_Head_Location, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_HeadShape_C", "ExecuteUbergraph_W_HeadShape");

	Params::UW_HeadShape_C_ExecuteUbergraph_W_HeadShape_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Result_2 = K2Node_CustomEvent_Result_2;
	Parms.K2Node_CustomEvent_Dialog_2 = K2Node_CustomEvent_Dialog_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Result_1 = K2Node_CustomEvent_Result_1;
	Parms.K2Node_CustomEvent_ActionId = K2Node_CustomEvent_ActionId;
	Parms.K2Node_CustomEvent_Dialog_1 = K2Node_CustomEvent_Dialog_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_Dialog = K2Node_CustomEvent_Dialog;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ShowConfirmationOkCancel_ReturnValue = CallFunc_ShowConfirmationOkCancel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Head_Location_2 = K2Node_ComponentBoundEvent_Head_Location_2;
	Parms.K2Node_ComponentBoundEvent_Head_Location_1 = K2Node_ComponentBoundEvent_Head_Location_1;
	Parms.K2Node_ComponentBoundEvent_Head_Location = K2Node_ComponentBoundEvent_Head_Location;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


