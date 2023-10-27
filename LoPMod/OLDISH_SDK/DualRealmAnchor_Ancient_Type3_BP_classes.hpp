#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x510 - 0x4D0)
// BlueprintGeneratedClass DualRealmAnchor_Ancient_Type3_BP.DualRealmAnchor_Ancient_Type3_BP_C
class ADualRealmAnchor_Ancient_Type3_BP_C : public ADualRealmAnchorActorBase_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnchorForgingAreaComponent*           AnchorForgingArea;                                 // 0x4D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Portal;                                            // 0x4E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  AnchorStaticMesh;                                  // 0x4E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x4F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAnchorForbiddenAreaComponent*         AnchorForbiddenArea;                               // 0x4F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DynamicMaterialVortex_0;                           // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           NewGamePlusStaticMesh;                             // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADualRealmAnchor_Ancient_Type3_BP_C* GetDefaultObj();

	void OnActivate();
	void OnDeactivated();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_DualRealmAnchor_Ancient_Type3_BP(int32 EntryPoint, enum class EDualRealmAnchorState CallFunc_GetState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_SetStaticMesh_ReturnValue);
};

}


