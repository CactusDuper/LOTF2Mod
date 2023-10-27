#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_WitherEye.W_WitherEye_C
// (None)

class UClass* UW_WitherEye_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_WitherEye_C");

	return Clss;
}


// W_WitherEye_C W_WitherEye.Default__W_WitherEye_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_WitherEye_C* UW_WitherEye_C::GetDefaultObj()
{
	static class UW_WitherEye_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_WitherEye_C*>(UW_WitherEye_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_WitherEye.W_WitherEye_C.Hide Eye
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_WitherEye_C::Hide_Eye(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WitherEye_C", "Hide Eye");

	Params::UW_WitherEye_C_Hide_Eye_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WitherEye.W_WitherEye_C.Show Eye
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UW_WitherEye_C::Show_Eye(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WitherEye_C", "Show Eye");

	Params::UW_WitherEye_C_Show_Eye_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WitherEye.W_WitherEye_C.HideEye
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_WitherEye_C::HideEye()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WitherEye_C", "HideEye");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WitherEye.W_WitherEye_C.ShowEye
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_WitherEye_C::ShowEye()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WitherEye_C", "ShowEye");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WitherEye.W_WitherEye_C.StartBlinking
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_WitherEye_C::StartBlinking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WitherEye_C", "StartBlinking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_WitherEye.W_WitherEye_C.OnBlinkStateChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUmbralEyeBlinkState    EyeBlinkState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WitherEye_C::OnBlinkStateChanged(enum class EUmbralEyeBlinkState EyeBlinkState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WitherEye_C", "OnBlinkStateChanged");

	Params::UW_WitherEye_C_OnBlinkStateChanged_Params Parms{};

	Parms.EyeBlinkState = EyeBlinkState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WitherEye.W_WitherEye_C.BP_OnLevelChange
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsMaxLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WitherEye_C::BP_OnLevelChange(bool bIsMaxLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WitherEye_C", "BP_OnLevelChange");

	Params::UW_WitherEye_C_BP_OnLevelChange_Params Parms{};

	Parms.bIsMaxLevel = bIsMaxLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_WitherEye.W_WitherEye_C.ExecuteUbergraph_W_WitherEye
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EUmbralEyeBlinkState    K2Node_Event_eyeBlinkState                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsMaxLevel                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_WitherEye_C::ExecuteUbergraph_W_WitherEye(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class EUmbralEyeBlinkState K2Node_Event_eyeBlinkState, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_RandomFloatInRange_ReturnValue, bool K2Node_Event_bIsMaxLevel, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_Delay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_WitherEye_C", "ExecuteUbergraph_W_WitherEye");

	Params::UW_WitherEye_C_ExecuteUbergraph_W_WitherEye_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_eyeBlinkState = K2Node_Event_eyeBlinkState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_Event_bIsMaxLevel = K2Node_Event_bIsMaxLevel;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


