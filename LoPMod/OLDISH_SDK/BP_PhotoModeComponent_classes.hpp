#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1DF8 (0x2668 - 0x870)
// BlueprintGeneratedClass BP_PhotoModeComponent.BP_PhotoModeComponent_C
class UBP_PhotoModeComponent_C : public UPhotoModeComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x870(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_PhotoModeWidget_C*                PhotoModeWidgetRef;                                // 0x878(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            PlayerRef;                                         // 0x880(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      CameraRef;                                         // 0x888(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         UsingPhotoMode_;                                   // 0x890(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PauseGameWhenUsingPhotoMode_;                      // 0x891(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DD9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           MenuColor;                                         // 0x894(0x14)(Edit, BlueprintVisible)
	enum class EPauseGameMethod                  PauseGameMethod;                                   // 0x8A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowMouseCursorByDefault_;                         // 0x8A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowPhotoResolutionOption_;                        // 0x8AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowMouseCursorOption_;                            // 0x8AB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FreeCameraOption_;                                 // 0x8AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DDA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FreeCameraMaximumDistance;                         // 0x8B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseMaximumDistanceLimit;                           // 0x8B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DDB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FreeCameraSensitivity;                             // 0x8C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMultiplayerGame_;                                // 0x8C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFirstPersonGame_;                                // 0x8C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowTakePictureOption_;                            // 0x8CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ResetControlRotationAfterClosingPM;                // 0x8CB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DDC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MaxUpDownCameraDistance;                           // 0x8D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxLeftRightCameraDistance;                        // 0x8D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSPhotoModeComponentGameLogo>  GameLogos;                                         // 0x8E0(0x10)(Edit, BlueprintVisible)
	TArray<struct FSPostProcessPressets>         PostProcessPresets;                                // 0x8F0(0x10)(Edit, BlueprintVisible)
	double                                       DefaultFOV;                                        // 0x900(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              DefaultCameraRotation;                             // 0x908(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FPostProcessSettings                  DefaultPostProcess;                                // 0x920(0x6E0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPostProcessSettings                  DefaultPhotoModePostProcess;                       // 0x1000(0x6E0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPostProcessSettings                  MenuPhotoModePostProcess;                          // 0x16E0(0x6E0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ApplyMenuColor;                                    // 0x1DC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DDD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GamepadIconStyle;                                  // 0x1DC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultSpringArmLength;                            // 0x1DC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MouseCursor;                                       // 0x1DD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DDE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSPostProcessRendering>        PostProcessRenders;                                // 0x1DD8(0x10)(Edit, BlueprintVisible)
	struct FVector                               DefaultSocketOffset;                               // 0x1DE8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseCustomScreenshotFolder_;                        // 0x1E00(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DDF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     PlayerControllerRef;                               // 0x1E08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         UsingPostProcessVolume_;                           // 0x1E10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DE0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APostProcessVolume*                    PostProcessVolume;                                 // 0x1E18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FSPhotoModeIsOnConfis                 PhotoModeIsOnWarning;                              // 0x1E20(0x64)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_3DE1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              DefaultControlRotation;                            // 0x1E88(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        PhotoModeViewportZOrder;                           // 0x1EA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ExistingPostProcess;                               // 0x1EA4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DE2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                PostProcessVolumeClass;                            // 0x1EA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUnbound;                                         // 0x1EB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DE3[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPostProcessSettings                  OriginalPostProcess;                               // 0x1EC0(0x6E0)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       GlobalTimeDilationBackup;                          // 0x25A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputMode                        InputModeAfterClosingPhotoMode;                    // 0x25A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DE4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CurrentTimeDilation;                               // 0x25B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AutoSizePerTab;                                    // 0x25B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DE5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            PhotoModeOpened;                                   // 0x25C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            PhotoModeClosed;                                   // 0x25D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         ShowCharacterRotationOption_;                      // 0x25E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FocusWhenHoveringOverSlider;                       // 0x25E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ControllerTickBackup;                              // 0x25E2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsYourSpringArmTickableWhenPaused;                 // 0x25E3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsYourCameraTickableWhenPaused;                    // 0x25E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsWorldPaused;                                     // 0x25E5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DE6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             ScreenshotResolution;                              // 0x25E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BlockingScreenshot;                                // 0x25F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DE7[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CachedPlayerTransform;                             // 0x2600(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Lantern;                                           // 0x2660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_PhotoModeComponent_C* GetDefaultObj();

	struct FPhotoModeSettings GetPhotoModeSettings(const struct FPhotoModeSettings& CallFunc_GetDefaultPhotoModeSettings_Settings);
	void SetScreenshotPath(const class FString& CallFunc_Directory_Path_Correction_Corrected_Path, const class FString& CallFunc_NormalizeScreenshotPath_Normalized_Path);
	void GetDefaultPhotoModeSettings(struct FPhotoModeSettings* Settings, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetValue_ReturnValue, float CallFunc_GetValue_ReturnValue_1, float CallFunc_GetValue_ReturnValue_2, float CallFunc_GetValue_ReturnValue_3, float CallFunc_GetValue_ReturnValue_4, float CallFunc_GetValue_ReturnValue_5, float CallFunc_GetValue_ReturnValue_6, float CallFunc_GetValue_ReturnValue_7, float CallFunc_GetValue_ReturnValue_8, float CallFunc_GetValue_ReturnValue_9, float CallFunc_GetValue_ReturnValue_10, bool CallFunc_IsChecked_ReturnValue, float CallFunc_GetValue_ReturnValue_11, float CallFunc_GetValue_ReturnValue_12, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FPhotoModeSettings& K2Node_MakeStruct_PhotoModeSettings, const struct FPhotoModeSettings& K2Node_MakeStruct_PhotoModeSettings_1);
	void PauseWorld(class USceneStateSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_GetIsStateLoaded_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Unpause(bool CallFunc_SetGamePaused_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast);
	void Pause(float CallFunc_GetGlobalTimeDilation_ReturnValue, float CallFunc_GetGlobalTimeDilation_ReturnValue_1, bool CallFunc_SetGamePaused_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetGlobalTimeDilation_ReturnValue_2, double K2Node_VariableSet_GlobalTimeDilationBackup_ImplicitCast, double K2Node_VariableSet_CurrentTimeDilation_ImplicitCast, double K2Node_VariableSet_CurrentTimeDilation_ImplicitCast_1, float CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast);
	void UpdateOutputFolder(const class FString& Custom_Path, const class FString& CallFunc_Directory_Path_Correction_Corrected_Path, const class FString& CallFunc_NormalizeScreenshotPath_Normalized_Path);
	void GetCameraLocation(struct FVector* CameraLocation);
	void GetPostProcessVolume(bool* IsValid, class APostProcessVolume** PostProcessVolume, class APostProcessVolume* HigherPostProcessVolume, double GreatestPriority, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class APostProcessVolume* K2Node_DynamicCast_AsPost_Process_Volume, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	void UnpausedGameAxisMovementControl(double AxisValueIn, double* AxisValueOut, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_SelectFloat_ReturnValue);
	void Initialization(class ACharacter* PlayerReference, class UCameraComponent* CameraComponentReference, class APlayerController*& PlayerController);
	void ToggleWidget(bool Active);
	void ToggleGrid();
	void ResetPhotoMode();
	void ExecuteUbergraph_BP_PhotoModeComponent(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue, class USceneStateSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_GetIsStateLoaded_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UCommonActivatableWidget* CallFunc_PushContentToLayer_ForPlayerController_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, class UWBP_PhotoModeWidget_C* K2Node_DynamicCast_AsWBP_Photo_Mode_Widget, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetGlobalTimeDilation_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetGlobalTimeDilation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class APostProcessVolume* K2Node_DynamicCast_AsPost_Process_Volume, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SetGamePaused_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_CustomEvent_Active, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_BreakVector4_X, double CallFunc_BreakVector4_Y, double CallFunc_BreakVector4_Z, double CallFunc_BreakVector4_W, const struct FSPostProcessPressets& K2Node_MakeStruct_SPostProcessPressets, class ACharacter* K2Node_CustomEvent_PlayerReference, class UCameraComponent* K2Node_CustomEvent_CameraComponentReference, class APlayerController* K2Node_CustomEvent_PlayerController, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, class USceneStateSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_GetIsStateLoaded_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_GetGlobalTimeDilation_ReturnValue_2, double K2Node_VariableSet_CurrentTimeDilation_ImplicitCast, double K2Node_VariableSet_GlobalTimeDilationBackup_ImplicitCast, double K2Node_VariableSet_DefaultFOV_ImplicitCast, float CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast, double K2Node_MakeStruct_Temperature_16_BF1E5824433833CC4EF4309B3DA68CC9_ImplicitCast, float CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast, float CallFunc_SetGlobalTimeDilation_TimeDilation_ImplicitCast_1, double K2Node_VariableSet_CurrentTimeDilation_ImplicitCast_1);
	void PhotoModeClosed__DelegateSignature();
	void PhotoModeOpened__DelegateSignature(double CurrentTimeDilation);
};

}


