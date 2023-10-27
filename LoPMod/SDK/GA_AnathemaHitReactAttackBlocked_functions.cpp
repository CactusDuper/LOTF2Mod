#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_AnathemaHitReactAttackBlocked.GA_AnathemaHitReactAttackBlocked_C
// (None)

class UClass* UGA_AnathemaHitReactAttackBlocked_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_AnathemaHitReactAttackBlocked_C");

	return Clss;
}


// GA_AnathemaHitReactAttackBlocked_C GA_AnathemaHitReactAttackBlocked.Default__GA_AnathemaHitReactAttackBlocked_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_AnathemaHitReactAttackBlocked_C* UGA_AnathemaHitReactAttackBlocked_C::GetDefaultObj()
{
	static class UGA_AnathemaHitReactAttackBlocked_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_AnathemaHitReactAttackBlocked_C*>(UGA_AnathemaHitReactAttackBlocked_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_AnathemaHitReactAttackBlocked.GA_AnathemaHitReactAttackBlocked_C.GetCustomAnimMontageByTag
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTag                AnimationTag                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBasePlayerAnimInstance*     CallFunc_GetPlayerAnimInstance_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEquipmentManagerComponent*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_BP_GetMontageByTagEx_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRightHandEquipped_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLeftHandEquipped_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCustomAnimMontageByTag_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UAnimMontage* UGA_AnathemaHitReactAttackBlocked_C::GetCustomAnimMontageByTag(struct FGameplayTag& AnimationTag, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UBasePlayerAnimInstance* CallFunc_GetPlayerAnimInstance_ReturnValue, class UEquipmentManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UAnimMontage* CallFunc_BP_GetMontageByTagEx_ReturnValue, bool CallFunc_IsRightHandEquipped_ReturnValue, bool CallFunc_IsLeftHandEquipped_ReturnValue, class UAnimMontage* CallFunc_GetCustomAnimMontageByTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_AnathemaHitReactAttackBlocked_C", "GetCustomAnimMontageByTag");

	Params::UGA_AnathemaHitReactAttackBlocked_C_GetCustomAnimMontageByTag_Params Parms{};

	Parms.AnimationTag = AnimationTag;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerAnimInstance_ReturnValue = CallFunc_GetPlayerAnimInstance_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_BP_GetMontageByTagEx_ReturnValue = CallFunc_BP_GetMontageByTagEx_ReturnValue;
	Parms.CallFunc_IsRightHandEquipped_ReturnValue = CallFunc_IsRightHandEquipped_ReturnValue;
	Parms.CallFunc_IsLeftHandEquipped_ReturnValue = CallFunc_IsLeftHandEquipped_ReturnValue;
	Parms.CallFunc_GetCustomAnimMontageByTag_ReturnValue = CallFunc_GetCustomAnimMontageByTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


