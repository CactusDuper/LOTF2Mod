#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0xF8 - 0xA8)
// BlueprintGeneratedClass BTTask_UpdateHomeLocation.BTTask_UpdateHomeLocation_C
class UBTTask_UpdateHomeLocation_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       NewMinDistance;                                    // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       NewMaxDistance;                                    // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       NewLimitDistance;                                  // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Radius;                                            // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseEQS;                                            // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_175D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnvQuery*                             QueryTemplate;                                     // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Selected_Location;                                 // 0xE0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTTask_UpdateHomeLocation_C* GetDefaultObj();

	void SetNewHomeLocation(const struct FVector& HomeLocation, const struct FBlackboardKeySelector& K2Node_MakeStruct_BlackboardKeySelector, const struct FBlackboardKeySelector& K2Node_MakeStruct_BlackboardKeySelector_1, const struct FBlackboardKeySelector& K2Node_MakeStruct_BlackboardKeySelector_2, const struct FBlackboardKeySelector& K2Node_MakeStruct_BlackboardKeySelector_3, const struct FBlackboardKeySelector& K2Node_MakeStruct_BlackboardKeySelector_4, const struct FBlackboardKeySelector& K2Node_MakeStruct_BlackboardKeySelector_5, float CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast, float CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast_1, float CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast_2);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void OnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
	void ExecuteUbergraph_BTTask_UpdateHomeLocation(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Vector_IsZero_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation, bool CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, const struct FVector& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, float CallFunc_K2_GetRandomLocationInNavigableRadius_Radius_ImplicitCast, float CallFunc_SetNamedParam_Value_ImplicitCast);
};

}


