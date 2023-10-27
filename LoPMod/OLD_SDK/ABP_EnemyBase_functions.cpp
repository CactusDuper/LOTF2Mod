#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_EnemyBase.ABP_EnemyBase_C
// (None)

class UClass* UABP_EnemyBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_EnemyBase_C");

	return Clss;
}


// ABP_EnemyBase_C ABP_EnemyBase.Default__ABP_EnemyBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_EnemyBase_C* UABP_EnemyBase_C::GetDefaultObj()
{
	static class UABP_EnemyBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_EnemyBase_C*>(UABP_EnemyBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_EnemyBase.ABP_EnemyBase_C.HandsIK_Override
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InputPose                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             HandsIK_Alpha                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SpringStrength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SpringDamping                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   HandsIK_Override                                                 (Parm, OutParm, NoDestructor)

void UABP_EnemyBase_C::HandsIK_Override(const struct FPoseLink& InputPose, double HandsIK_Alpha, double SpringStrength, double SpringDamping, struct FPoseLink* HandsIK_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "HandsIK_Override");

	Params::UABP_EnemyBase_C_HandsIK_Override_Params Parms{};

	Parms.InputPose = InputPose;
	Parms.HandsIK_Alpha = HandsIK_Alpha;
	Parms.SpringStrength = SpringStrength;
	Parms.SpringDamping = SpringDamping;

	UObject::ProcessEvent(Func, &Parms);

	if (HandsIK_Override != nullptr)
		*HandsIK_Override = std::move(Parms.HandsIK_Override);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.LanternOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   LanternLayeringPose                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_L                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   LanternOverlay                                                   (Parm, OutParm, NoDestructor)

void UABP_EnemyBase_C::LanternOverlay(const struct FPoseLink& LanternLayeringPose, enum class ELocomotionState CurrentLocomotionState_L, struct FPoseLink* LanternOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "LanternOverlay");

	Params::UABP_EnemyBase_C_LanternOverlay_Params Parms{};

	Parms.LanternLayeringPose = LanternLayeringPose;
	Parms.CurrentLocomotionState_L = CurrentLocomotionState_L;

	UObject::ProcessEvent(Func, &Parms);

	if (LanternOverlay != nullptr)
		*LanternOverlay = std::move(Parms.LanternOverlay);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.RangedOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   RangedLayeringPose                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_R                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   RangedOverlay                                                    (Parm, OutParm, NoDestructor)

void UABP_EnemyBase_C::RangedOverlay(const struct FPoseLink& RangedLayeringPose, enum class ELocomotionState CurrentLocomotionState_R, struct FPoseLink* RangedOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "RangedOverlay");

	Params::UABP_EnemyBase_C_RangedOverlay_Params Parms{};

	Parms.RangedLayeringPose = RangedLayeringPose;
	Parms.CurrentLocomotionState_R = CurrentLocomotionState_R;

	UObject::ProcessEvent(Func, &Parms);

	if (RangedOverlay != nullptr)
		*RangedOverlay = std::move(Parms.RangedOverlay);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.MagicOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   MagicLayeringPose                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_M                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   MagicOverlay                                                     (Parm, OutParm, NoDestructor)

void UABP_EnemyBase_C::MagicOverlay(const struct FPoseLink& MagicLayeringPose, enum class ELocomotionState CurrentLocomotionState_M, struct FPoseLink* MagicOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "MagicOverlay");

	Params::UABP_EnemyBase_C_MagicOverlay_Params Parms{};

	Parms.MagicLayeringPose = MagicLayeringPose;
	Parms.CurrentLocomotionState_M = CurrentLocomotionState_M;

	UObject::ProcessEvent(Func, &Parms);

	if (MagicOverlay != nullptr)
		*MagicOverlay = std::move(Parms.MagicOverlay);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.DualWieldOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   DualWieldLayeringPose                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_DW                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   DualWieldOverlay                                                 (Parm, OutParm, NoDestructor)

void UABP_EnemyBase_C::DualWieldOverlay(const struct FPoseLink& DualWieldLayeringPose, enum class ELocomotionState CurrentLocomotionState_DW, struct FPoseLink* DualWieldOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "DualWieldOverlay");

	Params::UABP_EnemyBase_C_DualWieldOverlay_Params Parms{};

	Parms.DualWieldLayeringPose = DualWieldLayeringPose;
	Parms.CurrentLocomotionState_DW = CurrentLocomotionState_DW;

	UObject::ProcessEvent(Func, &Parms);

	if (DualWieldOverlay != nullptr)
		*DualWieldOverlay = std::move(Parms.DualWieldOverlay);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.SecondaryOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   SecondaryLayeringPose                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_S                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   SecondaryOverlay                                                 (Parm, OutParm, NoDestructor)

void UABP_EnemyBase_C::SecondaryOverlay(const struct FPoseLink& SecondaryLayeringPose, enum class ELocomotionState CurrentLocomotionState_S, struct FPoseLink* SecondaryOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "SecondaryOverlay");

	Params::UABP_EnemyBase_C_SecondaryOverlay_Params Parms{};

	Parms.SecondaryLayeringPose = SecondaryLayeringPose;
	Parms.CurrentLocomotionState_S = CurrentLocomotionState_S;

	UObject::ProcessEvent(Func, &Parms);

	if (SecondaryOverlay != nullptr)
		*SecondaryOverlay = std::move(Parms.SecondaryOverlay);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.PrimaryOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PrimaryLayeringPose                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_P                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             R_Hand_Unequipped_Alpha                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             L_Hand_Unequipped_Alpha                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   PrimaryOverlay                                                   (Parm, OutParm, NoDestructor)

void UABP_EnemyBase_C::PrimaryOverlay(const struct FPoseLink& PrimaryLayeringPose, enum class ELocomotionState CurrentLocomotionState_P, double R_Hand_Unequipped_Alpha, double L_Hand_Unequipped_Alpha, struct FPoseLink* PrimaryOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "PrimaryOverlay");

	Params::UABP_EnemyBase_C_PrimaryOverlay_Params Parms{};

	Parms.PrimaryLayeringPose = PrimaryLayeringPose;
	Parms.CurrentLocomotionState_P = CurrentLocomotionState_P;
	Parms.R_Hand_Unequipped_Alpha = R_Hand_Unequipped_Alpha;
	Parms.L_Hand_Unequipped_Alpha = L_Hand_Unequipped_Alpha;

	UObject::ProcessEvent(Func, &Parms);

	if (PrimaryOverlay != nullptr)
		*PrimaryOverlay = std::move(Parms.PrimaryOverlay);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.AL_PlayerFlails
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_Flails                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AL_PlayerFlails                                                  (Parm, OutParm, NoDestructor)

void UABP_EnemyBase_C::AL_PlayerFlails(const struct FPoseLink& InPose_Flails, struct FPoseLink* AL_PlayerFlails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "AL_PlayerFlails");

	Params::UABP_EnemyBase_C_AL_PlayerFlails_Params Parms{};

	Parms.InPose_Flails = InPose_Flails;

	UObject::ProcessEvent(Func, &Parms);

	if (AL_PlayerFlails != nullptr)
		*AL_PlayerFlails = std::move(Parms.AL_PlayerFlails);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.AL_AimingOffset
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   UpperBody_Additive                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             AimingAlpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AimingPitch                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AimingYaw                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpace*                 AimOffset_BS                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   AL_AimingOffset                                                  (Parm, OutParm, NoDestructor)

void UABP_EnemyBase_C::AL_AimingOffset(const struct FPoseLink& UpperBody_Additive, double AimingAlpha, double AimingPitch, double AimingYaw, class UBlendSpace* AimOffset_BS, struct FPoseLink* AL_AimingOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "AL_AimingOffset");

	Params::UABP_EnemyBase_C_AL_AimingOffset_Params Parms{};

	Parms.UpperBody_Additive = UpperBody_Additive;
	Parms.AimingAlpha = AimingAlpha;
	Parms.AimingPitch = AimingPitch;
	Parms.AimingYaw = AimingYaw;
	Parms.AimOffset_BS = AimOffset_BS;

	UObject::ProcessEvent(Func, &Parms);

	if (AL_AimingOffset != nullptr)
		*AL_AimingOffset = std::move(Parms.AL_AimingOffset);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.Locomotion
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   Locomotion                                                       (Parm, OutParm, NoDestructor)

void UABP_EnemyBase_C::Locomotion(struct FPoseLink* Locomotion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "Locomotion");

	Params::UABP_EnemyBase_C_Locomotion_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Locomotion != nullptr)
		*Locomotion = std::move(Parms.Locomotion);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.Locomotion_Blocking
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   Locomotion_Blocking                                              (Parm, OutParm, NoDestructor)

void UABP_EnemyBase_C::Locomotion_Blocking(const struct FPoseLink& InPose, struct FPoseLink* Locomotion_Blocking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "Locomotion_Blocking");

	Params::UABP_EnemyBase_C_Locomotion_Blocking_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (Locomotion_Blocking != nullptr)
		*Locomotion_Blocking = std::move(Parms.Locomotion_Blocking);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.Warping_Override
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   LocomotionInput                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             InMoveAngle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InMoveSpeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   Warping_Override                                                 (Parm, OutParm, NoDestructor)

void UABP_EnemyBase_C::Warping_Override(const struct FPoseLink& LocomotionInput, double InMoveAngle, double InMoveSpeed, struct FPoseLink* Warping_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "Warping_Override");

	Params::UABP_EnemyBase_C_Warping_Override_Params Parms{};

	Parms.LocomotionInput = LocomotionInput;
	Parms.InMoveAngle = InMoveAngle;
	Parms.InMoveSpeed = InMoveSpeed;

	UObject::ProcessEvent(Func, &Parms);

	if (Warping_Override != nullptr)
		*Warping_Override = std::move(Parms.Warping_Override);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.Facial_Override
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InputPose                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             Facial_Alpha                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Expression_Anger                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Expression_Pain                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Eyes_Blinking                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   Facial_Override                                                  (Parm, OutParm, NoDestructor)

void UABP_EnemyBase_C::Facial_Override(const struct FPoseLink& InputPose, double Facial_Alpha, double Expression_Anger, double Expression_Pain, double Eyes_Blinking, struct FPoseLink* Facial_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "Facial_Override");

	Params::UABP_EnemyBase_C_Facial_Override_Params Parms{};

	Parms.InputPose = InputPose;
	Parms.Facial_Alpha = Facial_Alpha;
	Parms.Expression_Anger = Expression_Anger;
	Parms.Expression_Pain = Expression_Pain;
	Parms.Eyes_Blinking = Eyes_Blinking;

	UObject::ProcessEvent(Func, &Parms);

	if (Facial_Override != nullptr)
		*Facial_Override = std::move(Parms.Facial_Override);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.LookAtTarget_Override
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InLocomotion                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LookAt_Alpha                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Use_HeadOnly                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   LookAtTarget_Override                                            (Parm, OutParm, NoDestructor)

void UABP_EnemyBase_C::LookAtTarget_Override(const struct FPoseLink& InLocomotion, const struct FVector& TargetLocation, double LookAt_Alpha, bool Use_HeadOnly, struct FPoseLink* LookAtTarget_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "LookAtTarget_Override");

	Params::UABP_EnemyBase_C_LookAtTarget_Override_Params Parms{};

	Parms.InLocomotion = InLocomotion;
	Parms.TargetLocation = TargetLocation;
	Parms.LookAt_Alpha = LookAt_Alpha;
	Parms.Use_HeadOnly = Use_HeadOnly;

	UObject::ProcessEvent(Func, &Parms);

	if (LookAtTarget_Override != nullptr)
		*LookAtTarget_Override = std::move(Parms.LookAtTarget_Override);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.CopyIKBone_Override
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InputLocomotion                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   CopyIKBone_Override                                              (Parm, OutParm, NoDestructor)

void UABP_EnemyBase_C::CopyIKBone_Override(const struct FPoseLink& InputLocomotion, struct FPoseLink* CopyIKBone_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "CopyIKBone_Override");

	Params::UABP_EnemyBase_C_CopyIKBone_Override_Params Parms{};

	Parms.InputLocomotion = InputLocomotion;

	UObject::ProcessEvent(Func, &Parms);

	if (CopyIKBone_Override != nullptr)
		*CopyIKBone_Override = std::move(Parms.CopyIKBone_Override);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.Layering_Override
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   DefaultSlot_InputPose                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             UpperBody_Layering_Alpha                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             L_Arm_Layering_Alpha                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             R_Arm_Layering_Alpha                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   Layering_Override                                                (Parm, OutParm, NoDestructor)

void UABP_EnemyBase_C::Layering_Override(const struct FPoseLink& DefaultSlot_InputPose, double UpperBody_Layering_Alpha, double L_Arm_Layering_Alpha, double R_Arm_Layering_Alpha, struct FPoseLink* Layering_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "Layering_Override");

	Params::UABP_EnemyBase_C_Layering_Override_Params Parms{};

	Parms.DefaultSlot_InputPose = DefaultSlot_InputPose;
	Parms.UpperBody_Layering_Alpha = UpperBody_Layering_Alpha;
	Parms.L_Arm_Layering_Alpha = L_Arm_Layering_Alpha;
	Parms.R_Arm_Layering_Alpha = R_Arm_Layering_Alpha;

	UObject::ProcessEvent(Func, &Parms);

	if (Layering_Override != nullptr)
		*Layering_Override = std::move(Parms.Layering_Override);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.FeetLock_FlinchesPP
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   FlinchedInput                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   FeetLock_FlinchesPP                                              (Parm, OutParm, NoDestructor)

void UABP_EnemyBase_C::FeetLock_FlinchesPP(const struct FPoseLink& FlinchedInput, struct FPoseLink* FeetLock_FlinchesPP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "FeetLock_FlinchesPP");

	Params::UABP_EnemyBase_C_FeetLock_FlinchesPP_Params Parms{};

	Parms.FlinchedInput = FlinchedInput;

	UObject::ProcessEvent(Func, &Parms);

	if (FeetLock_FlinchesPP != nullptr)
		*FeetLock_FlinchesPP = std::move(Parms.FeetLock_FlinchesPP);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.FeetIk_Override
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                              IsInUmbral                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             EnemySpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   FeetIk_Override                                                  (Parm, OutParm, NoDestructor)

void UABP_EnemyBase_C::FeetIk_Override(const struct FPoseLink& InPose, int32 IsInUmbral, double EnemySpeed, struct FPoseLink* FeetIk_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "FeetIk_Override");

	Params::UABP_EnemyBase_C_FeetIk_Override_Params Parms{};

	Parms.InPose = InPose;
	Parms.IsInUmbral = IsInUmbral;
	Parms.EnemySpeed = EnemySpeed;

	UObject::ProcessEvent(Func, &Parms);

	if (FeetIk_Override != nullptr)
		*FeetIk_Override = std::move(Parms.FeetIk_Override);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_EnemyBase_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "AnimGraph");

	Params::UABP_EnemyBase_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.Update_AlternateIdleAnimation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (NoDestructor)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UABP_EnemyBase_C::Update_AlternateIdleAnimation(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "Update_AlternateIdleAnimation");

	Params::UABP_EnemyBase_C_Update_AlternateIdleAnimation_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequencePlayerPure_SequencePlayer = CallFunc_ConvertToSequencePlayerPure_SequencePlayer;
	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.BlueprintThreadSafeUpdateAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValueWithDefault_OutValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurveValueWithDefault_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValueWithDefault_OutValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurveValueWithDefault_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValueWithDefault_OutValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurveValueWithDefault_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Look_At_Target_Location_Function_DeltaTime_ImplicitCast (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Look_At_Target_Location_Function_DeltaTime_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_L_Arm_Override_Alpha_0_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_R_Arm_Override_Alpha_0_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_SystemicFacial_Alpha_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_EnemyBase_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime, bool Temp_bool_Variable, float Temp_real_Variable, float Temp_real_Variable_1, double CallFunc_FInterpTo_ReturnValue, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_1, float K2Node_Select_Default, float CallFunc_GetCurveValueWithDefault_OutValue, bool CallFunc_GetCurveValueWithDefault_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_GetCurveValueWithDefault_OutValue_1, bool CallFunc_GetCurveValueWithDefault_ReturnValue_1, float CallFunc_GetCurveValueWithDefault_OutValue_2, bool CallFunc_GetCurveValueWithDefault_ReturnValue_2, double CallFunc_Look_At_Target_Location_Function_DeltaTime_ImplicitCast, double CallFunc_Look_At_Target_Location_Function_DeltaTime_ImplicitCast_1, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double K2Node_VariableSet_L_Arm_Override_Alpha_0_ImplicitCast, double K2Node_VariableSet_R_Arm_Override_Alpha_0_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float K2Node_VariableSet_SystemicFacial_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "BlueprintThreadSafeUpdateAnimation");

	Params::UABP_EnemyBase_C_BlueprintThreadSafeUpdateAnimation_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_GetCurveValue_ReturnValue_1 = CallFunc_GetCurveValue_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCurveValueWithDefault_OutValue = CallFunc_GetCurveValueWithDefault_OutValue;
	Parms.CallFunc_GetCurveValueWithDefault_ReturnValue = CallFunc_GetCurveValueWithDefault_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetCurveValueWithDefault_OutValue_1 = CallFunc_GetCurveValueWithDefault_OutValue_1;
	Parms.CallFunc_GetCurveValueWithDefault_ReturnValue_1 = CallFunc_GetCurveValueWithDefault_ReturnValue_1;
	Parms.CallFunc_GetCurveValueWithDefault_OutValue_2 = CallFunc_GetCurveValueWithDefault_OutValue_2;
	Parms.CallFunc_GetCurveValueWithDefault_ReturnValue_2 = CallFunc_GetCurveValueWithDefault_ReturnValue_2;
	Parms.CallFunc_Look_At_Target_Location_Function_DeltaTime_ImplicitCast = CallFunc_Look_At_Target_Location_Function_DeltaTime_ImplicitCast;
	Parms.CallFunc_Look_At_Target_Location_Function_DeltaTime_ImplicitCast_1 = CallFunc_Look_At_Target_Location_Function_DeltaTime_ImplicitCast_1;
	Parms.CallFunc_FInterpTo_DeltaTime_ImplicitCast = CallFunc_FInterpTo_DeltaTime_ImplicitCast;
	Parms.K2Node_VariableSet_L_Arm_Override_Alpha_0_ImplicitCast = K2Node_VariableSet_L_Arm_Override_Alpha_0_ImplicitCast;
	Parms.K2Node_VariableSet_R_Arm_Override_Alpha_0_ImplicitCast = K2Node_VariableSet_R_Arm_Override_Alpha_0_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.K2Node_VariableSet_SystemicFacial_Alpha_ImplicitCast = K2Node_VariableSet_SystemicFacial_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.Look At Target Location Function
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseLookAtBone                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InterpSpeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LookAt_YawAmount                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BP_GetCurveValue_OutValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BP_GetCurveValue_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BP_GetCurveValue_OutValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BP_GetCurveValue_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_A_ImplicitCast                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_A_ImplicitCast_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_A_ImplicitCast_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_EnemyBase_C::Look_At_Target_Location_Function(const struct FVector& TargetLocation, bool UseLookAtBone, double InterpSpeed, double DeltaTime, float LookAt_YawAmount, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_1, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_Abs_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Abs_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_BP_GetCurveValue_OutValue, bool CallFunc_BP_GetCurveValue_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_BP_GetCurveValue_OutValue_1, bool CallFunc_BP_GetCurveValue_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_Abs_A_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_Abs_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "Look At Target Location Function");

	Params::UABP_EnemyBase_C_Look_At_Target_Location_Function_Params Parms{};

	Parms.TargetLocation = TargetLocation;
	Parms.UseLookAtBone = UseLookAtBone;
	Parms.InterpSpeed = InterpSpeed;
	Parms.DeltaTime = DeltaTime;
	Parms.LookAt_YawAmount = LookAt_YawAmount;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_NormalizedDeltaRotator_ReturnValue = CallFunc_NormalizedDeltaRotator_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_FindLookAtRotation_ReturnValue_1 = CallFunc_FindLookAtRotation_ReturnValue_1;
	Parms.CallFunc_NormalizedDeltaRotator_ReturnValue_1 = CallFunc_NormalizedDeltaRotator_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue_1 = CallFunc_Abs_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_BP_GetCurveValue_OutValue = CallFunc_BP_GetCurveValue_OutValue;
	Parms.CallFunc_BP_GetCurveValue_ReturnValue = CallFunc_BP_GetCurveValue_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_BP_GetCurveValue_OutValue_1 = CallFunc_BP_GetCurveValue_OutValue_1;
	Parms.CallFunc_BP_GetCurveValue_ReturnValue_1 = CallFunc_BP_GetCurveValue_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_Abs_A_ImplicitCast = CallFunc_Abs_A_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_Abs_A_ImplicitCast_1 = CallFunc_Abs_A_ImplicitCast_1;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SelectFloat_A_ImplicitCast = CallFunc_SelectFloat_A_ImplicitCast;
	Parms.CallFunc_SelectFloat_A_ImplicitCast_1 = CallFunc_SelectFloat_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.Reset_IdleBreakerTimerDelay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_EnemyBase_C::Reset_IdleBreakerTimerDelay(double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "Reset_IdleBreakerTimerDelay");

	Params::UABP_EnemyBase_C_Reset_IdleBreakerTimerDelay_Params Parms{};

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


