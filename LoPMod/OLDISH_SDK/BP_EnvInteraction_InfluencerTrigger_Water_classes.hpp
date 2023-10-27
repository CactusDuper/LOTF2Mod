#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2D0 - 0x2C0)
// BlueprintGeneratedClass BP_EnvInteraction_InfluencerTrigger_Water.BP_EnvInteraction_InfluencerTrigger_Water_C
class ABP_EnvInteraction_InfluencerTrigger_Water_C : public ABP_EnvInteraction_InfluencerTrigger_Box_C
{
public:
	class UDualRealmBehaviourComponent*          DualRealmBehaviour;                                // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  WaterPlane;                                        // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_EnvInteraction_InfluencerTrigger_Water_C* GetDefaultObj();

	void UserConstructionScript(const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_GetActorScale3D_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue);
};

}


