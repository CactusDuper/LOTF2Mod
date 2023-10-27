#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x368 - 0x2A0)
// BlueprintGeneratedClass AN_Ambient_Sound.AN_Ambient_Sound_C
class AAN_Ambient_Sound_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHitSphereComponent*                   ExternalSphere;                                    // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkAnathemaComponent*                  AkAnathema;                                        // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowDebug;                                         // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         Ak_Audio_Event;                                    // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Occlusion_Refresh_Interval;                        // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RadiusMultiplier;                                  // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OuterSpreadSphereRadius;                           // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InnerSpreadSphereRadius;                           // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxDistance;                                       // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                          MCAkComponent;                                     // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MCAkWorldLocation;                                 // 0x300(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               AKWorldLocation;                                   // 0x318(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ValidAKEvent;                                      // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Exited;                                            // 0x331(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42FF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Playing_ID;                                        // 0x334(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AttenuationSphereRadius;                           // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ExternalSphereRadius;                              // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHitSphereComponent*                   AttenuationSphere;                                 // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHitSphereComponent*                   InnerSpreadSphere;                                 // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHitSphereComponent*                   OuterSpreadSphere;                                 // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Speaker;                                           // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAN_Ambient_Sound_C* GetDefaultObj();

	void IsDebugNecessary(bool* ShowDebug, bool ShowDebugLocal, const class FString& CallFunc_GetPlatformUserName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FAN_AudioAmbientVisualization_Struct& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsEditor_ReturnValue);
	void CreateDebugObjects(const struct FTransform& Temp_struct_Variable, const struct FTransform& Temp_struct_Variable_1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, class UHitSphereComponent* CallFunc_AddComponent_ReturnValue_1, const struct FTransform& Temp_struct_Variable_2, const struct FTransform& Temp_struct_Variable_3, class UHitSphereComponent* CallFunc_AddComponent_ReturnValue_2, class UHitSphereComponent* CallFunc_AddComponent_ReturnValue_3, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_2, bool CallFunc_K2_AttachToComponent_ReturnValue_3);
	void IsAKEventValid(bool* IsAKValid, bool CallFunc_IsValid_ReturnValue);
	void SetDebugSpheresRadius(float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast, float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast_1, float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast_2);
	void DestroyDebugObjects();
	void Set_Occlusion_Refresh_Interval(float K2Node_VariableSet_OcclusionRefreshInterval_ImplicitCast);
	void Interact(TArray<struct FGameplayTag>* Tags);
	void Show_Debug_Script(const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FVector& CallFunc_GetMCAKWorldLocation_MCAkWorldLocation, bool CallFunc_GetMCAKWorldLocation_ValidLocation, double CallFunc_Vector_Distance_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void SetExitedIni(bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_B_ImplicitCast);
	void SetAKWorldLocation(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void SetVisibilityDebugObjects();
	void Show_Debug_Objects();
	void Set_Sphere_Radius(float CallFunc_GetMaxAttenuationRadius_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_GetMaxAttenuationRadius_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, float CallFunc_SetGameObjectRadius_in_innerRadius_ImplicitCast, float CallFunc_SetGameObjectRadius_in_outerRadius_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double K2Node_VariableSet_OuterSpreadSphereRadius_ImplicitCast);
	void UserConstructionScript(bool CallFunc_isDebugNecessary_ShowDebug, bool CallFunc_isAKEventValid_isAKValid);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__AN_Ambient_Sound_ExternalSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__AN_Ambient_Sound_ExternalSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void StopSoundReset();
	void StartSoundReset();
	void StartPlaySound();
	void StopPlaySound();
	void TriggerNotExited();
	void TriggerExited();
	void CustomEvent(enum class EWorldResetReason ResetReason);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_AN_Ambient_Sound(int32 EntryPoint, FDelegateProperty_ Temp_delegate_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_Event_DeltaSeconds, bool Temp_bool_IsClosed_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_IsLocalPlayer_isLocalPlayer, bool CallFunc_IsLocalPlayer_isLocalPlayer_1, class UAnathemaGameSystems* CallFunc_GetWorldSubsystem_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, class USpawnDirector* CallFunc_GetSpawnDirector_ReturnValue, int32 CallFunc_PostAssociatedAkEventAsync_PlayingID, bool CallFunc_isDebugNecessary_ShowDebug, bool CallFunc_GetLOTF2GameMode_IsValid, class ALOTF2GameMode* CallFunc_GetLOTF2GameMode_GameMode, enum class EWorldResetReason K2Node_CustomEvent_resetReason, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_GetMCAKComponent_validAkComp, class UAkComponent* CallFunc_GetMCAKComponent_PlayerAkComp, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_GetMCAKWorldLocation_MCAkWorldLocation, bool CallFunc_GetMCAKWorldLocation_ValidLocation);
};

}


