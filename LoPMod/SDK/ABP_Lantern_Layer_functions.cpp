#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Lantern_Layer.ABP_Lantern_Layer_C
// (None)

class UClass* UABP_Lantern_Layer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Lantern_Layer_C");

	return Clss;
}


// ABP_Lantern_Layer_C ABP_Lantern_Layer.Default__ABP_Lantern_Layer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Lantern_Layer_C* UABP_Lantern_Layer_C::GetDefaultObj()
{
	static class UABP_Lantern_Layer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Lantern_Layer_C*>(UABP_Lantern_Layer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Lantern_Layer.ABP_Lantern_Layer_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Lantern_Layer_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Lantern_Layer_C", "AnimGraph");

	Params::UABP_Lantern_Layer_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Lantern_Layer.ABP_Lantern_Layer_C.GetBP_AnathemaPlayerCharBPThreadSafe
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AAnathemaPlayerCharacter_BP_C*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class AAnathemaPlayerCharacter_BP_C*K2Node_DynamicCast_AsAnathema_Player_Character_BP                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AAnathemaPlayerCharacter_BP_C* UABP_Lantern_Layer_C::GetBP_AnathemaPlayerCharBPThreadSafe(class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Lantern_Layer_C", "GetBP_AnathemaPlayerCharBPThreadSafe");

	Params::UABP_Lantern_Layer_C_GetBP_AnathemaPlayerCharBPThreadSafe_Params Parms{};

	Parms.K2Node_DynamicCast_AsAnathema_Player_Character_BP = K2Node_DynamicCast_AsAnathema_Player_Character_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ABP_Lantern_Layer.ABP_Lantern_Layer_C.Update_CustomizationIdle
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetExplicitTime_ReturnValue                             (NoDestructor)

void UABP_Lantern_Layer_C::Update_CustomizationIdle(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, const struct FSequenceEvaluatorReference& CallFunc_SetExplicitTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Lantern_Layer_C", "Update_CustomizationIdle");

	Params::UABP_Lantern_Layer_C_Update_CustomizationIdle_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.CallFunc_SetExplicitTime_ReturnValue = CallFunc_SetExplicitTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Lantern_Layer.ABP_Lantern_Layer_C.GetABP_PlayerCustomizationThreadSafe
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UABP_Player_Customization_C* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_Customization_C* K2Node_DynamicCast_AsABP_Player_Customization                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UABP_Player_Customization_C* UABP_Lantern_Layer_C::GetABP_PlayerCustomizationThreadSafe(class UABP_Player_Customization_C* K2Node_DynamicCast_AsABP_Player_Customization, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Lantern_Layer_C", "GetABP_PlayerCustomizationThreadSafe");

	Params::UABP_Lantern_Layer_C_GetABP_PlayerCustomizationThreadSafe_Params Parms{};

	Parms.K2Node_DynamicCast_AsABP_Player_Customization = K2Node_DynamicCast_AsABP_Player_Customization;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ABP_Lantern_Layer.ABP_Lantern_Layer_C.Set_CustomizationIdle
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference          Node                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (NoDestructor)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSequenceEvaluatorReference CallFunc_SetSequenceWithInertialBlending_ReturnValue             (NoDestructor)

void UABP_Lantern_Layer_C::Set_CustomizationIdle(struct FAnimUpdateContext& Context, struct FAnimNodeReference& Node, bool Temp_bool_Variable, const struct FSequenceEvaluatorReference& CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, class UAnimSequenceBase* Temp_object_Variable, class UAnimSequenceBase* Temp_object_Variable_1, class UAnimSequenceBase* K2Node_Select_Default, const struct FSequenceEvaluatorReference& CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Lantern_Layer_C", "Set_CustomizationIdle");

	Params::UABP_Lantern_Layer_C_Set_CustomizationIdle_Params Parms{};

	Parms.Context = Context;
	Parms.Node = Node;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue = CallFunc_SetSequenceWithInertialBlending_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Lantern_Layer.ABP_Lantern_Layer_C.GetBP_CustomizationCharacterThreadSafe
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACustomizationCharacter_C*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class ACustomizationCharacter_C*   K2Node_DynamicCast_AsCustomization_Character                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ACustomizationCharacter_C* UABP_Lantern_Layer_C::GetBP_CustomizationCharacterThreadSafe(class ACustomizationCharacter_C* K2Node_DynamicCast_AsCustomization_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Lantern_Layer_C", "GetBP_CustomizationCharacterThreadSafe");

	Params::UABP_Lantern_Layer_C_GetBP_CustomizationCharacterThreadSafe_Params Parms{};

	Parms.K2Node_DynamicCast_AsCustomization_Character = K2Node_DynamicCast_AsCustomization_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ABP_Lantern_Layer.ABP_Lantern_Layer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_Layer_AnimGraphNode_ModifyBone_4E2A55A845C0A08CCD1A848FAC0EFB10
// (BlueprintEvent)
// Parameters:

void UABP_Lantern_Layer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_Layer_AnimGraphNode_ModifyBone_4E2A55A845C0A08CCD1A848FAC0EFB10()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Lantern_Layer_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Lantern_Layer_AnimGraphNode_ModifyBone_4E2A55A845C0A08CCD1A848FAC0EFB10");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Lantern_Layer.ABP_Lantern_Layer_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Lantern_Layer_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Lantern_Layer_C", "BlueprintUpdateAnimation");

	Params::UABP_Lantern_Layer_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Lantern_Layer.ABP_Lantern_Layer_C.ExecuteUbergraph_ABP_Lantern_Layer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAnathemaPlayerCharacter_BP_C*CallFunc_GetBP_AnathemaPlayerCharBPThreadSafe_ReturnValue        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHolsteredVisual_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_Customization_C* CallFunc_GetABP_PlayerCustomizationThreadSafe_ReturnValue        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_Customization_C* CallFunc_GetABP_PlayerCustomizationThreadSafe_ReturnValue_1      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UABP_Player_Customization_C* CallFunc_GetABP_PlayerCustomizationThreadSafe_ReturnValue_2      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Lantern_Layer_C::ExecuteUbergraph_ABP_Lantern_Layer(int32 EntryPoint, class AAnathemaPlayerCharacter_BP_C* CallFunc_GetBP_AnathemaPlayerCharBPThreadSafe_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsHolsteredVisual_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, class UABP_Player_Customization_C* CallFunc_GetABP_PlayerCustomizationThreadSafe_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UABP_Player_Customization_C* CallFunc_GetABP_PlayerCustomizationThreadSafe_ReturnValue_1, class UABP_Player_Customization_C* CallFunc_GetABP_PlayerCustomizationThreadSafe_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_Contains_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Lantern_Layer_C", "ExecuteUbergraph_ABP_Lantern_Layer");

	Params::UABP_Lantern_Layer_C_ExecuteUbergraph_ABP_Lantern_Layer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBP_AnathemaPlayerCharBPThreadSafe_ReturnValue = CallFunc_GetBP_AnathemaPlayerCharBPThreadSafe_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsHolsteredVisual_ReturnValue = CallFunc_IsHolsteredVisual_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_GetABP_PlayerCustomizationThreadSafe_ReturnValue = CallFunc_GetABP_PlayerCustomizationThreadSafe_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetABP_PlayerCustomizationThreadSafe_ReturnValue_1 = CallFunc_GetABP_PlayerCustomizationThreadSafe_ReturnValue_1;
	Parms.CallFunc_GetABP_PlayerCustomizationThreadSafe_ReturnValue_2 = CallFunc_GetABP_PlayerCustomizationThreadSafe_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


