#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x4D8 - 0x4B0)
// BlueprintGeneratedClass BP_AnathemaEnemySpawner_v2.BP_AnathemaEnemySpawner_v2_C
class ABP_AnathemaEnemySpawner_v2_C : public ASimpleCharacterSpawner
{
public:
	class UNPCConfigComponent*                   NPCConfig;                                         // 0x4B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x4B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x4C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextRender;                                        // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Billboard_failsafe;                                // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AnathemaEnemySpawner_v2_C* GetDefaultObj();

	void UserConstructionScript(bool CallFunc_IsEditor_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


