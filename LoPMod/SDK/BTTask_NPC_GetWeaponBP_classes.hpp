#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD8 - 0xA8)
// BlueprintGeneratedClass BTTask_NPC_GetWeaponBP.BTTask_NPC_GetWeaponBP_C
class UBTTask_NPC_GetWeaponBP_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                BBValue;                                           // 0xB0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBTTask_NPC_GetWeaponBP_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_NPC_GetWeaponBP(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UEquipableInventoryWeapon* CallFunc_GetPrimaryWeaponEquipment_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetSpawnedActorInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
};

}