// Function ABP_EnemyBase.ABP_EnemyBase_C.Update_IdleBreakerAnimTime
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

void UABP_EnemyBase_C::Update_IdleBreakerAnimTime(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, class UAnimSequenceBase* CallFunc_GetSequence_ReturnValue, float CallFunc_GetAccumulatedTime_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_AdvanceTime_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "Update_IdleBreakerAnimTime");

	Params::UABP_EnemyBase_C_Update_IdleBreakerAnimTime_Params Parms{};

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


// Function ABP_EnemyBase.ABP_EnemyBase_C.CanPlayIdleBreak
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UABP_EnemyBase_C::CanPlayIdleBreak(bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "CanPlayIdleBreak");

	Params::UABP_EnemyBase_C_CanPlayIdleBreak_Params Parms{};

	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.Update_IdleState
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
// float                              K2Node_VariableSet_Idle_Breaker_Timer_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_EnemyBase_C::Update_IdleState(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FAnimationStateResultReference& CallFunc_ConvertToAnimationStateResultPure_AnimationState, bool CallFunc_ConvertToAnimationStateResultPure_Result, bool CallFunc_IsStateBlendingOut_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_CanPlayIdleBreak_ReturnValue, float CallFunc_GetDeltaTime_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float K2Node_VariableSet_Idle_Breaker_Timer_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "Update_IdleState");

	Params::UABP_EnemyBase_C_Update_IdleState_Params Parms{};

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
	Parms.K2Node_VariableSet_Idle_Breaker_Timer_ImplicitCast = K2Node_VariableSet_Idle_Breaker_Timer_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.ResetIdleBreakTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_EnemyBase_C::ResetIdleBreakTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "ResetIdleBreakTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.Set Idle State
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UABP_EnemyBase_C::Set_Idle_State(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "Set Idle State");

	Params::UABP_EnemyBase_C_Set_Idle_State_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.Set_IdleBreakerAnim
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
// class UAnimSequenceBase*           CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetSequence_ReturnValue                                 (NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_SetExplicitTime_ReturnValue                             (NoDestructor)

