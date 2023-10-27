#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Player_Customization.ABP_Player_Customization_C
// (None)

class UClass* UABP_Player_Customization_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Player_Customization_C");

	return Clss;
}


// ABP_Player_Customization_C ABP_Player_Customization.Default__ABP_Player_Customization_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Player_Customization_C* UABP_Player_Customization_C::GetDefaultObj()
{
	static class UABP_Player_Customization_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Player_Customization_C*>(UABP_Player_Customization_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Player_Customization.ABP_Player_Customization_C.BasePoses
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   BasePoses                                                        (Parm, OutParm, NoDestructor)

void UABP_Player_Customization_C::BasePoses(struct FPoseLink* BasePoses)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Customization_C", "BasePoses");

	Params::UABP_Player_Customization_C_BasePoses_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BasePoses != nullptr)
		*BasePoses = std::move(Parms.BasePoses);

}


// Function ABP_Player_Customization.ABP_Player_Customization_C.LayeringPoses
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   BaseLocomotion                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   OverlayPose                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   BasePose                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   LayeringPoses                                                    (Parm, OutParm, NoDestructor)

void UABP_Player_Customization_C::LayeringPoses(const struct FPoseLink& BaseLocomotion, const struct FPoseLink& OverlayPose, const struct FPoseLink& BasePose, struct FPoseLink* LayeringPoses)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Customization_C", "LayeringPoses");

	Params::UABP_Player_Customization_C_LayeringPoses_Params Parms{};

	Parms.BaseLocomotion = BaseLocomotion;
	Parms.OverlayPose = OverlayPose;
	Parms.BasePose = BasePose;

	UObject::ProcessEvent(Func, &Parms);

	if (LayeringPoses != nullptr)
		*LayeringPoses = std::move(Parms.LayeringPoses);

}


// Function ABP_Player_Customization.ABP_Player_Customization_C.OverlayPoses
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   OverlayPoses                                                     (Parm, OutParm, NoDestructor)

void UABP_Player_Customization_C::OverlayPoses(struct FPoseLink* OverlayPoses)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Customization_C", "OverlayPoses");

	Params::UABP_Player_Customization_C_OverlayPoses_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OverlayPoses != nullptr)
		*OverlayPoses = std::move(Parms.OverlayPoses);

}


// Function ABP_Player_Customization.ABP_Player_Customization_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Player_Customization_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Customization_C", "AnimGraph");

	Params::UABP_Player_Customization_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Player_Customization.ABP_Player_Customization_C.Update_OverlayIdle
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (NoDestructor)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UABP_Player_Customization_C::Update_OverlayIdle(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Customization_C", "Update_OverlayIdle");

	Params::UABP_Player_Customization_C_Update_OverlayIdle_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequencePlayerPure_SequencePlayer = CallFunc_ConvertToSequencePlayerPure_SequencePlayer;
	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player_Customization.ABP_Player_Customization_C.Set_Animations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_1                    (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_2                    (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_2                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UABP_Player_Customization_C::Set_Animations(const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_2, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Customization_C", "Set_Animations");

	Params::UABP_Player_Customization_C_Set_Animations_Params Parms{};

	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_1 = CallFunc_MakeLiteralGameplayTag_ReturnValue_1;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue = CallFunc_BP_GetAnimationByTag_ReturnValue;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_1 = CallFunc_BP_GetAnimationByTag_ReturnValue_1;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_2 = CallFunc_MakeLiteralGameplayTag_ReturnValue_2;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_2 = CallFunc_BP_GetAnimationByTag_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player_Customization.ABP_Player_Customization_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_Customization_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Customization_C", "BlueprintUpdateAnimation");

	Params::UABP_Player_Customization_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player_Customization.ABP_Player_Customization_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_Player_Customization_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Customization_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player_Customization.ABP_Player_Customization_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_Player_Customization_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Customization_C", "BlueprintBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player_Customization.ABP_Player_Customization_C.OnCharacterAnimLayerStackChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_Player_Customization_C::OnCharacterAnimLayerStackChanged_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Customization_C", "OnCharacterAnimLayerStackChanged_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player_Customization.ABP_Player_Customization_C.SetCharacterSelectionAnimationTag
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NewTag                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UABP_Player_Customization_C::SetCharacterSelectionAnimationTag(struct FGameplayTag& NewTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Customization_C", "SetCharacterSelectionAnimationTag");

	Params::UABP_Player_Customization_C_SetCharacterSelectionAnimationTag_Params Parms{};

	Parms.NewTag = NewTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player_Customization.ABP_Player_Customization_C.NotifySetupCharacterFromSave
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_Player_Customization_C::NotifySetupCharacterFromSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Customization_C", "NotifySetupCharacterFromSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player_Customization.ABP_Player_Customization_C.ExecuteUbergraph_ABP_Player_Customization
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValueWithDefault_OutValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurveValueWithDefault_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterConfigComponent*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_newTag                                              (ConstParm, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UEquipableInventorySoulsLantern*CallFunc_GetSoulsLanternEquipment_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_Customization_C::ExecuteUbergraph_ABP_Player_Customization(int32 EntryPoint, float CallFunc_GetCurveValueWithDefault_OutValue, bool CallFunc_GetCurveValueWithDefault_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwningActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UCharacterConfigComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayTag& K2Node_Event_newTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAnimSequenceBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, const class FString& CallFunc_GetObjectName_ReturnValue, class UEquipableInventorySoulsLantern* CallFunc_GetSoulsLanternEquipment_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Customization_C", "ExecuteUbergraph_ABP_Player_Customization");

	Params::UABP_Player_Customization_C_ExecuteUbergraph_ABP_Player_Customization_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurveValueWithDefault_OutValue = CallFunc_GetCurveValueWithDefault_OutValue;
	Parms.CallFunc_GetCurveValueWithDefault_ReturnValue = CallFunc_GetCurveValueWithDefault_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningActor_ReturnValue_1 = CallFunc_GetOwningActor_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_newTag = K2Node_Event_newTag;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_GetSoulsLanternEquipment_ReturnValue = CallFunc_GetSoulsLanternEquipment_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


