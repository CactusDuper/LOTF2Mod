#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x290 (0x530 - 0x2A0)
// BlueprintGeneratedClass BP_SoulflayDoor.BP_SoulflayDoor_C
class ABP_SoulflayDoor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHierarchicalInstancedStaticMeshComponent* Flowers;                                           // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkPortalComponent*                    AkPortal;                                          // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHitBoxComponent*                      AkPortal_Trigger;                                  // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkAnathemaComponent*                  AkAnathema;                                        // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  RadialRootsB;                                      // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  RadialRootsA;                                      // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDualRealmBehaviourComponent*          DualRealmBehaviour;                                // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  AxiomMeshB;                                        // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  AxiomMeshA;                                        // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ChildActorB;                                       // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ChildActorA;                                       // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ScalableRoots_01B;                                 // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  WallOfRootsB;                                      // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ScalableRoots_02B;                                 // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       SideB;                                             // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ScalableRoots_02A;                                 // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  WallOfRootsA;                                      // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ScalableRoots_01A;                                 // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       SideA;                                             // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Trigger_Area;                                      // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Wall2;                                             // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Wall1;                                             // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  DoorCollision;                                     // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       MovingPivot;                                       // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        RadialRoots_Out_Dissolve_050715F0451FD58D22C473B2AB8C5C09; // 0x370(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                RadialRoots_Out__Direction_050715F0451FD58D22C473B2AB8C5C09; // 0x374(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    RadialRoots_Out;                                   // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        RadialRoots_In_Dissolve_9CAC9CE042977943B7D8A5941DFC0ECA; // 0x380(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                RadialRoots_In__Direction_9CAC9CE042977943B7D8A5941DFC0ECA; // 0x384(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    RadialRoots_In;                                    // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        ScalableRoots_Out_Dissolve_B80BA83647B328507F70D483E2B1EF8E; // 0x390(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScalableRoots_Out__Direction_B80BA83647B328507F70D483E2B1EF8E; // 0x394(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScalableRoots_Out;                                 // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        ScalableRoots_In_Dissolve_37836A2942A72D87873B3C90A0BFC1DE; // 0x3A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ScalableRoots_In__Direction_37836A2942A72D87873B3C90A0BFC1DE; // 0x3A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ScalableRoots_In;                                  // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        WallOfRoots_Out_Dissolve_604842F043DEBB9F5099BBBF28DD5B91; // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                WallOfRoots_Out__Direction_604842F043DEBB9F5099BBBF28DD5B91; // 0x3B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_660[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    WallOfRoots_Out;                                   // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        WallOfRoots_In_Dissolve_21FC049540C19703B5F96FADBD088238; // 0x3C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                WallOfRoots_In__Direction_21FC049540C19703B5F96FADBD088238; // 0x3C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_663[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    WallOfRoots_In;                                    // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InitialWorldLocation;                              // 0x3D0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Offset;                                            // 0x3E8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TimeToMove;                                        // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InUse;                                             // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_665[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeToStayOpen;                                    // 0x40C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOpen;                                             // 0x410(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_669[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkAnathemaEvent                      Ak_Anathema_Event_Stop_Loop_Disengage;             // 0x418(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       DurationDissolve;                                  // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAkAnathemaEvent                      OpenSound;                                         // 0x470(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAkAnathemaEvent                      CloseSound;                                        // 0x4C0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       PortalOpenDelay;                                   // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FlowerBloomRadius;                                 // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                HexSoulflayableActorA;                             // 0x520(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	class AActor*                                HexSoulflayableActorB;                             // 0x528(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SoulflayDoor_C* GetDefaultObj();

	void OnRep_HexSoulflayableActorB(bool CallFunc_IsValid_ReturnValue);
	void OnRep_HexSoulflayableActorA(bool CallFunc_IsValid_ReturnValue);
	void OnRep_bOpen(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void UserConstructionScript(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector4& CallFunc_MakeVector4_ReturnValue, float CallFunc_SetDefaultCustomPrimitiveDataFloat_Value_ImplicitCast);
	void WallOfRoots_In__FinishedFunc();
	void WallOfRoots_In__UpdateFunc();
	void ScalableRoots_In__FinishedFunc();
	void ScalableRoots_In__UpdateFunc();
	void RadialRoots_In__FinishedFunc();
	void RadialRoots_In__UpdateFunc();
	void WallOfRoots_Out__FinishedFunc();
	void WallOfRoots_Out__UpdateFunc();
	void ScalableRoots_Out__FinishedFunc();
	void ScalableRoots_Out__UpdateFunc();
	void RadialRoots_Out__FinishedFunc();
	void RadialRoots_Out__UpdateFunc();
	void OnActorSpawned_4269D26A42B72ECDD08426908EF714A1(class AActor* SpawnedActor);
	void OnActorSpawned_303504E14CACE6CF0711A6B046C1264D(class AActor* SpawnedActor);
	void OnApplySoulFlay(struct FVector& PullDirection);
	void MulticastOpen_Hole();
	void MulticastClose_Hole();
	void OpenHole();
	void CloseHole();
	void BndEvt__BP_SoulflayDoor_Trigger_Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__BP_SoulflayDoor_Trigger_Area_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_SoulflayDoor(int32 EntryPoint, class AActor* K2Node_CustomEvent_spawnedActor_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* Temp_object_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* K2Node_CustomEvent_spawnedActor, class AActor* Temp_object_Variable_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_4, const struct FVector& K2Node_Event_pullDirection, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_5, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, bool CallFunc_Array_IsEmpty_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class UHexReplaceChildActorForMultiplayerLatent* CallFunc_ReplaceChildActorForMultiplayer_ReturnValue, class UHexReplaceChildActorForMultiplayerLatent* CallFunc_ReplaceChildActorForMultiplayer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AHexSoulFlayableObject_ReappearingYankableDude_BP_C* K2Node_DynamicCast_AsHex_Soul_Flayable_Object_Reappearing_Yankable_Dude_BP, bool K2Node_DynamicCast_bSuccess_1, class AHexSoulFlayableObject_ReappearingYankableDude_BP_C* K2Node_DynamicCast_AsHex_Soul_Flayable_Object_Reappearing_Yankable_Dude_BP_1, bool K2Node_DynamicCast_bSuccess_2, class AHexSoulFlayableObject_ReappearingYankableDude_BP_C* K2Node_DynamicCast_AsHex_Soul_Flayable_Object_Reappearing_Yankable_Dude_BP_2, bool K2Node_DynamicCast_bSuccess_3, class AHexSoulFlayableObject_ReappearingYankableDude_BP_C* K2Node_DynamicCast_AsHex_Soul_Flayable_Object_Reappearing_Yankable_Dude_BP_3, bool K2Node_DynamicCast_bSuccess_4, bool Temp_bool_Has_Been_Initd_Variable, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_SetPlayRate_NewRate_ImplicitCast, float CallFunc_SetPlayRate_NewRate_ImplicitCast_1, float CallFunc_SetPlayRate_NewRate_ImplicitCast_2, float CallFunc_SetPlayRate_NewRate_ImplicitCast_3, float CallFunc_SetPlayRate_NewRate_ImplicitCast_4, float CallFunc_SetPlayRate_NewRate_ImplicitCast_5, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1, float CallFunc_Delay_Duration_ImplicitCast_2, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1, float CallFunc_SetDefaultCustomPrimitiveDataFloat_Value_ImplicitCast, float CallFunc_SetDefaultCustomPrimitiveDataFloat_Value_ImplicitCast_1);
};

}


