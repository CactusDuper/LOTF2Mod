#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Shape_Eyes.WBP_Shape_Eyes_C
// (None)

class UClass* UWBP_Shape_Eyes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Shape_Eyes_C");

	return Clss;
}


// WBP_Shape_Eyes_C WBP_Shape_Eyes.Default__WBP_Shape_Eyes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Shape_Eyes_C* UWBP_Shape_Eyes_C::GetDefaultObj()
{
	static class UWBP_Shape_Eyes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Shape_Eyes_C*>(UWBP_Shape_Eyes_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Shape_Eyes.WBP_Shape_Eyes_C.Navigate to Primary Intensity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Shape_Eyes_C::Navigate_to_Primary_Intensity(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shape_Eyes_C", "Navigate to Primary Intensity");

	Params::UWBP_Shape_Eyes_C_Navigate_to_Primary_Intensity_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Shape_Eyes.WBP_Shape_Eyes_C.Navigate to Copy color
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Shape_Eyes_C::Navigate_to_Copy_color(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shape_Eyes_C", "Navigate to Copy color");

	Params::UWBP_Shape_Eyes_C_Navigate_to_Copy_color_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Shape_Eyes.WBP_Shape_Eyes_C.Copy Color
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHSVColorSliderWidget*       Origin                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHSVColorSliderWidget*       Destination                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColor_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Shape_Eyes_C::Copy_Color(class UHSVColorSliderWidget* Origin, class UHSVColorSliderWidget* Destination, float CallFunc_GetValue_ReturnValue, const struct FLinearColor& CallFunc_GetColor_ReturnValue, float CallFunc_GetValue_ReturnValue_1, float CallFunc_GetValue_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shape_Eyes_C", "Copy Color");

	Params::UWBP_Shape_Eyes_C_Copy_Color_Params Parms{};

	Parms.Origin = Origin;
	Parms.Destination = Destination;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_GetColor_ReturnValue = CallFunc_GetColor_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue_1 = CallFunc_GetValue_ReturnValue_1;
	Parms.CallFunc_GetValue_ReturnValue_2 = CallFunc_GetValue_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shape_Eyes.WBP_Shape_Eyes_C.Navigate to Primary Hue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Shape_Eyes_C::Navigate_to_Primary_Hue(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shape_Eyes_C", "Navigate to Primary Hue");

	Params::UWBP_Shape_Eyes_C_Navigate_to_Primary_Hue_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Shape_Eyes.WBP_Shape_Eyes_C.Navigate To Secondary Value
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Shape_Eyes_C::Navigate_To_Secondary_Value(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shape_Eyes_C", "Navigate To Secondary Value");

	Params::UWBP_Shape_Eyes_C_Navigate_To_Secondary_Value_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Shape_Eyes.WBP_Shape_Eyes_C.Navigate to Primary Brightness
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Shape_Eyes_C::Navigate_to_Primary_Brightness(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shape_Eyes_C", "Navigate to Primary Brightness");

	Params::UWBP_Shape_Eyes_C_Navigate_to_Primary_Brightness_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Shape_Eyes.WBP_Shape_Eyes_C.Navigate To Secondary Hue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Shape_Eyes_C::Navigate_To_Secondary_Hue(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shape_Eyes_C", "Navigate To Secondary Hue");

	Params::UWBP_Shape_Eyes_C_Navigate_To_Secondary_Hue_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Shape_Eyes.WBP_Shape_Eyes_C.BP_GetDesiredFocusTarget
// (HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Shape_Eyes_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shape_Eyes_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_Shape_Eyes_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Shape_Eyes.WBP_Shape_Eyes_C.SelectAndFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Shape_Eyes_C::SelectAndFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shape_Eyes_C", "SelectAndFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Shape_Eyes.WBP_Shape_Eyes_C.BndEvt__WBP_Shape_Nose_Shapes_Grid_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsHovered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Shape_Eyes_C::BndEvt__WBP_Shape_Nose_Shapes_Grid_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shape_Eyes_C", "BndEvt__WBP_Shape_Nose_Shapes_Grid_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature");

	Params::UWBP_Shape_Eyes_C_BndEvt__WBP_Shape_Nose_Shapes_Grid_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.bIsHovered = bIsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shape_Eyes.WBP_Shape_Eyes_C.BndEvt__WBP_Shape_Eyes_W_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Checked                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Shape_Eyes_C::BndEvt__WBP_Shape_Eyes_W_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool Checked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shape_Eyes_C", "BndEvt__WBP_Shape_Eyes_W_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature");

	Params::UWBP_Shape_Eyes_C_BndEvt__WBP_Shape_Eyes_W_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature_Params Parms{};

	Parms.Checked = Checked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shape_Eyes.WBP_Shape_Eyes_C.BndEvt__WBP_Shape_Eyes_PrimaryColor_K2Node_ComponentBoundEvent_3_OnColorChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FLinearColor                NewColor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewIntensity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Shape_Eyes_C::BndEvt__WBP_Shape_Eyes_PrimaryColor_K2Node_ComponentBoundEvent_3_OnColorChange__DelegateSignature(const struct FLinearColor& NewColor, float NewIntensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shape_Eyes_C", "BndEvt__WBP_Shape_Eyes_PrimaryColor_K2Node_ComponentBoundEvent_3_OnColorChange__DelegateSignature");

	Params::UWBP_Shape_Eyes_C_BndEvt__WBP_Shape_Eyes_PrimaryColor_K2Node_ComponentBoundEvent_3_OnColorChange__DelegateSignature_Params Parms{};

	Parms.NewColor = NewColor;
	Parms.NewIntensity = NewIntensity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shape_Eyes.WBP_Shape_Eyes_C.BndEvt__WBP_Shape_Eyes_Shapes_Grid_K2Node_ComponentBoundEvent_4_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Shape_Eyes_C::BndEvt__WBP_Shape_Eyes_Shapes_Grid_K2Node_ComponentBoundEvent_4_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shape_Eyes_C", "BndEvt__WBP_Shape_Eyes_Shapes_Grid_K2Node_ComponentBoundEvent_4_SimpleListItemEventDynamic__DelegateSignature");

	Params::UWBP_Shape_Eyes_C_BndEvt__WBP_Shape_Eyes_Shapes_Grid_K2Node_ComponentBoundEvent_4_SimpleListItemEventDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Shape_Eyes.WBP_Shape_Eyes_C.BP_PanelActivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Shape_Eyes_C::BP_PanelActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shape_Eyes_C", "BP_PanelActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Shape_Eyes.WBP_Shape_Eyes_C.ExecuteUbergraph_WBP_Shape_Eyes
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsHovered                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SelectAndFocus_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Checked                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_ComponentBoundEvent_newColor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_newIntensity                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UColorListEntry*             K2Node_DynamicCast_AsColor_List_Entry                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidgetFromItem_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Color_Preset_C*           K2Node_DynamicCast_AsW_Color_Preset                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidgetFromItem_ReturnValue_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             CallFunc_GetListItems_ReturnValue                                (ConstParm, ReferenceParm)
// class UW_Color_Preset_C*           K2Node_DynamicCast_AsW_Color_Preset_1                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidgetFromItem_ReturnValue_2                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_Color_Preset_C*           K2Node_DynamicCast_AsW_Color_Preset_2                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetColor_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Shape_Eyes_C::ExecuteUbergraph_WBP_Shape_Eyes(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item_1, bool K2Node_ComponentBoundEvent_bIsHovered, bool CallFunc_SelectAndFocus_ReturnValue, bool K2Node_ComponentBoundEvent_Checked, bool CallFunc_Not_PreBool_ReturnValue, const struct FLinearColor& K2Node_ComponentBoundEvent_newColor, float K2Node_ComponentBoundEvent_newIntensity, class UObject* K2Node_ComponentBoundEvent_Item, class UColorListEntry* K2Node_DynamicCast_AsColor_List_Entry, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UW_Color_Preset_C* K2Node_DynamicCast_AsW_Color_Preset, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_PostEventAtLocation_ReturnValue, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_1, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UW_Color_Preset_C* K2Node_DynamicCast_AsW_Color_Preset_1, bool K2Node_DynamicCast_bSuccess_2, class UObject* CallFunc_Array_Get_Item, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, class UW_Color_Preset_C* K2Node_DynamicCast_AsW_Color_Preset_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Less_IntInt_ReturnValue, const struct FLinearColor& CallFunc_GetColor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Shape_Eyes_C", "ExecuteUbergraph_WBP_Shape_Eyes");

	Params::UWBP_Shape_Eyes_C_ExecuteUbergraph_WBP_Shape_Eyes_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Item_1 = K2Node_ComponentBoundEvent_Item_1;
	Parms.K2Node_ComponentBoundEvent_bIsHovered = K2Node_ComponentBoundEvent_bIsHovered;
	Parms.CallFunc_SelectAndFocus_ReturnValue = CallFunc_SelectAndFocus_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Checked = K2Node_ComponentBoundEvent_Checked;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_newColor = K2Node_ComponentBoundEvent_newColor;
	Parms.K2Node_ComponentBoundEvent_newIntensity = K2Node_ComponentBoundEvent_newIntensity;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_DynamicCast_AsColor_List_Entry = K2Node_DynamicCast_AsColor_List_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWidgetFromItem_ReturnValue = CallFunc_GetWidgetFromItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Color_Preset = K2Node_DynamicCast_AsW_Color_Preset;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_GetWidgetFromItem_ReturnValue_1 = CallFunc_GetWidgetFromItem_ReturnValue_1;
	Parms.CallFunc_GetListItems_ReturnValue = CallFunc_GetListItems_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Color_Preset_1 = K2Node_DynamicCast_AsW_Color_Preset_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetWidgetFromItem_ReturnValue_2 = CallFunc_GetWidgetFromItem_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Color_Preset_2 = K2Node_DynamicCast_AsW_Color_Preset_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetColor_ReturnValue = CallFunc_GetColor_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


