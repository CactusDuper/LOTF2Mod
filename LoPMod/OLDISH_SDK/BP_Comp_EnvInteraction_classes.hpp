#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x178 - 0xD0)
// BlueprintGeneratedClass BP_Comp_EnvInteraction.BP_Comp_EnvInteraction_C
class UBP_Comp_EnvInteraction_C : public UHexEnvInteractionInfluencerComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ABP_EnvInteraction_InfluencerTrigger_C*> SnowActiveBy;                                      // 0xD8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_EnvInteraction_InfluencerTrigger_C*> MudActiveBy;                                       // 0xE8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_EnvInteraction_InfluencerTrigger_C*> WaterActiveBy;                                     // 0xF8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_EnvInteraction_InfluencerTrigger_C*> FoliageActiveBy;                                   // 0x108(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TMap<enum class EF_EnvInteraction, bool>     ActiveStatus;                                      // 0x118(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                        SnowActors;                                        // 0x168(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_Comp_EnvInteraction_C* GetDefaultObj();

	void EndInteract(enum class EF_EnvInteraction Type, class ABP_EnvInteraction_InfluencerTrigger_C* Trigger, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess);
	void Trigger_End_Play_Handler(class AActor* Actor, enum class EEndPlayReason EndPlayReason, class ABP_EnvInteraction_InfluencerTrigger_C* Trigger, class ABP_EnvInteraction_InfluencerTrigger_C* K2Node_DynamicCast_AsBP_Env_Interaction_Influencer_Trigger, bool K2Node_DynamicCast_bSuccess);
	void BeginInteract(enum class EF_EnvInteraction Type, class ABP_EnvInteraction_InfluencerTrigger_C* Trigger, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_AddUnique_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void CheckWater();
	void CheckSnow();
	void CheckMud();
	void CheckFoliage();
	void ExecuteUbergraph_BP_Comp_EnvInteraction(int32 EntryPoint, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class ABP_EnvInteraction_InfluencerTrigger_C*>& Temp_object_Variable, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, enum class EF_EnvInteraction Temp_byte_Variable, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction, bool K2Node_DynamicCast_bSuccess, TArray<class ABP_EnvInteraction_InfluencerTrigger_C*>& K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue_1, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_2, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction_1, bool K2Node_DynamicCast_bSuccess_1, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue_2, bool CallFunc_GetSimulationStatus_Value, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction_2, bool K2Node_DynamicCast_bSuccess_2, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_3, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_4, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue_3, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue_4, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction_3, bool K2Node_DynamicCast_bSuccess_3, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction_4, bool K2Node_DynamicCast_bSuccess_4, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_5, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_6, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue_5, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue_6, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction_5, bool K2Node_DynamicCast_bSuccess_5, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction_6, bool K2Node_DynamicCast_bSuccess_6, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_7, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue_7, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_8, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction_7, bool K2Node_DynamicCast_bSuccess_7, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue_8, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction_8, bool K2Node_DynamicCast_bSuccess_8, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_9, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_10, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue_9, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue_10, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction_9, bool K2Node_DynamicCast_bSuccess_9, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction_10, bool K2Node_DynamicCast_bSuccess_10, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_GetSimulationStatus_Value_1, bool Temp_bool_Variable_1, TArray<class ABP_EnvInteraction_InfluencerTrigger_C*>& Temp_object_Variable_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, enum class EF_EnvInteraction Temp_byte_Variable_1, bool CallFunc_GetSimulationStatus_Value_2, TArray<class ABP_EnvInteraction_InfluencerTrigger_C*>& K2Node_Select_Default_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool Temp_bool_Variable_2, TArray<class ABP_EnvInteraction_InfluencerTrigger_C*>& Temp_object_Variable_2, enum class EF_EnvInteraction Temp_byte_Variable_2, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool Temp_bool_Variable_3, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, TArray<class ABP_EnvInteraction_InfluencerTrigger_C*>& Temp_object_Variable_3, bool CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_GetSimulationStatus_Value_3, enum class EF_EnvInteraction Temp_byte_Variable_3, bool Temp_bool_Variable_4, TArray<class ABP_EnvInteraction_InfluencerTrigger_C*>& K2Node_Select_Default_2, int32 CallFunc_Array_Length_ReturnValue_2, bool Temp_bool_Variable_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class ABP_EnvInteraction_InfluencerTrigger_C*>& K2Node_Select_Default_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, class AActor* CallFunc_GetOwner_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class UHexObjectTrackingSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_11, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess_11, class AHexEnvInteraction* CallFunc_GetEnvInteraction_ReturnValue_11, class UDualRealmStateComponent* CallFunc_GetDualRealmStateComponent_ReturnValue, class ABP_EnvInteraction_C* K2Node_DynamicCast_AsBP_Env_Interaction_11, bool K2Node_DynamicCast_bSuccess_12, enum class EGameRealm CallFunc_GetDualRealm_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}

