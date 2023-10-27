#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SlowAimWhileAiming.GA_SlowAimWhileAiming_C
// (None)

class UClass* UGA_SlowAimWhileAiming_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SlowAimWhileAiming_C");

	return Clss;
}


// GA_SlowAimWhileAiming_C GA_SlowAimWhileAiming.Default__GA_SlowAimWhileAiming_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SlowAimWhileAiming_C* UGA_SlowAimWhileAiming_C::GetDefaultObj()
{
	static class UGA_SlowAimWhileAiming_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SlowAimWhileAiming_C*>(UGA_SlowAimWhileAiming_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_SlowAimWhileAiming.GA_SlowAimWhileAiming_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_SlowAimWhileAiming_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SlowAimWhileAiming_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SlowAimWhileAiming.GA_SlowAimWhileAiming_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SlowAimWhileAiming_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SlowAimWhileAiming_C", "K2_OnEndAbility");

	Params::UGA_SlowAimWhileAiming_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_SlowAimWhileAiming.GA_SlowAimWhileAiming_C.ExecuteUbergraph_GA_SlowAimWhileAiming
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_CastToCharacter_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_CastToCharacter_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDeprecatedInputPitchScale_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDeprecatedInputYawScale_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_PreviousInputPitchScale_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_PreviousInputYawScale_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast_1    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SlowAimWhileAiming_C::ExecuteUbergraph_GA_SlowAimWhileAiming(int32 EntryPoint, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class ACharacter* CallFunc_CastToCharacter_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool K2Node_Event_bWasCancelled, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class ACharacter* CallFunc_CastToCharacter_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_1, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetDeprecatedInputPitchScale_ReturnValue, float CallFunc_GetDeprecatedInputYawScale_ReturnValue, float CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast, float CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast, double K2Node_VariableSet_PreviousInputPitchScale_ImplicitCast, double K2Node_VariableSet_PreviousInputYawScale_ImplicitCast, float CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast_1, float CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SlowAimWhileAiming_C", "ExecuteUbergraph_GA_SlowAimWhileAiming");

	Params::UGA_SlowAimWhileAiming_C_ExecuteUbergraph_GA_SlowAimWhileAiming_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_CastToCharacter_ReturnValue = CallFunc_CastToCharacter_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue_1 = CallFunc_GetOwningActorFromActorInfo_ReturnValue_1;
	Parms.CallFunc_CastToCharacter_ReturnValue_1 = CallFunc_CastToCharacter_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPlayer_Controller_1 = K2Node_DynamicCast_AsPlayer_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetDeprecatedInputPitchScale_ReturnValue = CallFunc_GetDeprecatedInputPitchScale_ReturnValue;
	Parms.CallFunc_GetDeprecatedInputYawScale_ReturnValue = CallFunc_GetDeprecatedInputYawScale_ReturnValue;
	Parms.CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast = CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast;
	Parms.CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast = CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast;
	Parms.K2Node_VariableSet_PreviousInputPitchScale_ImplicitCast = K2Node_VariableSet_PreviousInputPitchScale_ImplicitCast;
	Parms.K2Node_VariableSet_PreviousInputYawScale_ImplicitCast = K2Node_VariableSet_PreviousInputYawScale_ImplicitCast;
	Parms.CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast_1 = CallFunc_SetDeprecatedInputYawScale_NewValue_ImplicitCast_1;
	Parms.CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast_1 = CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


