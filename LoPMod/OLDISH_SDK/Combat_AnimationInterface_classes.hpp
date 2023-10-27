#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// AnimBlueprintGeneratedClass Combat_AnimationInterface.Combat_AnimationInterface_C
class ICombat_AnimationInterface_C : public IAnimLayerInterface
{
public:

	static class UClass* StaticClass();
	static class ICombat_AnimationInterface_C* GetDefaultObj();

	void HandsIK_Override(const struct FPoseLink& InputPose, double HandsIK_Alpha, double SpringStrength, double SpringDamping, struct FPoseLink* HandsIK_Override);
	void LanternOverlay(const struct FPoseLink& LanternLayeringPose, enum class ELocomotionState CurrentLocomotionState_L, struct FPoseLink* LanternOverlay);
	void RangedOverlay(const struct FPoseLink& RangedLayeringPose, enum class ELocomotionState CurrentLocomotionState_R, struct FPoseLink* RangedOverlay);
	void MagicOverlay(const struct FPoseLink& MagicLayeringPose, enum class ELocomotionState CurrentLocomotionState_M, struct FPoseLink* MagicOverlay);
	void DualWieldOverlay(const struct FPoseLink& DualWieldLayeringPose, enum class ELocomotionState CurrentLocomotionState_DW, struct FPoseLink* DualWieldOverlay);
	void SecondaryOverlay(const struct FPoseLink& SecondaryLayeringPose, enum class ELocomotionState CurrentLocomotionState_S, struct FPoseLink* SecondaryOverlay);
	void PrimaryOverlay(const struct FPoseLink& PrimaryLayeringPose, enum class ELocomotionState CurrentLocomotionState_P, double R_Hand_Unequipped_Alpha, double L_Hand_Unequipped_Alpha, struct FPoseLink* PrimaryOverlay);
	void Locomotion_Blocking(const struct FPoseLink& InPose, struct FPoseLink* Locomotion_Blocking);
	void Locomotion(struct FPoseLink* Locomotion);
	void AL_AimingOffset(const struct FPoseLink& UpperBody_Additive, double AimingAlpha, double AimingPitch, double AimingYaw, class UBlendSpace* AimOffset_BS, struct FPoseLink* AL_AimingOffset);
	void AL_PlayerFlails(const struct FPoseLink& InPose_Flails, struct FPoseLink* AL_PlayerFlails);
};

}


