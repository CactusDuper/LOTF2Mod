#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2C0 - 0x2A8)
// BlueprintGeneratedClass BP_SkelMeshWeaponItemVisual.BP_SkelMeshWeaponItemVisual_C
class ABP_SkelMeshWeaponItemVisual_C : public AItemVisual
{
public:
	class USkeletalMeshComponent*                WeaponSkeletalMesh;                                // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  WeaponBuffVFXEmitter;                              // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  WeaponBuffVFXEmitterSocketToAttach;                // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkelMeshWeaponItemVisual_C* GetDefaultObj();

	void UserConstructionScript(bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue);
};

}


