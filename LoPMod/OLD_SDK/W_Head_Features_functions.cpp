#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Head_Features.W_Head_Features_C
// (None)

class UClass* UW_Head_Features_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Head_Features_C");

	return Clss;
}


// W_Head_Features_C W_Head_Features.Default__W_Head_Features_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Head_Features_C* UW_Head_Features_C::GetDefaultObj()
{
	static class UW_Head_Features_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Head_Features_C*>(UW_Head_Features_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Head_Features.W_Head_Features_C.Set Shape Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOptionSelectorBaseWidget*   Feature                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UW_Head_Features_C::Set_Shape_Widget(class UOptionSelectorBaseWidget* Feature)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "Set Shape Widget");

	Params::UW_Head_Features_C_Set_Shape_Widget_Params Parms{};

	Parms.Feature = Feature;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Features.W_Head_Features_C.Select Age
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Features_C::Select_Age(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "Select Age");

	Params::UW_Head_Features_C_Select_Age_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Features.W_Head_Features_C.Select Face appearance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Features_C::Select_Face_appearance(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "Select Face appearance");

	Params::UW_Head_Features_C_Select_Face_appearance_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Features.W_Head_Features_C.Select Eyes Color
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Features_C::Select_Eyes_Color(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "Select Eyes Color");

	Params::UW_Head_Features_C_Select_Eyes_Color_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Features.W_Head_Features_C.Show Details Panel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Selector_Button                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UShapeCategoryWidget*        Panel_Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Show_Fine_Tune                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Features_C::Show_Details_Panel(class UUserWidget* Selector_Button, class UShapeCategoryWidget* Panel_Widget, bool Show_Fine_Tune)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "Show Details Panel");

	Params::UW_Head_Features_C_Show_Details_Panel_Params Parms{};

	Parms.Selector_Button = Selector_Button;
	Parms.Panel_Widget = Panel_Widget;
	Parms.Show_Fine_Tune = Show_Fine_Tune;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Features.W_Head_Features_C.Set Shape Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Features_C::Set_Shape_Visibility(enum class ESlateVisibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "Set Shape Visibility");

	Params::UW_Head_Features_C_Set_Shape_Visibility_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Features.W_Head_Features_C.Update Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputActionImage*           Input_Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetInputAction_ReturnValue                              (NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetControllerIconByEventName_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_Head_Features_C::Update_Icon(class UInputActionImage* Input_Image, const struct FGameplayTag& CallFunc_GetInputAction_ReturnValue, class UTexture2D* CallFunc_GetControllerIconByEventName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "Update Icon");

	Params::UW_Head_Features_C_Update_Icon_Params Parms{};

	Parms.Input_Image = Input_Image;
	Parms.CallFunc_GetInputAction_ReturnValue = CallFunc_GetInputAction_ReturnValue;
	Parms.CallFunc_GetControllerIconByEventName_ReturnValue = CallFunc_GetControllerIconByEventName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Features.W_Head_Features_C.GetDesiredFocusTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Features_C::GetDesiredFocusTarget(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "GetDesiredFocusTarget");

	Params::UW_Head_Features_C_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Features.W_Head_Features_C.Select Cheekbones
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Features_C::Select_Cheekbones(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "Select Cheekbones");

	Params::UW_Head_Features_C_Select_Cheekbones_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Features.W_Head_Features_C.Select Mouth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Features_C::Select_Mouth(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "Select Mouth");

	Params::UW_Head_Features_C_Select_Mouth_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Features.W_Head_Features_C.Select Ears
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Features_C::Select_Ears(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "Select Ears");

	Params::UW_Head_Features_C_Select_Ears_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Features.W_Head_Features_C.Select Nose
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Features_C::Select_Nose(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "Select Nose");

	Params::UW_Head_Features_C_Select_Nose_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Features.W_Head_Features_C.Select Eyes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UW_Head_Features_C::Select_Eyes(enum class EUINavigation Navigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "Select Eyes");

	Params::UW_Head_Features_C_Select_Eyes_Params Parms{};

	Parms.Navigation = Navigation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Head_Features.W_Head_Features_C.BP_PanelActivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Head_Features_C::BP_PanelActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "BP_PanelActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Head_Features.W_Head_Features_C.BP_PanelDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Head_Features_C::BP_PanelDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "BP_PanelDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Head_Features.W_Head_Features_C.BndEvt__WBP_Head_Customization_Hair_Selector_K2Node_ComponentBoundEvent_6_On Customize Feature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Features_C::BndEvt__WBP_Head_Customization_Hair_Selector_K2Node_ComponentBoundEvent_6_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "BndEvt__WBP_Head_Customization_Hair_Selector_K2Node_ComponentBoundEvent_6_On Customize Feature__DelegateSignature");

	Params::UW_Head_Features_C_BndEvt__WBP_Head_Customization_Hair_Selector_K2Node_ComponentBoundEvent_6_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Features.W_Head_Features_C.BndEvt__WBP_Head_Customization_Nose_Selector_K2Node_ComponentBoundEvent_7_On Customize Feature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Features_C::BndEvt__WBP_Head_Customization_Nose_Selector_K2Node_ComponentBoundEvent_7_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "BndEvt__WBP_Head_Customization_Nose_Selector_K2Node_ComponentBoundEvent_7_On Customize Feature__DelegateSignature");

	Params::UW_Head_Features_C_BndEvt__WBP_Head_Customization_Nose_Selector_K2Node_ComponentBoundEvent_7_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Features.W_Head_Features_C.BndEvt__WBP_Head_Customization_Ears_Selector_K2Node_ComponentBoundEvent_8_On Customize Feature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Features_C::BndEvt__WBP_Head_Customization_Ears_Selector_K2Node_ComponentBoundEvent_8_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "BndEvt__WBP_Head_Customization_Ears_Selector_K2Node_ComponentBoundEvent_8_On Customize Feature__DelegateSignature");

	Params::UW_Head_Features_C_BndEvt__WBP_Head_Customization_Ears_Selector_K2Node_ComponentBoundEvent_8_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Features.W_Head_Features_C.BndEvt__WBP_Head_Customization_Mouth_Selector_K2Node_ComponentBoundEvent_9_On Customize Feature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Features_C::BndEvt__WBP_Head_Customization_Mouth_Selector_K2Node_ComponentBoundEvent_9_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "BndEvt__WBP_Head_Customization_Mouth_Selector_K2Node_ComponentBoundEvent_9_On Customize Feature__DelegateSignature");

	Params::UW_Head_Features_C_BndEvt__WBP_Head_Customization_Mouth_Selector_K2Node_ComponentBoundEvent_9_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Features.W_Head_Features_C.BndEvt__WBP_Head_Customization_Cheekbones_Selector_K2Node_ComponentBoundEvent_10_On Customize Feature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Features_C::BndEvt__WBP_Head_Customization_Cheekbones_Selector_K2Node_ComponentBoundEvent_10_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "BndEvt__WBP_Head_Customization_Cheekbones_Selector_K2Node_ComponentBoundEvent_10_On Customize Feature__DelegateSignature");

	Params::UW_Head_Features_C_BndEvt__WBP_Head_Customization_Cheekbones_Selector_K2Node_ComponentBoundEvent_10_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Features.W_Head_Features_C.BndEvt__WBP_Head_Customization_Eyes_Selector_K2Node_ComponentBoundEvent_11_OnHeadShapeSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      FeatureName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Features_C::BndEvt__WBP_Head_Customization_Eyes_Selector_K2Node_ComponentBoundEvent_11_OnHeadShapeSelected__DelegateSignature(const class FString& FeatureName, enum class ECustomizationCategory Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "BndEvt__WBP_Head_Customization_Eyes_Selector_K2Node_ComponentBoundEvent_11_OnHeadShapeSelected__DelegateSignature");

	Params::UW_Head_Features_C_BndEvt__WBP_Head_Customization_Eyes_Selector_K2Node_ComponentBoundEvent_11_OnHeadShapeSelected__DelegateSignature_Params Parms{};

	Parms.FeatureName = FeatureName;
	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Features.W_Head_Features_C.BndEvt__WBP_Head_Customization_Nose_Selector_K2Node_ComponentBoundEvent_12_OnHeadShapeSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      FeatureName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Features_C::BndEvt__WBP_Head_Customization_Nose_Selector_K2Node_ComponentBoundEvent_12_OnHeadShapeSelected__DelegateSignature(const class FString& FeatureName, enum class ECustomizationCategory Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "BndEvt__WBP_Head_Customization_Nose_Selector_K2Node_ComponentBoundEvent_12_OnHeadShapeSelected__DelegateSignature");

	Params::UW_Head_Features_C_BndEvt__WBP_Head_Customization_Nose_Selector_K2Node_ComponentBoundEvent_12_OnHeadShapeSelected__DelegateSignature_Params Parms{};

	Parms.FeatureName = FeatureName;
	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Features.W_Head_Features_C.BndEvt__WBP_Head_Customization_Ears_Selector_K2Node_ComponentBoundEvent_13_OnHeadShapeSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      FeatureName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Features_C::BndEvt__WBP_Head_Customization_Ears_Selector_K2Node_ComponentBoundEvent_13_OnHeadShapeSelected__DelegateSignature(const class FString& FeatureName, enum class ECustomizationCategory Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "BndEvt__WBP_Head_Customization_Ears_Selector_K2Node_ComponentBoundEvent_13_OnHeadShapeSelected__DelegateSignature");

	Params::UW_Head_Features_C_BndEvt__WBP_Head_Customization_Ears_Selector_K2Node_ComponentBoundEvent_13_OnHeadShapeSelected__DelegateSignature_Params Parms{};

	Parms.FeatureName = FeatureName;
	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Features.W_Head_Features_C.BndEvt__WBP_Head_Customization_Mouth_Selector_K2Node_ComponentBoundEvent_14_OnHeadShapeSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      FeatureName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Features_C::BndEvt__WBP_Head_Customization_Mouth_Selector_K2Node_ComponentBoundEvent_14_OnHeadShapeSelected__DelegateSignature(const class FString& FeatureName, enum class ECustomizationCategory Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "BndEvt__WBP_Head_Customization_Mouth_Selector_K2Node_ComponentBoundEvent_14_OnHeadShapeSelected__DelegateSignature");

	Params::UW_Head_Features_C_BndEvt__WBP_Head_Customization_Mouth_Selector_K2Node_ComponentBoundEvent_14_OnHeadShapeSelected__DelegateSignature_Params Parms{};

	Parms.FeatureName = FeatureName;
	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Features.W_Head_Features_C.BndEvt__WBP_Head_Customization_Cheekbones_Selector_K2Node_ComponentBoundEvent_15_OnHeadShapeSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      FeatureName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Features_C::BndEvt__WBP_Head_Customization_Cheekbones_Selector_K2Node_ComponentBoundEvent_15_OnHeadShapeSelected__DelegateSignature(const class FString& FeatureName, enum class ECustomizationCategory Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "BndEvt__WBP_Head_Customization_Cheekbones_Selector_K2Node_ComponentBoundEvent_15_OnHeadShapeSelected__DelegateSignature");

	Params::UW_Head_Features_C_BndEvt__WBP_Head_Customization_Cheekbones_Selector_K2Node_ComponentBoundEvent_15_OnHeadShapeSelected__DelegateSignature_Params Parms{};

	Parms.FeatureName = FeatureName;
	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Features.W_Head_Features_C.BndEvt__WBP_Head_Customization_W_BottomBarButton_K2Node_ComponentBoundEvent_19_OnButtonActionComplete__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Head_Features_C::BndEvt__WBP_Head_Customization_W_BottomBarButton_K2Node_ComponentBoundEvent_19_OnButtonActionComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "BndEvt__WBP_Head_Customization_W_BottomBarButton_K2Node_ComponentBoundEvent_19_OnButtonActionComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Head_Features.W_Head_Features_C.BP_RandomizeCharacter
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Head_Features_C::BP_RandomizeCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "BP_RandomizeCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Head_Features.W_Head_Features_C.BndEvt__W_Head_Customization_Eyes_Selector_1_K2Node_ComponentBoundEvent_20_On Customize Feature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Features_C::BndEvt__W_Head_Customization_Eyes_Selector_1_K2Node_ComponentBoundEvent_20_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "BndEvt__W_Head_Customization_Eyes_Selector_1_K2Node_ComponentBoundEvent_20_On Customize Feature__DelegateSignature");

	Params::UW_Head_Features_C_BndEvt__W_Head_Customization_Eyes_Selector_1_K2Node_ComponentBoundEvent_20_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Features.W_Head_Features_C.BP_StopShapeCustomization
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_Head_Features_C::BP_StopShapeCustomization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "BP_StopShapeCustomization");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Head_Features.W_Head_Features_C.BndEvt__W_Head_Customization_Face_Selector_K2Node_ComponentBoundEvent_22_On Customize Feature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Features_C::BndEvt__W_Head_Customization_Face_Selector_K2Node_ComponentBoundEvent_22_On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "BndEvt__W_Head_Customization_Face_Selector_K2Node_ComponentBoundEvent_22_On Customize Feature__DelegateSignature");

	Params::UW_Head_Features_C_BndEvt__W_Head_Customization_Face_Selector_K2Node_ComponentBoundEvent_22_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Features.W_Head_Features_C.OnRequestEditHead
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShowPanel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UW_Head_Features_C::OnRequestEditHead(enum class ECustomizationCategory Category, bool bShowPanel, const class FString& SelectedOption)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "OnRequestEditHead");

	Params::UW_Head_Features_C_OnRequestEditHead_Params Parms{};

	Parms.Category = Category;
	Parms.bShowPanel = bShowPanel;
	Parms.SelectedOption = SelectedOption;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Features.W_Head_Features_C.BndEvt__W_Head_Features_Grid_Presets_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsHovered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Features_C::BndEvt__W_Head_Features_Grid_Presets_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "BndEvt__W_Head_Features_Grid_Presets_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature");

	Params::UW_Head_Features_C_BndEvt__W_Head_Features_Grid_Presets_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.bIsHovered = bIsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Features.W_Head_Features_C.BndEvt__W_Head_Features_Grid_Presets_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_Head_Features_C::BndEvt__W_Head_Features_Grid_Presets_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "BndEvt__W_Head_Features_Grid_Presets_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature");

	Params::UW_Head_Features_C_BndEvt__W_Head_Features_Grid_Presets_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Head_Features.W_Head_Features_C.BndEvt__W_Head_Features_Button_FineTune_K2Node_ComponentBoundEvent_2_OnButtonActionComplete__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_Head_Features_C::BndEvt__W_Head_Features_Button_FineTune_K2Node_ComponentBoundEvent_2_OnButtonActionComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "BndEvt__W_Head_Features_Button_FineTune_K2Node_ComponentBoundEvent_2_OnButtonActionComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Head_Features.W_Head_Features_C.ExecuteUbergraph_W_Head_Features
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsArmorVisible_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_Customization_Category_6              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_Customization_Category_5              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_Customization_Category_4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_Customization_Category_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_Customization_Category_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_featureName_4                         (ZeroConstructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_category_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_featureName_3                         (ZeroConstructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_category_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_featureName_2                         (ZeroConstructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_category_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_featureName_1                         (ZeroConstructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_category_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_featureName                           (ZeroConstructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_category                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_Customization_Category_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_ComponentBoundEvent_Customization_Category                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECustomizationCategory  K2Node_Event_category                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowPanel                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_selectedOption                                      (ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsHovered                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsSelected                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidgetFromItem_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_HeadPresetWidget_list_C*  K2Node_DynamicCast_AsW_Head_Preset_Widget_List                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidgetFromItem_ReturnValue_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             CallFunc_GetListItems_ReturnValue                                (ConstParm, ReferenceParm)
// class UW_HeadPresetWidget_list_C*  K2Node_DynamicCast_AsW_Head_Preset_Widget_List_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidgetFromItem_ReturnValue_2                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_HeadPresetWidget_list_C*  K2Node_DynamicCast_AsW_Head_Preset_Widget_List_2                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetMutableName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetMutableName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetMutableName_ReturnValue_2                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetMutableName_ReturnValue_3                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetMutableName_ReturnValue_4                            (ZeroConstructor, HasGetValueTypeHash)

void UW_Head_Features_C::ExecuteUbergraph_W_Head_Features(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsArmorVisible_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_6, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_5, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_4, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_3, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_2, const class FString& K2Node_ComponentBoundEvent_featureName_4, enum class ECustomizationCategory K2Node_ComponentBoundEvent_category_4, const class FString& K2Node_ComponentBoundEvent_featureName_3, enum class ECustomizationCategory K2Node_ComponentBoundEvent_category_3, const class FString& K2Node_ComponentBoundEvent_featureName_2, enum class ECustomizationCategory K2Node_ComponentBoundEvent_category_2, const class FString& K2Node_ComponentBoundEvent_featureName_1, enum class ECustomizationCategory K2Node_ComponentBoundEvent_category_1, const class FString& K2Node_ComponentBoundEvent_featureName, enum class ECustomizationCategory K2Node_ComponentBoundEvent_category, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category_1, bool CallFunc_IsValid_ReturnValue, enum class ECustomizationCategory K2Node_ComponentBoundEvent_Customization_Category, enum class ECustomizationCategory K2Node_Event_category, bool K2Node_Event_bShowPanel, const class FString& K2Node_Event_selectedOption, class UObject* K2Node_ComponentBoundEvent_Item_1, bool K2Node_ComponentBoundEvent_bIsHovered, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UW_HeadPresetWidget_list_C* K2Node_DynamicCast_AsW_Head_Preset_Widget_List, bool K2Node_DynamicCast_bSuccess_2, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_1, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UW_HeadPresetWidget_list_C* K2Node_DynamicCast_AsW_Head_Preset_Widget_List_1, bool K2Node_DynamicCast_bSuccess_3, class UObject* CallFunc_Array_Get_Item, class UUserWidget* CallFunc_GetWidgetFromItem_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, class UW_HeadPresetWidget_list_C* K2Node_DynamicCast_AsW_Head_Preset_Widget_List_2, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetMutableName_ReturnValue, const class FString& CallFunc_GetMutableName_ReturnValue_1, const class FString& CallFunc_GetMutableName_ReturnValue_2, const class FString& CallFunc_GetMutableName_ReturnValue_3, const class FString& CallFunc_GetMutableName_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Head_Features_C", "ExecuteUbergraph_W_Head_Features");

	Params::UW_Head_Features_C_ExecuteUbergraph_W_Head_Features_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue_1 = CallFunc_GetOwningPlayerPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsLOTF2Character_1 = K2Node_DynamicCast_AsLOTF2Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsArmorVisible_ReturnValue = CallFunc_IsArmorVisible_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Customization_Category_6 = K2Node_ComponentBoundEvent_Customization_Category_6;
	Parms.K2Node_ComponentBoundEvent_Customization_Category_5 = K2Node_ComponentBoundEvent_Customization_Category_5;
	Parms.K2Node_ComponentBoundEvent_Customization_Category_4 = K2Node_ComponentBoundEvent_Customization_Category_4;
	Parms.K2Node_ComponentBoundEvent_Customization_Category_3 = K2Node_ComponentBoundEvent_Customization_Category_3;
	Parms.K2Node_ComponentBoundEvent_Customization_Category_2 = K2Node_ComponentBoundEvent_Customization_Category_2;
	Parms.K2Node_ComponentBoundEvent_featureName_4 = K2Node_ComponentBoundEvent_featureName_4;
	Parms.K2Node_ComponentBoundEvent_category_4 = K2Node_ComponentBoundEvent_category_4;
	Parms.K2Node_ComponentBoundEvent_featureName_3 = K2Node_ComponentBoundEvent_featureName_3;
	Parms.K2Node_ComponentBoundEvent_category_3 = K2Node_ComponentBoundEvent_category_3;
	Parms.K2Node_ComponentBoundEvent_featureName_2 = K2Node_ComponentBoundEvent_featureName_2;
	Parms.K2Node_ComponentBoundEvent_category_2 = K2Node_ComponentBoundEvent_category_2;
	Parms.K2Node_ComponentBoundEvent_featureName_1 = K2Node_ComponentBoundEvent_featureName_1;
	Parms.K2Node_ComponentBoundEvent_category_1 = K2Node_ComponentBoundEvent_category_1;
	Parms.K2Node_ComponentBoundEvent_featureName = K2Node_ComponentBoundEvent_featureName;
	Parms.K2Node_ComponentBoundEvent_category = K2Node_ComponentBoundEvent_category;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue_1 = CallFunc_PostEventAtLocation_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Customization_Category_1 = K2Node_ComponentBoundEvent_Customization_Category_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Customization_Category = K2Node_ComponentBoundEvent_Customization_Category;
	Parms.K2Node_Event_category = K2Node_Event_category;
	Parms.K2Node_Event_bShowPanel = K2Node_Event_bShowPanel;
	Parms.K2Node_Event_selectedOption = K2Node_Event_selectedOption;
	Parms.K2Node_ComponentBoundEvent_Item_1 = K2Node_ComponentBoundEvent_Item_1;
	Parms.K2Node_ComponentBoundEvent_bIsHovered = K2Node_ComponentBoundEvent_bIsHovered;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_bIsSelected = K2Node_ComponentBoundEvent_bIsSelected;
	Parms.CallFunc_GetWidgetFromItem_ReturnValue = CallFunc_GetWidgetFromItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsW_Head_Preset_Widget_List = K2Node_DynamicCast_AsW_Head_Preset_Widget_List;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetWidgetFromItem_ReturnValue_1 = CallFunc_GetWidgetFromItem_ReturnValue_1;
	Parms.CallFunc_GetListItems_ReturnValue = CallFunc_GetListItems_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Head_Preset_Widget_List_1 = K2Node_DynamicCast_AsW_Head_Preset_Widget_List_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetWidgetFromItem_ReturnValue_2 = CallFunc_GetWidgetFromItem_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsW_Head_Preset_Widget_List_2 = K2Node_DynamicCast_AsW_Head_Preset_Widget_List_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetMutableName_ReturnValue = CallFunc_GetMutableName_ReturnValue;
	Parms.CallFunc_GetMutableName_ReturnValue_1 = CallFunc_GetMutableName_ReturnValue_1;
	Parms.CallFunc_GetMutableName_ReturnValue_2 = CallFunc_GetMutableName_ReturnValue_2;
	Parms.CallFunc_GetMutableName_ReturnValue_3 = CallFunc_GetMutableName_ReturnValue_3;
	Parms.CallFunc_GetMutableName_ReturnValue_4 = CallFunc_GetMutableName_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


