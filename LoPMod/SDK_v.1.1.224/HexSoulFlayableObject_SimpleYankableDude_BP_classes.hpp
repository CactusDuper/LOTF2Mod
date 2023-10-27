#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x81 (0x391 - 0x310)
// BlueprintGeneratedClass HexSoulFlayableObject_SimpleYankableDude_BP.HexSoulFlayableObject_SimpleYankableDude_BP_C
class AHexSoulFlayableObject_SimpleYankableDude_BP_C : public AHexSoulFlayableObject
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SM_soulflayable_object_base_proto1;                // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     DudeWorldCollision;                                // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PNS_WispySoulSmoke_SoulflayableObjects_VFX;        // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         SoulflayCollider;                                  // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTargetComponent*                      Target;                                            // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponentBudgeted*        AS_Proto_DeadBody_StigmaPose_Ascetic2_SkeletalMeshBComponent1; // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponentBudgeted*        AS_Proto_DeadBody_StigmaPose_Ascetic2_SkeletalMeshBComponent0; // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoftRepulsionCapsuleComponent*        SoftRepulsionCapsule;                              // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PNS_SoulFlayableObject_Impact_VFX;                 // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoulflayableHintWidgetComponent*      SoulflayableHintWidget;                            // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PNS_Moths_InteractableObject;                      // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  VisualDebug;                                       // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          IdleAnimMontage;                                   // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          YankAnimMontage;                                   // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       AutoResetTime;                                     // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInSoulFlayedState;                                // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AHexSoulFlayableObject_SimpleYankableDude_BP_C* GetDefaultObj();

	void IsInSoulFlayedState(bool* bReturnValue);
	void UserConstructionScript(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnNotifyEnd_724C9397456136B3A5B0B68F222755E1(class FName NotifyName);
	void OnNotifyBegin_724C9397456136B3A5B0B68F222755E1(class FName NotifyName);
	void OnInterrupted_724C9397456136B3A5B0B68F222755E1(class FName NotifyName);
	void OnBlendOut_724C9397456136B3A5B0B68F222755E1(class FName NotifyName);
	void OnCompleted_724C9397456136B3A5B0B68F222755E1(class FName NotifyName);
	void PlayAnimMontage(class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition);
	void ReceiveBeginPlay();
	void SetSoulFlayTargetingEnabled(bool bEnabled);
	void OnSoulFlayYank();
	void ResetForSoulFlay();
	void InitializeForSoulFlay();
	void BndEvt__HexSoulFlayableObject_attached_v2_BP_SoulFlayComponent_K2Node_ComponentBoundEvent_0_SoulPullStartedDelegate__DelegateSignature(class AActor* Instigator, const struct FVector& PullDirectionWS);
	void ExecuteUbergraph_HexSoulFlayableObject_SimpleYankableDude_BP(int32 EntryPoint, class FName K2Node_CustomEvent_notifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_notifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_notifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_notifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, bool Temp_bool_Variable, enum class ECollisionEnabled Temp_byte_Variable, enum class ECollisionEnabled Temp_byte_Variable_1, class UAnimMontage* K2Node_CustomEvent_MontageToPlay, float K2Node_CustomEvent_PlayRate, float K2Node_CustomEvent_StartingPosition, double CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, bool K2Node_CustomEvent_bEnabled, bool CallFunc_Not_PreBool_ReturnValue, enum class ECollisionEnabled K2Node_Select_Default, class FName K2Node_CustomEvent_notifyName_4, class AActor* K2Node_ComponentBoundEvent_Instigator, const struct FVector& K2Node_ComponentBoundEvent_PullDirectionWS, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_RandomFloatInRange_Max_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_PlayAnimMontage_StartingPosition_ImplicitCast, float CallFunc_PlayAnimMontage_PlayRate_ImplicitCast);
};

}


