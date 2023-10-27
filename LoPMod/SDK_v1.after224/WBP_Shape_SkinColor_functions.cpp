#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Shape_SkinColor.WBP_Shape_SkinColor_C
// (None)

class UClass* UWBP_Shape_SkinColor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Shape_SkinColor_C");

	return Clss;
}


// WBP_Shape_SkinColor_C WBP_Shape_SkinColor.Default__WBP_Shape_SkinColor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Shape_SkinColor_C* UWBP_Shape_SkinColor_C::GetDefaultObj()
{
	static class UWBP_Shape_SkinColor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Shape_SkinColor_C*>(UWBP_Shape_SkinColor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Shape_SkinColor.WBP_Shape_SkinColor_C.Select Brightness
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Shape_SkinColor_C::Select_Brightness(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shape_SkinColor_C", "Select Brightness");

	Params::UWBP_Shape_SkinColor_C_Select_Brightness_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Shape_SkinColor.WBP_Shape_SkinColor_C.Select Hue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Shape_SkinColor_C::Select_Hue(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shape_SkinColor_C", "Select Hue");

	Params::UWBP_Shape_SkinColor_C_Select_Hue_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Shape_SkinColor.WBP_Shape_SkinColor_C.BP_GetDesiredFocusTarget
// (HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Shape_SkinColor_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shape_SkinColor_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_Shape_SkinColor_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Shape_SkinColor.WBP_Shape_SkinColor_C.SelectAndFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Shape_SkinColor_C::SelectAndFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shape_SkinColor_C", "SelectAndFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Shape_SkinColor.WBP_Shape_SkinColor_C.BndEvt__WBP_Shape_SkinColor_Shapes_Grid_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsHovered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Shape_SkinColor_C::BndEvt__WBP_Shape_SkinColor_Shapes_Grid_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shape_SkinColor_C", "BndEvt__WBP_Shape_SkinColor_Shapes_Grid_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature");

	Params::UWBP_Shape_SkinColor_C_BndEvt__WBP_Shape_SkinColor_Shapes_Grid_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.bIsHovered = bIsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shape_SkinColor.WBP_Shape_SkinColor_C.BndEvt__WBP_Shape_SkinColor_Shapes_Grid_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Shape_SkinColor_C::BndEvt__WBP_Shape_SkinColor_Shapes_Grid_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shape_SkinColor_C", "BndEvt__WBP_Shape_SkinColor_Shapes_Grid_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature");

	Params::UWBP_Shape_SkinColor_C_BndEvt__WBP_Shape_SkinColor_Shapes_Grid_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shape_SkinColor.WBP_Shape_SkinColor_C.ExecuteUbergraph_WBP_Shape_SkinColor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsHovered                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidgetFromItem_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Color_Preset_C*           K2Node_DynamicCast_AsW_Color_Preset                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidgetFromItem_ReturnValue_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             CallFunc_GetListItems_ReturnValue                                (ConstParm, ReferenceParm)
// class UW_Color_Preset_C*           K2Node_DynamicCast_AsW_Color_Preset_1                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColor_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidgetFromItem_ReturnValue_2                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_Color_Preset_C*           K2Node_DynamicCast_AsW_Color_Preset_2                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Shape_SkinColor_C::ExecuteUbergraph_WBP_Shape_SkinColor(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UObject* K2Node_ComponentBoundEvent_Item_1, bool K2Node_ComponentBoundEvent_bIsHovered, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UW_Color_Preset_C* K2Node_DynamicCast_AsW_Color_Preset, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_ComponentBoundEvent_Item, int32 CallFunc_PostEventAtLocation_ReturnValue, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_1, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UW_Color_Preset_C* K2Node_DynamicCast_AsW_Color_Preset_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_Array_Get_Item, const struct FLinearColor& CallFunc_GetColor_ReturnValue, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_2, class UW_Color_Preset_C* K2Node_DynamicCast_AsW_Color_Preset_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shape_SkinColor_C", "ExecuteUbergraph_WBP_Shape_SkinColor");

	Params::UWBP_Shape_SkinColor_C_ExecuteUbergraph_WBP_Shape_SkinColor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_ComponentBoundEvent_Item_1 = K2Node_ComponentBoundEvent_Item_1;
	Parms.K2Node_ComponentBoundEvent_bIsHovered = K2Node_ComponentBoundEvent_bIsHovered;
	Parms.CallFunc_GetWidgetFromItem_ReturnValue = CallFunc_GetWidgetFromItem_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Color_Preset = K2Node_DynamicCast_AsW_Color_Preset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_GetWidgetFromItem_ReturnValue_1 = CallFunc_GetWidgetFromItem_ReturnValue_1;
	Parms.CallFunc_GetListItems_ReturnValue = CallFunc_GetListItems_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Color_Preset_1 = K2Node_DynamicCast_AsW_Color_Preset_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetColor_ReturnValue = CallFunc_GetColor_ReturnValue;
	Parms.CallFunc_GetWidgetFromItem_ReturnValue_2 = CallFunc_GetWidgetFromItem_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsW_Color_Preset_2 = K2Node_DynamicCast_AsW_Color_Preset_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


