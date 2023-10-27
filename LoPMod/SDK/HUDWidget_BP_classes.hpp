#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0x6F0 - 0x5E0)
// WidgetBlueprintGeneratedClass HUDWidget_BP.HUDWidget_BP_C
class UHUDWidget_BP_C : public UHudWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ShowHUDAnim;                                       // 0x5E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HideHUDAnim;                                       // 0x5F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                              Container_LowerPart;                               // 0x5F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_0;                                     // 0x600(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_71;                                       // 0x608(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_QuickBarWidget_C*                 WBP_QuickBarWidget;                                // 0x610(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SwitchableStances_C*              WBP_SwitchableStances;                             // 0x618(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsRemotePlayerVisible;                             // 0x620(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D81[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryComponent*                   Inventory;                                         // 0x628(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultToastLifetime_0;                            // 0x630(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  ForgeAnchorEnemiesTooNearToForgeText;              // 0x638(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ForgeAnchorNavMeshNotFoundToForgeText;             // 0x650(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ForgeAnchorCollisionWithWorldCantForgeText;        // 0x668(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ForgeAnchorInsideForbiddenAreaCantForgeText;       // 0x680(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HudVisible;                                        // 0x698(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3D82[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, class FText>                     WitherStagesText;                                  // 0x6A0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UHUDWidget_BP_C* GetDefaultObj();

	void ToggleHUD();
	void Initialize(class APlayerController* PlayerController, class ALOTF2HUD* LOTF2HUD);
	void UpdateRemotePlayerStatus(class APlayerCharacter* Player_Character);
	void HideRemotePlayerStatus();
	void ShowRemotePlayerStatus(class APlayerCharacter* Player_Character);
	void OnRemotePlayerDeath(float DamageAmount, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnFailedToUnlockDoor_BP(class UItemData* LockFailItem);
	void OnOpenDoorIncorrectSide_BP();
	void OnForgeAnchorFailedToForge_BP(enum class EForgeAnchorFailReason FailReason);
	void OnWitherSideEffect_BP(TArray<class UGameplayEffectUIData*>& UiDatas);
	void OnWitherStageChange_BP(int32 StageIndex);
	void OnWitherStart_BP();
	void HideHUD();
	void ShowHUD();
	void Construct();
	void On_Wither_Level_Progress_Change_Handler(float NewWither);
	void ExecuteUbergraph_HUDWidget_BP(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWitherSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, float CallFunc_GetLevelProgress_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_GetNumLevels_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, int32 Temp_int_Array_Index_Variable, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 Temp_int_Variable, class FText CallFunc_GetOnFailedToUnlockDoorText_ReturnValue, float K2Node_CustomEvent_DamageAmount, class UDamageType* K2Node_CustomEvent_DamageType, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, class UItemData* K2Node_Event_lockFailItem, class FText CallFunc_GetForgeAnchorInsufficientResourcesToForgeText_ReturnValue, class FText CallFunc_GetItemName_ReturnValue, class FText Temp_text_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, enum class EForgeAnchorFailReason K2Node_Event_failReason, enum class EForgeAnchorFailReason Temp_byte_Variable, class FText K2Node_Select_Default, TArray<class UGameplayEffectUIData*>& K2Node_Event_uiDatas, int32 Temp_int_Loop_Counter_Variable, class UGameplayEffectUIData* CallFunc_Array_Get_Item, class UGameplayEffectUIData_IconAndText* K2Node_DynamicCast_AsGameplay_Effect_UIData_Icon_and_Text, bool K2Node_DynamicCast_bSuccess, class UGameplayEffectUIData_TextOnly* K2Node_DynamicCast_AsGameplay_Effect_UIData_Text_Only, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 K2Node_Event_stageIndex, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class FText CallFunc_GetOnOpenDoorIncorrectSideText_ReturnValue, float K2Node_CustomEvent_newWither, class UWitherSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast);
};

}


