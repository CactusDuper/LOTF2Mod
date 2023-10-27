#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_PlayAnimationAfterTrueDeath.GA_PlayAnimationAfterTrueDeath_C
// (None)

class UClass* UGA_PlayAnimationAfterTrueDeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_PlayAnimationAfterTrueDeath_C");

	return Clss;
}


// GA_PlayAnimationAfterTrueDeath_C GA_PlayAnimationAfterTrueDeath.Default__GA_PlayAnimationAfterTrueDeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_PlayAnimationAfterTrueDeath_C* UGA_PlayAnimationAfterTrueDeath_C::GetDefaultObj()
{
	static class UGA_PlayAnimationAfterTrueDeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_PlayAnimationAfterTrueDeath_C*>(UGA_PlayAnimationAfterTrueDeath_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_PlayAnimationAfterTrueDeath.GA_PlayAnimationAfterTrueDeath_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_PlayAnimationAfterTrueDeath_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PlayAnimationAfterTrueDeath_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_PlayAnimationAfterTrueDeath.GA_PlayAnimationAfterTrueDeath_C.ExecuteUbergraph_GA_PlayAnimationAfterTrueDeath
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHost_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_PlayAnimationAfterTrueDeath_C::ExecuteUbergraph_GA_PlayAnimationAfterTrueDeath(int32 EntryPoint, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsHost_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PlayAnimationAfterTrueDeath_C", "ExecuteUbergraph_GA_PlayAnimationAfterTrueDeath");

	Params::UGA_PlayAnimationAfterTrueDeath_C_ExecuteUbergraph_GA_PlayAnimationAfterTrueDeath_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsHost_ReturnValue = CallFunc_IsHost_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


