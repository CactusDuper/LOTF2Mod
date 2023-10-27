#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CommonButtonTab.WBP_CommonButtonTab_C
// (None)

class UClass* UWBP_CommonButtonTab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CommonButtonTab_C");

	return Clss;
}


// WBP_CommonButtonTab_C WBP_CommonButtonTab.Default__WBP_CommonButtonTab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CommonButtonTab_C* UWBP_CommonButtonTab_C::GetDefaultObj()
{
	static class UWBP_CommonButtonTab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CommonButtonTab_C*>(UWBP_CommonButtonTab_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CommonButtonTab.WBP_CommonButtonTab_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PhotoModeWidget_C*      PhotoModeWidgetRef                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonButtonTab_C::Initialize(class UWBP_PhotoModeWidget_C* PhotoModeWidgetRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonButtonTab_C", "Initialize");

	Params::UWBP_CommonButtonTab_C_Initialize_Params Parms{};

	Parms.PhotoModeWidgetRef = PhotoModeWidgetRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonButtonTab.WBP_CommonButtonTab_C.SetSelectedTabStyle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CommonButtonTab_C::SetSelectedTabStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonButtonTab_C", "SetSelectedTabStyle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonButtonTab.WBP_CommonButtonTab_C.SetUnselectedTabStyle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CommonButtonTab_C::SetUnselectedTabStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonButtonTab_C", "SetUnselectedTabStyle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonButtonTab.WBP_CommonButtonTab_C.BndEvt__Button_99_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CommonButtonTab_C::BndEvt__Button_99_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonButtonTab_C", "BndEvt__Button_99_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CommonButtonTab.WBP_CommonButtonTab_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonButtonTab_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonButtonTab_C", "PreConstruct");

	Params::UWBP_CommonButtonTab_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CommonButtonTab.WBP_CommonButtonTab_C.ExecuteUbergraph_WBP_CommonButtonTab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PhotoModeWidget_C*      K2Node_CustomEvent_PhotoModeWidgetRef                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PhotoModeDataInterface_C>K2Node_DynamicCast_AsBPI_Photo_Mode_Data_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle_1                                  (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle_2                                  (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonButtonTab_C::ExecuteUbergraph_WBP_CommonButtonTab(int32 EntryPoint, class UWBP_PhotoModeWidget_C* K2Node_CustomEvent_PhotoModeWidgetRef, TScriptInterface<class IBPI_PhotoModeDataInterface_C> K2Node_DynamicCast_AsBPI_Photo_Mode_Data_Interface, bool K2Node_DynamicCast_bSuccess, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_2, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CommonButtonTab_C", "ExecuteUbergraph_WBP_CommonButtonTab");

	Params::UWBP_CommonButtonTab_C_ExecuteUbergraph_WBP_CommonButtonTab_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_PhotoModeWidgetRef = K2Node_CustomEvent_PhotoModeWidgetRef;
	Parms.K2Node_DynamicCast_AsBPI_Photo_Mode_Data_Interface = K2Node_DynamicCast_AsBPI_Photo_Mode_Data_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.K2Node_MakeStruct_ButtonStyle_1 = K2Node_MakeStruct_ButtonStyle_1;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;
	Parms.K2Node_MakeStruct_ButtonStyle_2 = K2Node_MakeStruct_ButtonStyle_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


