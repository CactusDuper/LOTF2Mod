#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ANS_ClearEquipAnimations.ANS_ClearEquipAnimations_C
// (None)

class UClass* UANS_ClearEquipAnimations_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANS_ClearEquipAnimations_C");

	return Clss;
}


// ANS_ClearEquipAnimations_C ANS_ClearEquipAnimations.Default__ANS_ClearEquipAnimations_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANS_ClearEquipAnimations_C* UANS_ClearEquipAnimations_C::GetDefaultObj()
{
	static class UANS_ClearEquipAnimations_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANS_ClearEquipAnimations_C*>(UANS_ClearEquipAnimations_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANS_ClearEquipAnimations.ANS_ClearEquipAnimations_C.BP_NotifyImplementation
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerCharacter*            K2Node_DynamicCast_AsPlayer_Character                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBasePlayerAnimInstance*     CallFunc_GetPlayerAnimInstance_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UANS_ClearEquipAnimations_C::BP_NotifyImplementation(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UBasePlayerAnimInstance* CallFunc_GetPlayerAnimInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_ClearEquipAnimations_C", "BP_NotifyImplementation");

	Params::UANS_ClearEquipAnimations_C_BP_NotifyImplementation_Params Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.Animation = Animation;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Character = K2Node_DynamicCast_AsPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerAnimInstance_ReturnValue = CallFunc_GetPlayerAnimInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


