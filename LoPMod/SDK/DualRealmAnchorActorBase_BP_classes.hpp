#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x4D0 - 0x468)
// BlueprintGeneratedClass DualRealmAnchorActorBase_BP.DualRealmAnchorActorBase_BP_C
class ADualRealmAnchorActorBase_BP_C : public ADualRealmAnchorActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     PNS_AnchorLamp_Tendrils;                           // 0x470(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PNS_Anchor_Tendrils_Activation;                    // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  WitherForbiddenArea_BP;                            // 0x480(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PNS_Moths_InteractableObject;                      // 0x488(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BoxAreaPrevention;                                 // 0x490(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  InactiveLight;                                     // 0x498(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  ActiveLight;                                       // 0x4A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActorWidgetComponent*                 AnchorLights;                                      // 0x4A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Spawnpoint_02;                                     // 0x4B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Spawnpoint_03;                                     // 0x4B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Spawnpoint_01;                                     // 0x4C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADualRealmAnchorActorBase_BP_C* GetDefaultObj();

	void TriggerFirstTimeActivationVFX();
	void ToggleLights(bool Condition);
	void ReceiveBeginPlay();
	void OnSoulBind();
	void OnSoulUnbind();
	void OnStateChanged_Event(enum class EDualRealmAnchorState State);
	void ExecuteUbergraph_DualRealmAnchorActorBase_BP(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EDualRealmAnchorState K2Node_CustomEvent_state, enum class EDualRealmAnchorState CallFunc_GetState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


