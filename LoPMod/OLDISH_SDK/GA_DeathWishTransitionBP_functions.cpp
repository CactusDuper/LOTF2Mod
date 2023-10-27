#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_DeathWishTransitionBP.GA_DeathWishTransitionBP_C
// (None)

class UClass* UGA_DeathWishTransitionBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_DeathWishTransitionBP_C");

	return Clss;
}


// GA_DeathWishTransitionBP_C GA_DeathWishTransitionBP.Default__GA_DeathWishTransitionBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_DeathWishTransitionBP_C* UGA_DeathWishTransitionBP_C::GetDefaultObj()
{
	static class UGA_DeathWishTransitionBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_DeathWishTransitionBP_C*>(UGA_DeathWishTransitionBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_DeathWishTransitionBP.GA_DeathWishTransitionBP_C.OnTranscendInterrupted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_DeathWishTransitionBP_C::OnTranscendInterrupted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DeathWishTransitionBP_C", "OnTranscendInterrupted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_DeathWishTransitionBP.GA_DeathWishTransitionBP_C.OnTranscendBegin
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_DeathWishTransitionBP_C::OnTranscendBegin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DeathWishTransitionBP_C", "OnTranscendBegin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_DeathWishTransitionBP.GA_DeathWishTransitionBP_C.ExecuteUbergraph_GA_DeathWishTransitionBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAnathemaPlayerCharacter_BP_C*K2Node_DynamicCast_AsAnathema_Player_Character_BP                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAnathemaPlayerCharacter_BP_C*K2Node_DynamicCast_AsAnathema_Player_Character_BP_1              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATranscendLookController_C*  K2Node_DynamicCast_AsTranscend_Look_Controller                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATranscendLookController_C*  K2Node_DynamicCast_AsTranscend_Look_Controller_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DeathWishTransitionBP_C::ExecuteUbergraph_GA_DeathWishTransitionBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, class ATranscendLookController_C* K2Node_DynamicCast_AsTranscend_Look_Controller, bool K2Node_DynamicCast_bSuccess_2, class ATranscendLookController_C* K2Node_DynamicCast_AsTranscend_Look_Controller_1, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DeathWishTransitionBP_C", "ExecuteUbergraph_GA_DeathWishTransitionBP");

	Params::UGA_DeathWishTransitionBP_C_ExecuteUbergraph_GA_DeathWishTransitionBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsAnathema_Player_Character_BP = K2Node_DynamicCast_AsAnathema_Player_Character_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue_1 = CallFunc_GetOwningActorFromActorInfo_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAnathema_Player_Character_BP_1 = K2Node_DynamicCast_AsAnathema_Player_Character_BP_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsTranscend_Look_Controller = K2Node_DynamicCast_AsTranscend_Look_Controller;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsTranscend_Look_Controller_1 = K2Node_DynamicCast_AsTranscend_Look_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


