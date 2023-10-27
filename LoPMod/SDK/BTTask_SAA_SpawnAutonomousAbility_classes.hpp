#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x190 (0x238 - 0xA8)
// BlueprintGeneratedClass BTTask_SAA_SpawnAutonomousAbility.BTTask_SAA_SpawnAutonomousAbility_C
class UBTTask_SAA_SpawnAutonomousAbility_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSubclassOf<class USubAutonomousAbilityData> Saa_Data;                                          // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FSpawnDefinition                      Spawn_Definition;                                  // 0xB8(0x120)(Edit, BlueprintVisible, NoDestructor)
	bool                                         UseBB_AsSpawner;                                   // 0x1D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FE1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                BBValue;                                           // 0x1E0(0x28)(Edit, BlueprintVisible)
	bool                                         SaveSAAToBB;                                       // 0x208(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FE3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                SAABBValue;                                        // 0x210(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBTTask_SAA_SpawnAutonomousAbility_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_SAA_SpawnAutonomousAbility(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, TArray<class AActor*>& CallFunc_SpawnAutonomousAbilityActor_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_SpawnAutonomousAbilityActor_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


