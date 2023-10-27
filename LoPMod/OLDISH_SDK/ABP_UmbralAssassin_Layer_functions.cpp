#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_UmbralAssassin_Layer.ABP_UmbralAssassin_Layer_C
// (None)

class UClass* UABP_UmbralAssassin_Layer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_UmbralAssassin_Layer_C");

	return Clss;
}


// ABP_UmbralAssassin_Layer_C ABP_UmbralAssassin_Layer.Default__ABP_UmbralAssassin_Layer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_UmbralAssassin_Layer_C* UABP_UmbralAssassin_Layer_C::GetDefaultObj()
{
	static class UABP_UmbralAssassin_Layer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_UmbralAssassin_Layer_C*>(UABP_UmbralAssassin_Layer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_UmbralAssassin_Layer.ABP_UmbralAssassin_Layer_C.Facial_Override
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InputPose                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             Facial_Alpha                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Expression_Anger                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Expression_Pain                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Eyes_Blinking                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   Facial_Override                                                  (Parm, OutParm, NoDestructor)

void UABP_UmbralAssassin_Layer_C::Facial_Override(const struct FPoseLink& InputPose, double Facial_Alpha, double Expression_Anger, double Expression_Pain, double Eyes_Blinking, struct FPoseLink* Facial_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_UmbralAssassin_Layer_C", "Facial_Override");

	Params::UABP_UmbralAssassin_Layer_C_Facial_Override_Params Parms{};

	Parms.InputPose = InputPose;
	Parms.Facial_Alpha = Facial_Alpha;
	Parms.Expression_Anger = Expression_Anger;
	Parms.Expression_Pain = Expression_Pain;
	Parms.Eyes_Blinking = Eyes_Blinking;

	UObject::ProcessEvent(Func, &Parms);

	if (Facial_Override != nullptr)
		*Facial_Override = std::move(Parms.Facial_Override);

}


// Function ABP_UmbralAssassin_Layer.ABP_UmbralAssassin_Layer_C.LookAtTarget_Override
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InLocomotion                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LookAt_Alpha                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Use_HeadOnly                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   LookAtTarget_Override                                            (Parm, OutParm, NoDestructor)

void UABP_UmbralAssassin_Layer_C::LookAtTarget_Override(const struct FPoseLink& InLocomotion, const struct FVector& TargetLocation, double LookAt_Alpha, bool Use_HeadOnly, struct FPoseLink* LookAtTarget_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_UmbralAssassin_Layer_C", "LookAtTarget_Override");

	Params::UABP_UmbralAssassin_Layer_C_LookAtTarget_Override_Params Parms{};

	Parms.InLocomotion = InLocomotion;
	Parms.TargetLocation = TargetLocation;
	Parms.LookAt_Alpha = LookAt_Alpha;
	Parms.Use_HeadOnly = Use_HeadOnly;

	UObject::ProcessEvent(Func, &Parms);

	if (LookAtTarget_Override != nullptr)
		*LookAtTarget_Override = std::move(Parms.LookAtTarget_Override);

}


// Function ABP_UmbralAssassin_Layer.ABP_UmbralAssassin_Layer_C.CopyIKBone_Override
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InputLocomotion                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   CopyIKBone_Override                                              (Parm, OutParm, NoDestructor)

void UABP_UmbralAssassin_Layer_C::CopyIKBone_Override(const struct FPoseLink& InputLocomotion, struct FPoseLink* CopyIKBone_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_UmbralAssassin_Layer_C", "CopyIKBone_Override");

	Params::UABP_UmbralAssassin_Layer_C_CopyIKBone_Override_Params Parms{};

	Parms.InputLocomotion = InputLocomotion;

	UObject::ProcessEvent(Func, &Parms);

	if (CopyIKBone_Override != nullptr)
		*CopyIKBone_Override = std::move(Parms.CopyIKBone_Override);

}


// Function ABP_UmbralAssassin_Layer.ABP_UmbralAssassin_Layer_C.Layering_Override
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   DefaultSlot_InputPose                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             UpperBody_Layering_Alpha                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             L_Arm_Layering_Alpha                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             R_Arm_Layering_Alpha                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   Layering_Override                                                (Parm, OutParm, NoDestructor)

void UABP_UmbralAssassin_Layer_C::Layering_Override(const struct FPoseLink& DefaultSlot_InputPose, double UpperBody_Layering_Alpha, double L_Arm_Layering_Alpha, double R_Arm_Layering_Alpha, struct FPoseLink* Layering_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_UmbralAssassin_Layer_C", "Layering_Override");

	Params::UABP_UmbralAssassin_Layer_C_Layering_Override_Params Parms{};

	Parms.DefaultSlot_InputPose = DefaultSlot_InputPose;
	Parms.UpperBody_Layering_Alpha = UpperBody_Layering_Alpha;
	Parms.L_Arm_Layering_Alpha = L_Arm_Layering_Alpha;
	Parms.R_Arm_Layering_Alpha = R_Arm_Layering_Alpha;

	UObject::ProcessEvent(Func, &Parms);

	if (Layering_Override != nullptr)
		*Layering_Override = std::move(Parms.Layering_Override);

}


// Function ABP_UmbralAssassin_Layer.ABP_UmbralAssassin_Layer_C.FeetLock_FlinchesPP
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   FlinchedInput                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   FeetLock_FlinchesPP                                              (Parm, OutParm, NoDestructor)

void UABP_UmbralAssassin_Layer_C::FeetLock_FlinchesPP(const struct FPoseLink& FlinchedInput, struct FPoseLink* FeetLock_FlinchesPP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_UmbralAssassin_Layer_C", "FeetLock_FlinchesPP");

	Params::UABP_UmbralAssassin_Layer_C_FeetLock_FlinchesPP_Params Parms{};

	Parms.FlinchedInput = FlinchedInput;

	UObject::ProcessEvent(Func, &Parms);

	if (FeetLock_FlinchesPP != nullptr)
		*FeetLock_FlinchesPP = std::move(Parms.FeetLock_FlinchesPP);

}


// Function ABP_UmbralAssassin_Layer.ABP_UmbralAssassin_Layer_C.FeetIk_Override
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                              IsInUmbral                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             EnemySpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   FeetIk_Override                                                  (Parm, OutParm, NoDestructor)

void UABP_UmbralAssassin_Layer_C::FeetIk_Override(const struct FPoseLink& InPose, int32 IsInUmbral, double EnemySpeed, struct FPoseLink* FeetIk_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_UmbralAssassin_Layer_C", "FeetIk_Override");

	Params::UABP_UmbralAssassin_Layer_C_FeetIk_Override_Params Parms{};

	Parms.InPose = InPose;
	Parms.IsInUmbral = IsInUmbral;
	Parms.EnemySpeed = EnemySpeed;

	UObject::ProcessEvent(Func, &Parms);

	if (FeetIk_Override != nullptr)
		*FeetIk_Override = std::move(Parms.FeetIk_Override);

}


// Function ABP_UmbralAssassin_Layer.ABP_UmbralAssassin_Layer_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_UmbralAssassin_Layer_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_UmbralAssassin_Layer_C", "AnimGraph");

	Params::UABP_UmbralAssassin_Layer_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_UmbralAssassin_Layer.ABP_UmbralAssassin_Layer_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_UmbralAssassin_Layer_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_UmbralAssassin_Layer_C", "BlueprintUpdateAnimation");

	Params::UABP_UmbralAssassin_Layer_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_UmbralAssassin_Layer.ABP_UmbralAssassin_Layer_C.ExecuteUbergraph_ABP_UmbralAssassin_Layer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTargetedActor_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValueWithDefault_OutValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurveValueWithDefault_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_PlayerDistance_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_A_ImplicitCast                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_UmbralAssassin_Layer_C::ExecuteUbergraph_ABP_UmbralAssassin_Layer(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class AActor* CallFunc_GetTargetedActor_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Abs_ReturnValue, float CallFunc_GetCurveValueWithDefault_OutValue, bool CallFunc_GetCurveValueWithDefault_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double K2Node_VariableSet_PlayerDistance_ImplicitCast, double CallFunc_Abs_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_UmbralAssassin_Layer_C", "ExecuteUbergraph_ABP_UmbralAssassin_Layer");

	Params::UABP_UmbralAssassin_Layer_C_ExecuteUbergraph_ABP_UmbralAssassin_Layer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.CallFunc_GetOwningActor_ReturnValue_1 = CallFunc_GetOwningActor_ReturnValue_1;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetTargetedActor_ReturnValue = CallFunc_GetTargetedActor_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_1 = CallFunc_K2_GetRootComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_NormalizedDeltaRotator_ReturnValue = CallFunc_NormalizedDeltaRotator_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_GetCurveValueWithDefault_OutValue = CallFunc_GetCurveValueWithDefault_OutValue;
	Parms.CallFunc_GetCurveValueWithDefault_ReturnValue = CallFunc_GetCurveValueWithDefault_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_FInterpTo_DeltaTime_ImplicitCast = CallFunc_FInterpTo_DeltaTime_ImplicitCast;
	Parms.K2Node_VariableSet_PlayerDistance_ImplicitCast = K2Node_VariableSet_PlayerDistance_ImplicitCast;
	Parms.CallFunc_Abs_A_ImplicitCast = CallFunc_Abs_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


