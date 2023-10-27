#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Player.ABP_Player_C
// (None)

class UClass* UABP_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Player_C");

	return Clss;
}


// ABP_Player_C ABP_Player.Default__ABP_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Player_C* UABP_Player_C::GetDefaultObj()
{
	static class UABP_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Player_C*>(UABP_Player_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Player.ABP_Player_C.HandsIK_Override
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InputPose                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             HandsIK_Alpha                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SpringStrength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SpringDamping                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   HandsIK_Override                                                 (Parm, OutParm, NoDestructor)

void UABP_Player_C::HandsIK_Override(const struct FPoseLink& InputPose, double HandsIK_Alpha, double SpringStrength, double SpringDamping, struct FPoseLink* HandsIK_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "HandsIK_Override");

	Params::UABP_Player_C_HandsIK_Override_Params Parms{};

	Parms.InputPose = InputPose;
	Parms.HandsIK_Alpha = HandsIK_Alpha;
	Parms.SpringStrength = SpringStrength;
	Parms.SpringDamping = SpringDamping;

	UObject::ProcessEvent(Func, &Parms);

	if (HandsIK_Override != nullptr)
		*HandsIK_Override = std::move(Parms.HandsIK_Override);

}


// Function ABP_Player.ABP_Player_C.LanternOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   LanternLayeringPose                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_L                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   LanternOverlay                                                   (Parm, OutParm, NoDestructor)

void UABP_Player_C::LanternOverlay(const struct FPoseLink& LanternLayeringPose, enum class ELocomotionState CurrentLocomotionState_L, struct FPoseLink* LanternOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "LanternOverlay");

	Params::UABP_Player_C_LanternOverlay_Params Parms{};

	Parms.LanternLayeringPose = LanternLayeringPose;
	Parms.CurrentLocomotionState_L = CurrentLocomotionState_L;

	UObject::ProcessEvent(Func, &Parms);

	if (LanternOverlay != nullptr)
		*LanternOverlay = std::move(Parms.LanternOverlay);

}


// Function ABP_Player.ABP_Player_C.RangedOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   RangedLayeringPose                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_R                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   RangedOverlay                                                    (Parm, OutParm, NoDestructor)

void UABP_Player_C::RangedOverlay(const struct FPoseLink& RangedLayeringPose, enum class ELocomotionState CurrentLocomotionState_R, struct FPoseLink* RangedOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "RangedOverlay");

	Params::UABP_Player_C_RangedOverlay_Params Parms{};

	Parms.RangedLayeringPose = RangedLayeringPose;
	Parms.CurrentLocomotionState_R = CurrentLocomotionState_R;

	UObject::ProcessEvent(Func, &Parms);

	if (RangedOverlay != nullptr)
		*RangedOverlay = std::move(Parms.RangedOverlay);

}


// Function ABP_Player.ABP_Player_C.MagicOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   MagicLayeringPose                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_M                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   MagicOverlay                                                     (Parm, OutParm, NoDestructor)

void UABP_Player_C::MagicOverlay(const struct FPoseLink& MagicLayeringPose, enum class ELocomotionState CurrentLocomotionState_M, struct FPoseLink* MagicOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "MagicOverlay");

	Params::UABP_Player_C_MagicOverlay_Params Parms{};

	Parms.MagicLayeringPose = MagicLayeringPose;
	Parms.CurrentLocomotionState_M = CurrentLocomotionState_M;

	UObject::ProcessEvent(Func, &Parms);

	if (MagicOverlay != nullptr)
		*MagicOverlay = std::move(Parms.MagicOverlay);

}


// Function ABP_Player.ABP_Player_C.DualWieldOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   DualWieldLayeringPose                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_DW                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   DualWieldOverlay                                                 (Parm, OutParm, NoDestructor)

void UABP_Player_C::DualWieldOverlay(const struct FPoseLink& DualWieldLayeringPose, enum class ELocomotionState CurrentLocomotionState_DW, struct FPoseLink* DualWieldOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "DualWieldOverlay");

	Params::UABP_Player_C_DualWieldOverlay_Params Parms{};

	Parms.DualWieldLayeringPose = DualWieldLayeringPose;
	Parms.CurrentLocomotionState_DW = CurrentLocomotionState_DW;

	UObject::ProcessEvent(Func, &Parms);

	if (DualWieldOverlay != nullptr)
		*DualWieldOverlay = std::move(Parms.DualWieldOverlay);

}


// Function ABP_Player.ABP_Player_C.SecondaryOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   SecondaryLayeringPose                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_S                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   SecondaryOverlay                                                 (Parm, OutParm, NoDestructor)

void UABP_Player_C::SecondaryOverlay(const struct FPoseLink& SecondaryLayeringPose, enum class ELocomotionState CurrentLocomotionState_S, struct FPoseLink* SecondaryOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "SecondaryOverlay");

	Params::UABP_Player_C_SecondaryOverlay_Params Parms{};

	Parms.SecondaryLayeringPose = SecondaryLayeringPose;
	Parms.CurrentLocomotionState_S = CurrentLocomotionState_S;

	UObject::ProcessEvent(Func, &Parms);

	if (SecondaryOverlay != nullptr)
		*SecondaryOverlay = std::move(Parms.SecondaryOverlay);

}


// Function ABP_Player.ABP_Player_C.PrimaryOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PrimaryLayeringPose                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_P                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             R_Hand_Unequipped_Alpha                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             L_Hand_Unequipped_Alpha                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   PrimaryOverlay                                                   (Parm, OutParm, NoDestructor)

void UABP_Player_C::PrimaryOverlay(const struct FPoseLink& PrimaryLayeringPose, enum class ELocomotionState CurrentLocomotionState_P, double R_Hand_Unequipped_Alpha, double L_Hand_Unequipped_Alpha, struct FPoseLink* PrimaryOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "PrimaryOverlay");

	Params::UABP_Player_C_PrimaryOverlay_Params Parms{};

	Parms.PrimaryLayeringPose = PrimaryLayeringPose;
	Parms.CurrentLocomotionState_P = CurrentLocomotionState_P;
	Parms.R_Hand_Unequipped_Alpha = R_Hand_Unequipped_Alpha;
	Parms.L_Hand_Unequipped_Alpha = L_Hand_Unequipped_Alpha;

	UObject::ProcessEvent(Func, &Parms);

	if (PrimaryOverlay != nullptr)
		*PrimaryOverlay = std::move(Parms.PrimaryOverlay);

}


// Function ABP_Player.ABP_Player_C.Locomotion_Blocking
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   Locomotion_Blocking                                              (Parm, OutParm, NoDestructor)

void UABP_Player_C::Locomotion_Blocking(const struct FPoseLink& InPose, struct FPoseLink* Locomotion_Blocking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Locomotion_Blocking");

	Params::UABP_Player_C_Locomotion_Blocking_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (Locomotion_Blocking != nullptr)
		*Locomotion_Blocking = std::move(Parms.Locomotion_Blocking);

}


// Function ABP_Player.ABP_Player_C.Locomotion
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   Locomotion                                                       (Parm, OutParm, NoDestructor)

void UABP_Player_C::Locomotion(struct FPoseLink* Locomotion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Locomotion");

	Params::UABP_Player_C_Locomotion_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Locomotion != nullptr)
		*Locomotion = std::move(Parms.Locomotion);

}


// Function ABP_Player.ABP_Player_C.AL_AimingOffset
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   UpperBody_Additive                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             AimingAlpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AimingPitch                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AimingYaw                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpace*                 AimOffset_BS                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   AL_AimingOffset                                                  (Parm, OutParm, NoDestructor)

void UABP_Player_C::AL_AimingOffset(const struct FPoseLink& UpperBody_Additive, double AimingAlpha, double AimingPitch, double AimingYaw, class UBlendSpace* AimOffset_BS, struct FPoseLink* AL_AimingOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "AL_AimingOffset");

	Params::UABP_Player_C_AL_AimingOffset_Params Parms{};

	Parms.UpperBody_Additive = UpperBody_Additive;
	Parms.AimingAlpha = AimingAlpha;
	Parms.AimingPitch = AimingPitch;
	Parms.AimingYaw = AimingYaw;
	Parms.AimOffset_BS = AimOffset_BS;

	UObject::ProcessEvent(Func, &Parms);

	if (AL_AimingOffset != nullptr)
		*AL_AimingOffset = std::move(Parms.AL_AimingOffset);

}


// Function ABP_Player.ABP_Player_C.AL_PlayerFlails
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_Flails                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AL_PlayerFlails                                                  (Parm, OutParm, NoDestructor)

void UABP_Player_C::AL_PlayerFlails(const struct FPoseLink& InPose_Flails, struct FPoseLink* AL_PlayerFlails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "AL_PlayerFlails");

	Params::UABP_Player_C_AL_PlayerFlails_Params Parms{};

	Parms.InPose_Flails = InPose_Flails;

	UObject::ProcessEvent(Func, &Parms);

	if (AL_PlayerFlails != nullptr)
		*AL_PlayerFlails = std::move(Parms.AL_PlayerFlails);

}


// Function ABP_Player.ABP_Player_C.FeetIK_SetupOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   PoseToSlope                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   FeetIK_SetupOverride                                             (Parm, OutParm, NoDestructor)

void UABP_Player_C::FeetIK_SetupOverride(const struct FPoseLink& PoseToSlope, struct FPoseLink* FeetIK_SetupOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "FeetIK_SetupOverride");

	Params::UABP_Player_C_FeetIK_SetupOverride_Params Parms{};

	Parms.PoseToSlope = PoseToSlope;

	UObject::ProcessEvent(Func, &Parms);

	if (FeetIK_SetupOverride != nullptr)
		*FeetIK_SetupOverride = std::move(Parms.FeetIK_SetupOverride);

}


// Function ABP_Player.ABP_Player_C.RFingers_and_Prop_Override
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             R_Fingers_Prop_Override_Alpha                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             L_Fingers_Prop_Override                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   RFingers_and_Prop_Override                                       (Parm, OutParm, NoDestructor)

void UABP_Player_C::RFingers_and_Prop_Override(const struct FPoseLink& InPose, double R_Fingers_Prop_Override_Alpha, double L_Fingers_Prop_Override, struct FPoseLink* RFingers_and_Prop_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "RFingers_and_Prop_Override");

	Params::UABP_Player_C_RFingers_and_Prop_Override_Params Parms{};

	Parms.InPose = InPose;
	Parms.R_Fingers_Prop_Override_Alpha = R_Fingers_Prop_Override_Alpha;
	Parms.L_Fingers_Prop_Override = L_Fingers_Prop_Override;

	UObject::ProcessEvent(Func, &Parms);

	if (RFingers_and_Prop_Override != nullptr)
		*RFingers_and_Prop_Override = std::move(Parms.RFingers_and_Prop_Override);

}


// Function ABP_Player.ABP_Player_C.BasePoses
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   BasePoses                                                        (Parm, OutParm, NoDestructor)

void UABP_Player_C::BasePoses(struct FPoseLink* BasePoses)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "BasePoses");

	Params::UABP_Player_C_BasePoses_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BasePoses != nullptr)
		*BasePoses = std::move(Parms.BasePoses);

}


// Function ABP_Player.ABP_Player_C.LayeringPoses
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   LayeringPoses                                                    (Parm, OutParm, NoDestructor)

void UABP_Player_C::LayeringPoses(struct FPoseLink* LayeringPoses)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "LayeringPoses");

	Params::UABP_Player_C_LayeringPoses_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (LayeringPoses != nullptr)
		*LayeringPoses = std::move(Parms.LayeringPoses);

}


// Function ABP_Player.ABP_Player_C.OverlayPoses
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   OverlayPoses                                                     (Parm, OutParm, NoDestructor)

void UABP_Player_C::OverlayPoses(struct FPoseLink* OverlayPoses)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "OverlayPoses");

	Params::UABP_Player_C_OverlayPoses_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OverlayPoses != nullptr)
		*OverlayPoses = std::move(Parms.OverlayPoses);

}


// Function ABP_Player.ABP_Player_C.AL_WeaponVerticalOffset_
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose_FullBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AL_WeaponVerticalOffset_                                         (Parm, OutParm, NoDestructor)

void UABP_Player_C::AL_WeaponVerticalOffset_(const struct FPoseLink& InPose_FullBody, struct FPoseLink* AL_WeaponVerticalOffset_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "AL_WeaponVerticalOffset_");

	Params::UABP_Player_C_AL_WeaponVerticalOffset__Params Parms{};

	Parms.InPose_FullBody = InPose_FullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (AL_WeaponVerticalOffset_ != nullptr)
		*AL_WeaponVerticalOffset_ = std::move(Parms.AL_WeaponVerticalOffset_);

}


