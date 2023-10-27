#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2D0 - 0x2A0)
// BlueprintGeneratedClass AnchorForgingArea_BP.AnchorForgingArea_BP_C
class AAnchorForgingArea_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NPS_BedOfFlowers_Small;                            // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  VisualDebug;                                       // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnchorForgingAreaComponent*           AnchorForgingArea;                                 // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       Decal;                                             // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAnchorForgingArea_BP_C* GetDefaultObj();

	void UserConstructionScript(const struct FVector& CallFunc_GetActorScale3D_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void ReceiveBeginPlay();
	void OnForgedAnchorVolumeVisualsChanged_Event(bool bIsVisualsEnabled);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_AnchorForgingArea_BP(int32 EntryPoint, class UDeveloperMenuSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UDeveloperMenuSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_bIsVisualsEnabled, bool CallFunc_Not_PreBool_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}


