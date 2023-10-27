#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HSVColorSlider.WBP_HSVColorSlider_C
// (None)

class UClass* UWBP_HSVColorSlider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HSVColorSlider_C");

	return Clss;
}


// WBP_HSVColorSlider_C WBP_HSVColorSlider.Default__WBP_HSVColorSlider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HSVColorSlider_C* UWBP_HSVColorSlider_C::GetDefaultObj()
{
	static class UWBP_HSVColorSlider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HSVColorSlider_C*>(UWBP_HSVColorSlider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HSVColorSlider.WBP_HSVColorSlider_C.Get Focus Target
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Focus_Target                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_HSVColorSlider_C::Get_Focus_Target(class UUserWidget** Focus_Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HSVColorSlider_C", "Get Focus Target");

	Params::UWBP_HSVColorSlider_C_Get_Focus_Target_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Focus_Target != nullptr)
		*Focus_Target = Parms.Focus_Target;

}


// Function WBP_HSVColorSlider.WBP_HSVColorSlider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HSVColorSlider_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HSVColorSlider_C", "PreConstruct");

	Params::UWBP_HSVColorSlider_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HSVColorSlider.WBP_HSVColorSlider_C.BndEvt__WBP_HSVColorSlider_Intensity_Slider_K2Node_ComponentBoundEvent_0_On Value Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             New_Value                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HSVColorSlider_C::BndEvt__WBP_HSVColorSlider_Intensity_Slider_K2Node_ComponentBoundEvent_0_On_Value_Changed__DelegateSignature(double New_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HSVColorSlider_C", "BndEvt__WBP_HSVColorSlider_Intensity_Slider_K2Node_ComponentBoundEvent_0_On Value Changed__DelegateSignature");

	Params::UWBP_HSVColorSlider_C_BndEvt__WBP_HSVColorSlider_Intensity_Slider_K2Node_ComponentBoundEvent_0_On_Value_Changed__DelegateSignature_Params Parms{};

	Parms.New_Value = New_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HSVColorSlider.WBP_HSVColorSlider_C.BndEvt__WBP_HSVColorSlider_Tint_Slider_K2Node_ComponentBoundEvent_1_On Value Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             New_Value                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HSVColorSlider_C::BndEvt__WBP_HSVColorSlider_Tint_Slider_K2Node_ComponentBoundEvent_1_On_Value_Changed__DelegateSignature(double New_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HSVColorSlider_C", "BndEvt__WBP_HSVColorSlider_Tint_Slider_K2Node_ComponentBoundEvent_1_On Value Changed__DelegateSignature");

	Params::UWBP_HSVColorSlider_C_BndEvt__WBP_HSVColorSlider_Tint_Slider_K2Node_ComponentBoundEvent_1_On_Value_Changed__DelegateSignature_Params Parms{};

	Parms.New_Value = New_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HSVColorSlider.WBP_HSVColorSlider_C.ExecuteUbergraph_WBP_HSVColorSlider
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_New_Value_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_New_Value                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HSVColorSlider_C::ExecuteUbergraph_WBP_HSVColorSlider(int32 EntryPoint, bool K2Node_Event_IsDesignTime, double K2Node_ComponentBoundEvent_New_Value_1, double K2Node_ComponentBoundEvent_New_Value, float CallFunc_SetPercent_InPercent_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HSVColorSlider_C", "ExecuteUbergraph_WBP_HSVColorSlider");

	Params::UWBP_HSVColorSlider_C_ExecuteUbergraph_WBP_HSVColorSlider_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_New_Value_1 = K2Node_ComponentBoundEvent_New_Value_1;
	Parms.K2Node_ComponentBoundEvent_New_Value = K2Node_ComponentBoundEvent_New_Value;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast_1 = CallFunc_SetPercent_InPercent_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