// Function ABP_Player.ABP_Player_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Player_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "AnimGraph");

	Params::UABP_Player_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Player.ABP_Player_C.Update_FootSolver
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDeltaTime_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValueWithDefault_OutValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurveValueWithDefault_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Current_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_FeetIK_FullRotation_Alpha_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Update_FootSolver(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool Temp_bool_Variable, float CallFunc_GetDeltaTime_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, float CallFunc_GetCurveValueWithDefault_OutValue, bool CallFunc_GetCurveValueWithDefault_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_Select_Default, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast, float K2Node_VariableSet_FeetIK_FullRotation_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_FootSolver");

	Params::UABP_Player_C_Update_FootSolver_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDeltaTime_ReturnValue = CallFunc_GetDeltaTime_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetCurveValueWithDefault_OutValue = CallFunc_GetCurveValueWithDefault_OutValue;
	Parms.CallFunc_GetCurveValueWithDefault_ReturnValue = CallFunc_GetCurveValueWithDefault_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_DeltaTime_ImplicitCast = CallFunc_FInterpTo_DeltaTime_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast = CallFunc_FInterpTo_Current_ImplicitCast;
	Parms.K2Node_VariableSet_FeetIK_FullRotation_Alpha_ImplicitCast = K2Node_VariableSet_FeetIK_FullRotation_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.UpdateFeetIKAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::UpdateFeetIKAlpha(TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "UpdateFeetIKAlpha");

	Params::UABP_Player_C_UpdateFeetIKAlpha_Params Parms{};

	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.SetRangedStanceLocal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALOTF2Character*             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEquipableInventoryRangedWeapon*CallFunc_GetRangedWeaponEquipment_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEquipableInventorySoulsLantern*CallFunc_GetSoulsLanternEquipment_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHolsteredVisual_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetItemCategory_ReturnValue                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHolsteredVisual_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::SetRangedStanceLocal(class ALOTF2Character* Character, class UEquipableInventoryRangedWeapon* CallFunc_GetRangedWeaponEquipment_ReturnValue, class UEquipableInventorySoulsLantern* CallFunc_GetSoulsLanternEquipment_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsHolsteredVisual_ReturnValue, const struct FGameplayTag& CallFunc_GetItemCategory_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_IsHolsteredVisual_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "SetRangedStanceLocal");

	Params::UABP_Player_C_SetRangedStanceLocal_Params Parms{};

	Parms.Character = Character;
	Parms.CallFunc_GetRangedWeaponEquipment_ReturnValue = CallFunc_GetRangedWeaponEquipment_ReturnValue;
	Parms.CallFunc_GetSoulsLanternEquipment_ReturnValue = CallFunc_GetSoulsLanternEquipment_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsHolsteredVisual_ReturnValue = CallFunc_IsHolsteredVisual_ReturnValue;
	Parms.CallFunc_GetItemCategory_ReturnValue = CallFunc_GetItemCategory_ReturnValue;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_IsHolsteredVisual_ReturnValue_1 = CallFunc_IsHolsteredVisual_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Set_BlockingTransitionAnimTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UABP_Player_C::Set_BlockingTransitionAnimTime(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_BlockingTransitionAnimTime");

	Params::UABP_Player_C_Set_BlockingTransitionAnimTime_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Update_BlockingTransitionAnimTime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (NoDestructor)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           CallFunc_GetSequencePure_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAccumulatedTime_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpEaseInOut_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_InRangeB_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Update_BlockingTransitionAnimTime(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, class UAnimSequenceBase* CallFunc_GetSequencePure_ReturnValue, float CallFunc_GetAccumulatedTime_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_FInterpEaseInOut_ReturnValue, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_BlockingTransitionAnimTime");

	Params::UABP_Player_C_Update_BlockingTransitionAnimTime_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequencePlayerPure_SequencePlayer = CallFunc_ConvertToSequencePlayerPure_SequencePlayer;
	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.CallFunc_GetSequencePure_ReturnValue = CallFunc_GetSequencePure_ReturnValue;
	Parms.CallFunc_GetAccumulatedTime_ReturnValue = CallFunc_GetAccumulatedTime_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_FInterpEaseInOut_ReturnValue = CallFunc_FInterpEaseInOut_ReturnValue;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_InRangeB_ImplicitCast = CallFunc_MapRangeClamped_InRangeB_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.TurnOff_Override_byCurveName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             InputTarget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SwitcherCurve                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValueWithDefault_OutValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurveValueWithDefault_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UABP_Player_C::TurnOff_Override_byCurveName(double InputTarget, class FName SwitcherCurve, float CallFunc_GetCurveValueWithDefault_OutValue, bool CallFunc_GetCurveValueWithDefault_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "TurnOff_Override_byCurveName");

	Params::UABP_Player_C_TurnOff_Override_byCurveName_Params Parms{};

	Parms.InputTarget = InputTarget;
	Parms.SwitcherCurve = SwitcherCurve;
	Parms.CallFunc_GetCurveValueWithDefault_OutValue = CallFunc_GetCurveValueWithDefault_OutValue;
	Parms.CallFunc_GetCurveValueWithDefault_ReturnValue = CallFunc_GetCurveValueWithDefault_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ABP_Player.ABP_Player_C.OnLeftHandAnimUpdate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UABP_Player_C::OnLeftHandAnimUpdate(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "OnLeftHandAnimUpdate");

	Params::UABP_Player_C_OnLeftHandAnimUpdate_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.OnRightHandAnimUpdate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UABP_Player_C::OnRightHandAnimUpdate(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "OnRightHandAnimUpdate");

	Params::UABP_Player_C_OnRightHandAnimUpdate_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.OnHandAnimUpdate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               IsLeftHand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             NewPlayRate                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (NoDestructor)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlayRate_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_SetPlayRate_ReturnValue                                 (NoDestructor)
// double                             CallFunc_SignOfFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPlayRate_PlayRate_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SignOfFloat_A_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::OnHandAnimUpdate(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool IsLeftHand, double NewPlayRate, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, float CallFunc_GetPlayRate_ReturnValue, const struct FSequencePlayerReference& CallFunc_SetPlayRate_ReturnValue, double CallFunc_SignOfFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool Temp_bool_Variable, bool K2Node_Select_Default, float CallFunc_SetPlayRate_PlayRate_ImplicitCast, double CallFunc_SignOfFloat_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "OnHandAnimUpdate");

	Params::UABP_Player_C_OnHandAnimUpdate_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.IsLeftHand = IsLeftHand;
	Parms.NewPlayRate = NewPlayRate;
	Parms.CallFunc_ConvertToSequencePlayerPure_SequencePlayer = CallFunc_ConvertToSequencePlayerPure_SequencePlayer;
	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.CallFunc_GetPlayRate_ReturnValue = CallFunc_GetPlayRate_ReturnValue;
	Parms.CallFunc_SetPlayRate_ReturnValue = CallFunc_SetPlayRate_ReturnValue;
	Parms.CallFunc_SignOfFloat_ReturnValue = CallFunc_SignOfFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetPlayRate_PlayRate_ImplicitCast = CallFunc_SetPlayRate_PlayRate_ImplicitCast;
	Parms.CallFunc_SignOfFloat_A_ImplicitCast = CallFunc_SignOfFloat_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.OnHandPoseUpdate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bIsLeftHand                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimationStateResultReferenceCallFunc_ConvertToAnimationStateResultPure_AnimationState        (NoDestructor)
// bool                               CallFunc_ConvertToAnimationStateResultPure_Result                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentWeight_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRelevantAnimTimeRemaining_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::OnHandPoseUpdate(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool bIsLeftHand, const struct FAnimationStateResultReference& CallFunc_ConvertToAnimationStateResultPure_AnimationState, bool CallFunc_ConvertToAnimationStateResultPure_Result, float CallFunc_GetCurrentWeight_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "OnHandPoseUpdate");

	Params::UABP_Player_C_OnHandPoseUpdate_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.bIsLeftHand = bIsLeftHand;
	Parms.CallFunc_ConvertToAnimationStateResultPure_AnimationState = CallFunc_ConvertToAnimationStateResultPure_AnimationState;
	Parms.CallFunc_ConvertToAnimationStateResultPure_Result = CallFunc_ConvertToAnimationStateResultPure_Result;
	Parms.CallFunc_GetCurrentWeight_ReturnValue = CallFunc_GetCurrentWeight_ReturnValue;
	Parms.CallFunc_GetRelevantAnimTimeRemaining_ReturnValue = CallFunc_GetRelevantAnimTimeRemaining_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.OnLeftHandPoseUpdate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UABP_Player_C::OnLeftHandPoseUpdate(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "OnLeftHandPoseUpdate");

	Params::UABP_Player_C_OnLeftHandPoseUpdate_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.OnRightHandPoseUpdate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UABP_Player_C::OnRightHandPoseUpdate(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "OnRightHandPoseUpdate");

	Params::UABP_Player_C_OnRightHandPoseUpdate_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.ArmsOverride_Alpha
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DisableOverride_Conditions                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue             (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasAnyMatchingGameplayTags_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1           (None)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasAnyMatchingGameplayTags_self_CastInput_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_2           (None)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasAnyMatchingGameplayTags_self_CastInput_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TurnOff_Override_byCurveName_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_TurnOff_Override_byCurveName_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::ArmsOverride_Alpha(bool DisableOverride_Conditions, double CallFunc_SelectFloat_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput_1, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_2, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput_2, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue_2, float CallFunc_GetCurveValue_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, double CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_4, double CallFunc_TurnOff_Override_byCurveName_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue, double CallFunc_SelectFloat_ReturnValue_2, double CallFunc_SelectFloat_ReturnValue_3, double CallFunc_TurnOff_Override_byCurveName_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "ArmsOverride_Alpha");

	Params::UABP_Player_C_ArmsOverride_Alpha_Params Parms{};

	Parms.DisableOverride_Conditions = DisableOverride_Conditions;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_HasAnyMatchingGameplayTags_self_CastInput = CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue = CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1 = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1;
	Parms.CallFunc_HasAnyMatchingGameplayTags_self_CastInput_1 = CallFunc_HasAnyMatchingGameplayTags_self_CastInput_1;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1 = CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_2 = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_2;
	Parms.CallFunc_HasAnyMatchingGameplayTags_self_CastInput_2 = CallFunc_HasAnyMatchingGameplayTags_self_CastInput_2;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue_2 = CallFunc_HasAnyMatchingGameplayTags_ReturnValue_2;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_TurnOff_Override_byCurveName_ReturnValue = CallFunc_TurnOff_Override_byCurveName_ReturnValue;
	Parms.CallFunc_GetCurveValue_ReturnValue_1 = CallFunc_GetCurveValue_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.CallFunc_TurnOff_Override_byCurveName_ReturnValue_1 = CallFunc_TurnOff_Override_byCurveName_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_SelectFloat_B_ImplicitCast_1 = CallFunc_SelectFloat_B_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Update_SprintAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (NoDestructor)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UABP_Player_C::Update_SprintAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool Temp_bool_Variable, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, class UAnimSequence* K2Node_Select_Default, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_SprintAnim");

	Params::UABP_Player_C_Update_SprintAnim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_ConvertToSequencePlayerPure_SequencePlayer = CallFunc_ConvertToSequencePlayerPure_SequencePlayer;
	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Update_StrafeRunCycleAnimation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (NoDestructor)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UABP_Player_C::Update_StrafeRunCycleAnimation(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool Temp_bool_Variable, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, class UAnimSequence* K2Node_Select_Default, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_StrafeRunCycleAnimation");

	Params::UABP_Player_C_Update_StrafeRunCycleAnimation_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_ConvertToSequencePlayerPure_SequencePlayer = CallFunc_ConvertToSequencePlayerPure_SequencePlayer;
	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.EquipHand_isLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsLeftHand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Equip                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEquipAnimationType     AnimType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEquipAnimationType     CachedAnimType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEquipAnimationType     K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEquipAnimationType     K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::EquipHand_isLeft(bool IsLeftHand, bool* Equip, enum class EEquipAnimationType* AnimType, enum class EEquipAnimationType* CachedAnimType, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool K2Node_Select_Default, bool Temp_bool_Variable_2, enum class EEquipAnimationType K2Node_Select_Default_1, enum class EEquipAnimationType K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EquipHand_isLeft");

	Params::UABP_Player_C_EquipHand_isLeft_Params Parms{};

	Parms.IsLeftHand = IsLeftHand;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Equip != nullptr)
		*Equip = Parms.Equip;

	if (AnimType != nullptr)
		*AnimType = Parms.AnimType;

	if (CachedAnimType != nullptr)
		*CachedAnimType = Parms.CachedAnimType;

}


// Function ABP_Player.ABP_Player_C.Reset_IdleBreakerTimerDelay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRandomStream               RandomStream                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Reset_IdleBreakerTimerDelay(const struct FRandomStream& RandomStream, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Reset_IdleBreakerTimerDelay");

	Params::UABP_Player_C_Reset_IdleBreakerTimerDelay_Params Parms{};

	Parms.RandomStream = RandomStream;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue = CallFunc_RandomIntegerInRangeFromStream_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Set_IdleState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UABP_Player_C::Set_IdleState(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_IdleState");

	Params::UABP_Player_C_Set_IdleState_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.ResetIdleBreakTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_Player_C::ResetIdleBreakTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "ResetIdleBreakTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.CanPlayIdleBreak
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UABP_Player_C::CanPlayIdleBreak(bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "CanPlayIdleBreak");

	Params::UABP_Player_C_CanPlayIdleBreak_Params Parms{};

	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ABP_Player.ABP_Player_C.OnHandAnimBecomeRelevant
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bIsLeftHand                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EquipHand_isLeft_Equip                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEquipAnimationType     CallFunc_EquipHand_isLeft_AnimType                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEquipAnimationType     CallFunc_EquipHand_isLeft_CachedAnimType                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (NoDestructor)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           CallFunc_GetSequencePure_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_SetPlayRate_ReturnValue                                 (NoDestructor)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_SetStartPosition_ReturnValue                            (NoDestructor)
// struct FSequencePlayerReference    CallFunc_SetAccumulatedTime_ReturnValue                          (NoDestructor)
// float                              CallFunc_SetPlayRate_PlayRate_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetStartPosition_StartPosition_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAccumulatedTime_Time_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::OnHandAnimBecomeRelevant(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool bIsLeftHand, bool CallFunc_EquipHand_isLeft_Equip, enum class EEquipAnimationType CallFunc_EquipHand_isLeft_AnimType, enum class EEquipAnimationType CallFunc_EquipHand_isLeft_CachedAnimType, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, double CallFunc_SelectFloat_ReturnValue, class UAnimSequenceBase* CallFunc_GetSequencePure_ReturnValue, const struct FSequencePlayerReference& CallFunc_SetPlayRate_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, const struct FSequencePlayerReference& CallFunc_SetStartPosition_ReturnValue, const struct FSequencePlayerReference& CallFunc_SetAccumulatedTime_ReturnValue, float CallFunc_SetPlayRate_PlayRate_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast, float CallFunc_SetStartPosition_StartPosition_ImplicitCast, float CallFunc_SetAccumulatedTime_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "OnHandAnimBecomeRelevant");

	Params::UABP_Player_C_OnHandAnimBecomeRelevant_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.bIsLeftHand = bIsLeftHand;
	Parms.CallFunc_EquipHand_isLeft_Equip = CallFunc_EquipHand_isLeft_Equip;
	Parms.CallFunc_EquipHand_isLeft_AnimType = CallFunc_EquipHand_isLeft_AnimType;
	Parms.CallFunc_EquipHand_isLeft_CachedAnimType = CallFunc_EquipHand_isLeft_CachedAnimType;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_ConvertToSequencePlayerPure_SequencePlayer = CallFunc_ConvertToSequencePlayerPure_SequencePlayer;
	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetSequencePure_ReturnValue = CallFunc_GetSequencePure_ReturnValue;
	Parms.CallFunc_SetPlayRate_ReturnValue = CallFunc_SetPlayRate_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_SetStartPosition_ReturnValue = CallFunc_SetStartPosition_ReturnValue;
	Parms.CallFunc_SetAccumulatedTime_ReturnValue = CallFunc_SetAccumulatedTime_ReturnValue;
	Parms.CallFunc_SetPlayRate_PlayRate_ImplicitCast = CallFunc_SetPlayRate_PlayRate_ImplicitCast;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_SetStartPosition_StartPosition_ImplicitCast = CallFunc_SetStartPosition_StartPosition_ImplicitCast;
	Parms.CallFunc_SetAccumulatedTime_Time_ImplicitCast = CallFunc_SetAccumulatedTime_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.OnLeftHandAnimBecomeRelevant
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UABP_Player_C::OnLeftHandAnimBecomeRelevant(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "OnLeftHandAnimBecomeRelevant");

	Params::UABP_Player_C_OnLeftHandAnimBecomeRelevant_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.OnRightHandAnimBecomeRelevant
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UABP_Player_C::OnRightHandAnimBecomeRelevant(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "OnRightHandAnimBecomeRelevant");

	Params::UABP_Player_C_OnRightHandAnimBecomeRelevant_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Update_IdleBreakerExplicitTime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           CallFunc_GetSequence_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAccumulatedTime_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_AdvanceTime_ReturnValue                                 (NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Update_IdleBreakerExplicitTime(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, class UAnimSequenceBase* CallFunc_GetSequence_ReturnValue, float CallFunc_GetAccumulatedTime_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_AdvanceTime_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_IdleBreakerExplicitTime");

	Params::UABP_Player_C_Update_IdleBreakerExplicitTime_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.CallFunc_GetSequence_ReturnValue = CallFunc_GetSequence_ReturnValue;
	Parms.CallFunc_GetAccumulatedTime_ReturnValue = CallFunc_GetAccumulatedTime_ReturnValue;
	Parms.CallFunc_AdvanceTime_ReturnValue = CallFunc_AdvanceTime_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast = CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;
	Parms.CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast = CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Set_IdleBreakerExplicitTime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetSequence_ReturnValue                                 (NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_SetExplicitTime_ReturnValue                             (NoDestructor)

void UABP_Player_C::Set_IdleBreakerExplicitTime(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UAnimSequence* CallFunc_Array_Get_Item, const struct FSequenceEvaluatorReference& CallFunc_SetSequence_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_SetExplicitTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_IdleBreakerExplicitTime");

	Params::UABP_Player_C_Set_IdleBreakerExplicitTime_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SetSequence_ReturnValue = CallFunc_SetSequence_ReturnValue;
	Parms.CallFunc_SetExplicitTime_ReturnValue = CallFunc_SetExplicitTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Update_LocomotionState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FRotator                    Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ELocomotionState        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ELocomotionState        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_REase_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_REase_Alpha_ImplicitCast                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RInterpTo_DeltaTime_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RInterpTo_DeltaTime_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Update_LocomotionState(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FRotator& Temp_struct_Variable, const struct FRotator& Temp_struct_Variable_1, const struct FRotator& Temp_struct_Variable_2, const struct FRotator& Temp_struct_Variable_3, const struct FRotator& Temp_struct_Variable_4, enum class ELocomotionState Temp_byte_Variable, const struct FRotator& Temp_struct_Variable_5, const struct FRotator& Temp_struct_Variable_6, const struct FRotator& Temp_struct_Variable_7, const struct FRotator& Temp_struct_Variable_8, const struct FRotator& Temp_struct_Variable_9, enum class ELocomotionState Temp_byte_Variable_1, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, const struct FRotator& K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FInterpTo_ReturnValue, const struct FRotator& K2Node_Select_Default_1, double CallFunc_MapRangeClamped_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue_1, const struct FRotator& CallFunc_REase_ReturnValue, float CallFunc_REase_Alpha_ImplicitCast, float CallFunc_RInterpTo_DeltaTime_ImplicitCast, float CallFunc_RInterpTo_DeltaTime_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_LocomotionState");

	Params::UABP_Player_C_Update_LocomotionState_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
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
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_RInterpTo_ReturnValue = CallFunc_RInterpTo_ReturnValue;
	Parms.CallFunc_RInterpTo_ReturnValue_1 = CallFunc_RInterpTo_ReturnValue_1;
	Parms.CallFunc_REase_ReturnValue = CallFunc_REase_ReturnValue;
	Parms.CallFunc_REase_Alpha_ImplicitCast = CallFunc_REase_Alpha_ImplicitCast;
	Parms.CallFunc_RInterpTo_DeltaTime_ImplicitCast = CallFunc_RInterpTo_DeltaTime_ImplicitCast;
	Parms.CallFunc_RInterpTo_DeltaTime_ImplicitCast_1 = CallFunc_RInterpTo_DeltaTime_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.LookAt_NPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     LookAtTarget_LastTick                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Current_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_LookAt_BlendWeight_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_A_ImplicitCast                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_LookAt_BlendWeight_ImplicitCast_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::LookAt_NPC(const struct FVector& LookAtTarget_LastTick, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_FInterpTo_Current_ImplicitCast, float K2Node_VariableSet_LookAt_BlendWeight_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast_1, double CallFunc_Abs_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_LookAt_BlendWeight_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "LookAt_NPC");

	Params::UABP_Player_C_LookAt_NPC_Params Parms{};

	Parms.LookAtTarget_LastTick = LookAtTarget_LastTick;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_NormalizedDeltaRotator_ReturnValue = CallFunc_NormalizedDeltaRotator_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast = CallFunc_FInterpTo_Current_ImplicitCast;
	Parms.K2Node_VariableSet_LookAt_BlendWeight_ImplicitCast = K2Node_VariableSet_LookAt_BlendWeight_ImplicitCast;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_1 = CallFunc_FInterpTo_Current_ImplicitCast_1;
	Parms.CallFunc_Abs_A_ImplicitCast = CallFunc_Abs_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSet_LookAt_BlendWeight_ImplicitCast_1 = K2Node_VariableSet_LookAt_BlendWeight_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Update_FingersPropOverride_Alpha
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_LFingers_Prop_Alpha_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_RFingers_Prop_Alpha_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Update_FingersPropOverride_Alpha(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_1, double K2Node_VariableSet_LFingers_Prop_Alpha_ImplicitCast, double K2Node_VariableSet_RFingers_Prop_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_FingersPropOverride_Alpha");

	Params::UABP_Player_C_Update_FingersPropOverride_Alpha_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_GetCurveValue_ReturnValue_1 = CallFunc_GetCurveValue_ReturnValue_1;
	Parms.K2Node_VariableSet_LFingers_Prop_Alpha_ImplicitCast = K2Node_VariableSet_LFingers_Prop_Alpha_ImplicitCast;
	Parms.K2Node_VariableSet_RFingers_Prop_Alpha_ImplicitCast = K2Node_VariableSet_RFingers_Prop_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Update_SpringIK_Alpha
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// double                             IK_AlphaTarget                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELocomotionState        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMeleeStance            Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERangedStance           Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMeleeStance            Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERangedStance           Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERangedStance           Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_20                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMeleeStance            Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Update_SpringIK_Alpha(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, double IK_AlphaTarget, enum class ELocomotionState Temp_byte_Variable, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, enum class EMeleeStance Temp_byte_Variable_1, double Temp_real_Variable_5, double Temp_real_Variable_6, enum class ERangedStance Temp_byte_Variable_2, double Temp_real_Variable_7, double Temp_real_Variable_8, double Temp_real_Variable_9, enum class EMeleeStance Temp_byte_Variable_3, double Temp_real_Variable_10, double Temp_real_Variable_11, enum class ERangedStance Temp_byte_Variable_4, double Temp_real_Variable_12, double Temp_real_Variable_13, double Temp_real_Variable_14, enum class ERangedStance Temp_byte_Variable_5, double Temp_real_Variable_15, double Temp_real_Variable_16, double Temp_real_Variable_17, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double K2Node_Select_Default, double CallFunc_SelectFloat_ReturnValue, double K2Node_Select_Default_1, double K2Node_Select_Default_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, double Temp_real_Variable_18, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_2, double Temp_real_Variable_19, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, double CallFunc_SelectFloat_ReturnValue_3, double CallFunc_SelectFloat_ReturnValue_4, double Temp_real_Variable_20, double CallFunc_FInterpTo_ReturnValue_2, enum class EMeleeStance Temp_byte_Variable_6, bool CallFunc_Greater_DoubleDouble_ReturnValue, double K2Node_Select_Default_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_SelectFloat_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue_3, double CallFunc_SelectFloat_ReturnValue_8, double K2Node_Select_Default_4, double K2Node_Select_Default_5, double CallFunc_SelectFloat_ReturnValue_9, double CallFunc_FInterpTo_ReturnValue_4, double K2Node_Select_Default_6, double CallFunc_SelectFloat_ReturnValue_10, double CallFunc_FInterpTo_ReturnValue_5, double CallFunc_SelectFloat_ReturnValue_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_SpringIK_Alpha");

	Params::UABP_Player_C_Update_SpringIK_Alpha_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.IK_AlphaTarget = IK_AlphaTarget;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_real_Variable_5 = Temp_real_Variable_5;
	Parms.Temp_real_Variable_6 = Temp_real_Variable_6;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_real_Variable_7 = Temp_real_Variable_7;
	Parms.Temp_real_Variable_8 = Temp_real_Variable_8;
	Parms.Temp_real_Variable_9 = Temp_real_Variable_9;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_real_Variable_10 = Temp_real_Variable_10;
	Parms.Temp_real_Variable_11 = Temp_real_Variable_11;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_real_Variable_12 = Temp_real_Variable_12;
	Parms.Temp_real_Variable_13 = Temp_real_Variable_13;
	Parms.Temp_real_Variable_14 = Temp_real_Variable_14;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_real_Variable_15 = Temp_real_Variable_15;
	Parms.Temp_real_Variable_16 = Temp_real_Variable_16;
	Parms.Temp_real_Variable_17 = Temp_real_Variable_17;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.Temp_real_Variable_18 = Temp_real_Variable_18;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.Temp_real_Variable_19 = Temp_real_Variable_19;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.CallFunc_SelectFloat_ReturnValue_4 = CallFunc_SelectFloat_ReturnValue_4;
	Parms.Temp_real_Variable_20 = Temp_real_Variable_20;
	Parms.CallFunc_FInterpTo_ReturnValue_2 = CallFunc_FInterpTo_ReturnValue_2;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_5 = CallFunc_SelectFloat_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_6 = CallFunc_SelectFloat_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_7 = CallFunc_SelectFloat_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_FInterpTo_ReturnValue_3 = CallFunc_FInterpTo_ReturnValue_3;
	Parms.CallFunc_SelectFloat_ReturnValue_8 = CallFunc_SelectFloat_ReturnValue_8;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_SelectFloat_ReturnValue_9 = CallFunc_SelectFloat_ReturnValue_9;
	Parms.CallFunc_FInterpTo_ReturnValue_4 = CallFunc_FInterpTo_ReturnValue_4;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_SelectFloat_ReturnValue_10 = CallFunc_SelectFloat_ReturnValue_10;
	Parms.CallFunc_FInterpTo_ReturnValue_5 = CallFunc_FInterpTo_ReturnValue_5;
	Parms.CallFunc_SelectFloat_ReturnValue_11 = CallFunc_SelectFloat_ReturnValue_11;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Set_BlockingAnimations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_1                    (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTagEx_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_2                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_3                    (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTagEx_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTagEx_ReturnValue_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_4                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_5                    (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_2                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_6                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_7                    (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_3                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_4                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Set_BlockingAnimations(const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue, class UAnimSequence* CallFunc_BP_GetAnimationByTagEx_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_2, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_3, class UAnimSequence* CallFunc_BP_GetAnimationByTagEx_ReturnValue_1, class UAnimSequence* CallFunc_BP_GetAnimationByTagEx_ReturnValue_2, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_4, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_5, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_1, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_2, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_6, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_7, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_3, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_BlockingAnimations");

	Params::UABP_Player_C_Set_BlockingAnimations_Params Parms{};

	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_1 = CallFunc_MakeLiteralGameplayTag_ReturnValue_1;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue = CallFunc_BP_GetAnimationByTag_ReturnValue;
	Parms.CallFunc_BP_GetAnimationByTagEx_ReturnValue = CallFunc_BP_GetAnimationByTagEx_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_2 = CallFunc_MakeLiteralGameplayTag_ReturnValue_2;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_3 = CallFunc_MakeLiteralGameplayTag_ReturnValue_3;
	Parms.CallFunc_BP_GetAnimationByTagEx_ReturnValue_1 = CallFunc_BP_GetAnimationByTagEx_ReturnValue_1;
	Parms.CallFunc_BP_GetAnimationByTagEx_ReturnValue_2 = CallFunc_BP_GetAnimationByTagEx_ReturnValue_2;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_4 = CallFunc_MakeLiteralGameplayTag_ReturnValue_4;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_5 = CallFunc_MakeLiteralGameplayTag_ReturnValue_5;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_1 = CallFunc_BP_GetAnimationByTag_ReturnValue_1;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_2 = CallFunc_BP_GetAnimationByTag_ReturnValue_2;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_6 = CallFunc_MakeLiteralGameplayTag_ReturnValue_6;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_7 = CallFunc_MakeLiteralGameplayTag_ReturnValue_7;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_3 = CallFunc_BP_GetAnimationByTag_ReturnValue_3;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_4 = CallFunc_BP_GetAnimationByTag_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Smooth_AimOffsetAlpha_byMontageTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                MontageTag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// double                             AimOffsetTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_BP_GetMontageByTag_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlayLength_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_GetPosition_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Montage_IsPlaying_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_InRangeB_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Smooth_AimOffsetAlpha_byMontageTag(const struct FGameplayTag& MontageTag, double AimOffsetTarget, class UAnimMontage* CallFunc_BP_GetMontageByTag_ReturnValue, float CallFunc_GetPlayLength_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, float CallFunc_Montage_GetPosition_ReturnValue, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Smooth_AimOffsetAlpha_byMontageTag");

	Params::UABP_Player_C_Smooth_AimOffsetAlpha_byMontageTag_Params Parms{};

	Parms.MontageTag = MontageTag;
	Parms.AimOffsetTarget = AimOffsetTarget;
	Parms.CallFunc_BP_GetMontageByTag_ReturnValue = CallFunc_BP_GetMontageByTag_ReturnValue;
	Parms.CallFunc_GetPlayLength_ReturnValue = CallFunc_GetPlayLength_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Montage_GetPosition_ReturnValue = CallFunc_Montage_GetPosition_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Montage_IsPlaying_ReturnValue = CallFunc_Montage_IsPlaying_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_MapRangeClamped_InRangeB_ImplicitCast = CallFunc_MapRangeClamped_InRangeB_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Set_WalkState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Set_WalkState(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_WalkState");

	Params::UABP_Player_C_Set_WalkState_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Update_IdleState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FAnimationStateResultReferenceCallFunc_ConvertToAnimationStateResultPure_AnimationState        (NoDestructor)
// bool                               CallFunc_ConvertToAnimationStateResultPure_Result                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStateBlendingOut_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPlayIdleBreak_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDeltaTime_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_IdleBreaker_Timer_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Update_IdleState(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FAnimationStateResultReference& CallFunc_ConvertToAnimationStateResultPure_AnimationState, bool CallFunc_ConvertToAnimationStateResultPure_Result, bool CallFunc_IsStateBlendingOut_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_CanPlayIdleBreak_ReturnValue, float CallFunc_GetDeltaTime_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float K2Node_VariableSet_IdleBreaker_Timer_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_IdleState");

	Params::UABP_Player_C_Update_IdleState_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToAnimationStateResultPure_AnimationState = CallFunc_ConvertToAnimationStateResultPure_AnimationState;
	Parms.CallFunc_ConvertToAnimationStateResultPure_Result = CallFunc_ConvertToAnimationStateResultPure_Result;
	Parms.CallFunc_IsStateBlendingOut_ReturnValue = CallFunc_IsStateBlendingOut_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_CanPlayIdleBreak_ReturnValue = CallFunc_CanPlayIdleBreak_ReturnValue;
	Parms.CallFunc_GetDeltaTime_ReturnValue = CallFunc_GetDeltaTime_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.K2Node_VariableSet_IdleBreaker_Timer_ImplicitCast = K2Node_VariableSet_IdleBreaker_Timer_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.GetOppositeCardinalDirection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ECardinalDirection      CurrentDirection                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECardinalDirection      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ECardinalDirection UABP_Player_C::GetOppositeCardinalDirection(enum class ECardinalDirection CurrentDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "GetOppositeCardinalDirection");

	Params::UABP_Player_C_GetOppositeCardinalDirection_Params Parms{};

	Parms.CurrentDirection = CurrentDirection;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ABP_Player.ABP_Player_C.Update_AccelerationData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     W_Acceleration2D                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     PivotDirection2D                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LocalAcceleration2D                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateDirection_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECardinalDirection      CallFunc_SelectCardinalDirectionFromAngle_Direction              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_LessLess_VectorRotator_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSizeXYSquared_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_B_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Update_AccelerationData(const struct FVector& W_Acceleration2D, const struct FVector& PivotDirection2D, const struct FVector& LocalAcceleration2D, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float CallFunc_CalculateDirection_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, enum class ECardinalDirection CallFunc_SelectCardinalDirectionFromAngle_Direction, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_LessLess_VectorRotator_ReturnValue, double CallFunc_VSize_ReturnValue, double CallFunc_SafeDivide_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_VSizeXYSquared_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast, double CallFunc_SafeDivide_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_AccelerationData");

	Params::UABP_Player_C_Update_AccelerationData_Params Parms{};

	Parms.W_Acceleration2D = W_Acceleration2D;
	Parms.PivotDirection2D = PivotDirection2D;
	Parms.LocalAcceleration2D = LocalAcceleration2D;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_CalculateDirection_ReturnValue = CallFunc_CalculateDirection_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_SelectCardinalDirectionFromAngle_Direction = CallFunc_SelectCardinalDirectionFromAngle_Direction;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue_1 = CallFunc_Normal_ReturnValue_1;
	Parms.CallFunc_LessLess_VectorRotator_ReturnValue = CallFunc_LessLess_VectorRotator_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_VSizeXYSquared_ReturnValue = CallFunc_VSizeXYSquared_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast = CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast;
	Parms.CallFunc_SafeDivide_B_ImplicitCast = CallFunc_SafeDivide_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Update_VelocityData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     W_CharVelocity_2D                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     L_CharVelocity_2D                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WasMovingLastUpdate                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSizeXYSquared_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECardinalDirection      CallFunc_SelectCardinalDirectionFromAngle_Direction              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateDirection_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECardinalDirection      CallFunc_SelectCardinalDirectionFromAngle_Direction_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Vector_IsZero_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_LessLess_VectorRotator_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Char_DirectionAngle_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_MaxSpeed_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Update_VelocityData(const struct FVector& W_CharVelocity_2D, const struct FVector& L_CharVelocity_2D, bool WasMovingLastUpdate, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, double CallFunc_VSizeXYSquared_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ECardinalDirection CallFunc_SelectCardinalDirectionFromAngle_Direction, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_CalculateDirection_ReturnValue, enum class ECardinalDirection CallFunc_SelectCardinalDirectionFromAngle_Direction_1, bool CallFunc_Vector_IsZero_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FVector& CallFunc_LessLess_VectorRotator_ReturnValue, double K2Node_VariableSet_Char_DirectionAngle_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast, double K2Node_VariableSet_MaxSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_VelocityData");

	Params::UABP_Player_C_Update_VelocityData_Params Parms{};

	Parms.W_CharVelocity_2D = W_CharVelocity_2D;
	Parms.L_CharVelocity_2D = L_CharVelocity_2D;
	Parms.WasMovingLastUpdate = WasMovingLastUpdate;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_VSizeXYSquared_ReturnValue = CallFunc_VSizeXYSquared_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SelectCardinalDirectionFromAngle_Direction = CallFunc_SelectCardinalDirectionFromAngle_Direction;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_CalculateDirection_ReturnValue = CallFunc_CalculateDirection_ReturnValue;
	Parms.CallFunc_SelectCardinalDirectionFromAngle_Direction_1 = CallFunc_SelectCardinalDirectionFromAngle_Direction_1;
	Parms.CallFunc_Vector_IsZero_ReturnValue = CallFunc_Vector_IsZero_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_LessLess_VectorRotator_ReturnValue = CallFunc_LessLess_VectorRotator_ReturnValue;
	Parms.K2Node_VariableSet_Char_DirectionAngle_ImplicitCast = K2Node_VariableSet_Char_DirectionAngle_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast = CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast;
	Parms.K2Node_VariableSet_MaxSpeed_ImplicitCast = K2Node_VariableSet_MaxSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Update_RotationData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Update_RotationData(float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_RotationData");

	Params::UABP_Player_C_Update_RotationData_Params Parms{};

	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Update_LocationData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSizeXY_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Update_LocationData(const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSizeXY_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_LocationData");

	Params::UABP_Player_C_Update_LocationData_Params Parms{};

	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSizeXY_ReturnValue = CallFunc_VSizeXY_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Update_StartAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FVector2D                   Play_Rate_Clamp                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             StrideWarping_BlendInDuration_Scaled                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             StrideWarping_BlendInStart_Offset                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ExplicitTime                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAccumulatedTime_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_AdvanceTimeByDistanceMatching_ReturnValue               (NoDestructor)
// double                             K2Node_VariableSet_ExplicitTime_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AdvanceTimeByDistanceMatching_DistanceTraveled_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_StrideWarping_Start_Alpha_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Update_StartAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FVector2D& Play_Rate_Clamp, double StrideWarping_BlendInDuration_Scaled, double StrideWarping_BlendInStart_Offset, double ExplicitTime, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, float CallFunc_GetAccumulatedTime_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Lerp_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_AdvanceTimeByDistanceMatching_ReturnValue, double K2Node_VariableSet_ExplicitTime_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_AdvanceTimeByDistanceMatching_DistanceTraveled_ImplicitCast, float K2Node_VariableSet_StrideWarping_Start_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_StartAnim");

	Params::UABP_Player_C_Update_StartAnim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.Play_Rate_Clamp = Play_Rate_Clamp;
	Parms.StrideWarping_BlendInDuration_Scaled = StrideWarping_BlendInDuration_Scaled;
	Parms.StrideWarping_BlendInStart_Offset = StrideWarping_BlendInStart_Offset;
	Parms.ExplicitTime = ExplicitTime;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.CallFunc_GetAccumulatedTime_ReturnValue = CallFunc_GetAccumulatedTime_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_AdvanceTimeByDistanceMatching_ReturnValue = CallFunc_AdvanceTimeByDistanceMatching_ReturnValue;
	Parms.K2Node_VariableSet_ExplicitTime_ImplicitCast = K2Node_VariableSet_ExplicitTime_ImplicitCast;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_AdvanceTimeByDistanceMatching_DistanceTraveled_ImplicitCast = CallFunc_AdvanceTimeByDistanceMatching_DistanceTraveled_ImplicitCast;
	Parms.K2Node_VariableSet_StrideWarping_Start_Alpha_ImplicitCast = K2Node_VariableSet_StrideWarping_Start_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Set_StartAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class UAnimSequence*               Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELocomotionState        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimStruct_CardinalDirectionTemp_struct_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECardinalDirection      Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELocomotionState        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimStruct_CardinalDirectionK2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default_2                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default_3                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetSequence_ReturnValue                                 (NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_SetExplicitTime_ReturnValue                             (NoDestructor)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Set_StartAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, class UAnimSequence* Temp_object_Variable, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, enum class ELocomotionState Temp_byte_Variable, const struct FAnimStruct_CardinalDirection& Temp_struct_Variable, bool Temp_bool_Variable, enum class ECardinalDirection Temp_byte_Variable_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, enum class ELocomotionState Temp_byte_Variable_2, const struct FAnimStruct_CardinalDirection& K2Node_Select_Default, class UAnimSequence* K2Node_Select_Default_1, class UAnimSequence* K2Node_Select_Default_2, class UAnimSequence* K2Node_Select_Default_3, const struct FSequenceEvaluatorReference& CallFunc_SetSequence_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_SetExplicitTime_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_StartAnim");

	Params::UABP_Player_C_Set_StartAnim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_SetSequence_ReturnValue = CallFunc_SetSequence_ReturnValue;
	Parms.CallFunc_SetExplicitTime_ReturnValue = CallFunc_SetExplicitTime_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Process Turn Yaw Curve
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             PreviousTurnYawCurveValue                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             PreviousTurnYawCurveValue                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Process_Turn_Yaw_Curve(double PreviousTurnYawCurveValue, double PreviousTurnYawCurveValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue_1, double CallFunc_Abs_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_SafeDivide_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Process Turn Yaw Curve");

	Params::UABP_Player_C_Process_Turn_Yaw_Curve_Params Parms{};

	Parms.PreviousTurnYawCurveValue = PreviousTurnYawCurveValue;
	Parms.PreviousTurnYawCurveValue = PreviousTurnYawCurveValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue_1 = CallFunc_Abs_ReturnValue_1;
	Parms.CallFunc_Abs_ReturnValue_2 = CallFunc_Abs_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_GetCurveValue_ReturnValue_1 = CallFunc_GetCurveValue_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast = CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.UpdateStartState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// enum class ERootYawOffsetMode      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimationStateResultReferenceCallFunc_ConvertToAnimationStateResultPure_AnimationState        (NoDestructor)
// bool                               CallFunc_ConvertToAnimationStateResultPure_Result                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStateBlendingOut_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERootYawOffsetMode      Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERootYawOffsetMode      Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERootYawOffsetMode      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERootYawOffsetMode      K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::UpdateStartState(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, enum class ERootYawOffsetMode Temp_byte_Variable, const struct FAnimationStateResultReference& CallFunc_ConvertToAnimationStateResultPure_AnimationState, bool CallFunc_ConvertToAnimationStateResultPure_Result, bool CallFunc_IsStateBlendingOut_ReturnValue, bool Temp_bool_Variable, enum class ERootYawOffsetMode Temp_byte_Variable_1, enum class ERootYawOffsetMode Temp_byte_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_1, enum class ERootYawOffsetMode K2Node_Select_Default, enum class ERootYawOffsetMode K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "UpdateStartState");

	Params::UABP_Player_C_UpdateStartState_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_ConvertToAnimationStateResultPure_AnimationState = CallFunc_ConvertToAnimationStateResultPure_AnimationState;
	Parms.CallFunc_ConvertToAnimationStateResultPure_Result = CallFunc_ConvertToAnimationStateResultPure_Result;
	Parms.CallFunc_IsStateBlendingOut_ReturnValue = CallFunc_IsStateBlendingOut_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Set_StartState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UABP_Player_C::Set_StartState(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_StartState");

	Params::UABP_Player_C_Set_StartState_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.GetPredictedStopDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_PredictGroundMovementStopLocation_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSizeXY_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UABP_Player_C::GetPredictedStopDistance(const struct FVector& CallFunc_PredictGroundMovementStopLocation_ReturnValue, double CallFunc_VSizeXY_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "GetPredictedStopDistance");

	Params::UABP_Player_C_GetPredictedStopDistance_Params Parms{};

	Parms.CallFunc_PredictGroundMovementStopLocation_ReturnValue = CallFunc_PredictGroundMovementStopLocation_ReturnValue;
	Parms.CallFunc_VSizeXY_ReturnValue = CallFunc_VSizeXY_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ABP_Player.ABP_Player_C.Update_StopAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// double                             DistanceToMatch                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetPredictedStopDistance_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_AdvanceTime_ReturnValue                                 (NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldDistanceMatchStop_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1      (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_DistanceMatchToTarget_ReturnValue                       (NoDestructor)
// float                              CallFunc_DistanceMatchToTarget_DistanceToTarget_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Update_StopAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, double DistanceToMatch, double CallFunc_GetPredictedStopDistance_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, const struct FSequenceEvaluatorReference& CallFunc_AdvanceTime_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_ShouldDistanceMatchStop_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1, bool CallFunc_ConvertToSequenceEvaluatorPure_Result_1, const struct FSequenceEvaluatorReference& CallFunc_DistanceMatchToTarget_ReturnValue, float CallFunc_DistanceMatchToTarget_DistanceToTarget_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_StopAnim");

	Params::UABP_Player_C_Update_StopAnim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.DistanceToMatch = DistanceToMatch;
	Parms.CallFunc_GetPredictedStopDistance_ReturnValue = CallFunc_GetPredictedStopDistance_ReturnValue;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.CallFunc_AdvanceTime_ReturnValue = CallFunc_AdvanceTime_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_ShouldDistanceMatchStop_ReturnValue = CallFunc_ShouldDistanceMatchStop_ReturnValue;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1 = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result_1 = CallFunc_ConvertToSequenceEvaluatorPure_Result_1;
	Parms.CallFunc_DistanceMatchToTarget_ReturnValue = CallFunc_DistanceMatchToTarget_ReturnValue;
	Parms.CallFunc_DistanceMatchToTarget_DistanceToTarget_ImplicitCast = CallFunc_DistanceMatchToTarget_DistanceToTarget_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.ShouldDistanceMatchStop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UABP_Player_C::ShouldDistanceMatchStop(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "ShouldDistanceMatchStop");

	Params::UABP_Player_C_ShouldDistanceMatchStop_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ABP_Player.ABP_Player_C.Set_StopAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECardinalDirection      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_DistanceMatchToTarget_ReturnValue                       (NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECardinalDirection      Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldDistanceMatchStop_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default_2                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetSequence_ReturnValue                                 (NoDestructor)

void UABP_Player_C::Set_StopAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, enum class ECardinalDirection Temp_byte_Variable, const struct FSequenceEvaluatorReference& CallFunc_DistanceMatchToTarget_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, enum class ECardinalDirection Temp_byte_Variable_1, bool CallFunc_ShouldDistanceMatchStop_ReturnValue, bool Temp_bool_Variable, class UAnimSequence* K2Node_Select_Default, class UAnimSequence* K2Node_Select_Default_1, class UAnimSequence* K2Node_Select_Default_2, const struct FSequenceEvaluatorReference& CallFunc_SetSequence_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_StopAnim");

	Params::UABP_Player_C_Set_StopAnim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_DistanceMatchToTarget_ReturnValue = CallFunc_DistanceMatchToTarget_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_ShouldDistanceMatchStop_ReturnValue = CallFunc_ShouldDistanceMatchStop_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_SetSequence_ReturnValue = CallFunc_SetSequence_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Set_RootYawOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             InRootYawOffset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeAxis_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ClampAngle_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeAxis_Angle_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ClampAngle_AngleDegrees_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Set_RootYawOffset(double InRootYawOffset, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_NormalizeAxis_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_ClampAngle_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float CallFunc_NormalizeAxis_Angle_ImplicitCast, double CallFunc_ClampAngle_AngleDegrees_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_RootYawOffset");

	Params::UABP_Player_C_Set_RootYawOffset_Params Parms{};

	Parms.InRootYawOffset = InRootYawOffset;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_NormalizeAxis_ReturnValue = CallFunc_NormalizeAxis_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_ClampAngle_ReturnValue = CallFunc_ClampAngle_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_NormalizeAxis_Angle_ImplicitCast = CallFunc_NormalizeAxis_Angle_ImplicitCast;
	Parms.CallFunc_ClampAngle_AngleDegrees_ImplicitCast = CallFunc_ClampAngle_AngleDegrees_ImplicitCast;
	Parms.CallFunc_SelectFloat_A_ImplicitCast = CallFunc_SelectFloat_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.UpdateRootYawOffset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFloatSpringState           RootYawOffsetSpringState                                         (Edit, BlueprintVisible, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_InterpSpeed_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::UpdateRootYawOffset(double InDeltaTime, const struct FFloatSpringState& RootYawOffsetSpringState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, double CallFunc_FInterpTo_InterpSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "UpdateRootYawOffset");

	Params::UABP_Player_C_UpdateRootYawOffset_Params Parms{};

	Parms.InDeltaTime = InDeltaTime;
	Parms.RootYawOffsetSpringState = RootYawOffsetSpringState;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_FInterpTo_InterpSpeed_ImplicitCast = CallFunc_FInterpTo_InterpSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Update_StopState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FAnimationStateResultReferenceCallFunc_ConvertToAnimationStateResultPure_AnimationState        (NoDestructor)
// bool                               CallFunc_ConvertToAnimationStateResultPure_Result                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStateBlendingOut_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Update_StopState(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FAnimationStateResultReference& CallFunc_ConvertToAnimationStateResultPure_AnimationState, bool CallFunc_ConvertToAnimationStateResultPure_Result, bool CallFunc_IsStateBlendingOut_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_StopState");

	Params::UABP_Player_C_Update_StopState_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToAnimationStateResultPure_AnimationState = CallFunc_ConvertToAnimationStateResultPure_AnimationState;
	Parms.CallFunc_ConvertToAnimationStateResultPure_Result = CallFunc_ConvertToAnimationStateResultPure_Result;
	Parms.CallFunc_IsStateBlendingOut_ReturnValue = CallFunc_IsStateBlendingOut_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Update_FlinchAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// float                              CallFunc_GetDeltaTime_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Update_FlinchAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, float CallFunc_GetDeltaTime_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_FlinchAnim");

	Params::UABP_Player_C_Update_FlinchAnim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_GetDeltaTime_ReturnValue = CallFunc_GetDeltaTime_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Set_FlinchAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UABP_Player_C::Set_FlinchAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_FlinchAnim");

	Params::UABP_Player_C_Set_FlinchAnim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Update_LookAt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// float                              CallFunc_GetDeltaTime_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanNOR_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Current_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_LookAt_Alpha_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Update_LookAt(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, float CallFunc_GetDeltaTime_ReturnValue, bool CallFunc_BooleanNOR_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast, float K2Node_VariableSet_LookAt_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_LookAt");

	Params::UABP_Player_C_Update_LookAt_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_GetDeltaTime_ReturnValue = CallFunc_GetDeltaTime_ReturnValue;
	Parms.CallFunc_BooleanNOR_ReturnValue = CallFunc_BooleanNOR_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_DeltaTime_ImplicitCast = CallFunc_FInterpTo_DeltaTime_ImplicitCast;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast = CallFunc_FInterpTo_Current_ImplicitCast;
	Parms.K2Node_VariableSet_LookAt_Alpha_ImplicitCast = K2Node_VariableSet_LookAt_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Update_PlayStopAnim_Condition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Update_PlayStopAnim_Condition(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_PlayStopAnim_Condition");

	Params::UABP_Player_C_Update_PlayStopAnim_Condition_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Update_IsAiming
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FCachedAnimStateData        Idle_CacheAnimStateData                                          (Edit, BlueprintVisible, NoDestructor)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Target_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_Target_ImplicitCast_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Update_IsAiming(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FCachedAnimStateData& Idle_CacheAnimStateData, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_2, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_FInterpTo_Target_ImplicitCast, double CallFunc_FInterpTo_Target_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_IsAiming");

	Params::UABP_Player_C_Update_IsAiming_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.Idle_CacheAnimStateData = Idle_CacheAnimStateData;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue_2 = CallFunc_FInterpTo_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_FInterpTo_Target_ImplicitCast = CallFunc_FInterpTo_Target_ImplicitCast;
	Parms.CallFunc_FInterpTo_Target_ImplicitCast_1 = CallFunc_FInterpTo_Target_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Set_EquipmentData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEquipmentManagerComponent*  EquipmentManagerComponent                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRightHandEquipped_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLeftHandEquipped_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Set_EquipmentData(class UEquipmentManagerComponent* EquipmentManagerComponent, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsRightHandEquipped_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_IsLeftHandEquipped_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_EquipmentData");

	Params::UABP_Player_C_Set_EquipmentData_Params Parms{};

	Parms.EquipmentManagerComponent = EquipmentManagerComponent;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsRightHandEquipped_ReturnValue = CallFunc_IsRightHandEquipped_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_IsLeftHandEquipped_ReturnValue = CallFunc_IsLeftHandEquipped_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_1 = CallFunc_Conv_BoolToFloat_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Update_RunCycleAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (NoDestructor)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECardinalDirection      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UABP_Player_C::Update_RunCycleAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool Temp_bool_Variable, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, enum class ECardinalDirection Temp_byte_Variable, class UAnimSequence* K2Node_Select_Default, class UAnimSequence* K2Node_Select_Default_1, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_RunCycleAnim");

	Params::UABP_Player_C_Update_RunCycleAnim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_ConvertToSequencePlayerPure_SequencePlayer = CallFunc_ConvertToSequencePlayerPure_SequencePlayer;
	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Update_PlayStartAnim_Condition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Update_PlayStartAnim_Condition(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_PlayStartAnim_Condition");

	Params::UABP_Player_C_Update_PlayStartAnim_Condition_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Update_WalkCycleAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (NoDestructor)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECardinalDirection      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UABP_Player_C::Update_WalkCycleAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool Temp_bool_Variable, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, enum class ECardinalDirection Temp_byte_Variable, class UAnimSequence* K2Node_Select_Default, class UAnimSequence* K2Node_Select_Default_1, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_WalkCycleAnim");

	Params::UABP_Player_C_Update_WalkCycleAnim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_ConvertToSequencePlayerPure_SequencePlayer = CallFunc_ConvertToSequencePlayerPure_SequencePlayer;
	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.SelectCardinalDirectionFromAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Angle                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DeadZone                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECardinalDirection      CurrentDirection                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseCurrentDirection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECardinalDirection      Direction                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             BwdDeadZone                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             FwdDeadZone                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AbsAngle                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::SelectCardinalDirectionFromAngle(double Angle, double DeadZone, enum class ECardinalDirection CurrentDirection, bool UseCurrentDirection, enum class ECardinalDirection* Direction, double BwdDeadZone, double FwdDeadZone, double AbsAngle, double CallFunc_Abs_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "SelectCardinalDirectionFromAngle");

	Params::UABP_Player_C_SelectCardinalDirectionFromAngle_Params Parms{};

	Parms.Angle = Angle;
	Parms.DeadZone = DeadZone;
	Parms.CurrentDirection = CurrentDirection;
	Parms.UseCurrentDirection = UseCurrentDirection;
	Parms.BwdDeadZone = BwdDeadZone;
	Parms.FwdDeadZone = FwdDeadZone;
	Parms.AbsAngle = AbsAngle;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Direction != nullptr)
		*Direction = Parms.Direction;

}


// Function ABP_Player.ABP_Player_C.BlueprintThreadSafeUpdateAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateRootYawOffset_InDeltaTime_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime, double CallFunc_UpdateRootYawOffset_InDeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "BlueprintThreadSafeUpdateAnimation");

	Params::UABP_Player_C_BlueprintThreadSafeUpdateAnimation_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_UpdateRootYawOffset_InDeltaTime_ImplicitCast = CallFunc_UpdateRootYawOffset_InDeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Set_TurnInPlace_Rotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// float                              K2Node_VariableSet_TurnInPlace_Angle_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Set_TurnInPlace_Rotation(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, float K2Node_VariableSet_TurnInPlace_Angle_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_TurnInPlace_Rotation");

	Params::UABP_Player_C_Set_TurnInPlace_Rotation_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.K2Node_VariableSet_TurnInPlace_Angle_ImplicitCast = K2Node_VariableSet_TurnInPlace_Angle_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Select_TurnInPlace_Anim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             TurnInPlace_Direction                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Result                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           K2Node_Select_Default_2                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Select_TurnInPlace_Anim(double TurnInPlace_Direction, class UAnimSequenceBase** Result, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UAnimSequenceBase* K2Node_Select_Default, class UAnimSequenceBase* K2Node_Select_Default_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, class UAnimSequenceBase* K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Select_TurnInPlace_Anim");

	Params::UABP_Player_C_Select_TurnInPlace_Anim_Params Parms{};

	Parms.TurnInPlace_Direction = TurnInPlace_Direction;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ABP_Player.ABP_Player_C.Update_TurnInPlaceRecovery_Anim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class UAnimSequenceBase*           CallFunc_Select_TurnInPlace_Anim_Result                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (NoDestructor)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)
// double                             CallFunc_Select_TurnInPlace_Anim_TurnInPlace_Direction_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Update_TurnInPlaceRecovery_Anim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, class UAnimSequenceBase* CallFunc_Select_TurnInPlace_Anim_Result, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue, double CallFunc_Select_TurnInPlace_Anim_TurnInPlace_Direction_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_TurnInPlaceRecovery_Anim");

	Params::UABP_Player_C_Update_TurnInPlaceRecovery_Anim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_Select_TurnInPlace_Anim_Result = CallFunc_Select_TurnInPlace_Anim_Result;
	Parms.CallFunc_ConvertToSequencePlayerPure_SequencePlayer = CallFunc_ConvertToSequencePlayerPure_SequencePlayer;
	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;
	Parms.CallFunc_Select_TurnInPlace_Anim_TurnInPlace_Direction_ImplicitCast = CallFunc_Select_TurnInPlace_Anim_TurnInPlace_Direction_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Update_TurnInPlace_Anim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           CallFunc_Select_TurnInPlace_Anim_Result                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1      (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDeltaTime_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetExplicitTime_ReturnValue                             (NoDestructor)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Select_TurnInPlace_Anim_TurnInPlace_Direction_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetExplicitTime_Time_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Update_TurnInPlace_Anim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, class UAnimSequenceBase* CallFunc_Select_TurnInPlace_Anim_Result, const struct FSequenceEvaluatorReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1, bool CallFunc_ConvertToSequenceEvaluatorPure_Result_1, float CallFunc_GetDeltaTime_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_SetExplicitTime_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Select_TurnInPlace_Anim_TurnInPlace_Direction_ImplicitCast, float CallFunc_SetExplicitTime_Time_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Update_TurnInPlace_Anim");

	Params::UABP_Player_C_Update_TurnInPlace_Anim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.CallFunc_Select_TurnInPlace_Anim_Result = CallFunc_Select_TurnInPlace_Anim_Result;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1 = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result_1 = CallFunc_ConvertToSequenceEvaluatorPure_Result_1;
	Parms.CallFunc_GetDeltaTime_ReturnValue = CallFunc_GetDeltaTime_ReturnValue;
	Parms.CallFunc_SetExplicitTime_ReturnValue = CallFunc_SetExplicitTime_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Select_TurnInPlace_Anim_TurnInPlace_Direction_ImplicitCast = CallFunc_Select_TurnInPlace_Anim_TurnInPlace_Direction_ImplicitCast;
	Parms.CallFunc_SetExplicitTime_Time_ImplicitCast = CallFunc_SetExplicitTime_Time_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Set_TurnInPlace_Anim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetExplicitTime_ReturnValue                             (NoDestructor)

void UABP_Player_C::Set_TurnInPlace_Anim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, const struct FSequenceEvaluatorReference& CallFunc_SetExplicitTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_TurnInPlace_Anim");

	Params::UABP_Player_C_Set_TurnInPlace_Anim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.CallFunc_SetExplicitTime_ReturnValue = CallFunc_SetExplicitTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.MontageIsPlaying_Rules
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Montage_IsActive_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnyMontagePlaying_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::MontageIsPlaying_Rules(bool CallFunc_Montage_IsActive_ReturnValue, bool CallFunc_IsAnyMontagePlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "MontageIsPlaying_Rules");

	Params::UABP_Player_C_MontageIsPlaying_Rules_Params Parms{};

	Parms.CallFunc_Montage_IsActive_ReturnValue = CallFunc_Montage_IsActive_ReturnValue;
	Parms.CallFunc_IsAnyMontagePlaying_ReturnValue = CallFunc_IsAnyMontagePlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Set_References
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALOTF2Character*             K2Node_DynamicCast_AsLOTF2Character                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHexPlayerMovementComponent* K2Node_DynamicCast_AsHex_Player_Movement_Component               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Set_References(class AActor* CallFunc_GetOwningActor_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class UHexPlayerMovementComponent* K2Node_DynamicCast_AsHex_Player_Movement_Component, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_References");

	Params::UABP_Player_C_Set_References_Params Parms{};

	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsLOTF2Character = K2Node_DynamicCast_AsLOTF2Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsHex_Player_Movement_Component = K2Node_DynamicCast_AsHex_Player_Movement_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Set_TurnInPlace
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALOTF2Character*             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetFocusDirection_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Signed2DAngleDegreesVector_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTurnRateByDefaultEnabled_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_AngleToFocusDirection_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Set_TurnInPlace(class ALOTF2Character* Character, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Abs_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetFocusDirection_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Signed2DAngleDegreesVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsTurnRateByDefaultEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double K2Node_VariableSet_AngleToFocusDirection_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_TurnInPlace");

	Params::UABP_Player_C_Set_TurnInPlace_Params Parms{};

	Parms.Character = Character;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetFocusDirection_ReturnValue = CallFunc_GetFocusDirection_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Signed2DAngleDegreesVector_ReturnValue = CallFunc_Signed2DAngleDegreesVector_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsTurnRateByDefaultEnabled_ReturnValue = CallFunc_IsTurnRateByDefaultEnabled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_VariableSet_AngleToFocusDirection_ImplicitCast = K2Node_VariableSet_AngleToFocusDirection_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Set_PlayRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MoveData_Curve                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_Value_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Set_PlayRate(double Speed, class FName MoveData_Curve, float CallFunc_GetCurveValue_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_SafeDivide_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double CallFunc_FClamp_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_PlayRate");

	Params::UABP_Player_C_Set_PlayRate_Params Parms{};

	Parms.Speed = Speed;
	Parms.MoveData_Curve = MoveData_Curve;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_FClamp_Value_ImplicitCast = CallFunc_FClamp_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Set_StopMoving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             StopSpeed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             StopAngle                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Set_StopMoving(double StopSpeed, double StopAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_StopMoving");

	Params::UABP_Player_C_Set_StopMoving_Params Parms{};

	Parms.StopSpeed = StopSpeed;
	Parms.StopAngle = StopAngle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Set_Animations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_1                    (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_2                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_3                    (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_2                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UAnimSequence*>       CallFunc_BP_GetAnimationsArrayByTag_outAnimations                (ReferenceParm)
// bool                               CallFunc_BP_GetAnimationsArrayByTag_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_4                    (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_3                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_5                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_6                    (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTagEx_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_4                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_7                    (NoDestructor, HasGetValueTypeHash)
// class UBlendSpace*                 CallFunc_BP_GetAimOffsetBlendSpaceByTag_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_8                    (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpace*                 CallFunc_BP_GetBlendspaceByTag_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimStruct_CardinalDirectionK2Node_MakeStruct_AnimStruct_CardinalDirection                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimStruct_CardinalDirectionK2Node_MakeStruct_AnimStruct_CardinalDirection_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_9                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_10                   (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_5                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_6                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_11                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_12                   (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_7                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_8                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_13                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_14                   (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_9                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_10                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_15                   (NoDestructor, HasGetValueTypeHash)
// struct FAnimStruct_CardinalDirectionK2Node_MakeStruct_AnimStruct_CardinalDirection_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_11                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_16                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_17                   (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_12                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_13                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_18                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_19                   (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_14                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBlendSpace*                 CallFunc_BP_GetAimOffsetBlendSpaceByTag_ReturnValue_1            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimStruct_CardinalDirectionK2Node_MakeStruct_AnimStruct_CardinalDirection_3                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimStruct_CardinalDirectionK2Node_MakeStruct_AnimStruct_CardinalDirection_4                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_20                   (NoDestructor, HasGetValueTypeHash)
// class UBlendSpace*                 CallFunc_BP_GetBlendspaceByTag_ReturnValue_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimStruct_CardinalDirectionK2Node_MakeStruct_AnimStruct_CardinalDirection_5                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_21                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_22                   (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_15                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_16                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_23                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_24                   (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_17                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_18                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_25                   (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_19                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Set_Animations(const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_2, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_3, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_2, TArray<class UAnimSequence*>& CallFunc_BP_GetAnimationsArrayByTag_outAnimations, bool CallFunc_BP_GetAnimationsArrayByTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_4, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_3, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_5, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_6, class UAnimSequence* CallFunc_BP_GetAnimationByTagEx_ReturnValue, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_4, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_7, class UBlendSpace* CallFunc_BP_GetAimOffsetBlendSpaceByTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_8, bool CallFunc_IsValid_ReturnValue, class UBlendSpace* CallFunc_BP_GetBlendspaceByTag_ReturnValue, const struct FAnimStruct_CardinalDirection& K2Node_MakeStruct_AnimStruct_CardinalDirection, const struct FAnimStruct_CardinalDirection& K2Node_MakeStruct_AnimStruct_CardinalDirection_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_9, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_10, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_5, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_6, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_11, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_12, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_7, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_8, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_13, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_14, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_9, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_10, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_15, const struct FAnimStruct_CardinalDirection& K2Node_MakeStruct_AnimStruct_CardinalDirection_2, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_11, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_16, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_17, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_12, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_13, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_18, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_19, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_14, class UBlendSpace* CallFunc_BP_GetAimOffsetBlendSpaceByTag_ReturnValue_1, const struct FAnimStruct_CardinalDirection& K2Node_MakeStruct_AnimStruct_CardinalDirection_3, const struct FAnimStruct_CardinalDirection& K2Node_MakeStruct_AnimStruct_CardinalDirection_4, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_20, class UBlendSpace* CallFunc_BP_GetBlendspaceByTag_ReturnValue_1, const struct FAnimStruct_CardinalDirection& K2Node_MakeStruct_AnimStruct_CardinalDirection_5, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_21, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_22, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_15, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_16, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_23, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_24, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_17, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_18, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_25, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_19)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_Animations");

	Params::UABP_Player_C_Set_Animations_Params Parms{};

	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_1 = CallFunc_MakeLiteralGameplayTag_ReturnValue_1;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue = CallFunc_BP_GetAnimationByTag_ReturnValue;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_1 = CallFunc_BP_GetAnimationByTag_ReturnValue_1;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_2 = CallFunc_MakeLiteralGameplayTag_ReturnValue_2;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_3 = CallFunc_MakeLiteralGameplayTag_ReturnValue_3;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_2 = CallFunc_BP_GetAnimationByTag_ReturnValue_2;
	Parms.CallFunc_BP_GetAnimationsArrayByTag_outAnimations = CallFunc_BP_GetAnimationsArrayByTag_outAnimations;
	Parms.CallFunc_BP_GetAnimationsArrayByTag_ReturnValue = CallFunc_BP_GetAnimationsArrayByTag_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_4 = CallFunc_MakeLiteralGameplayTag_ReturnValue_4;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_3 = CallFunc_BP_GetAnimationByTag_ReturnValue_3;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_5 = CallFunc_MakeLiteralGameplayTag_ReturnValue_5;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_6 = CallFunc_MakeLiteralGameplayTag_ReturnValue_6;
	Parms.CallFunc_BP_GetAnimationByTagEx_ReturnValue = CallFunc_BP_GetAnimationByTagEx_ReturnValue;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_4 = CallFunc_BP_GetAnimationByTag_ReturnValue_4;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_7 = CallFunc_MakeLiteralGameplayTag_ReturnValue_7;
	Parms.CallFunc_BP_GetAimOffsetBlendSpaceByTag_ReturnValue = CallFunc_BP_GetAimOffsetBlendSpaceByTag_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_8 = CallFunc_MakeLiteralGameplayTag_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BP_GetBlendspaceByTag_ReturnValue = CallFunc_BP_GetBlendspaceByTag_ReturnValue;
	Parms.K2Node_MakeStruct_AnimStruct_CardinalDirection = K2Node_MakeStruct_AnimStruct_CardinalDirection;
	Parms.K2Node_MakeStruct_AnimStruct_CardinalDirection_1 = K2Node_MakeStruct_AnimStruct_CardinalDirection_1;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_9 = CallFunc_MakeLiteralGameplayTag_ReturnValue_9;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_10 = CallFunc_MakeLiteralGameplayTag_ReturnValue_10;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_5 = CallFunc_BP_GetAnimationByTag_ReturnValue_5;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_6 = CallFunc_BP_GetAnimationByTag_ReturnValue_6;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_11 = CallFunc_MakeLiteralGameplayTag_ReturnValue_11;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_12 = CallFunc_MakeLiteralGameplayTag_ReturnValue_12;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_7 = CallFunc_BP_GetAnimationByTag_ReturnValue_7;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_8 = CallFunc_BP_GetAnimationByTag_ReturnValue_8;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_13 = CallFunc_MakeLiteralGameplayTag_ReturnValue_13;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_14 = CallFunc_MakeLiteralGameplayTag_ReturnValue_14;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_9 = CallFunc_BP_GetAnimationByTag_ReturnValue_9;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_10 = CallFunc_BP_GetAnimationByTag_ReturnValue_10;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_15 = CallFunc_MakeLiteralGameplayTag_ReturnValue_15;
	Parms.K2Node_MakeStruct_AnimStruct_CardinalDirection_2 = K2Node_MakeStruct_AnimStruct_CardinalDirection_2;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_11 = CallFunc_BP_GetAnimationByTag_ReturnValue_11;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_16 = CallFunc_MakeLiteralGameplayTag_ReturnValue_16;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_17 = CallFunc_MakeLiteralGameplayTag_ReturnValue_17;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_12 = CallFunc_BP_GetAnimationByTag_ReturnValue_12;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_13 = CallFunc_BP_GetAnimationByTag_ReturnValue_13;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_18 = CallFunc_MakeLiteralGameplayTag_ReturnValue_18;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_19 = CallFunc_MakeLiteralGameplayTag_ReturnValue_19;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_14 = CallFunc_BP_GetAnimationByTag_ReturnValue_14;
	Parms.CallFunc_BP_GetAimOffsetBlendSpaceByTag_ReturnValue_1 = CallFunc_BP_GetAimOffsetBlendSpaceByTag_ReturnValue_1;
	Parms.K2Node_MakeStruct_AnimStruct_CardinalDirection_3 = K2Node_MakeStruct_AnimStruct_CardinalDirection_3;
	Parms.K2Node_MakeStruct_AnimStruct_CardinalDirection_4 = K2Node_MakeStruct_AnimStruct_CardinalDirection_4;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_20 = CallFunc_MakeLiteralGameplayTag_ReturnValue_20;
	Parms.CallFunc_BP_GetBlendspaceByTag_ReturnValue_1 = CallFunc_BP_GetBlendspaceByTag_ReturnValue_1;
	Parms.K2Node_MakeStruct_AnimStruct_CardinalDirection_5 = K2Node_MakeStruct_AnimStruct_CardinalDirection_5;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_21 = CallFunc_MakeLiteralGameplayTag_ReturnValue_21;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_22 = CallFunc_MakeLiteralGameplayTag_ReturnValue_22;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_15 = CallFunc_BP_GetAnimationByTag_ReturnValue_15;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_16 = CallFunc_BP_GetAnimationByTag_ReturnValue_16;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_23 = CallFunc_MakeLiteralGameplayTag_ReturnValue_23;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_24 = CallFunc_MakeLiteralGameplayTag_ReturnValue_24;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_17 = CallFunc_BP_GetAnimationByTag_ReturnValue_17;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_18 = CallFunc_BP_GetAnimationByTag_ReturnValue_18;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_25 = CallFunc_MakeLiteralGameplayTag_ReturnValue_25;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_19 = CallFunc_BP_GetAnimationByTag_ReturnValue_19;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.IsValid_Check
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag                AnimationTag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               AnimSequence                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AnimBS                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AnimTag_IsValid                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_1                    (NoDestructor, HasGetValueTypeHash)
// class UBlendSpace*                 CallFunc_BP_GetBlendspaceByTag_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::IsValid_Check(const struct FGameplayTag& AnimationTag, bool AnimSequence, bool AnimBS, bool* IsValid, bool AnimTag_IsValid, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, class UBlendSpace* CallFunc_BP_GetBlendspaceByTag_ReturnValue, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "IsValid_Check");

	Params::UABP_Player_C_IsValid_Check_Params Parms{};

	Parms.AnimationTag = AnimationTag;
	Parms.AnimSequence = AnimSequence;
	Parms.AnimBS = AnimBS;
	Parms.AnimTag_IsValid = AnimTag_IsValid;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_1 = CallFunc_MakeLiteralGameplayTag_ReturnValue_1;
	Parms.CallFunc_BP_GetBlendspaceByTag_ReturnValue = CallFunc_BP_GetBlendspaceByTag_ReturnValue;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue = CallFunc_BP_GetAnimationByTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function ABP_Player.ABP_Player_C.Set_MiscAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALOTF2Character*             LOTF2_Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bDisableEquipmentAlphas                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     LockTarget                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StateMachine_IsStateRelevant_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StateMachine_IsStateRelevant_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Set_MiscAlpha(class ALOTF2Character* LOTF2_Character, bool bDisableEquipmentAlphas, class UObject* LockTarget, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, double CallFunc_SelectFloat_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_StateMachine_IsStateRelevant_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_2, float CallFunc_GetCurveValue_ReturnValue, bool CallFunc_StateMachine_IsStateRelevant_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, float CallFunc_Conv_BoolToFloat_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_MiscAlpha");

	Params::UABP_Player_C_Set_MiscAlpha_Params Parms{};

	Parms.LOTF2_Character = LOTF2_Character;
	Parms.bDisableEquipmentAlphas = bDisableEquipmentAlphas;
	Parms.LockTarget = LockTarget;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput_1 = CallFunc_HasMatchingGameplayTag_self_CastInput_1;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_1 = CallFunc_HasMatchingGameplayTag_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_StateMachine_IsStateRelevant_ReturnValue = CallFunc_StateMachine_IsStateRelevant_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue_2 = CallFunc_FInterpTo_ReturnValue_2;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_StateMachine_IsStateRelevant_ReturnValue_1 = CallFunc_StateMachine_IsStateRelevant_ReturnValue_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Set_BlockingMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Set_BlockingMode(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_BlockingMode");

	Params::UABP_Player_C_Set_BlockingMode_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1 = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_1 = CallFunc_HasMatchingGameplayTag_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Set_CombatModes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALOTF2Character*             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECharacterBodyType      CallFunc_GetBodyType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EMeleeStance            CallFunc_GetMeleeStance_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_4                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_5                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput_6                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue_6                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStanceType             CallFunc_GetStance_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAimOffset                  CallFunc_GetAimOffset_ReturnValue                                (NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Set_CombatModes(class ALOTF2Character* Character, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ECharacterBodyType CallFunc_GetBodyType_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, enum class EMeleeStance CallFunc_GetMeleeStance_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_2, bool CallFunc_HasMatchingGameplayTag_ReturnValue_2, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_3, bool CallFunc_HasMatchingGameplayTag_ReturnValue_3, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_4, bool CallFunc_HasMatchingGameplayTag_ReturnValue_4, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_5, bool CallFunc_HasMatchingGameplayTag_ReturnValue_5, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_6, bool CallFunc_HasMatchingGameplayTag_ReturnValue_6, enum class EStanceType CallFunc_GetStance_ReturnValue, const struct FAimOffset& CallFunc_GetAimOffset_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_CombatModes");

	Params::UABP_Player_C_Set_CombatModes_Params Parms{};

	Parms.Character = Character;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBodyType_ReturnValue = CallFunc_GetBodyType_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput_1 = CallFunc_HasMatchingGameplayTag_self_CastInput_1;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_1 = CallFunc_HasMatchingGameplayTag_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetMeleeStance_ReturnValue = CallFunc_GetMeleeStance_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput_2 = CallFunc_HasMatchingGameplayTag_self_CastInput_2;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_2 = CallFunc_HasMatchingGameplayTag_ReturnValue_2;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput_3 = CallFunc_HasMatchingGameplayTag_self_CastInput_3;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_3 = CallFunc_HasMatchingGameplayTag_ReturnValue_3;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput_4 = CallFunc_HasMatchingGameplayTag_self_CastInput_4;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_4 = CallFunc_HasMatchingGameplayTag_ReturnValue_4;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput_5 = CallFunc_HasMatchingGameplayTag_self_CastInput_5;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_5 = CallFunc_HasMatchingGameplayTag_ReturnValue_5;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput_6 = CallFunc_HasMatchingGameplayTag_self_CastInput_6;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue_6 = CallFunc_HasMatchingGameplayTag_ReturnValue_6;
	Parms.CallFunc_GetStance_ReturnValue = CallFunc_GetStance_ReturnValue;
	Parms.CallFunc_GetAimOffset_ReturnValue = CallFunc_GetAimOffset_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Set_LadderMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALOTF2Character*             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLadderSprinting_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLadderInitialCharacterHeight_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector3f_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector3f_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector3f_Z                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Percent_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector3f                   CallFunc_BreakVector3f_InVec_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Set_LadderMode(class ALOTF2Character* Character, bool CallFunc_GetLadderSprinting_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetLadderInitialCharacterHeight_ReturnValue, float CallFunc_BreakVector3f_X, float CallFunc_BreakVector3f_Y, float CallFunc_BreakVector3f_Z, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue, double CallFunc_Percent_FloatFloat_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector3f& CallFunc_BreakVector3f_InVec_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_LadderMode");

	Params::UABP_Player_C_Set_LadderMode_Params Parms{};

	Parms.Character = Character;
	Parms.CallFunc_GetLadderSprinting_ReturnValue = CallFunc_GetLadderSprinting_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetLadderInitialCharacterHeight_ReturnValue = CallFunc_GetLadderInitialCharacterHeight_ReturnValue;
	Parms.CallFunc_BreakVector3f_X = CallFunc_BreakVector3f_X;
	Parms.CallFunc_BreakVector3f_Y = CallFunc_BreakVector3f_Y;
	Parms.CallFunc_BreakVector3f_Z = CallFunc_BreakVector3f_Z;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_2 = CallFunc_Less_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BreakVector3f_InVec_ImplicitCast = CallFunc_BreakVector3f_InVec_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Set_InputValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharacterMovementComponent* CharacterMovement                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateDirection_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Char_DirectionAngle_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_B_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_MaxSpeed_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Set_InputValues(class UCharacterMovementComponent* CharacterMovement, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_VSize_ReturnValue, float CallFunc_CalculateDirection_ReturnValue, double CallFunc_VSize_ReturnValue_1, double CallFunc_SafeDivide_ReturnValue, double K2Node_VariableSet_Char_DirectionAngle_ImplicitCast, double CallFunc_SafeDivide_B_ImplicitCast, double K2Node_VariableSet_MaxSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_InputValues");

	Params::UABP_Player_C_Set_InputValues_Params Parms{};

	Parms.CharacterMovement = CharacterMovement;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_CalculateDirection_ReturnValue = CallFunc_CalculateDirection_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue_1 = CallFunc_VSize_ReturnValue_1;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.K2Node_VariableSet_Char_DirectionAngle_ImplicitCast = K2Node_VariableSet_Char_DirectionAngle_ImplicitCast;
	Parms.CallFunc_SafeDivide_B_ImplicitCast = CallFunc_SafeDivide_B_ImplicitCast;
	Parms.K2Node_VariableSet_MaxSpeed_ImplicitCast = K2Node_VariableSet_MaxSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.Set_LocomotionState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHexPlayerMovementComponent* PlayerMovement                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             SprintThreshold                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             RunThreshold                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MinSprintSpeed                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MinRunSpeed                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MinWalkSpeed                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ContainsRotationRateOverride_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_StateMachine_GetGlobalWeight_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_StateMachine_GetGlobalWeight_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValueWithDefault_OutValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurveValueWithDefault_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AddRotationRateOverride_value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRotationRateOverrideValue_value_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::Set_LocomotionState(class UHexPlayerMovementComponent* PlayerMovement, double SprintThreshold, double RunThreshold, double MinSprintSpeed, double MinRunSpeed, double MinWalkSpeed, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_ContainsRotationRateOverride_ReturnValue, float CallFunc_StateMachine_GetGlobalWeight_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_StateMachine_GetGlobalWeight_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, float CallFunc_GetCurveValueWithDefault_OutValue, bool CallFunc_GetCurveValueWithDefault_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_2, float CallFunc_AddRotationRateOverride_value_ImplicitCast, float CallFunc_SetRotationRateOverrideValue_value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "Set_LocomotionState");

	Params::UABP_Player_C_Set_LocomotionState_Params Parms{};

	Parms.PlayerMovement = PlayerMovement;
	Parms.SprintThreshold = SprintThreshold;
	Parms.RunThreshold = RunThreshold;
	Parms.MinSprintSpeed = MinSprintSpeed;
	Parms.MinRunSpeed = MinRunSpeed;
	Parms.MinWalkSpeed = MinWalkSpeed;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_ContainsRotationRateOverride_ReturnValue = CallFunc_ContainsRotationRateOverride_ReturnValue;
	Parms.CallFunc_StateMachine_GetGlobalWeight_ReturnValue = CallFunc_StateMachine_GetGlobalWeight_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_StateMachine_GetGlobalWeight_ReturnValue_1 = CallFunc_StateMachine_GetGlobalWeight_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetCurveValueWithDefault_OutValue = CallFunc_GetCurveValueWithDefault_OutValue;
	Parms.CallFunc_GetCurveValueWithDefault_ReturnValue = CallFunc_GetCurveValueWithDefault_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_2 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_AddRotationRateOverride_value_ImplicitCast = CallFunc_AddRotationRateOverride_value_ImplicitCast;
	Parms.CallFunc_SetRotationRateOverrideValue_value_ImplicitCast = CallFunc_SetRotationRateOverrideValue_value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.OnValueChanged_3580D63C4B1C13E1EC356794308C7580
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bDone                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::OnValueChanged_3580D63C4B1C13E1EC356794308C7580(float Value, bool bDone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "OnValueChanged_3580D63C4B1C13E1EC356794308C7580");

	Params::UABP_Player_C_OnValueChanged_3580D63C4B1C13E1EC356794308C7580_Params Parms{};

	Parms.Value = Value;
	Parms.bDone = bDone;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.OnValueChanged_D9E169074DA81834BBC1C0ACC3BFA3A8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bDone                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::OnValueChanged_D9E169074DA81834BBC1C0ACC3BFA3A8(float Value, bool bDone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "OnValueChanged_D9E169074DA81834BBC1C0ACC3BFA3A8");

	Params::UABP_Player_C_OnValueChanged_D9E169074DA81834BBC1C0ACC3BFA3A8_Params Parms{};

	Parms.Value = Value;
	Parms.bDone = bDone;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_78E45AB5489CDC831840C0AAA3818900
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_78E45AB5489CDC831840C0AAA3818900()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_78E45AB5489CDC831840C0AAA3818900");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_FD9BA4C04D1BBCA7AF9A0197C40EE17C
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_FD9BA4C04D1BBCA7AF9A0197C40EE17C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyBone_FD9BA4C04D1BBCA7AF9A0197C40EE17C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_RigidBody_7963BD2544717E66AA38408929C5B665
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_RigidBody_7963BD2544717E66AA38408929C5B665()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_RigidBody_7963BD2544717E66AA38408929C5B665");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_RigidBody_ACEA63FE4D9AE60EE2E981AA80516900
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_RigidBody_ACEA63FE4D9AE60EE2E981AA80516900()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_RigidBody_ACEA63FE4D9AE60EE2E981AA80516900");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyCurve_3DACE39743A1BE894EF8AC969368BC61
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyCurve_3DACE39743A1BE894EF8AC969368BC61()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_ModifyCurve_3DACE39743A1BE894EF8AC969368BC61");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A107633A41373C1C670B47AFA5B5994C
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A107633A41373C1C670B47AFA5B5994C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A107633A41373C1C670B47AFA5B5994C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_E662A91049CE0233915385A09E85CEF4
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_E662A91049CE0233915385A09E85CEF4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_E662A91049CE0233915385A09E85CEF4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_85B73A0A480F4DC92F274FB0189F0920
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_85B73A0A480F4DC92F274FB0189F0920()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_85B73A0A480F4DC92F274FB0189F0920");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_BAA3A9F44AA6438182E23799A88AC318
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_BAA3A9F44AA6438182E23799A88AC318()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_BAA3A9F44AA6438182E23799A88AC318");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_3ADF00104475F17E7102F09FE85A7D85
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_3ADF00104475F17E7102F09FE85A7D85()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_3ADF00104475F17E7102F09FE85A7D85");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_509D66644B452D8712A6FA84BB4D5ED3
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_509D66644B452D8712A6FA84BB4D5ED3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_509D66644B452D8712A6FA84BB4D5ED3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A467AD0447E9AAF816403993F6044D81
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A467AD0447E9AAF816403993F6044D81()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A467AD0447E9AAF816403993F6044D81");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_6656BA90437385574D1EE0821422B59A
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_6656BA90437385574D1EE0821422B59A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_6656BA90437385574D1EE0821422B59A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_8FA976644D3337DE5982FC9B6D9084C3
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_8FA976644D3337DE5982FC9B6D9084C3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_8FA976644D3337DE5982FC9B6D9084C3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_047803574C73863D4002AA8F53624FF1
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_047803574C73863D4002AA8F53624FF1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_047803574C73863D4002AA8F53624FF1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_8DA5BB44492B882604A7BB8F524686D1
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_8DA5BB44492B882604A7BB8F524686D1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_8DA5BB44492B882604A7BB8F524686D1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_6287E24D4E081F76271C869408706CE3
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_6287E24D4E081F76271C869408706CE3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_6287E24D4E081F76271C869408706CE3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_5398461D48D4EBFFCEAF278B729E6428
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_5398461D48D4EBFFCEAF278B729E6428()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_5398461D48D4EBFFCEAF278B729E6428");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_AF78774D494BE76C4BB78EA7105ED842
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_AF78774D494BE76C4BB78EA7105ED842()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_AF78774D494BE76C4BB78EA7105ED842");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_3334299E410A764B27BAEEA6CA5BB6A9
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_3334299E410A764B27BAEEA6CA5BB6A9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_3334299E410A764B27BAEEA6CA5BB6A9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_639EFAA94D248CA8516570830EF7E91E
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_639EFAA94D248CA8516570830EF7E91E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_639EFAA94D248CA8516570830EF7E91E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_BF4BDBB74F241CC437865DA854E92B87
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_BF4BDBB74F241CC437865DA854E92B87()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_BF4BDBB74F241CC437865DA854E92B87");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_7F7544474D943DA67ABBB18F22B61AAF
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_7F7544474D943DA67ABBB18F22B61AAF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_7F7544474D943DA67ABBB18F22B61AAF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_F14D4FFA4319B322CC2D35912D666E9E
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_F14D4FFA4319B322CC2D35912D666E9E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_F14D4FFA4319B322CC2D35912D666E9E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_66D8F4844AA2EDA684F0B596DC849F3A
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_66D8F4844AA2EDA684F0B596DC849F3A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_66D8F4844AA2EDA684F0B596DC849F3A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_29CA238843069EE569E15ABB515AFFD8
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_29CA238843069EE569E15ABB515AFFD8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_29CA238843069EE569E15ABB515AFFD8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_FB1699F94C2DA451A5DEAEAC776A2201
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_FB1699F94C2DA451A5DEAEAC776A2201()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_FB1699F94C2DA451A5DEAEAC776A2201");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_DCCB3E494B07A08F68987CAF42998486
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_DCCB3E494B07A08F68987CAF42998486()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_DCCB3E494B07A08F68987CAF42998486");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_39C8B8A14CA2E64CD29EFD8D88C974A7
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_39C8B8A14CA2E64CD29EFD8D88C974A7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_BlendListByBool_39C8B8A14CA2E64CD29EFD8D88C974A7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_B58F9058474133DDE41299A0F3DEBC95
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_B58F9058474133DDE41299A0F3DEBC95()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_B58F9058474133DDE41299A0F3DEBC95");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_D5BA13E44ECE70B2A63A63A87C8787EB
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_D5BA13E44ECE70B2A63A63A87C8787EB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_D5BA13E44ECE70B2A63A63A87C8787EB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_29D92C48462B25FFBDD8B980A41BAE20
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_29D92C48462B25FFBDD8B980A41BAE20()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_29D92C48462B25FFBDD8B980A41BAE20");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_4A9E033D425142492CBFCA959BE763F9
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_4A9E033D425142492CBFCA959BE763F9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_4A9E033D425142492CBFCA959BE763F9");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_5B387C0D44EE60031EE82D8EBF961110
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_5B387C0D44EE60031EE82D8EBF961110()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_5B387C0D44EE60031EE82D8EBF961110");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_99DCC1464984E53628769DA1C1114703
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_99DCC1464984E53628769DA1C1114703()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_99DCC1464984E53628769DA1C1114703");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_DBFDF9F047A934478C53EF8A6F5A1978
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_DBFDF9F047A934478C53EF8A6F5A1978()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_DBFDF9F047A934478C53EF8A6F5A1978");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_EE72B02C4BB16F9CB05E5D97295F9F55
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_EE72B02C4BB16F9CB05E5D97295F9F55()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_EE72B02C4BB16F9CB05E5D97295F9F55");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A45507154D443D48E0962FB1E95E0CAE
// (BlueprintEvent)
// Parameters:

void UABP_Player_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A45507154D443D48E0962FB1E95E0CAE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_AnimGraphNode_TransitionResult_A45507154D443D48E0962FB1E95E0CAE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "BlueprintUpdateAnimation");

	Params::UABP_Player_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_Player_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.RealmChangeHandler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameRealm              OldRealm                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              NewRealm                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::RealmChangeHandler(enum class EGameRealm OldRealm, enum class EGameRealm NewRealm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "RealmChangeHandler");

	Params::UABP_Player_C_RealmChangeHandler_Params Parms{};

	Parms.OldRealm = OldRealm;
	Parms.NewRealm = NewRealm;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_Player_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "BlueprintBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.OnCharacterAnimLayerStackChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_Player_C::OnCharacterAnimLayerStackChanged_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "OnCharacterAnimLayerStackChanged_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.AnimNotify_FlinchStateStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_Player_C::AnimNotify_FlinchStateStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "AnimNotify_FlinchStateStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.BlueprintPostEvaluateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_Player_C::BlueprintPostEvaluateAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "BlueprintPostEvaluateAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.OnFinishAddComponent_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PActor                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             PComponent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::OnFinishAddComponent_Event(class AActor* PActor, class UActorComponent* PComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "OnFinishAddComponent_Event");

	Params::UABP_Player_C_OnFinishAddComponent_Event_Params Parms{};

	Parms.PActor = PActor;
	Parms.PComponent = PComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.OnRagdollStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERagdollState           NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::OnRagdollStateChanged(enum class ERagdollState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "OnRagdollStateChanged");

	Params::UABP_Player_C_OnRagdollStateChanged_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.OnRequestComponentVisuals_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameRealm              GameRealm                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::OnRequestComponentVisuals_Event(enum class EGameRealm GameRealm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "OnRequestComponentVisuals_Event");

	Params::UABP_Player_C_OnRequestComponentVisuals_Event_Params Parms{};

	Parms.GameRealm = GameRealm;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.OnLeftHandEquippedChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHandEquipped                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::OnLeftHandEquippedChanged(bool bHandEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "OnLeftHandEquippedChanged");

	Params::UABP_Player_C_OnLeftHandEquippedChanged_Params Parms{};

	Parms.bHandEquipped = bHandEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.OnRightHandEquippedChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHandEquipped                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::OnRightHandEquippedChanged(bool bHandEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "OnRightHandEquippedChanged");

	Params::UABP_Player_C_OnRightHandEquippedChanged_Params Parms{};

	Parms.bHandEquipped = bHandEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.AnimNotify_RightEquipAnimStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_Player_C::AnimNotify_RightEquipAnimStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "AnimNotify_RightEquipAnimStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.AnimNotify_LeftEquipAnimStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_Player_C::AnimNotify_LeftEquipAnimStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "AnimNotify_LeftEquipAnimStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.AnimNotify_RightEquipmentAnimationFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_Player_C::AnimNotify_RightEquipmentAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "AnimNotify_RightEquipmentAnimationFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.AnimNotify_LeftEquipmentAnimationFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_Player_C::AnimNotify_LeftEquipmentAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "AnimNotify_LeftEquipmentAnimationFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.OnStanceTypeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EStanceType             OldStance                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStanceType             NewStance                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::OnStanceTypeChanged(enum class EStanceType OldStance, enum class EStanceType NewStance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "OnStanceTypeChanged");

	Params::UABP_Player_C_OnStanceTypeChanged_Params Parms{};

	Parms.OldStance = OldStance;
	Parms.NewStance = NewStance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player.ABP_Player_C.AnimNotify_Reset_SpringIK
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_Player_C::AnimNotify_Reset_SpringIK()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "AnimNotify_Reset_SpringIK");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Player.ABP_Player_C.ExecuteUbergraph_ABP_Player
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsKnockdown_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETweenType              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETweenType              Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETweenType              Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETweenType              Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_value_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bDone_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bDone                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDualRealmDirector*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsKnockdown_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_15                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_16                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_17                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_18                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_19                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_20                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDualRealmStateComponent*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              K2Node_CustomEvent_oldRealm                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              K2Node_CustomEvent_newRealm                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_21                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStanceComponent*            CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URagdollComponent_BP_C*      CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCharacterConfigComponent*   CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterStatsInfo         CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_22                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_23                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_24                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_pActor                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_CustomEvent_pComponent                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URagdollComponent_BP_C*      K2Node_DynamicCast_AsRagdoll_Component_BP                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERagdollState           K2Node_CustomEvent_NewState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_25                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              K2Node_CustomEvent_gameRealm                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_26                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_27                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bHandEquipped_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bHandEquipped                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStanceType             K2Node_CustomEvent_oldStance                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStanceType             K2Node_CustomEvent_newStance                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEquipAnimationsPlayrate_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentActiveMontage_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_11                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_12                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_10                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETweenType              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_11                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexDelayerAction*           CallFunc_DelayValue_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ETweenType              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHexDelayerAction*           CallFunc_DelayValue_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_L_Arm_Equipment_Alpha_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_R_Arm_Equipment_Alpha_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Set_Item_ImplicitCast                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_StructMemberSet_Alpha_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_StructMemberSet_Alpha_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Delta_Time_X_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DelayValue_startValue_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DelayValue_targetValue_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DelayValue_startValue_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DelayValue_targetValue_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_C::ExecuteUbergraph_ABP_Player(int32 EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool Temp_bool_IsClosed_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9, bool CallFunc_IsKnockdown_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_10, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_11, bool CallFunc_NotEqual_ByteByte_ReturnValue_3, bool CallFunc_NotEqual_ByteByte_ReturnValue_4, bool CallFunc_NotEqual_ByteByte_ReturnValue_5, bool CallFunc_NotEqual_ByteByte_ReturnValue_6, bool CallFunc_NotEqual_ByteByte_ReturnValue_7, bool CallFunc_NotEqual_ByteByte_ReturnValue_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue_12, enum class ETweenType Temp_byte_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue_9, enum class ETweenType Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ETweenType Temp_byte_Variable_2, enum class ETweenType Temp_byte_Variable_3, bool Temp_bool_Variable_1, float Temp_real_Variable, bool Temp_bool_Variable_2, float K2Node_CustomEvent_value_1, bool K2Node_CustomEvent_bDone_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float Temp_real_Variable_1, bool Temp_bool_Variable_3, float K2Node_CustomEvent_value, bool K2Node_CustomEvent_bDone, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_IsKnockdown_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float CallFunc_GetCurveValue_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_13, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_3, bool Temp_bool_IsClosed_Variable_4, float CallFunc_GetCurveValue_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_3, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_14, bool CallFunc_EqualEqual_ByteByte_ReturnValue_15, float CallFunc_GetCurveValue_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_16, bool CallFunc_EqualEqual_ByteByte_ReturnValue_17, bool CallFunc_EqualEqual_ByteByte_ReturnValue_18, bool Temp_bool_IsClosed_Variable_5, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, bool Temp_bool_Has_Been_Initd_Variable_4, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, float K2Node_Event_DeltaTimeX, bool CallFunc_EqualEqual_ByteByte_ReturnValue_19, bool CallFunc_EqualEqual_ByteByte_ReturnValue_20, class AActor* CallFunc_GetOwningActor_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_5, bool CallFunc_IsValid_ReturnValue_2, class UDualRealmStateComponent* CallFunc_GetComponentByClass_ReturnValue, enum class EGameRealm K2Node_CustomEvent_oldRealm, enum class EGameRealm K2Node_CustomEvent_newRealm, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_21, int32 CallFunc_SelectInt_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, class UStanceComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, class URagdollComponent_BP_C* CallFunc_GetComponentByClass_ReturnValue_2, class UCharacterConfigComponent* CallFunc_GetComponentByClass_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, const struct FCharacterStatsInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_22, bool Temp_bool_IsClosed_Variable_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_23, bool CallFunc_EqualEqual_ByteByte_ReturnValue_24, bool Temp_bool_IsClosed_Variable_7, bool Temp_bool_Has_Been_Initd_Variable_6, bool Temp_bool_Has_Been_Initd_Variable_7, bool Temp_bool_Has_Been_Initd_Variable_8, bool Temp_bool_IsClosed_Variable_8, bool Temp_bool_IsClosed_Variable_9, bool Temp_bool_Has_Been_Initd_Variable_9, bool Temp_bool_Has_Been_Initd_Variable_10, class AActor* K2Node_CustomEvent_pActor, class UActorComponent* K2Node_CustomEvent_pComponent, class URagdollComponent_BP_C* K2Node_DynamicCast_AsRagdoll_Component_BP, bool K2Node_DynamicCast_bSuccess, enum class ERagdollState K2Node_CustomEvent_NewState, bool CallFunc_EqualEqual_ByteByte_ReturnValue_25, bool K2Node_SwitchEnum_CmpSuccess, enum class EGameRealm K2Node_CustomEvent_gameRealm, bool CallFunc_EqualEqual_ByteByte_ReturnValue_26, bool CallFunc_EqualEqual_ByteByte_ReturnValue_27, bool K2Node_CustomEvent_bHandEquipped_1, bool CallFunc_BooleanOR_ReturnValue_1, bool K2Node_CustomEvent_bHandEquipped, int32 CallFunc_SelectInt_ReturnValue_1, enum class EStanceType K2Node_CustomEvent_oldStance, enum class EStanceType K2Node_CustomEvent_newStance, bool Temp_bool_IsClosed_Variable_10, float CallFunc_GetCurveValue_ReturnValue_4, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, double CallFunc_MakeLiteralDouble_ReturnValue, float CallFunc_GetEquipAnimationsPlayrate_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_8, bool Temp_bool_IsClosed_Variable_11, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable_11, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_7, double CallFunc_FMax_ReturnValue, bool Temp_bool_IsClosed_Variable_12, bool Temp_bool_Has_Been_Initd_Variable_12, bool CallFunc_NotEqual_ByteByte_ReturnValue_10, double CallFunc_SelectFloat_ReturnValue_1, enum class ETweenType K2Node_Select_Default, double CallFunc_FMax_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_11, class UHexDelayerAction* CallFunc_DelayValue_ReturnValue, enum class ETweenType K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_11, double CallFunc_SelectFloat_ReturnValue_2, class UHexDelayerAction* CallFunc_DelayValue_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_12, double K2Node_VariableSet_L_Arm_Equipment_Alpha_ImplicitCast, double K2Node_VariableSet_R_Arm_Equipment_Alpha_ImplicitCast, float CallFunc_Array_Set_Item_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float K2Node_StructMemberSet_Alpha_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1, float K2Node_StructMemberSet_Alpha_ImplicitCast_1, double K2Node_VariableSet_Delta_Time_X_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_DelayValue_startValue_ImplicitCast, float CallFunc_DelayValue_targetValue_ImplicitCast, float CallFunc_DelayValue_startValue_ImplicitCast_1, float CallFunc_DelayValue_targetValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_C", "ExecuteUbergraph_ABP_Player");

	Params::UABP_Player_C_ExecuteUbergraph_ABP_Player_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = CallFunc_EqualEqual_ByteByte_ReturnValue_7;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_8 = CallFunc_EqualEqual_ByteByte_ReturnValue_8;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_9 = CallFunc_EqualEqual_ByteByte_ReturnValue_9;
	Parms.CallFunc_IsKnockdown_ReturnValue = CallFunc_IsKnockdown_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_10 = CallFunc_EqualEqual_ByteByte_ReturnValue_10;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_11 = CallFunc_EqualEqual_ByteByte_ReturnValue_11;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_3 = CallFunc_NotEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_4 = CallFunc_NotEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_5 = CallFunc_NotEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_6 = CallFunc_NotEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_7 = CallFunc_NotEqual_ByteByte_ReturnValue_7;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_8 = CallFunc_NotEqual_ByteByte_ReturnValue_8;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_12 = CallFunc_EqualEqual_ByteByte_ReturnValue_12;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_9 = CallFunc_NotEqual_ByteByte_ReturnValue_9;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_CustomEvent_value_1 = K2Node_CustomEvent_value_1;
	Parms.K2Node_CustomEvent_bDone_1 = K2Node_CustomEvent_bDone_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_CustomEvent_value = K2Node_CustomEvent_value;
	Parms.K2Node_CustomEvent_bDone = K2Node_CustomEvent_bDone;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_IsKnockdown_ReturnValue_1 = CallFunc_IsKnockdown_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_13 = CallFunc_EqualEqual_ByteByte_ReturnValue_13;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.Temp_bool_IsClosed_Variable_4 = Temp_bool_IsClosed_Variable_4;
	Parms.CallFunc_GetCurveValue_ReturnValue_1 = CallFunc_GetCurveValue_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetCurveValue_ReturnValue_2 = CallFunc_GetCurveValue_ReturnValue_2;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_14 = CallFunc_EqualEqual_ByteByte_ReturnValue_14;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_15 = CallFunc_EqualEqual_ByteByte_ReturnValue_15;
	Parms.CallFunc_GetCurveValue_ReturnValue_3 = CallFunc_GetCurveValue_ReturnValue_3;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_2 = CallFunc_MakeLiteralByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_16 = CallFunc_EqualEqual_ByteByte_ReturnValue_16;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_17 = CallFunc_EqualEqual_ByteByte_ReturnValue_17;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_18 = CallFunc_EqualEqual_ByteByte_ReturnValue_18;
	Parms.Temp_bool_IsClosed_Variable_5 = Temp_bool_IsClosed_Variable_5;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.Temp_bool_Has_Been_Initd_Variable_4 = Temp_bool_Has_Been_Initd_Variable_4;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_3 = CallFunc_MakeLiteralByte_ReturnValue_3;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_19 = CallFunc_EqualEqual_ByteByte_ReturnValue_19;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_20 = CallFunc_EqualEqual_ByteByte_ReturnValue_20;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_5 = Temp_bool_Has_Been_Initd_Variable_5;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CustomEvent_oldRealm = K2Node_CustomEvent_oldRealm;
	Parms.K2Node_CustomEvent_newRealm = K2Node_CustomEvent_newRealm;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_21 = CallFunc_EqualEqual_ByteByte_ReturnValue_21;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_GetOwningActor_ReturnValue_1 = CallFunc_GetOwningActor_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_22 = CallFunc_EqualEqual_ByteByte_ReturnValue_22;
	Parms.Temp_bool_IsClosed_Variable_6 = Temp_bool_IsClosed_Variable_6;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_23 = CallFunc_EqualEqual_ByteByte_ReturnValue_23;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_24 = CallFunc_EqualEqual_ByteByte_ReturnValue_24;
	Parms.Temp_bool_IsClosed_Variable_7 = Temp_bool_IsClosed_Variable_7;
	Parms.Temp_bool_Has_Been_Initd_Variable_6 = Temp_bool_Has_Been_Initd_Variable_6;
	Parms.Temp_bool_Has_Been_Initd_Variable_7 = Temp_bool_Has_Been_Initd_Variable_7;
	Parms.Temp_bool_Has_Been_Initd_Variable_8 = Temp_bool_Has_Been_Initd_Variable_8;
	Parms.Temp_bool_IsClosed_Variable_8 = Temp_bool_IsClosed_Variable_8;
	Parms.Temp_bool_IsClosed_Variable_9 = Temp_bool_IsClosed_Variable_9;
	Parms.Temp_bool_Has_Been_Initd_Variable_9 = Temp_bool_Has_Been_Initd_Variable_9;
	Parms.Temp_bool_Has_Been_Initd_Variable_10 = Temp_bool_Has_Been_Initd_Variable_10;
	Parms.K2Node_CustomEvent_pActor = K2Node_CustomEvent_pActor;
	Parms.K2Node_CustomEvent_pComponent = K2Node_CustomEvent_pComponent;
	Parms.K2Node_DynamicCast_AsRagdoll_Component_BP = K2Node_DynamicCast_AsRagdoll_Component_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_NewState = K2Node_CustomEvent_NewState;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_25 = CallFunc_EqualEqual_ByteByte_ReturnValue_25;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_gameRealm = K2Node_CustomEvent_gameRealm;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_26 = CallFunc_EqualEqual_ByteByte_ReturnValue_26;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_27 = CallFunc_EqualEqual_ByteByte_ReturnValue_27;
	Parms.K2Node_CustomEvent_bHandEquipped_1 = K2Node_CustomEvent_bHandEquipped_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_CustomEvent_bHandEquipped = K2Node_CustomEvent_bHandEquipped;
	Parms.CallFunc_SelectInt_ReturnValue_1 = CallFunc_SelectInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_oldStance = K2Node_CustomEvent_oldStance;
	Parms.K2Node_CustomEvent_newStance = K2Node_CustomEvent_newStance;
	Parms.Temp_bool_IsClosed_Variable_10 = Temp_bool_IsClosed_Variable_10;
	Parms.CallFunc_GetCurveValue_ReturnValue_4 = CallFunc_GetCurveValue_ReturnValue_4;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_1 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue = CallFunc_MakeLiteralDouble_ReturnValue;
	Parms.CallFunc_GetEquipAnimationsPlayrate_ReturnValue = CallFunc_GetEquipAnimationsPlayrate_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.Temp_bool_IsClosed_Variable_11 = Temp_bool_IsClosed_Variable_11;
	Parms.CallFunc_GetCurrentActiveMontage_ReturnValue = CallFunc_GetCurrentActiveMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.Temp_bool_Has_Been_Initd_Variable_11 = Temp_bool_Has_Been_Initd_Variable_11;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_12 = Temp_bool_IsClosed_Variable_12;
	Parms.Temp_bool_Has_Been_Initd_Variable_12 = Temp_bool_Has_Been_Initd_Variable_12;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_10 = CallFunc_NotEqual_ByteByte_ReturnValue_10;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FMax_ReturnValue_1 = CallFunc_FMax_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_11 = CallFunc_NotEqual_ByteByte_ReturnValue_11;
	Parms.CallFunc_DelayValue_ReturnValue = CallFunc_DelayValue_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_DelayValue_ReturnValue_1 = CallFunc_DelayValue_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.K2Node_VariableSet_L_Arm_Equipment_Alpha_ImplicitCast = K2Node_VariableSet_L_Arm_Equipment_Alpha_ImplicitCast;
	Parms.K2Node_VariableSet_R_Arm_Equipment_Alpha_ImplicitCast = K2Node_VariableSet_R_Arm_Equipment_Alpha_ImplicitCast;
	Parms.CallFunc_Array_Set_Item_ImplicitCast = CallFunc_Array_Set_Item_ImplicitCast;
	Parms.CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast = CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.K2Node_StructMemberSet_Alpha_ImplicitCast = K2Node_StructMemberSet_Alpha_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1 = CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1;
	Parms.K2Node_StructMemberSet_Alpha_ImplicitCast_1 = K2Node_StructMemberSet_Alpha_ImplicitCast_1;
	Parms.K2Node_VariableSet_Delta_Time_X_ImplicitCast = K2Node_VariableSet_Delta_Time_X_ImplicitCast;
	Parms.CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast_1 = CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_DelayValue_startValue_ImplicitCast = CallFunc_DelayValue_startValue_ImplicitCast;
	Parms.CallFunc_DelayValue_targetValue_ImplicitCast = CallFunc_DelayValue_targetValue_ImplicitCast;
	Parms.CallFunc_DelayValue_startValue_ImplicitCast_1 = CallFunc_DelayValue_startValue_ImplicitCast_1;
	Parms.CallFunc_DelayValue_targetValue_ImplicitCast_1 = CallFunc_DelayValue_targetValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


