#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ColorPreset.WBP_ColorPreset_C
// (None)

class UClass* UWBP_ColorPreset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ColorPreset_C");

	return Clss;
}


// WBP_ColorPreset_C WBP_ColorPreset.Default__WBP_ColorPreset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ColorPreset_C* UWBP_ColorPreset_C::GetDefaultObj()
{
	static class UWBP_ColorPreset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ColorPreset_C*>(UWBP_ColorPreset_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ColorPreset.WBP_ColorPreset_C.Set Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_Selected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ColorPreset_C::Set_Selected(bool Is_Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ColorPreset_C", "Set Selected");

	Params::UWBP_ColorPreset_C_Set_Selected_Params Parms{};

	Parms.Is_Selected = Is_Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ColorPreset.WBP_ColorPreset_C.On Focus In
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ColorPreset_C::On_Focus_In()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ColorPreset_C", "On Focus In");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ColorPreset.WBP_ColorPreset_C.On Focus Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ColorPreset_C::On_Focus_Out()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ColorPreset_C", "On Focus Out");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ColorPreset.WBP_ColorPreset_C.ExecuteUbergraph_WBP_ColorPreset
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Is_Selected                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ColorPreset_C::ExecuteUbergraph_WBP_ColorPreset(int32 EntryPoint, bool K2Node_CustomEvent_Is_Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ColorPreset_C", "ExecuteUbergraph_WBP_ColorPreset");

	Params::UWBP_ColorPreset_C_ExecuteUbergraph_WBP_ColorPreset_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Is_Selected = K2Node_CustomEvent_Is_Selected;

	UObject::ProcessEvent(Func, &Parms);

}

}


