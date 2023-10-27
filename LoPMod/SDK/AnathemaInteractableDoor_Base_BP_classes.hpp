#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4B0 - 0x4A8)
// BlueprintGeneratedClass AnathemaInteractableDoor_Base_BP.AnathemaInteractableDoor_Base_BP_C
class AAnathemaInteractableDoor_Base_BP_C : public AAnathemaInteractableDoor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AAnathemaInteractableDoor_Base_BP_C* GetDefaultObj();

	bool TriggerClose();
	bool TriggerLock();
	bool TriggerOpen();
	bool TriggerUnlock();
	void NotifySetDoorState(bool Is_Open);
	double ConditionalFlipDirection(double Value, bool Forward, bool Temp_bool_Variable, double CallFunc_Subtract_DoubleDouble_ReturnValue, double K2Node_Select_Default);
	void UpdateArrows();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AnathemaInteractableDoor_Base_BP(int32 EntryPoint, bool CallFunc_IsOpen_ReturnValue);
};

}


