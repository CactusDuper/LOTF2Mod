#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_BodyCustomization_Panel.W_BodyCustomization_Panel_C
// (None)

class UClass* UW_BodyCustomization_Panel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_BodyCustomization_Panel_C");

	return Clss;
}


// W_BodyCustomization_Panel_C W_BodyCustomization_Panel.Default__W_BodyCustomization_Panel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_BodyCustomization_Panel_C* UW_BodyCustomization_Panel_C::GetDefaultObj()
{
	static class UW_BodyCustomization_Panel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_BodyCustomization_Panel_C*>(UW_BodyCustomization_Panel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_BodyCustomization_Panel.W_BodyCustomization_Panel_C.Select Tattoos
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_BodyCustomization_Panel_C::Select_Tattoos(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BodyCustomization_Panel_C", "Select Tattoos");

	Params::UW_BodyCustomization_Panel_C_Select_Tattoos_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_BodyCustomization_Panel.W_BodyCustomization_Panel_C.Select Skin Type
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_BodyCustomization_Panel_C::Select_Skin_Type(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BodyCustomization_Panel_C", "Select Skin Type");

	Params::UW_BodyCustomization_Panel_C_Select_Skin_Type_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_BodyCustomization_Panel.W_BodyCustomization_Panel_C.Select Preset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_BodyCustomization_Panel_C::Select_Preset(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BodyCustomization_Panel_C", "Select Preset");

	Params::UW_BodyCustomization_Panel_C_Select_Preset_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_BodyCustomization_Panel.W_BodyCustomization_Panel_C.Select Body Shape
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_BodyCustomization_Panel_C::Select_Body_Shape(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BodyCustomization_Panel_C", "Select Body Shape");

	Params::UW_BodyCustomization_Panel_C_Select_Body_Shape_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_BodyCustomization_Panel.W_BodyCustomization_Panel_C.Set Shape Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BodyCustomization_Panel_C::Set_Shape_Visibility(enum class ESlateVisibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BodyCustomization_Panel_C", "Set Shape Visibility");

	Params::UW_BodyCustomization_Panel_C_Set_Shape_Visibility_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_BodyCustomization_Panel.W_BodyCustomization_Panel_C.Select Skin Color
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_BodyCustomization_Panel_C::Select_Skin_Color(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BodyCustomization_Panel_C", "Select Skin Color");

	Params::UW_BodyCustomization_Panel_C_Select_Skin_Color_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_BodyCustomization_Panel.W_BodyCustomization_Panel_C.GetDesiredFocusTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_BodyCustomization_Panel_C::GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BodyCustomization_Panel_C", "GetDesiredFocusTarget");

	Params::UW_BodyCustomization_Panel_C_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_BodyCustomization_Panel.W_BodyCustomization_Panel_C.BP_PanelActivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_BodyCustomization_Panel_C::BP_PanelActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BodyCustomization_Panel_C", "BP_PanelActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BodyCustomization_Panel.W_BodyCustomization_Panel_C.BndEvt__W_BodyCustomization_Panel_SkinColor_Selector_K2Node_ComponentBoundEvent_1_On Customize Feature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BodyCustomization_Panel_C::BndEvt__W_BodyCustomization_Panel_SkinColor_Selector_K2Node_ComponentBoundEvent_1_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BodyCustomization_Panel_C", "BndEvt__W_BodyCustomization_Panel_SkinColor_Selector_K2Node_ComponentBoundEvent_1_On Customize Feature__DelegateSignature");

	Params::UW_BodyCustomization_Panel_C_BndEvt__W_BodyCustomization_Panel_SkinColor_Selector_K2Node_ComponentBoundEvent_1_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_BodyCustomization_Panel.W_BodyCustomization_Panel_C.BP_StopShapeCustomization
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_BodyCustomization_Panel_C::BP_StopShapeCustomization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BodyCustomization_Panel_C", "BP_StopShapeCustomization");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BodyCustomization_Panel.W_BodyCustomization_Panel_C.BP_UpdateEquipmentStatus
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_BodyCustomization_Panel_C::BP_UpdateEquipmentStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BodyCustomization_Panel_C", "BP_UpdateEquipmentStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BodyCustomization_Panel.W_BodyCustomization_Panel_C.BndEvt__W_BodyCustomization_Panel_W_BottomBarButton_K2Node_ComponentBoundEvent_9_OnButtonActionComplete__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_BodyCustomization_Panel_C::BndEvt__W_BodyCustomization_Panel_W_BottomBarButton_K2Node_ComponentBoundEvent_9_OnButtonActionComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BodyCustomization_Panel_C", "BndEvt__W_BodyCustomization_Panel_W_BottomBarButton_K2Node_ComponentBoundEvent_9_OnButtonActionComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BodyCustomization_Panel.W_BodyCustomization_Panel_C.BndEvt__W_BodyCustomization_Panel_Root_Button_K2Node_ComponentBoundEvent_4_OnButtonClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_BodyCustomization_Panel_C::BndEvt__W_BodyCustomization_Panel_Root_Button_K2Node_ComponentBoundEvent_4_OnButtonClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BodyCustomization_Panel_C", "BndEvt__W_BodyCustomization_Panel_Root_Button_K2Node_ComponentBoundEvent_4_OnButtonClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BodyCustomization_Panel.W_BodyCustomization_Panel_C.BP_PanelDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_BodyCustomization_Panel_C::BP_PanelDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BodyCustomization_Panel_C", "BP_PanelDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BodyCustomization_Panel.W_BodyCustomization_Panel_C.BP_RandomizeCharacter
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_BodyCustomization_Panel_C::BP_RandomizeCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BodyCustomization_Panel_C", "BP_RandomizeCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_BodyCustomization_Panel.W_BodyCustomization_Panel_C.BP_SwitchBodyType
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECharacterBodyType      CurrentBodyType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BodyCustomization_Panel_C::BP_SwitchBodyType(enum class ECharacterBodyType CurrentBodyType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BodyCustomization_Panel_C", "BP_SwitchBodyType");

	Params::UW_BodyCustomization_Panel_C_BP_SwitchBodyType_Params Parms{};

	Parms.CurrentBodyType = CurrentBodyType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_BodyCustomization_Panel.W_BodyCustomization_Panel_C.ExecuteUbergraph_W_BodyCustomization_Panel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_Customization_Category                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsArmorSlotVisible_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECharacterBodyType      K2Node_Event_currentBodyType                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_BodyCustomization_Panel_C::ExecuteUbergraph_W_BodyCustomization_Panel(int32 EntryPoint, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsArmorSlotVisible_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, enum class ECharacterBodyType K2Node_Event_currentBodyType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_BodyCustomization_Panel_C", "ExecuteUbergraph_W_BodyCustomization_Panel");

	Params::UW_BodyCustomization_Panel_C_ExecuteUbergraph_W_BodyCustomization_Panel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Customization_Category = K2Node_ComponentBoundEvent_Customization_Category;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsArmorSlotVisible_ReturnValue = CallFunc_IsArmorSlotVisible_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue_1 = CallFunc_GetOwningPlayerPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsLOTF2Character_1 = K2Node_DynamicCast_AsLOTF2Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue_1 = CallFunc_PostEventAtLocation_ReturnValue_1;
	Parms.CallFunc_PostEventAtLocation_ReturnValue_2 = CallFunc_PostEventAtLocation_ReturnValue_2;
	Parms.CallFunc_PostEventAtLocation_ReturnValue_3 = CallFunc_PostEventAtLocation_ReturnValue_3;
	Parms.K2Node_Event_currentBodyType = K2Node_Event_currentBodyType;

	UObject::ProcessEvent(Func, &Parms);

}

}


