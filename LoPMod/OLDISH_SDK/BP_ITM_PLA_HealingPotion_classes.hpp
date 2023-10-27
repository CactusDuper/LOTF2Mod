#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x360 - 0x358)
// BlueprintGeneratedClass BP_ITM_PLA_HealingPotion.BP_ITM_PLA_HealingPotion_C
class ABP_ITM_PLA_HealingPotion_C : public AHexSyncWeaponItemVisual
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_ITM_PLA_HealingPotion_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ITM_PLA_HealingPotion(int32 EntryPoint);
};

}


