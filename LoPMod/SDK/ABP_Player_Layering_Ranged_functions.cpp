#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C
// (None)

class UClass* UABP_Player_Layering_Ranged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Player_Layering_Ranged_C");

	return Clss;
}


// ABP_Player_Layering_Ranged_C ABP_Player_Layering_Ranged.Default__ABP_Player_Layering_Ranged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Player_Layering_Ranged_C* UABP_Player_Layering_Ranged_C::GetDefaultObj()
{
	static class UABP_Player_Layering_Ranged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Player_Layering_Ranged_C*>(UABP_Player_Layering_Ranged_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.HandsIK_Override
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InputPose                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             HandsIK_Alpha                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SpringStrength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SpringDamping                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   HandsIK_Override                                                 (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_Ranged_C::HandsIK_Override(const struct FPoseLink& InputPose, double HandsIK_Alpha, double SpringStrength, double SpringDamping, struct FPoseLink* HandsIK_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Ranged_C", "HandsIK_Override");

	Params::UABP_Player_Layering_Ranged_C_HandsIK_Override_Params Parms{};

	Parms.InputPose = InputPose;
	Parms.HandsIK_Alpha = HandsIK_Alpha;
	Parms.SpringStrength = SpringStrength;
	Parms.SpringDamping = SpringDamping;

	UObject::ProcessEvent(Func, &Parms);

	if (HandsIK_Override != nullptr)
		*HandsIK_Override = std::move(Parms.HandsIK_Override);

}


// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.LanternOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   LanternLayeringPose                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_L                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   LanternOverlay                                                   (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_Ranged_C::LanternOverlay(const struct FPoseLink& LanternLayeringPose, enum class ELocomotionState CurrentLocomotionState_L, struct FPoseLink* LanternOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Ranged_C", "LanternOverlay");

	Params::UABP_Player_Layering_Ranged_C_LanternOverlay_Params Parms{};

	Parms.LanternLayeringPose = LanternLayeringPose;
	Parms.CurrentLocomotionState_L = CurrentLocomotionState_L;

	UObject::ProcessEvent(Func, &Parms);

	if (LanternOverlay != nullptr)
		*LanternOverlay = std::move(Parms.LanternOverlay);

}


// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.AL_PlayerFlails
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_Flails                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AL_PlayerFlails                                                  (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_Ranged_C::AL_PlayerFlails(const struct FPoseLink& InPose_Flails, struct FPoseLink* AL_PlayerFlails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Ranged_C", "AL_PlayerFlails");

	Params::UABP_Player_Layering_Ranged_C_AL_PlayerFlails_Params Parms{};

	Parms.InPose_Flails = InPose_Flails;

	UObject::ProcessEvent(Func, &Parms);

	if (AL_PlayerFlails != nullptr)
		*AL_PlayerFlails = std::move(Parms.AL_PlayerFlails);

}


// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.AL_AimingOffset
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   UpperBody_Additive                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             AimingAlpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AimingPitch                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AimingYaw                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpace*                 AimOffset_BS                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   AL_AimingOffset                                                  (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_Ranged_C::AL_AimingOffset(const struct FPoseLink& UpperBody_Additive, double AimingAlpha, double AimingPitch, double AimingYaw, class UBlendSpace* AimOffset_BS, struct FPoseLink* AL_AimingOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Ranged_C", "AL_AimingOffset");

	Params::UABP_Player_Layering_Ranged_C_AL_AimingOffset_Params Parms{};

	Parms.UpperBody_Additive = UpperBody_Additive;
	Parms.AimingAlpha = AimingAlpha;
	Parms.AimingPitch = AimingPitch;
	Parms.AimingYaw = AimingYaw;
	Parms.AimOffset_BS = AimOffset_BS;

	UObject::ProcessEvent(Func, &Parms);

	if (AL_AimingOffset != nullptr)
		*AL_AimingOffset = std::move(Parms.AL_AimingOffset);

}


// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.Locomotion
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   Locomotion                                                       (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_Ranged_C::Locomotion(struct FPoseLink* Locomotion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Ranged_C", "Locomotion");

	Params::UABP_Player_Layering_Ranged_C_Locomotion_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Locomotion != nullptr)
		*Locomotion = std::move(Parms.Locomotion);

}


// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.Locomotion_Blocking
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   Locomotion_Blocking                                              (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_Ranged_C::Locomotion_Blocking(const struct FPoseLink& InPose, struct FPoseLink* Locomotion_Blocking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Ranged_C", "Locomotion_Blocking");

	Params::UABP_Player_Layering_Ranged_C_Locomotion_Blocking_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (Locomotion_Blocking != nullptr)
		*Locomotion_Blocking = std::move(Parms.Locomotion_Blocking);

}


// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.PrimaryOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PrimaryLayeringPose                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_P                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             R_Hand_Unequipped_Alpha                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             L_Hand_Unequipped_Alpha                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   PrimaryOverlay                                                   (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_Ranged_C::PrimaryOverlay(const struct FPoseLink& PrimaryLayeringPose, enum class ELocomotionState CurrentLocomotionState_P, double R_Hand_Unequipped_Alpha, double L_Hand_Unequipped_Alpha, struct FPoseLink* PrimaryOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Ranged_C", "PrimaryOverlay");

	Params::UABP_Player_Layering_Ranged_C_PrimaryOverlay_Params Parms{};

	Parms.PrimaryLayeringPose = PrimaryLayeringPose;
	Parms.CurrentLocomotionState_P = CurrentLocomotionState_P;
	Parms.R_Hand_Unequipped_Alpha = R_Hand_Unequipped_Alpha;
	Parms.L_Hand_Unequipped_Alpha = L_Hand_Unequipped_Alpha;

	UObject::ProcessEvent(Func, &Parms);

	if (PrimaryOverlay != nullptr)
		*PrimaryOverlay = std::move(Parms.PrimaryOverlay);

}


// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.SecondaryOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   SecondaryLayeringPose                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_S                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   SecondaryOverlay                                                 (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_Ranged_C::SecondaryOverlay(const struct FPoseLink& SecondaryLayeringPose, enum class ELocomotionState CurrentLocomotionState_S, struct FPoseLink* SecondaryOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Ranged_C", "SecondaryOverlay");

	Params::UABP_Player_Layering_Ranged_C_SecondaryOverlay_Params Parms{};

	Parms.SecondaryLayeringPose = SecondaryLayeringPose;
	Parms.CurrentLocomotionState_S = CurrentLocomotionState_S;

	UObject::ProcessEvent(Func, &Parms);

	if (SecondaryOverlay != nullptr)
		*SecondaryOverlay = std::move(Parms.SecondaryOverlay);

}


// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.DualWieldOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   DualWieldLayeringPose                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_DW                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   DualWieldOverlay                                                 (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_Ranged_C::DualWieldOverlay(const struct FPoseLink& DualWieldLayeringPose, enum class ELocomotionState CurrentLocomotionState_DW, struct FPoseLink* DualWieldOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Ranged_C", "DualWieldOverlay");

	Params::UABP_Player_Layering_Ranged_C_DualWieldOverlay_Params Parms{};

	Parms.DualWieldLayeringPose = DualWieldLayeringPose;
	Parms.CurrentLocomotionState_DW = CurrentLocomotionState_DW;

	UObject::ProcessEvent(Func, &Parms);

	if (DualWieldOverlay != nullptr)
		*DualWieldOverlay = std::move(Parms.DualWieldOverlay);

}


// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.MagicOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   MagicLayeringPose                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_M                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   MagicOverlay                                                     (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_Ranged_C::MagicOverlay(const struct FPoseLink& MagicLayeringPose, enum class ELocomotionState CurrentLocomotionState_M, struct FPoseLink* MagicOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Ranged_C", "MagicOverlay");

	Params::UABP_Player_Layering_Ranged_C_MagicOverlay_Params Parms{};

	Parms.MagicLayeringPose = MagicLayeringPose;
	Parms.CurrentLocomotionState_M = CurrentLocomotionState_M;

	UObject::ProcessEvent(Func, &Parms);

	if (MagicOverlay != nullptr)
		*MagicOverlay = std::move(Parms.MagicOverlay);

}


// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.RangedOverlay
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   RangedLayeringPose                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class ELocomotionState        CurrentLocomotionState_R                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   RangedOverlay                                                    (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_Ranged_C::RangedOverlay(const struct FPoseLink& RangedLayeringPose, enum class ELocomotionState CurrentLocomotionState_R, struct FPoseLink* RangedOverlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Ranged_C", "RangedOverlay");

	Params::UABP_Player_Layering_Ranged_C_RangedOverlay_Params Parms{};

	Parms.RangedLayeringPose = RangedLayeringPose;
	Parms.CurrentLocomotionState_R = CurrentLocomotionState_R;

	UObject::ProcessEvent(Func, &Parms);

	if (RangedOverlay != nullptr)
		*RangedOverlay = std::move(Parms.RangedOverlay);

}


// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Player_Layering_Ranged_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Ranged_C", "AnimGraph");

	Params::UABP_Player_Layering_Ranged_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.Set_AimingBS
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class UABP_Player_C*               CallFunc_GetABP_Player_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FBlendSpacePlayerReference  CallFunc_ConvertToBlendSpacePlayerPure_BlendSpacePlayer          (NoDestructor)
// bool                               CallFunc_ConvertToBlendSpacePlayerPure_Result                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_C*               CallFunc_GetABP_Player_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_C*               CallFunc_GetABP_Player_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_C*               CallFunc_GetABP_Player_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpace*                 K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FBlendSpacePlayerReference  CallFunc_SetBlendSpaceWithInertialBlending_ReturnValue           (NoDestructor)

void UABP_Player_Layering_Ranged_C::Set_AimingBS(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue, const struct FBlendSpacePlayerReference& CallFunc_ConvertToBlendSpacePlayerPure_BlendSpacePlayer, bool CallFunc_ConvertToBlendSpacePlayerPure_Result, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_1, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_2, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_3, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue, class UBlendSpace* K2Node_Select_Default, const struct FBlendSpacePlayerReference& CallFunc_SetBlendSpaceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Ranged_C", "Set_AimingBS");

	Params::UABP_Player_Layering_Ranged_C_Set_AimingBS_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_GetABP_Player_ReturnValue = CallFunc_GetABP_Player_ReturnValue;
	Parms.CallFunc_ConvertToBlendSpacePlayerPure_BlendSpacePlayer = CallFunc_ConvertToBlendSpacePlayerPure_BlendSpacePlayer;
	Parms.CallFunc_ConvertToBlendSpacePlayerPure_Result = CallFunc_ConvertToBlendSpacePlayerPure_Result;
	Parms.CallFunc_GetABP_Player_ReturnValue_1 = CallFunc_GetABP_Player_ReturnValue_1;
	Parms.CallFunc_GetABP_Player_ReturnValue_2 = CallFunc_GetABP_Player_ReturnValue_2;
	Parms.CallFunc_GetABP_Player_ReturnValue_3 = CallFunc_GetABP_Player_ReturnValue_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetBlendSpaceWithInertialBlending_ReturnValue = CallFunc_SetBlendSpaceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.Update_AimingBS
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class UABP_Player_C*               CallFunc_GetABP_Player_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FBlendSpacePlayerReference  CallFunc_ConvertToBlendSpacePlayerPure_BlendSpacePlayer          (NoDestructor)
// bool                               CallFunc_ConvertToBlendSpacePlayerPure_Result                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_C*               CallFunc_GetABP_Player_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_C*               CallFunc_GetABP_Player_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_C*               CallFunc_GetABP_Player_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpace*                 K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FBlendSpacePlayerReference  CallFunc_SetBlendSpaceWithInertialBlending_ReturnValue           (NoDestructor)

void UABP_Player_Layering_Ranged_C::Update_AimingBS(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue, const struct FBlendSpacePlayerReference& CallFunc_ConvertToBlendSpacePlayerPure_BlendSpacePlayer, bool CallFunc_ConvertToBlendSpacePlayerPure_Result, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_1, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_2, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_3, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue, class UBlendSpace* K2Node_Select_Default, const struct FBlendSpacePlayerReference& CallFunc_SetBlendSpaceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Ranged_C", "Update_AimingBS");

	Params::UABP_Player_Layering_Ranged_C_Update_AimingBS_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_GetABP_Player_ReturnValue = CallFunc_GetABP_Player_ReturnValue;
	Parms.CallFunc_ConvertToBlendSpacePlayerPure_BlendSpacePlayer = CallFunc_ConvertToBlendSpacePlayerPure_BlendSpacePlayer;
	Parms.CallFunc_ConvertToBlendSpacePlayerPure_Result = CallFunc_ConvertToBlendSpacePlayerPure_Result;
	Parms.CallFunc_GetABP_Player_ReturnValue_1 = CallFunc_GetABP_Player_ReturnValue_1;
	Parms.CallFunc_GetABP_Player_ReturnValue_2 = CallFunc_GetABP_Player_ReturnValue_2;
	Parms.CallFunc_GetABP_Player_ReturnValue_3 = CallFunc_GetABP_Player_ReturnValue_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetBlendSpaceWithInertialBlending_ReturnValue = CallFunc_SetBlendSpaceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.Smooth_AimOffsetAlpha_byMontageTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                MontageTag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// double                             AimOffsetTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_C*               CallFunc_GetABP_Player_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_Layering_Ranged_C::Smooth_AimOffsetAlpha_byMontageTag(const struct FGameplayTag& MontageTag, double AimOffsetTarget, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Ranged_C", "Smooth_AimOffsetAlpha_byMontageTag");

	Params::UABP_Player_Layering_Ranged_C_Smooth_AimOffsetAlpha_byMontageTag_Params Parms{};

	Parms.MontageTag = MontageTag;
	Parms.AimOffsetTarget = AimOffsetTarget;
	Parms.CallFunc_GetABP_Player_ReturnValue = CallFunc_GetABP_Player_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.Set_Charged_AimingAlpha
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_C*               CallFunc_GetABP_Player_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_BP_GetMontageByTag_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlayLength_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Montage_IsPlaying_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_C*               CallFunc_GetABP_Player_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_GetPosition_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_InRangeB_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_Layering_Ranged_C::Set_Charged_AimingAlpha(double CallFunc_GetWorldDeltaSeconds_ReturnValue, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue, double CallFunc_FInterpTo_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class UAnimMontage* CallFunc_BP_GetMontageByTag_ReturnValue, float CallFunc_GetPlayLength_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_1, float CallFunc_Montage_GetPosition_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Ranged_C", "Set_Charged_AimingAlpha");

	Params::UABP_Player_Layering_Ranged_C_Set_Charged_AimingAlpha_Params Parms{};

	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetABP_Player_ReturnValue = CallFunc_GetABP_Player_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_BP_GetMontageByTag_ReturnValue = CallFunc_BP_GetMontageByTag_ReturnValue;
	Parms.CallFunc_GetPlayLength_ReturnValue = CallFunc_GetPlayLength_ReturnValue;
	Parms.CallFunc_Montage_IsPlaying_ReturnValue = CallFunc_Montage_IsPlaying_ReturnValue;
	Parms.CallFunc_GetABP_Player_ReturnValue_1 = CallFunc_GetABP_Player_ReturnValue_1;
	Parms.CallFunc_Montage_GetPosition_ReturnValue = CallFunc_Montage_GetPosition_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_InRangeB_ImplicitCast = CallFunc_MapRangeClamped_InRangeB_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.GetABP_Player
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UABP_Player_C*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_C*               K2Node_DynamicCast_AsABP_Player                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UABP_Player_C* UABP_Player_Layering_Ranged_C::GetABP_Player(class UABP_Player_C* K2Node_DynamicCast_AsABP_Player, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Ranged_C", "GetABP_Player");

	Params::UABP_Player_Layering_Ranged_C_GetABP_Player_Params Parms{};

	Parms.K2Node_DynamicCast_AsABP_Player = K2Node_DynamicCast_AsABP_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_Layering_Ranged_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Ranged_C", "BlueprintUpdateAnimation");

	Params::UABP_Player_Layering_Ranged_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Player_Layering_Ranged.ABP_Player_Layering_Ranged_C.ExecuteUbergraph_ABP_Player_Layering_Ranged
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_C*               CallFunc_GetABP_Player_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_C*               CallFunc_GetABP_Player_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_C*               CallFunc_GetABP_Player_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_C*               CallFunc_GetABP_Player_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_C*               CallFunc_GetABP_Player_ReturnValue_4                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_C*               CallFunc_GetABP_Player_ReturnValue_5                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_C*               CallFunc_GetABP_Player_ReturnValue_6                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FInterpTo_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Player_Layering_Ranged_C::ExecuteUbergraph_ABP_Player_Layering_Ranged(int32 EntryPoint, double CallFunc_GetWorldDeltaSeconds_ReturnValue, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue, float K2Node_Event_DeltaTimeX, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_2, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_3, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_4, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, double CallFunc_GetWorldDeltaSeconds_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, class UABP_Player_C* CallFunc_GetABP_Player_ReturnValue_6, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_3, double CallFunc_FInterpTo_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Player_Layering_Ranged_C", "ExecuteUbergraph_ABP_Player_Layering_Ranged");

	Params::UABP_Player_Layering_Ranged_C_ExecuteUbergraph_ABP_Player_Layering_Ranged_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetABP_Player_ReturnValue = CallFunc_GetABP_Player_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetABP_Player_ReturnValue_1 = CallFunc_GetABP_Player_ReturnValue_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetABP_Player_ReturnValue_2 = CallFunc_GetABP_Player_ReturnValue_2;
	Parms.CallFunc_GetABP_Player_ReturnValue_3 = CallFunc_GetABP_Player_ReturnValue_3;
	Parms.CallFunc_GetABP_Player_ReturnValue_4 = CallFunc_GetABP_Player_ReturnValue_4;
	Parms.CallFunc_GetABP_Player_ReturnValue_5 = CallFunc_GetABP_Player_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_2 = CallFunc_GetWorldDeltaSeconds_ReturnValue_2;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_GetABP_Player_ReturnValue_6 = CallFunc_GetABP_Player_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_3 = CallFunc_GetWorldDeltaSeconds_ReturnValue_3;
	Parms.CallFunc_FInterpTo_ReturnValue_2 = CallFunc_FInterpTo_ReturnValue_2;
	Parms.CallFunc_FInterpTo_ReturnValue_3 = CallFunc_FInterpTo_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


