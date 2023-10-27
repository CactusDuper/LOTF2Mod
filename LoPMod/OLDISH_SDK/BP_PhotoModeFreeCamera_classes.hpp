#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x3E0 - 0x3C8)
// BlueprintGeneratedClass BP_PhotoModeFreeCamera.BP_PhotoModeFreeCamera_C
class ABP_PhotoModeFreeCamera_C : public APhotoModeSpectatorPawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                      Camera;                                            // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                   SpringArm;                                         // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PhotoModeFreeCamera_C* GetDefaultObj();

	void SetCameraCollisionSettings(enum class EGameRealm CurrentRealm, bool K2Node_SwitchEnum_CmpSuccess);
	void OnEndTranscendRealm_Event(enum class EGameRealm OldRealm, enum class EGameRealm NewRealm, enum class EActivateRealmReason Reason);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PhotoModeFreeCamera(int32 EntryPoint, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, enum class EGameRealm CallFunc_GetCurrentGameRealm_ReturnValue, float CallFunc_GetFOVAngle_ReturnValue, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue_1, enum class EGameRealm K2Node_CustomEvent_oldRealm, enum class EGameRealm K2Node_CustomEvent_newRealm, enum class EActivateRealmReason K2Node_CustomEvent_reason, enum class EEndPlayReason K2Node_Event_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


