#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Investigator_Layer.ABP_Investigator_Layer_C
// (None)

class UClass* UABP_Investigator_Layer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Investigator_Layer_C");

	return Clss;
}


// ABP_Investigator_Layer_C ABP_Investigator_Layer.Default__ABP_Investigator_Layer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Investigator_Layer_C* UABP_Investigator_Layer_C::GetDefaultObj()
{
	static class UABP_Investigator_Layer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Investigator_Layer_C*>(UABP_Investigator_Layer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Investigator_Layer.ABP_Investigator_Layer_C.Warping_Override
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   LocomotionInput                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             InMoveAngle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InMoveSpeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   Warping_Override                                                 (Parm, OutParm, NoDestructor)

void UABP_Investigator_Layer_C::Warping_Override(const struct FPoseLink& LocomotionInput, double InMoveAngle, double InMoveSpeed, struct FPoseLink* Warping_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Investigator_Layer_C", "Warping_Override");

	Params::UABP_Investigator_Layer_C_Warping_Override_Params Parms{};

	Parms.LocomotionInput = LocomotionInput;
	Parms.InMoveAngle = InMoveAngle;
	Parms.InMoveSpeed = InMoveSpeed;

	UObject::ProcessEvent(Func, &Parms);

	if (Warping_Override != nullptr)
		*Warping_Override = std::move(Parms.Warping_Override);

}


// Function ABP_Investigator_Layer.ABP_Investigator_Layer_C.Facial_Override
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InputPose                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             Facial_Alpha                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Expression_Anger                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Expression_Pain                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Eyes_Blinking                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   Facial_Override                                                  (Parm, OutParm, NoDestructor)

void UABP_Investigator_Layer_C::Facial_Override(const struct FPoseLink& InputPose, double Facial_Alpha, double Expression_Anger, double Expression_Pain, double Eyes_Blinking, struct FPoseLink* Facial_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Investigator_Layer_C", "Facial_Override");

	Params::UABP_Investigator_Layer_C_Facial_Override_Params Parms{};

	Parms.InputPose = InputPose;
	Parms.Facial_Alpha = Facial_Alpha;
	Parms.Expression_Anger = Expression_Anger;
	Parms.Expression_Pain = Expression_Pain;
	Parms.Eyes_Blinking = Eyes_Blinking;

	UObject::ProcessEvent(Func, &Parms);

	if (Facial_Override != nullptr)
		*Facial_Override = std::move(Parms.Facial_Override);

}


// Function ABP_Investigator_Layer.ABP_Investigator_Layer_C.LookAtTarget_Override
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InLocomotion                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LookAt_Alpha                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Use_HeadOnly                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   LookAtTarget_Override                                            (Parm, OutParm, NoDestructor)

void UABP_Investigator_Layer_C::LookAtTarget_Override(const struct FPoseLink& InLocomotion, const struct FVector& TargetLocation, double LookAt_Alpha, bool Use_HeadOnly, struct FPoseLink* LookAtTarget_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Investigator_Layer_C", "LookAtTarget_Override");

	Params::UABP_Investigator_Layer_C_LookAtTarget_Override_Params Parms{};

	Parms.InLocomotion = InLocomotion;
	Parms.TargetLocation = TargetLocation;
	Parms.LookAt_Alpha = LookAt_Alpha;
	Parms.Use_HeadOnly = Use_HeadOnly;

	UObject::ProcessEvent(Func, &Parms);

	if (LookAtTarget_Override != nullptr)
		*LookAtTarget_Override = std::move(Parms.LookAtTarget_Override);

}


// Function ABP_Investigator_Layer.ABP_Investigator_Layer_C.FeetIk_Override
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                              IsInUmbral                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             EnemySpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   FeetIk_Override                                                  (Parm, OutParm, NoDestructor)

void UABP_Investigator_Layer_C::FeetIk_Override(const struct FPoseLink& InPose, int32 IsInUmbral, double EnemySpeed, struct FPoseLink* FeetIk_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Investigator_Layer_C", "FeetIk_Override");

	Params::UABP_Investigator_Layer_C_FeetIk_Override_Params Parms{};

	Parms.InPose = InPose;
	Parms.IsInUmbral = IsInUmbral;
	Parms.EnemySpeed = EnemySpeed;

	UObject::ProcessEvent(Func, &Parms);

	if (FeetIk_Override != nullptr)
		*FeetIk_Override = std::move(Parms.FeetIk_Override);

}


// Function ABP_Investigator_Layer.ABP_Investigator_Layer_C.FeetLock_FlinchesPP
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   FlinchedInput                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   FeetLock_FlinchesPP                                              (Parm, OutParm, NoDestructor)

void UABP_Investigator_Layer_C::FeetLock_FlinchesPP(const struct FPoseLink& FlinchedInput, struct FPoseLink* FeetLock_FlinchesPP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Investigator_Layer_C", "FeetLock_FlinchesPP");

	Params::UABP_Investigator_Layer_C_FeetLock_FlinchesPP_Params Parms{};

	Parms.FlinchedInput = FlinchedInput;

	UObject::ProcessEvent(Func, &Parms);

	if (FeetLock_FlinchesPP != nullptr)
		*FeetLock_FlinchesPP = std::move(Parms.FeetLock_FlinchesPP);

}


// Function ABP_Investigator_Layer.ABP_Investigator_Layer_C.Layering_Override
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   DefaultSlot_InputPose                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// double                             UpperBody_Layering_Alpha                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             L_Arm_Layering_Alpha                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             R_Arm_Layering_Alpha                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   Layering_Override                                                (Parm, OutParm, NoDestructor)

void UABP_Investigator_Layer_C::Layering_Override(const struct FPoseLink& DefaultSlot_InputPose, double UpperBody_Layering_Alpha, double L_Arm_Layering_Alpha, double R_Arm_Layering_Alpha, struct FPoseLink* Layering_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Investigator_Layer_C", "Layering_Override");

	Params::UABP_Investigator_Layer_C_Layering_Override_Params Parms{};

	Parms.DefaultSlot_InputPose = DefaultSlot_InputPose;
	Parms.UpperBody_Layering_Alpha = UpperBody_Layering_Alpha;
	Parms.L_Arm_Layering_Alpha = L_Arm_Layering_Alpha;
	Parms.R_Arm_Layering_Alpha = R_Arm_Layering_Alpha;

	UObject::ProcessEvent(Func, &Parms);

	if (Layering_Override != nullptr)
		*Layering_Override = std::move(Parms.Layering_Override);

}


// Function ABP_Investigator_Layer.ABP_Investigator_Layer_C.CopyIKBone_Override
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InputLocomotion                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   CopyIKBone_Override                                              (Parm, OutParm, NoDestructor)

void UABP_Investigator_Layer_C::CopyIKBone_Override(const struct FPoseLink& InputLocomotion, struct FPoseLink* CopyIKBone_Override)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Investigator_Layer_C", "CopyIKBone_Override");

	Params::UABP_Investigator_Layer_C_CopyIKBone_Override_Params Parms{};

	Parms.InputLocomotion = InputLocomotion;

	UObject::ProcessEvent(Func, &Parms);

	if (CopyIKBone_Override != nullptr)
		*CopyIKBone_Override = std::move(Parms.CopyIKBone_Override);

}


// Function ABP_Investigator_Layer.ABP_Investigator_Layer_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Investigator_Layer_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Investigator_Layer_C", "AnimGraph");

	Params::UABP_Investigator_Layer_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Investigator_Layer.ABP_Investigator_Layer_C.ExecuteUbergraph_ABP_Investigator_Layer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Investigator_Layer_C::ExecuteUbergraph_ABP_Investigator_Layer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Investigator_Layer_C", "ExecuteUbergraph_ABP_Investigator_Layer");

	Params::UABP_Investigator_Layer_C_ExecuteUbergraph_ABP_Investigator_Layer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


