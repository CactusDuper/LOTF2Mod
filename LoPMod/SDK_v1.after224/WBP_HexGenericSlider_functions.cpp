#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HexGenericSlider.WBP_HexGenericSlider_C
// (None)

class UClass* UWBP_HexGenericSlider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HexGenericSlider_C");

	return Clss;
}


// WBP_HexGenericSlider_C WBP_HexGenericSlider.Default__WBP_HexGenericSlider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HexGenericSlider_C* UWBP_HexGenericSlider_C::GetDefaultObj()
{
	static class UWBP_HexGenericSlider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HexGenericSlider_C*>(UWBP_HexGenericSlider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HexGenericSlider.WBP_HexGenericSlider_C.BndEvt__WBP_HexGenericSlider_Slider_Feature_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HexGenericSlider_C::BndEvt__WBP_HexGenericSlider_Slider_Feature_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HexGenericSlider_C", "BndEvt__WBP_HexGenericSlider_Slider_Feature_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::UWBP_HexGenericSlider_C_BndEvt__WBP_HexGenericSlider_Slider_Feature_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HexGenericSlider.WBP_HexGenericSlider_C.ExecuteUbergraph_WBP_HexGenericSlider
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CallDelegate_New_Value_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HexGenericSlider_C::ExecuteUbergraph_WBP_HexGenericSlider(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value, double K2Node_CallDelegate_New_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HexGenericSlider_C", "ExecuteUbergraph_WBP_HexGenericSlider");

	Params::UWBP_HexGenericSlider_C_ExecuteUbergraph_WBP_HexGenericSlider_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_CallDelegate_New_Value_ImplicitCast = K2Node_CallDelegate_New_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HexGenericSlider.WBP_HexGenericSlider_C.On Value Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             New_Value                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HexGenericSlider_C::On_Value_Changed__DelegateSignature(double New_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HexGenericSlider_C", "On Value Changed__DelegateSignature");

	Params::UWBP_HexGenericSlider_C_On_Value_Changed__DelegateSignature_Params Parms{};

	Parms.New_Value = New_Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


