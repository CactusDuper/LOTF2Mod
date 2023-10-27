#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0xDE0 - 0xD70)
// BlueprintGeneratedClass AnathemaPlayerCharacterController_BP.AnathemaPlayerCharacterController_BP_C
class AAnathemaPlayerCharacterController_BP_C : public APlayerCharacterController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD70(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAttackQueryComponent_C*               AttackQueryComponent;                              // 0xD78(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         MenuInGameMain_IsOpen;                             // 0xD80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Cheat_Combo1_IsPressed;                            // 0xD81(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Cheat_Combo2_IsPressed;                            // 0xD82(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C24[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFreeFlyCamera_BP_C*                   FreeFlyCamera;                                     // 0xD88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Cheat_Combo3_IsPressed;                            // 0xD90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Cheat_Combo4_IsPressed;                            // 0xD91(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Cheat_Combo5_IsPressed;                            // 0xD92(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Cheat_Combo6_IsPressed;                            // 0xD93(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MenuInGameInventory_IsOpen;                        // 0xD94(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHudDisplayed;                                    // 0xD95(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInStartMenu_0;                                   // 0xD96(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C25[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SlomoSpeed;                                        // 0xD98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDebugCoordinates_C*                   CoordinateDebugHUD;                                // 0xDA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      CurrentRemoteCharacter;                            // 0xDA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UDebugSpawnDirSeed_C*                  SpawnDirSeedDebugHUD;                              // 0xDB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ResurrectPending;                                  // 0xDB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C26[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TimeInLimboAfterFirstDeath;                        // 0xDC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                PawnClassBeforeFreeFly;                            // 0xDC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UFreeFly_ActionContext_BP_C*           FreeFlyInputContext;                               // 0xDD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ALOTF2HUD*                             LOTF2HUD;                                          // 0xDD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAnathemaPlayerCharacterController_BP_C* GetDefaultObj();

	void CREATEDELEGATE_PROXYFUNCTION_0(class AActor* InstigatorActor, struct FGameplayTagContainer& InstigatorTags, bool bDeathWasObserved);
	void CREATEDELEGATE_PROXYFUNCTION_1(class AActor* InstigatorActor, struct FGameplayTagContainer& InstigatorTags, bool bDeathWasObserved);
	void AddMagicsToInventory(TArray<class UClass*>& InitialWeapons, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, class UInventoryComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UEquipableInventoryMagic* CallFunc_SpawnObject_ReturnValue, class UInventoryItem* CallFunc_AddItem_ReturnValue);
	void AddItemsToInventory(TArray<class UClass*>& InitialWeapons, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, class UInventoryComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UEquipableInventoryWeapon* CallFunc_SpawnObject_ReturnValue, class UInventoryItem* CallFunc_AddItem_ReturnValue);
	void Set_Visuals_Parameters(double InnerRealm, double OuterRealm, double InnerObjects, double OuterObjects, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3);
	void SetFriendlyFireActive(bool bValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetCoopPlayerCharacterController_IsValid, class APlayerCharacterController* CallFunc_GetCoopPlayerCharacterController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1);
	void MakePawnInvulnerable(class APawn* CallFunc_K2_GetPawn_ReturnValue, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void SpawnDirSeedDebugEnd(bool CallFunc_IsSpawnDirSeedDebugEnabled_ReturnValue);
	void SpawnDirSeedDebugStart(bool CallFunc_IsSpawnDirSeedDebugEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_AddToPlayerScreen_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UDebugSpawnDirSeed_C* CallFunc_Create_ReturnValue);
	bool IsFriendlyFireActive(class APawn* CallFunc_K2_GetPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetAcceptsDamageFromPlayers_ReturnValue);
	void CoordinatesDebugEnd(bool CallFunc_IsCoordinatedDebugEnabled_ReturnValue);
	void CoordinatesDebugStart(bool CallFunc_IsCoordinatedDebugEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_AddToPlayerScreen_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UDebugCoordinates_C* CallFunc_Create_ReturnValue);
	void FreeFlightToggle(bool CallFunc_IsFreeFlightEnabled_ReturnValue);
	void VS2InventorySetup(const TArray<class UClass*>& MagicInventoryData, const TArray<class UClass*>& InventoryData, class UMarkItemInventoryItem_BP_C* CallFunc_SpawnObject_ReturnValue, TArray<class UClass*>& K2Node_MakeArray_Array, TArray<class UClass*>& K2Node_MakeArray_Array_1, class UInventoryComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_HasItem_ReturnValue, class UInventoryItem* CallFunc_AddItem_ReturnValue, bool CallFunc_HasItemFromClass_ReturnValue, class UInventoryItem* CallFunc_AddItemByClass_ReturnValue, class UInventoryItem* CallFunc_AddItemByData_ReturnValue, bool CallFunc_HasItem_ReturnValue_1, class UInventoryItem* CallFunc_AddItemByClass_ReturnValue_1, bool CallFunc_HasItemFromClass_ReturnValue_1, class UInventoryItem* CallFunc_AddItemByClass_ReturnValue_2, bool CallFunc_HasItemFromClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue);
	void MakePawnVulnerable(class APawn* CallFunc_K2_GetPawn_ReturnValue, class AAnathemaPlayerCharacter_BP_C* K2Node_DynamicCast_AsAnathema_Player_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void FreeFly_End(int32 CallFunc_GetPlayerControllerID_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class AHexCharacterCameraManager* K2Node_DynamicCast_AsHex_Character_Camera_Manager, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void FreeFly_Start(int32 CallFunc_GetPlayerControllerID_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class AHexCharacterCameraManager* K2Node_DynamicCast_AsHex_Character_Camera_Manager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFreeFlyCamera_BP_C* CallFunc_FinishSpawningActor_ReturnValue);
	void FreeFlyStartMsg();
	void FreeFlyEndMsg(const struct FTransform& Spawn_pos);
	void FreeFlyEndMsgVerify();
	void ShowHUDToastMessage(class FText& Content);
	void ReceivePossess(class APawn* PossessedPawn);
	void HandleRemotePlayerSpawn(class APlayerCharacter* Character);
	void Handle_Remote_Player_Death(class AActor* InstigatorActor, const struct FGameplayTagContainer& InstigatorTags, bool bDeathWasObserved);
	void ToggleHUD();
	void ReceiveBeginPlay();
	void PlayerStarted();
	void ExecuteUbergraph_AnathemaPlayerCharacterController_BP(int32 EntryPoint, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FTransform& K2Node_CustomEvent_spawn_pos, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, bool Temp_bool_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class UPlayerActionManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class UFreeFly_ActionContext_BP_C* CallFunc_SpawnObject_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character_1, bool K2Node_DynamicCast_bSuccess_1, class AController* CallFunc_GetController_ReturnValue_1, class UPlayerActionManagerComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FText K2Node_Event_Content, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsLocalController_ReturnValue, class UHUDWidget_BP_C* K2Node_DynamicCast_AsHUDWidget_BP, bool K2Node_DynamicCast_bSuccess_2, class APawn* K2Node_Event_PossessedPawn, class APlayerCharacter* K2Node_CustomEvent_Character, bool CallFunc_IsValid_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_CustomEvent_InstigatorActor, const struct FGameplayTagContainer& K2Node_CustomEvent_InstigatorTags, bool K2Node_CustomEvent_bDeathWasObserved, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, class ALOTF2PlayerState* K2Node_DynamicCast_AsLOTF2Player_State, bool K2Node_DynamicCast_bSuccess_3, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasStats_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, class UHUDWidget_BP_C* K2Node_DynamicCast_AsHUDWidget_BP_1, bool K2Node_DynamicCast_bSuccess_4, class UHUDWidget_BP_C* K2Node_DynamicCast_AsHUDWidget_BP_2, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsLocalPlayerController_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsLocalPlayerController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_4, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


