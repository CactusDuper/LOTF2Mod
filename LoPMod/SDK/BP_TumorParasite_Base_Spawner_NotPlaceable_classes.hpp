#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x4C8 - 0x4B0)
// BlueprintGeneratedClass BP_TumorParasite_Base_Spawner_NotPlaceable.BP_TumorParasite_Base_Spawner_NotPlaceable_C
class ABP_TumorParasite_Base_Spawner_NotPlaceable_C : public ASimpleCharacterSpawner
{
public:
	class UTextRenderComponent*                  EditorTextRender;                                  // 0x4B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParasiteTetheringConfigComponent*     ParasiteTetheringConfig;                           // 0x4B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x4C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_TumorParasite_Base_Spawner_NotPlaceable_C* GetDefaultObj();

};

}


