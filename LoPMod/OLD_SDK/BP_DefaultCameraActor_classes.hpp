#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x9E8 - 0x9E0)
// BlueprintGeneratedClass BP_DefaultCameraActor.BP_DefaultCameraActor_C
class ABP_DefaultCameraActor_C : public AHexBaseCameraActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_DefaultCameraActor_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_DefaultCameraActor(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


