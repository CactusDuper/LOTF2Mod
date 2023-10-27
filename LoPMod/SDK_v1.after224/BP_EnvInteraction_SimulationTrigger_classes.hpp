#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2D0 - 0x2A0)
// BlueprintGeneratedClass BP_EnvInteraction_SimulationTrigger.BP_EnvInteraction_SimulationTrigger_C
class ABP_EnvInteraction_SimulationTrigger_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Water;                                             // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Mud;                                               // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Snow;                                              // 0x2B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Foliage;                                           // 0x2B3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsActive_;                                         // 0x2B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Propagation_Factor;                                // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Pressure_Damping_Factor;                           // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URuntimeVirtualTexture*                SnowHeightfield;                                   // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_EnvInteraction_SimulationTrigger_C* GetDefaultObj();

	void NewMainCharacterHandler(class AActor* New_Main_Character, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void StopSimulation();
	void StartSimulation();
	void RegisterTrigger();
	void ExecuteUbergraph_BP_EnvInteraction_SimulationTrigger(int32 EntryPoint, class AActor* K2Node_Event_OtherActor, enum class EEndPlayReason K2Node_Event_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_OtherActor_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue_1, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_2, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction_1, bool K2Node_DynamicCast_bSuccess_1, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue_2, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_3, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_4, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue_3, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue_4, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction_3, bool K2Node_DynamicCast_bSuccess_3, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction_4, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
};

}


