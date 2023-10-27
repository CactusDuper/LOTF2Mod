#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x2B4 - 0x2A0)
// BlueprintGeneratedClass BP_EnvInteraction_InfluencerTrigger.BP_EnvInteraction_InfluencerTrigger_C
class ABP_EnvInteraction_InfluencerTrigger_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Water;                                             // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Mud;                                               // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Snow;                                              // 0x2B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Foliage;                                           // 0x2B3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_EnvInteraction_InfluencerTrigger_C* GetDefaultObj();

	void CheckInfluencers(TArray<class UBP_Comp_EnvInteraction_C*>& New_Influencers, const TArray<class AActor*>& Overlaping, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UBP_Comp_EnvInteraction_C* CallFunc_Array_Get_Item, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors);
	void ActivateInfluencer(class UBP_Comp_EnvInteraction_C* InputPin);
	void DeactivateInfluencer(class UBP_Comp_EnvInteraction_C* Influencer);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void NewInfluencerHandler(class UBP_Comp_EnvInteraction_C* Influencer);
	void RegisterTrigger();
	void ExecuteUbergraph_BP_EnvInteraction_InfluencerTrigger(int32 EntryPoint, class AActor* K2Node_Event_OtherActor_1, class AActor* K2Node_Event_OtherActor, class UBP_Comp_EnvInteraction_C* CallFunc_GetComponentByClass_ReturnValue, class UBP_Comp_EnvInteraction_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction, bool K2Node_DynamicCast_bSuccess, class UBP_Comp_EnvInteraction_C* K2Node_CustomEvent_Influencer, class AActor* CallFunc_GetOwner_ReturnValue, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue_1, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_Contains_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
};

}


