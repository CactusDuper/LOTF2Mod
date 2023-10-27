#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x4D8 - 0x4B0)
// BlueprintGeneratedClass BP_TotemParasite_Base_Spawner_NotPlaceable.BP_TotemParasite_Base_Spawner_NotPlaceable_C
class ABP_TotemParasite_Base_Spawner_NotPlaceable_C : public ASimpleCharacterSpawner
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         EffectAreaBox;                                     // 0x4B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       EffectAreaCollisionsRoot;                          // 0x4C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  EditorTextRender;                                  // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_TotemParasite_Base_Spawner_NotPlaceable_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnCharacterSpawnedDelegate_Event(class ASimpleCharacterSpawner* Spawner, class ALOTF2Character* Character);
	void ExecuteUbergraph_BP_TotemParasite_Base_Spawner_NotPlaceable(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ASimpleCharacterSpawner* K2Node_CustomEvent_spawner, class ALOTF2Character* K2Node_CustomEvent_Character, class ABP_FOE_UmbralTotemParasite_C* K2Node_DynamicCast_AsBP_FOE_Umbral_Totem_Parasite, bool K2Node_DynamicCast_bSuccess);
};

}


