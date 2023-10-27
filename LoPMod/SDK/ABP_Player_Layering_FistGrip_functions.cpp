#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C
// (None)

class UClass* UABP_Player_Layering_FistGrip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Player_Layering_FistGrip_C");

	return Clss;
}


// ABP_Player_Layering_FistGrip_C ABP_Player_Layering_FistGrip.Default__ABP_Player_Layering_FistGrip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Player_Layering_FistGrip_C* UABP_Player_Layering_FistGrip_C::GetDefaultObj()
{
	static class UABP_Player_Layering_FistGrip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Player_Layering_FistGrip_C*>(UABP_Player_Layering_FistGrip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.HandsIK_Override
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InputPose                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             HandsIK_Alpha                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SpringStrength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SpringDamping                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   HandsIK_Override                                                 (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_FistGrip_C::HandsIK_Override(const struct FPoseLink& InputPose, double HandsIK_Alpha, double SpringStrength, double SpringDamping, struct FPoseLink* HandsIK_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_FistGrip_C", "HandsIK_Override");

	Params::UABP_Player_Layering_FistGrip_C_HandsIK_Override_Params Parms{};

	Parms.InputPose = InputPose;
	Parms.HandsIK_Alpha = HandsIK_Alpha;
	Parms.SpringStrength = SpringStrength;
	Parms.SpringDamping = SpringDamping;

	UObject::ProcessEvent(Func, &Parms);

	if (HandsIK_Override != nullptr)
		*HandsIK_Override = std::move(Parms.HandsIK_Override);

}


// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.LanternOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   LanternLayeringPose                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_L                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   LanternOverlay                                                   (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_FistGrip_C::LanternOverlay(const struct FPoseLink& LanternLayeringPose, enum class ELocomotionState CurrentLocomotionState_L, struct FPoseLink* LanternOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_FistGrip_C", "LanternOverlay");

	Params::UABP_Player_Layering_FistGrip_C_LanternOverlay_Params Parms{};

	Parms.LanternLayeringPose = LanternLayeringPose;
	Parms.CurrentLocomotionState_L = CurrentLocomotionState_L;

	UObject::ProcessEvent(Func, &Parms);

	if (LanternOverlay != nullptr)
		*LanternOverlay = std::move(Parms.LanternOverlay);

}


// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.AL_PlayerFlails
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_Flails                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AL_PlayerFlails                                                  (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_FistGrip_C::AL_PlayerFlails(const struct FPoseLink& InPose_Flails, struct FPoseLink* AL_PlayerFlails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_FistGrip_C", "AL_PlayerFlails");

	Params::UABP_Player_Layering_FistGrip_C_AL_PlayerFlails_Params Parms{};

	Parms.InPose_Flails = InPose_Flails;

	UObject::ProcessEvent(Func, &Parms);

	if (AL_PlayerFlails != nullptr)
		*AL_PlayerFlails = std::move(Parms.AL_PlayerFlails);

}


// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.AL_AimingOffset
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   UpperBody_Additive                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             AimingAlpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AimingPitch                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AimingYaw                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpace*                 AimOffset_BS                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   AL_AimingOffset                                                  (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_FistGrip_C::AL_AimingOffset(const struct FPoseLink& UpperBody_Additive, double AimingAlpha, double AimingPitch, double AimingYaw, class UBlendSpace* AimOffset_BS, struct FPoseLink* AL_AimingOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_FistGrip_C", "AL_AimingOffset");

	Params::UABP_Player_Layering_FistGrip_C_AL_AimingOffset_Params Parms{};

	Parms.UpperBody_Additive = UpperBody_Additive;
	Parms.AimingAlpha = AimingAlpha;
	Parms.AimingPitch = AimingPitch;
	Parms.AimingYaw = AimingYaw;
	Parms.AimOffset_BS = AimOffset_BS;

	UObject::ProcessEvent(Func, &Parms);

	if (AL_AimingOffset != nullptr)
		*AL_AimingOffset = std::move(Parms.AL_AimingOffset);

}


// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.Locomotion
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   Locomotion                                                       (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_FistGrip_C::Locomotion(struct FPoseLink* Locomotion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_FistGrip_C", "Locomotion");

	Params::UABP_Player_Layering_FistGrip_C_Locomotion_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Locomotion != nullptr)
		*Locomotion = std::move(Parms.Locomotion);

}


// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.Locomotion_Blocking
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   Locomotion_Blocking                                              (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_FistGrip_C::Locomotion_Blocking(const struct FPoseLink& InPose, struct FPoseLink* Locomotion_Blocking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_FistGrip_C", "Locomotion_Blocking");

	Params::UABP_Player_Layering_FistGrip_C_Locomotion_Blocking_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (Locomotion_Blocking != nullptr)
		*Locomotion_Blocking = std::move(Parms.Locomotion_Blocking);

}


// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.PrimaryOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PrimaryLayeringPose                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_P                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             R_Hand_Unequipped_Alpha                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             L_Hand_Unequipped_Alpha                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   PrimaryOverlay                                                   (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_FistGrip_C::PrimaryOverlay(const struct FPoseLink& PrimaryLayeringPose, enum class ELocomotionState CurrentLocomotionState_P, double R_Hand_Unequipped_Alpha, double L_Hand_Unequipped_Alpha, struct FPoseLink* PrimaryOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_FistGrip_C", "PrimaryOverlay");

	Params::UABP_Player_Layering_FistGrip_C_PrimaryOverlay_Params Parms{};

	Parms.PrimaryLayeringPose = PrimaryLayeringPose;
	Parms.CurrentLocomotionState_P = CurrentLocomotionState_P;
	Parms.R_Hand_Unequipped_Alpha = R_Hand_Unequipped_Alpha;
	Parms.L_Hand_Unequipped_Alpha = L_Hand_Unequipped_Alpha;

	UObject::ProcessEvent(Func, &Parms);

	if (PrimaryOverlay != nullptr)
		*PrimaryOverlay = std::move(Parms.PrimaryOverlay);

}


// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.SecondaryOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   SecondaryLayeringPose                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_S                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   SecondaryOverlay                                                 (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_FistGrip_C::SecondaryOverlay(const struct FPoseLink& SecondaryLayeringPose, enum class ELocomotionState CurrentLocomotionState_S, struct FPoseLink* SecondaryOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_FistGrip_C", "SecondaryOverlay");

	Params::UABP_Player_Layering_FistGrip_C_SecondaryOverlay_Params Parms{};

	Parms.SecondaryLayeringPose = SecondaryLayeringPose;
	Parms.CurrentLocomotionState_S = CurrentLocomotionState_S;

	UObject::ProcessEvent(Func, &Parms);

	if (SecondaryOverlay != nullptr)
		*SecondaryOverlay = std::move(Parms.SecondaryOverlay);

}


// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.DualWieldOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   DualWieldLayeringPose                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_DW                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   DualWieldOverlay                                                 (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_FistGrip_C::DualWieldOverlay(const struct FPoseLink& DualWieldLayeringPose, enum class ELocomotionState CurrentLocomotionState_DW, struct FPoseLink* DualWieldOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_FistGrip_C", "DualWieldOverlay");

	Params::UABP_Player_Layering_FistGrip_C_DualWieldOverlay_Params Parms{};

	Parms.DualWieldLayeringPose = DualWieldLayeringPose;
	Parms.CurrentLocomotionState_DW = CurrentLocomotionState_DW;

	UObject::ProcessEvent(Func, &Parms);

	if (DualWieldOverlay != nullptr)
		*DualWieldOverlay = std::move(Parms.DualWieldOverlay);

}


// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.MagicOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   MagicLayeringPose                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_M                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   MagicOverlay                                                     (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_FistGrip_C::MagicOverlay(const struct FPoseLink& MagicLayeringPose, enum class ELocomotionState CurrentLocomotionState_M, struct FPoseLink* MagicOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_FistGrip_C", "MagicOverlay");

	Params::UABP_Player_Layering_FistGrip_C_MagicOverlay_Params Parms{};

	Parms.MagicLayeringPose = MagicLayeringPose;
	Parms.CurrentLocomotionState_M = CurrentLocomotionState_M;

	UObject::ProcessEvent(Func, &Parms);

	if (MagicOverlay != nullptr)
		*MagicOverlay = std::move(Parms.MagicOverlay);

}


// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.RangedOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   RangedLayeringPose                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_R                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   RangedOverlay                                                    (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_FistGrip_C::RangedOverlay(const struct FPoseLink& RangedLayeringPose, enum class ELocomotionState CurrentLocomotionState_R, struct FPoseLink* RangedOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_FistGrip_C", "RangedOverlay");

	Params::UABP_Player_Layering_FistGrip_C_RangedOverlay_Params Parms{};

	Parms.RangedLayeringPose = RangedLayeringPose;
	Parms.CurrentLocomotionState_R = CurrentLocomotionState_R;

	UObject::ProcessEvent(Func, &Parms);

	if (RangedOverlay != nullptr)
		*RangedOverlay = std::move(Parms.RangedOverlay);

}


// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_FistGrip_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_FistGrip_C", "AnimGraph");

	Params::UABP_Player_Layering_FistGrip_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.Update_CorrectiveRotator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FVector                     Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDeltaTime_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELocomotionState        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UABP_Player_C*               CallFunc_GetABP_Player_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_C*               CallFunc_GetABP_Player_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ELocomotionState        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_10                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_11                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_12                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_13                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable_14                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELocomotionState        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Temp_struct_Variable_15                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable_16                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable_17                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable_18                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable_19                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UABP_Player_C*               CallFunc_GetABP_Player_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ELocomotionState        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_SelectRotator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_VInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UABP_Player_Layering_FistGrip_C::Update_CorrectiveRotator(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FVector& Temp_struct_Variable, float CallFunc_GetDeltaTime_ReturnValue, const struct FVector& Temp_struct_Variable_1, const struct FVector& Temp_struct_Variable_2, const struct FVector& Temp_struct_Variable_3, const struct FVector& Temp_struct_Variable_4, enum class ELocomotionState Temp_byte_Variable, const struct FRotator& Temp_struct_Variable_5, const struct FRotator& Temp_struct_Variable_6, const struct FRotator& Temp_struct_Variable_7, const struct FRotator& Temp_struct_Variable_8, const struct FRotator& Temp_struct_Variable_9, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_1, enum class ELocomotionState Temp_byte_Variable_1, const struct FVector& Temp_struct_Variable_10, const struct FVector& Temp_struct_Variable_11, const struct FVector& Temp_struct_Variable_12, const struct FVector& Temp_struct_Variable_13, const struct FVector& Temp_struct_Variable_14, enum class ELocomotionState Temp_byte_Variable_2, const struct FRotator& Temp_struct_Variable_15, const struct FRotator& Temp_struct_Variable_16, const struct FRotator& Temp_struct_Variable_17, const struct FRotator& Temp_struct_Variable_18, const struct FRotator& Temp_struct_Variable_19, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_2, enum class ELocomotionState Temp_byte_Variable_3, const struct FRotator& K2Node_Select_Default, const struct FVector& K2Node_Select_Default_1, const struct FVector& K2Node_Select_Default_2, const struct FRotator& K2Node_Select_Default_3, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FRotator& CallFunc_SelectRotator_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_FistGrip_C", "Update_CorrectiveRotator");

	Params::UABP_Player_Layering_FistGrip_C_Update_CorrectiveRotator_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetDeltaTime_ReturnValue = CallFunc_GetDeltaTime_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.Temp_struct_Variable_9 = Temp_struct_Variable_9;
	Parms.CallFunc_GetABP_Player_ReturnValue = CallFunc_GetABP_Player_ReturnValue;
	Parms.CallFunc_GetABP_Player_ReturnValue_1 = CallFunc_GetABP_Player_ReturnValue_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_struct_Variable_10 = Temp_struct_Variable_10;
	Parms.Temp_struct_Variable_11 = Temp_struct_Variable_11;
	Parms.Temp_struct_Variable_12 = Temp_struct_Variable_12;
	Parms.Temp_struct_Variable_13 = Temp_struct_Variable_13;
	Parms.Temp_struct_Variable_14 = Temp_struct_Variable_14;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_struct_Variable_15 = Temp_struct_Variable_15;
	Parms.Temp_struct_Variable_16 = Temp_struct_Variable_16;
	Parms.Temp_struct_Variable_17 = Temp_struct_Variable_17;
	Parms.Temp_struct_Variable_18 = Temp_struct_Variable_18;
	Parms.Temp_struct_Variable_19 = Temp_struct_Variable_19;
	Parms.CallFunc_GetABP_Player_ReturnValue_2 = CallFunc_GetABP_Player_ReturnValue_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_SelectRotator_ReturnValue = CallFunc_SelectRotator_ReturnValue;
	Parms.CallFunc_VInterpTo_ReturnValue = CallFunc_VInterpTo_ReturnValue;
	Parms.CallFunc_RInterpTo_ReturnValue = CallFunc_RInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.GetABP_Player
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UABP_Player_C*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_C*               K2Node_DynamicCast_AsABP_Player                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UABP_Player_C* UABP_Player_Layering_FistGrip_C::GetABP_Player(class UABP_Player_C* K2Node_DynamicCast_AsABP_Player, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_FistGrip_C", "GetABP_Player");

	Params::UABP_Player_Layering_FistGrip_C_GetABP_Player_Params Parms{};

	Parms.K2Node_DynamicCast_AsABP_Player = K2Node_DynamicCast_AsABP_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_Layering_FistGrip_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_FistGrip_C", "BlueprintUpdateAnimation");

	Params::UABP_Player_Layering_FistGrip_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player_Layering_FistGrip.ABP_Player_Layering_FistGrip_C.ExecuteUbergraph_ABP_Player_Layering_FistGrip
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_Layering_FistGrip_C::ExecuteUbergraph_ABP_Player_Layering_FistGrip(int32 EntryPoint, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_FistGrip_C", "ExecuteUbergraph_ABP_Player_Layering_FistGrip");

	Params::UABP_Player_Layering_FistGrip_C_ExecuteUbergraph_ABP_Player_Layering_FistGrip_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


