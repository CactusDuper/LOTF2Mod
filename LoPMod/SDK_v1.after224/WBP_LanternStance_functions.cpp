#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_LanternStance.WBP_LanternStance_C
// (None)

class UClass* UWBP_LanternStance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_LanternStance_C");

	return Clss;
}


// WBP_LanternStance_C WBP_LanternStance.Default__WBP_LanternStance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_LanternStance_C* UWBP_LanternStance_C::GetDefaultObj()
{
	static class UWBP_LanternStance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_LanternStance_C*>(UWBP_LanternStance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_LanternStance.WBP_LanternStance_C.BP_UpdateActionsVisibility
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LanternStance_C::BP_UpdateActionsVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LanternStance_C", "BP_UpdateActionsVisibility");

	Params::UWBP_LanternStance_C_BP_UpdateActionsVisibility_Params Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LanternStance.WBP_LanternStance_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LanternStance_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LanternStance_C", "PreConstruct");

	Params::UWBP_LanternStance_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LanternStance.WBP_LanternStance_C.BP_StopBigWidgetAnimation
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LanternStance_C::BP_StopBigWidgetAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LanternStance_C", "BP_StopBigWidgetAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LanternStance.WBP_LanternStance_C.BP_StopSmallWidgetAnimation
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LanternStance_C::BP_StopSmallWidgetAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LanternStance_C", "BP_StopSmallWidgetAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LanternStance.WBP_LanternStance_C.BP_PlayBigWidgetAnimation
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LanternStance_C::BP_PlayBigWidgetAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LanternStance_C", "BP_PlayBigWidgetAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LanternStance.WBP_LanternStance_C.BP_PlaySmallWidgetAnimation
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LanternStance_C::BP_PlaySmallWidgetAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LanternStance_C", "BP_PlaySmallWidgetAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LanternStance.WBP_LanternStance_C.BP_UpdateAnchorSeeds
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LanternStance_C::BP_UpdateAnchorSeeds(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LanternStance_C", "BP_UpdateAnchorSeeds");

	Params::UWBP_LanternStance_C_BP_UpdateAnchorSeeds_Params Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LanternStance.WBP_LanternStance_C.ExecuteUbergraph_WBP_LanternStance
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bVisible                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_amount                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LanternStance_C::ExecuteUbergraph_WBP_LanternStance(int32 EntryPoint, bool K2Node_Event_bVisible, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 K2Node_Event_amount, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LanternStance_C", "ExecuteUbergraph_WBP_LanternStance");

	Params::UWBP_LanternStance_C_ExecuteUbergraph_WBP_LanternStance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bVisible = K2Node_Event_bVisible;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_amount = K2Node_Event_amount;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


