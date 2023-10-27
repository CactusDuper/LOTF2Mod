#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SettingListEntry_Discrete.WBP_SettingListEntry_Discrete_C
// (None)

class UClass* UWBP_SettingListEntry_Discrete_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SettingListEntry_Discrete_C");

	return Clss;
}


// WBP_SettingListEntry_Discrete_C WBP_SettingListEntry_Discrete.Default__WBP_SettingListEntry_Discrete_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SettingListEntry_Discrete_C* UWBP_SettingListEntry_Discrete_C::GetDefaultObj()
{
	static class UWBP_SettingListEntry_Discrete_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SettingListEntry_Discrete_C*>(UWBP_SettingListEntry_Discrete_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SettingListEntry_Discrete.WBP_SettingListEntry_Discrete_C.SetIndentation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IndentationLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             IndentationSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingListEntry_Discrete_C::SetIndentation(int32 IndentationLevel, double IndentationSize, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingListEntry_Discrete_C", "SetIndentation");

	Params::UWBP_SettingListEntry_Discrete_C_SetIndentation_Params Parms{};

	Parms.IndentationLevel = IndentationLevel;
	Parms.IndentationSize = IndentationSize;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingListEntry_Discrete.WBP_SettingListEntry_Discrete_C.GetPrimaryGamepadFocusWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_SettingListEntry_Discrete_C::GetPrimaryGamepadFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingListEntry_Discrete_C", "GetPrimaryGamepadFocusWidget");

	Params::UWBP_SettingListEntry_Discrete_C_GetPrimaryGamepadFocusWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_SettingListEntry_Discrete.WBP_SettingListEntry_Discrete_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingListEntry_Discrete_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingListEntry_Discrete_C", "PreConstruct");

	Params::UWBP_SettingListEntry_Discrete_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingListEntry_Discrete.WBP_SettingListEntry_Discrete_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SettingListEntry_Discrete_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingListEntry_Discrete_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingListEntry_Discrete.WBP_SettingListEntry_Discrete_C.ExecuteUbergraph_WBP_SettingListEntry_Discrete
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingListEntry_Discrete_C::ExecuteUbergraph_WBP_SettingListEntry_Discrete(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingListEntry_Discrete_C", "ExecuteUbergraph_WBP_SettingListEntry_Discrete");

	Params::UWBP_SettingListEntry_Discrete_C_ExecuteUbergraph_WBP_SettingListEntry_Discrete_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


