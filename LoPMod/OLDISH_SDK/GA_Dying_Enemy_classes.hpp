#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x548 - 0x540)
// BlueprintGeneratedClass GA_Dying_Enemy.GA_Dying_Enemy_C
class UGA_Dying_Enemy_C : public UGA_DyingBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x540(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Dying_Enemy_C* GetDefaultObj();

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Dying_Enemy(int32 EntryPoint, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class ABaseAIController* K2Node_DynamicCast_AsBase_AIController, bool K2Node_DynamicCast_bSuccess_1);
};

}