void UABP_EnemyBase_C::Set_IdleBreakerAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UAnimSequenceBase* CallFunc_Array_Get_Item, const struct FSequenceEvaluatorReference& CallFunc_SetSequence_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_SetExplicitTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "Set_IdleBreakerAnim");

	Params::UABP_EnemyBase_C_Set_IdleBreakerAnim_Params Parms{};

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


// Function ABP_EnemyBase.ABP_EnemyBase_C.Update_MovementBSAnimation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FBlendSpacePlayerReference  CallFunc_ConvertToBlendSpacePlayerPure_BlendSpacePlayer          (NoDestructor)
// bool                               CallFunc_ConvertToBlendSpacePlayerPure_Result                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBlendSpacePlayerReference  CallFunc_SetBlendSpaceWithInertialBlending_ReturnValue           (NoDestructor)

void UABP_EnemyBase_C::Update_MovementBSAnimation(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FBlendSpacePlayerReference& CallFunc_ConvertToBlendSpacePlayerPure_BlendSpacePlayer, bool CallFunc_ConvertToBlendSpacePlayerPure_Result, const struct FBlendSpacePlayerReference& CallFunc_SetBlendSpaceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "Update_MovementBSAnimation");

	Params::UABP_EnemyBase_C_Update_MovementBSAnimation_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToBlendSpacePlayerPure_BlendSpacePlayer = CallFunc_ConvertToBlendSpacePlayerPure_BlendSpacePlayer;
	Parms.CallFunc_ConvertToBlendSpacePlayerPure_Result = CallFunc_ConvertToBlendSpacePlayerPure_Result;
	Parms.CallFunc_SetBlendSpaceWithInertialBlending_ReturnValue = CallFunc_SetBlendSpaceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.Update_IdleAnimation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (NoDestructor)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UABP_EnemyBase_C::Update_IdleAnimation(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "Update_IdleAnimation");

	Params::UABP_EnemyBase_C_Update_IdleAnimation_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequencePlayerPure_SequencePlayer = CallFunc_ConvertToSequencePlayerPure_SequencePlayer;
	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.LookAt_Target
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target_Actor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      AI_Actor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneToLookAt                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InterpSpeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LookAt_YawAmount                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BP_GetCurveValue_OutValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BP_GetCurveValue_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BP_GetCurveValue_OutValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BP_GetCurveValue_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_A_ImplicitCast_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_EnemyBase_C::LookAt_Target(class AActor* Target_Actor, class AActor* AI_Actor, class FName BoneToLookAt, double InterpSpeed, float LookAt_YawAmount, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool Temp_bool_Variable, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BP_GetCurveValue_OutValue, bool CallFunc_BP_GetCurveValue_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue, float CallFunc_BP_GetCurveValue_OutValue_1, bool CallFunc_BP_GetCurveValue_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_SelectFloat_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "LookAt_Target");

	Params::UABP_EnemyBase_C_LookAt_Target_Params Parms{};

	Parms.Target_Actor = Target_Actor;
	Parms.AI_Actor = AI_Actor;
	Parms.BoneToLookAt = BoneToLookAt;
	Parms.InterpSpeed = InterpSpeed;
	Parms.LookAt_YawAmount = LookAt_YawAmount;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_NormalizedDeltaRotator_ReturnValue = CallFunc_NormalizedDeltaRotator_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_BP_GetCurveValue_OutValue = CallFunc_BP_GetCurveValue_OutValue;
	Parms.CallFunc_BP_GetCurveValue_ReturnValue = CallFunc_BP_GetCurveValue_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_BP_GetCurveValue_OutValue_1 = CallFunc_BP_GetCurveValue_OutValue_1;
	Parms.CallFunc_BP_GetCurveValue_ReturnValue_1 = CallFunc_BP_GetCurveValue_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SelectFloat_A_ImplicitCast = CallFunc_SelectFloat_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_SelectFloat_A_ImplicitCast_1 = CallFunc_SelectFloat_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.Update_FlinchAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// float                              CallFunc_GetDeltaTime_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_EnemyBase_C::Update_FlinchAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, float CallFunc_GetDeltaTime_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "Update_FlinchAnim");

	Params::UABP_EnemyBase_C_Update_FlinchAnim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_GetDeltaTime_ReturnValue = CallFunc_GetDeltaTime_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.Set_FlinchAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UABP_EnemyBase_C::Set_FlinchAnim(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "Set_FlinchAnim");

	Params::UABP_EnemyBase_C_Set_FlinchAnim_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.Set_AlphaValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_EnemyBase_C::Set_AlphaValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "Set_AlphaValues");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.UpdateMiscData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_EnemyBase_C::UpdateMiscData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "UpdateMiscData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.SelectCardinalDirectionFromAngle
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

