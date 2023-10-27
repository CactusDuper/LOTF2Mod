#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x458 - 0x450)
// BlueprintGeneratedClass GA_ChangeEquipmentServerInitiated.GA_ChangeEquipmentServerInitiated_C
class UGA_ChangeEquipmentServerInitiated_C : public UGA_ChangeEquipment
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_ChangeEquipmentServerInitiated_C* GetDefaultObj();

	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_ChangeEquipmentServerInitiated(int32 EntryPoint, bool K2Node_Event_bWasCancelled);
};

}


