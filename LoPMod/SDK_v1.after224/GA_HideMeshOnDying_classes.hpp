#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x450 - 0x448)
// BlueprintGeneratedClass GA_HideMeshOnDying.GA_HideMeshOnDying_C
class UGA_HideMeshOnDying_C : public UAnathemaGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_HideMeshOnDying_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_HideMeshOnDying(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwningComponentFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