void UABP_EnemyBase_C::SelectCardinalDirectionFromAngle(double Angle, double DeadZone, enum class ECardinalDirection CurrentDirection, bool UseCurrentDirection, enum class ECardinalDirection* Direction, double BwdDeadZone, double FwdDeadZone, double AbsAngle, double CallFunc_Abs_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "SelectCardinalDirectionFromAngle");

	Params::UABP_EnemyBase_C_SelectCardinalDirectionFromAngle_Params Parms{};

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


// Function ABP_EnemyBase.ABP_EnemyBase_C.Update_LocomotionAnimation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// enum class EHexCardinalDirection   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (NoDestructor)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHexCardinalDirection   Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default_2                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UABP_EnemyBase_C::Update_LocomotionAnimation(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, enum class EHexCardinalDirection Temp_byte_Variable, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, bool CallFunc_ConvertToSequencePlayerPure_Result, enum class EHexCardinalDirection Temp_byte_Variable_1, bool Temp_bool_Variable, class UAnimSequence* K2Node_Select_Default, class UAnimSequence* K2Node_Select_Default_1, class UAnimSequence* K2Node_Select_Default_2, const struct FSequencePlayerReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "Update_LocomotionAnimation");

	Params::UABP_EnemyBase_C_Update_LocomotionAnimation_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_ConvertToSequencePlayerPure_SequencePlayer = CallFunc_ConvertToSequencePlayerPure_SequencePlayer;
	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.Set_Animations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_1                    (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_2                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_3                    (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_2                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_3                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_4                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_5                    (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_4                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UAnimSequence*>       CallFunc_BP_GetAnimationsArrayByTag_outAnimations                (ReferenceParm)
// bool                               CallFunc_BP_GetAnimationsArrayByTag_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_6                    (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_5                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_7                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_8                    (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_6                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_7                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_9                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_10                   (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_8                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_9                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_11                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_12                   (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_10                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_11                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_13                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_14                   (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_12                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_13                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default_2                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_15                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_16                   (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_14                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_15                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHexCardinalDirectionAnimationStructK2Node_MakeStruct_HexCardinalDirectionAnimationStruct            (NoDestructor)
// struct FAnimStruct_CardinalDirectionK2Node_MakeStruct_AnimStruct_CardinalDirection                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_Select_Default_3                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHexCardinalDirectionAnimationStructK2Node_MakeStruct_HexCardinalDirectionAnimationStruct_1          (NoDestructor)
// struct FAnimStruct_CardinalDirectionK2Node_MakeStruct_AnimStruct_CardinalDirection_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_17                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_18                   (NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_BP_GetAnimationByTag_ReturnValue_16                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBlendSpace*                 CallFunc_BP_GetBlendspaceByTag_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_19                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue_20                   (NoDestructor, HasGetValueTypeHash)
// class UBlendSpace*                 CallFunc_BP_GetBlendspaceByTag_ReturnValue_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBlendSpace*                 CallFunc_BP_GetBlendspaceByTag_ReturnValue_2                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UABP_EnemyBase_C::Set_Animations(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_2, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_3, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_2, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_3, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_4, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_5, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_4, TArray<class UAnimSequence*>& CallFunc_BP_GetAnimationsArrayByTag_outAnimations, bool CallFunc_BP_GetAnimationsArrayByTag_ReturnValue, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_6, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_7, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_8, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_6, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_9, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_10, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_8, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_11, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_12, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_10, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_11, class UAnimSequence* K2Node_Select_Default, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_13, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_14, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_12, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_13, class UAnimSequence* K2Node_Select_Default_1, class UAnimSequence* K2Node_Select_Default_2, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_15, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_16, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_14, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_15, const struct FHexCardinalDirectionAnimationStruct& K2Node_MakeStruct_HexCardinalDirectionAnimationStruct, const struct FAnimStruct_CardinalDirection& K2Node_MakeStruct_AnimStruct_CardinalDirection, class UAnimSequence* K2Node_Select_Default_3, const struct FHexCardinalDirectionAnimationStruct& K2Node_MakeStruct_HexCardinalDirectionAnimationStruct_1, const struct FAnimStruct_CardinalDirection& K2Node_MakeStruct_AnimStruct_CardinalDirection_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_17, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_18, class UAnimSequence* CallFunc_BP_GetAnimationByTag_ReturnValue_16, class UBlendSpace* CallFunc_BP_GetBlendspaceByTag_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_19, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_20, class UBlendSpace* CallFunc_BP_GetBlendspaceByTag_ReturnValue_1, class UBlendSpace* CallFunc_BP_GetBlendspaceByTag_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "Set_Animations");

	Params::UABP_EnemyBase_C_Set_Animations_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_1 = CallFunc_MakeLiteralGameplayTag_ReturnValue_1;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue = CallFunc_BP_GetAnimationByTag_ReturnValue;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_1 = CallFunc_BP_GetAnimationByTag_ReturnValue_1;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_2 = CallFunc_MakeLiteralGameplayTag_ReturnValue_2;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_3 = CallFunc_MakeLiteralGameplayTag_ReturnValue_3;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_2 = CallFunc_BP_GetAnimationByTag_ReturnValue_2;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_3 = CallFunc_BP_GetAnimationByTag_ReturnValue_3;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_4 = CallFunc_MakeLiteralGameplayTag_ReturnValue_4;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_5 = CallFunc_MakeLiteralGameplayTag_ReturnValue_5;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_4 = CallFunc_BP_GetAnimationByTag_ReturnValue_4;
	Parms.CallFunc_BP_GetAnimationsArrayByTag_outAnimations = CallFunc_BP_GetAnimationsArrayByTag_outAnimations;
	Parms.CallFunc_BP_GetAnimationsArrayByTag_ReturnValue = CallFunc_BP_GetAnimationsArrayByTag_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_6 = CallFunc_MakeLiteralGameplayTag_ReturnValue_6;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_5 = CallFunc_BP_GetAnimationByTag_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_7 = CallFunc_MakeLiteralGameplayTag_ReturnValue_7;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_8 = CallFunc_MakeLiteralGameplayTag_ReturnValue_8;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_6 = CallFunc_BP_GetAnimationByTag_ReturnValue_6;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_7 = CallFunc_BP_GetAnimationByTag_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_9 = CallFunc_MakeLiteralGameplayTag_ReturnValue_9;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_10 = CallFunc_MakeLiteralGameplayTag_ReturnValue_10;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_8 = CallFunc_BP_GetAnimationByTag_ReturnValue_8;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_9 = CallFunc_BP_GetAnimationByTag_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_11 = CallFunc_MakeLiteralGameplayTag_ReturnValue_11;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_12 = CallFunc_MakeLiteralGameplayTag_ReturnValue_12;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_10 = CallFunc_BP_GetAnimationByTag_ReturnValue_10;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_11 = CallFunc_BP_GetAnimationByTag_ReturnValue_11;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_13 = CallFunc_MakeLiteralGameplayTag_ReturnValue_13;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_14 = CallFunc_MakeLiteralGameplayTag_ReturnValue_14;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_12 = CallFunc_BP_GetAnimationByTag_ReturnValue_12;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_13 = CallFunc_BP_GetAnimationByTag_ReturnValue_13;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_15 = CallFunc_MakeLiteralGameplayTag_ReturnValue_15;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_16 = CallFunc_MakeLiteralGameplayTag_ReturnValue_16;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_14 = CallFunc_BP_GetAnimationByTag_ReturnValue_14;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_15 = CallFunc_BP_GetAnimationByTag_ReturnValue_15;
	Parms.K2Node_MakeStruct_HexCardinalDirectionAnimationStruct = K2Node_MakeStruct_HexCardinalDirectionAnimationStruct;
	Parms.K2Node_MakeStruct_AnimStruct_CardinalDirection = K2Node_MakeStruct_AnimStruct_CardinalDirection;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_MakeStruct_HexCardinalDirectionAnimationStruct_1 = K2Node_MakeStruct_HexCardinalDirectionAnimationStruct_1;
	Parms.K2Node_MakeStruct_AnimStruct_CardinalDirection_1 = K2Node_MakeStruct_AnimStruct_CardinalDirection_1;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_17 = CallFunc_MakeLiteralGameplayTag_ReturnValue_17;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_18 = CallFunc_MakeLiteralGameplayTag_ReturnValue_18;
	Parms.CallFunc_BP_GetAnimationByTag_ReturnValue_16 = CallFunc_BP_GetAnimationByTag_ReturnValue_16;
	Parms.CallFunc_BP_GetBlendspaceByTag_ReturnValue = CallFunc_BP_GetBlendspaceByTag_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_19 = CallFunc_MakeLiteralGameplayTag_ReturnValue_19;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_20 = CallFunc_MakeLiteralGameplayTag_ReturnValue_20;
	Parms.CallFunc_BP_GetBlendspaceByTag_ReturnValue_1 = CallFunc_BP_GetBlendspaceByTag_ReturnValue_1;
	Parms.CallFunc_BP_GetBlendspaceByTag_ReturnValue_2 = CallFunc_BP_GetBlendspaceByTag_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.Set_AimingOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTargetedActor_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_Value_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_EnemyBase_C::Set_AimingOffset(float CallFunc_GetCurveValue_ReturnValue, class AActor* CallFunc_GetTargetedActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "Set_AimingOffset");

	Params::UABP_EnemyBase_C_Set_AimingOffset_Params Parms{};

	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_GetTargetedActor_ReturnValue = CallFunc_GetTargetedActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_Value_ImplicitCast = CallFunc_FClamp_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.Set_CombatStance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_EnemyBase_C::Set_CombatStance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "Set_CombatStance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.Set_InputValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WasMovingLastUpdate                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     L_CharVelocity_2D                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    W_CharRotation                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     W_CharVelocity_2D                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_EnemyBase_C::Set_InputValues(bool WasMovingLastUpdate, const struct FVector& L_CharVelocity_2D, const struct FRotator& W_CharRotation, const struct FVector& W_CharVelocity_2D)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "Set_InputValues");

	Params::UABP_EnemyBase_C_Set_InputValues_Params Parms{};

	Parms.WasMovingLastUpdate = WasMovingLastUpdate;
	Parms.L_CharVelocity_2D = L_CharVelocity_2D;
	Parms.W_CharRotation = W_CharRotation;
	Parms.W_CharVelocity_2D = W_CharVelocity_2D;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_0EC29FCA4C65DA6F4DF54FA131543E2D
// (BlueprintEvent)
// Parameters:

void UABP_EnemyBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_0EC29FCA4C65DA6F4DF54FA131543E2D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_0EC29FCA4C65DA6F4DF54FA131543E2D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_42C0C1C1491583484BAA3ABE40556318
// (BlueprintEvent)
// Parameters:

void UABP_EnemyBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_42C0C1C1491583484BAA3ABE40556318()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_42C0C1C1491583484BAA3ABE40556318");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_C155F3A14C7C70E9EC70B696E150D452
// (BlueprintEvent)
// Parameters:

void UABP_EnemyBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_C155F3A14C7C70E9EC70B696E150D452()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_C155F3A14C7C70E9EC70B696E150D452");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_A91762C346846913348F039CF66D8083
// (BlueprintEvent)
// Parameters:

void UABP_EnemyBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_A91762C346846913348F039CF66D8083()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_A91762C346846913348F039CF66D8083");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_9B38F75B47C72E5B584C73914648D4D4
// (BlueprintEvent)
// Parameters:

void UABP_EnemyBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_9B38F75B47C72E5B584C73914648D4D4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_9B38F75B47C72E5B584C73914648D4D4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_A74532FF44365A8B40A47EBC0B9F1147
// (BlueprintEvent)
// Parameters:

void UABP_EnemyBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_A74532FF44365A8B40A47EBC0B9F1147()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_A74532FF44365A8B40A47EBC0B9F1147");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_EnemyBase_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.RealmChangeHandler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameRealm              OldRealm                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              NewRealm                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_EnemyBase_C::RealmChangeHandler(enum class EGameRealm OldRealm, enum class EGameRealm NewRealm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "RealmChangeHandler");

	Params::UABP_EnemyBase_C_RealmChangeHandler_Params Parms{};

	Parms.OldRealm = OldRealm;
	Parms.NewRealm = NewRealm;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.OnCharacterAnimLayerStackChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_EnemyBase_C::OnCharacterAnimLayerStackChanged_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "OnCharacterAnimLayerStackChanged_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_EnemyBase_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "BlueprintBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.AnimNotify_FlinchStateStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_EnemyBase_C::AnimNotify_FlinchStateStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "AnimNotify_FlinchStateStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_8D82B07E45A271165CE017B7D4917C13
// (BlueprintEvent)
// Parameters:

void UABP_EnemyBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_8D82B07E45A271165CE017B7D4917C13()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_EnemyBase_AnimGraphNode_TransitionResult_8D82B07E45A271165CE017B7D4917C13");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.OnFinishAddComponent_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PActor                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             PComponent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UABP_EnemyBase_C::OnFinishAddComponent_Event(class AActor* PActor, class UActorComponent* PComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "OnFinishAddComponent_Event");

	Params::UABP_EnemyBase_C_OnFinishAddComponent_Event_Params Parms{};

	Parms.PActor = PActor;
	Parms.PComponent = PComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.OnRagdollStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERagdollState           NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_EnemyBase_C::OnRagdollStateChanged(enum class ERagdollState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "OnRagdollStateChanged");

	Params::UABP_EnemyBase_C_OnRagdollStateChanged_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.LookAtPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableLookAt                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UABP_EnemyBase_C::LookAtPlayer(bool EnableLookAt, class AActor* TargetMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "LookAtPlayer");

	Params::UABP_EnemyBase_C_LookAtPlayer_Params Parms{};

	Parms.EnableLookAt = EnableLookAt;
	Parms.TargetMesh = TargetMesh;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.AnimNotify_DisableBreaker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_EnemyBase_C::AnimNotify_DisableBreaker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "AnimNotify_DisableBreaker");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.AnimNotify_EnableBreaker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UABP_EnemyBase_C::AnimNotify_EnableBreaker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "AnimNotify_EnableBreaker");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.OnRagdollCurveStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERagdollCurveState      RagdollCurveState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_EnemyBase_C::OnRagdollCurveStateChanged(enum class ERagdollCurveState RagdollCurveState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "OnRagdollCurveStateChanged");

	Params::UABP_EnemyBase_C_OnRagdollCurveStateChanged_Params Parms{};

	Parms.RagdollCurveState = RagdollCurveState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_EnemyBase.ABP_EnemyBase_C.ExecuteUbergraph_ABP_EnemyBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRelevantAnimTimeRemaining_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDualRealmStateComponent*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              K2Node_CustomEvent_oldRealm                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              K2Node_CustomEvent_newRealm                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URagdollComponent_BP_C*      CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterConfigComponent*   CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterStatsInfo         CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_pActor                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_CustomEvent_pComponent                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URagdollComponent_BP_C*      K2Node_DynamicCast_AsRagdoll_Component_BP                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERagdollState           K2Node_CustomEvent_NewState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_EnableLookAt                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_TargetMesh                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwningComponent_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ERagdollCurveState      K2Node_CustomEvent_RagdollCurveState                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_EnemyBase_C::ExecuteUbergraph_ABP_EnemyBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UDualRealmStateComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EGameRealm K2Node_CustomEvent_oldRealm, enum class EGameRealm K2Node_CustomEvent_newRealm, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class URagdollComponent_BP_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class UCharacterConfigComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, const struct FCharacterStatsInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, class AActor* K2Node_CustomEvent_pActor, class UActorComponent* K2Node_CustomEvent_pComponent, class URagdollComponent_BP_C* K2Node_DynamicCast_AsRagdoll_Component_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_4, enum class ERagdollState K2Node_CustomEvent_NewState, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetCurveValue_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool K2Node_CustomEvent_EnableLookAt, class AActor* K2Node_CustomEvent_TargetMesh, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, enum class ERagdollCurveState K2Node_CustomEvent_RagdollCurveState, bool K2Node_SwitchEnum_CmpSuccess_1, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_EnemyBase_C", "ExecuteUbergraph_ABP_EnemyBase");

	Params::UABP_EnemyBase_C_ExecuteUbergraph_ABP_EnemyBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetRelevantAnimTimeRemaining_ReturnValue = CallFunc_GetRelevantAnimTimeRemaining_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_oldRealm = K2Node_CustomEvent_oldRealm;
	Parms.K2Node_CustomEvent_newRealm = K2Node_CustomEvent_newRealm;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_GetOwningActor_ReturnValue_1 = CallFunc_GetOwningActor_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.K2Node_CustomEvent_pActor = K2Node_CustomEvent_pActor;
	Parms.K2Node_CustomEvent_pComponent = K2Node_CustomEvent_pComponent;
	Parms.K2Node_DynamicCast_AsRagdoll_Component_BP = K2Node_DynamicCast_AsRagdoll_Component_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.K2Node_CustomEvent_NewState = K2Node_CustomEvent_NewState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.K2Node_CustomEvent_EnableLookAt = K2Node_CustomEvent_EnableLookAt;
	Parms.K2Node_CustomEvent_TargetMesh = K2Node_CustomEvent_TargetMesh;
	Parms.CallFunc_GetOwningComponent_ReturnValue = CallFunc_GetOwningComponent_ReturnValue;
	Parms.K2Node_CustomEvent_RagdollCurveState = K2Node_CustomEvent_RagdollCurveState;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast = CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


