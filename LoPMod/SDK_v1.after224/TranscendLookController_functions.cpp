#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TranscendLookController.TranscendLookController_C
// (Actor)

class UClass* ATranscendLookController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TranscendLookController_C");

	return Clss;
}


// TranscendLookController_C TranscendLookController.Default__TranscendLookController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATranscendLookController_C* ATranscendLookController_C::GetDefaultObj()
{
	static class ATranscendLookController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATranscendLookController_C*>(ATranscendLookController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TranscendLookController.TranscendLookController_C.Blend Out Transcend Values
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Global                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             FlareIntensity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATranscendLookController_C::Blend_Out_Transcend_Values(double Global, double FlareIntensity, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TranscendLookController_C", "Blend Out Transcend Values");

	Params::ATranscendLookController_C_Blend_Out_Transcend_Values_Params Parms{};

	Parms.Global = Global;
	Parms.FlareIntensity = FlareIntensity;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TranscendLookController.TranscendLookController_C.ApplyPostProcessValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_BlendWeight_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATranscendLookController_C::ApplyPostProcessValues(float CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast, float K2Node_VariableSet_BlendWeight_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TranscendLookController_C", "ApplyPostProcessValues");

	Params::ATranscendLookController_C_ApplyPostProcessValues_Params Parms{};

	Parms.CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast = CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast;
	Parms.K2Node_VariableSet_BlendWeight_ImplicitCast = K2Node_VariableSet_BlendWeight_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TranscendLookController.TranscendLookController_C.UpdateTranscendValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             EffectWeight                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Flare                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATranscendLookController_C::UpdateTranscendValues(double EffectWeight, double Flare)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TranscendLookController_C", "UpdateTranscendValues");

	Params::ATranscendLookController_C_UpdateTranscendValues_Params Parms{};

	Parms.EffectWeight = EffectWeight;
	Parms.Flare = Flare;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TranscendLookController.TranscendLookController_C.TranscendBlendIn__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATranscendLookController_C::TranscendBlendIn__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TranscendLookController_C", "TranscendBlendIn__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TranscendLookController.TranscendLookController_C.TranscendBlendIn__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATranscendLookController_C::TranscendBlendIn__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TranscendLookController_C", "TranscendBlendIn__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TranscendLookController.TranscendLookController_C.TranscendBlendOut__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATranscendLookController_C::TranscendBlendOut__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TranscendLookController_C", "TranscendBlendOut__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TranscendLookController.TranscendLookController_C.TranscendBlendOut__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATranscendLookController_C::TranscendBlendOut__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TranscendLookController_C", "TranscendBlendOut__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TranscendLookController.TranscendLookController_C.ReincarnateTransition__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATranscendLookController_C::ReincarnateTransition__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TranscendLookController_C", "ReincarnateTransition__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TranscendLookController.TranscendLookController_C.ReincarnateTransition__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATranscendLookController_C::ReincarnateTransition__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TranscendLookController_C", "ReincarnateTransition__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TranscendLookController.TranscendLookController_C.OnTranscendBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATranscendLookController_C::OnTranscendBegin(double PlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TranscendLookController_C", "OnTranscendBegin");

	Params::ATranscendLookController_C_OnTranscendBegin_Params Parms{};

	Parms.PlayRate = PlayRate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TranscendLookController.TranscendLookController_C.OnBlendOutRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATranscendLookController_C::OnBlendOutRequest(double PlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TranscendLookController_C", "OnBlendOutRequest");

	Params::ATranscendLookController_C_OnBlendOutRequest_Params Parms{};

	Parms.PlayRate = PlayRate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TranscendLookController.TranscendLookController_C.OnTranscendInterrupted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATranscendLookController_C::OnTranscendInterrupted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TranscendLookController_C", "OnTranscendInterrupted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TranscendLookController.TranscendLookController_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADualRealmSoulsLanternActor_BP_C*LanternActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ATranscendLookController_C::Init(class ADualRealmSoulsLanternActor_BP_C* LanternActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TranscendLookController_C", "Init");

	Params::ATranscendLookController_C_Init_Params Parms{};

	Parms.LanternActor = LanternActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TranscendLookController.TranscendLookController_C.OnReincarnateBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATranscendLookController_C::OnReincarnateBegin(double PlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TranscendLookController_C", "OnReincarnateBegin");

	Params::ATranscendLookController_C_OnReincarnateBegin_Params Parms{};

	Parms.PlayRate = PlayRate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TranscendLookController.TranscendLookController_C.ExecuteUbergraph_TranscendLookController
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_PlayRate_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_PlayRate_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADualRealmSoulsLanternActor_BP_C*K2Node_CustomEvent_LanternActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_PlayRate                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateTranscendValues_Flare_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateTranscendValues_EffectWeight_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Blend_Out_Transcend_Values_FlareIntensity_ImplicitCast  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Blend_Out_Transcend_Values_Global_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateTranscendValues_Flare_ImplicitCast_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateTranscendValues_EffectWeight_ImplicitCast_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPlayRate_NewRate_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPlayRate_NewRate_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPlayRate_NewRate_ImplicitCast_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATranscendLookController_C::ExecuteUbergraph_TranscendLookController(int32 EntryPoint, double K2Node_CustomEvent_PlayRate_2, double CallFunc_Divide_DoubleDouble_ReturnValue, double K2Node_CustomEvent_PlayRate_1, class ADualRealmSoulsLanternActor_BP_C* K2Node_CustomEvent_LanternActor, double K2Node_CustomEvent_PlayRate, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_UpdateTranscendValues_Flare_ImplicitCast, double CallFunc_UpdateTranscendValues_EffectWeight_ImplicitCast, double CallFunc_Blend_Out_Transcend_Values_FlareIntensity_ImplicitCast, double CallFunc_Blend_Out_Transcend_Values_Global_ImplicitCast, double CallFunc_UpdateTranscendValues_Flare_ImplicitCast_1, double CallFunc_UpdateTranscendValues_EffectWeight_ImplicitCast_1, float CallFunc_SetPlayRate_NewRate_ImplicitCast, float CallFunc_SetPlayRate_NewRate_ImplicitCast_1, float CallFunc_SetPlayRate_NewRate_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TranscendLookController_C", "ExecuteUbergraph_TranscendLookController");

	Params::ATranscendLookController_C_ExecuteUbergraph_TranscendLookController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_PlayRate_2 = K2Node_CustomEvent_PlayRate_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.K2Node_CustomEvent_PlayRate_1 = K2Node_CustomEvent_PlayRate_1;
	Parms.K2Node_CustomEvent_LanternActor = K2Node_CustomEvent_LanternActor;
	Parms.K2Node_CustomEvent_PlayRate = K2Node_CustomEvent_PlayRate;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_UpdateTranscendValues_Flare_ImplicitCast = CallFunc_UpdateTranscendValues_Flare_ImplicitCast;
	Parms.CallFunc_UpdateTranscendValues_EffectWeight_ImplicitCast = CallFunc_UpdateTranscendValues_EffectWeight_ImplicitCast;
	Parms.CallFunc_Blend_Out_Transcend_Values_FlareIntensity_ImplicitCast = CallFunc_Blend_Out_Transcend_Values_FlareIntensity_ImplicitCast;
	Parms.CallFunc_Blend_Out_Transcend_Values_Global_ImplicitCast = CallFunc_Blend_Out_Transcend_Values_Global_ImplicitCast;
	Parms.CallFunc_UpdateTranscendValues_Flare_ImplicitCast_1 = CallFunc_UpdateTranscendValues_Flare_ImplicitCast_1;
	Parms.CallFunc_UpdateTranscendValues_EffectWeight_ImplicitCast_1 = CallFunc_UpdateTranscendValues_EffectWeight_ImplicitCast_1;
	Parms.CallFunc_SetPlayRate_NewRate_ImplicitCast = CallFunc_SetPlayRate_NewRate_ImplicitCast;
	Parms.CallFunc_SetPlayRate_NewRate_ImplicitCast_1 = CallFunc_SetPlayRate_NewRate_ImplicitCast_1;
	Parms.CallFunc_SetPlayRate_NewRate_ImplicitCast_2 = CallFunc_SetPlayRate_NewRate_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


