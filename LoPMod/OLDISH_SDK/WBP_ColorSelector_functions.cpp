#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ColorSelector.WBP_ColorSelector_C
// (None)

class UClass* UWBP_ColorSelector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ColorSelector_C");

	return Clss;
}


// WBP_ColorSelector_C WBP_ColorSelector.Default__WBP_ColorSelector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ColorSelector_C* UWBP_ColorSelector_C::GetDefaultObj()
{
	static class UWBP_ColorSelector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ColorSelector_C*>(UWBP_ColorSelector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ColorSelector.WBP_ColorSelector_C.On Next Option
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_ColorSelector_C::On_Next_Option(enum class EUINavigation Navigation, int32 CallFunc_PostEventAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ColorSelector_C", "On Next Option");

	Params::UWBP_ColorSelector_C_On_Next_Option_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ColorSelector.WBP_ColorSelector_C.On Previous Option
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_ColorSelector_C::On_Previous_Option(enum class EUINavigation Navigation, int32 CallFunc_PostEventAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ColorSelector_C", "On Previous Option");

	Params::UWBP_ColorSelector_C_On_Previous_Option_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ColorSelector.WBP_ColorSelector_C.BndEvt__WBP_ColorSelector_Button_Customize_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ColorSelector_C::BndEvt__WBP_ColorSelector_Button_Customize_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ColorSelector_C", "BndEvt__WBP_ColorSelector_Button_Customize_K2Node_ComponentBoundEvent_0_OnButtonClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ColorSelector.WBP_ColorSelector_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ColorSelector_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ColorSelector_C", "PreConstruct");

	Params::UWBP_ColorSelector_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ColorSelector.WBP_ColorSelector_C.BP_LockFeature
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Block                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ColorSelector_C::BP_LockFeature(bool Block)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ColorSelector_C", "BP_LockFeature");

	Params::UWBP_ColorSelector_C_BP_LockFeature_Params Parms{};

	Parms.Block = Block;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ColorSelector.WBP_ColorSelector_C.BndEvt__WBP_ColorSelector_Button_Lock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ColorSelector_C::BndEvt__WBP_ColorSelector_Button_Lock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ColorSelector_C", "BndEvt__WBP_ColorSelector_Button_Lock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ColorSelector.WBP_ColorSelector_C.ExecuteUbergraph_WBP_ColorSelector
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocked_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bLock                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ColorSelector_C::ExecuteUbergraph_WBP_ColorSelector(int32 EntryPoint, bool CallFunc_IsLocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bLock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ColorSelector_C", "ExecuteUbergraph_WBP_ColorSelector");

	Params::UWBP_ColorSelector_C_ExecuteUbergraph_WBP_ColorSelector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsLocked_ReturnValue = CallFunc_IsLocked_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_bLock = K2Node_Event_bLock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ColorSelector.WBP_ColorSelector_C.On Customize Feature__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECustomizationCategory  Customization_Category                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ColorSelector_C::On_Customize_Feature__DelegateSignature(enum class ECustomizationCategory Customization_Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ColorSelector_C", "On Customize Feature__DelegateSignature");

	Params::UWBP_ColorSelector_C_On_Customize_Feature__DelegateSignature_Params Parms{};

	Parms.Customization_Category = Customization_Category;

	UObject::ProcessEvent(Func, &Parms);

}

}


