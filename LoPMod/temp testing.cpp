class UCOMP_CharacterTendrils_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame
	class UNiagaraComponent*                     Niagara
	TArray<struct FF_CharacterTendrilData>       Tendrils_Data
	class USkeletalMeshComponent*                Skeletal
	bool                                         ShouldActivate
	struct FLinearColor                          Tendrils_Color
	struct FLinearColor                          Tendrils_Emissive
}

class USoftRepulsionCapsuleComponent : public USceneComponent
{
public:
	float                                        CapsuleHalfHeight
	float                                        CapsuleRadius
	bool                                         bUseSizeFromOwnerCapsuleComponentIfAvailable
	float                                        AdditionalMarginSize
	bool                                         bEnableRepulsion
	float                                        RepulsionFactor
}

class UHexAIDamageGaugeComponent : public UActorComponent
{
public:
}

class UDualRealmBehaviourComponent : public UDualRealmComponent
{
public:
	FMulticastInlineDelegateProperty_            OnUpdateRealmLogicDelegate
	FMulticastInlineDelegateProperty_            OnUpdateRealmVisuals
	TMap<class FName, struct FMaterialsToSwitch> UmbralVisibilityMaterials
	TMap<class FName, struct FMaterialsToSwitch> LimboVisibilityMaterials
	TMap<class FName, struct FMaterialsToSwitch> AxiomOriginalMaterials
	TMap<class FName, struct FMaterialsToSwitch> AxiomOriginalMaterialsForEditor
}


class UHexEnvInteractionInfluencerComponent : public UActorComponent
{
public:
	float                                        ParticleSize
	TArray<struct FHexEnvInteractionInfluencerCapsuleDefinition> Capsules
	bool                                         bEnableSpawn
}

class UBP_Comp_EnvInteraction_C : public UHexEnvInteractionInfluencerComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame
	TArray<class ABP_EnvInteraction_InfluencerTrigger_C*> SnowActiveBy
	TArray<class ABP_EnvInteraction_InfluencerTrigger_C*> MudActiveBy
	TArray<class ABP_EnvInteraction_InfluencerTrigger_C*> WaterActiveBy
	TArray<class ABP_EnvInteraction_InfluencerTrigger_C*> FoliageActiveBy
	TMap<enum class EF_EnvInteraction, bool>     ActiveStatus
	TArray<class AActor*>                        SnowActors
}

class UTargetComponent : public USceneComponent
{
public:
	FMulticastInlineDelegateProperty_            OnTargeted
	FMulticastInlineDelegateProperty_            OnTargetOutOfVisibility
	FMulticastInlineDelegateProperty_            OnUnTargeted
	bool                                         bIsBoss
	struct FGameplayTag                          CameraTransitionTag
	class FName                                  AttachingBoneName
	uint8                                        TargetMultiplayerRole
	struct FGameplayAttribute                    AttributeToTrack
	struct FGameplayAttribute                    MaxValueAttributeToTrack
	bool                                         bOverrideMaxDistanceToLockOn
	float                                        MaxDistanceToLockOn
	bool                                         bSupportAutoSwitch
	float                                        LockOnWeightMultiplier
	bool                                         bLockOnActive
	TArray<TWeakObjectPtr<class AActor>>         Targeters
}

class UActorWidgetComponent : public UWidgetComponent
{
public:
	bool                                         bShouldClampWidgetInsideViewport
	double                                       OffsetFromBorder
}

class UPropManagerComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnAttachedProp
	FMulticastInlineDelegateProperty_            OnDetachedProp
	class FName                                  MeshComponentName
	TSubclassOf<class AActor>                    InitialProps[0x21]
	struct FPropsHolder                          AttachedProps[0x21]
	class UMeshComponent*                        SpecifiedMeshComponent
	uint8                                        bUseCharacterMesh : 1
	uint8                                        bDestroyPropsWithOwner : 1
	uint8                                        bUseLegacyJoints : 1
	uint8                                        bHasMainProp : 1
	enum class EPropJoint                        MainPropJoint
}


class UEnemyStatusWidget : public UActorWidget
{
public:
	TMap<class FString, class UTexture2D*>       PlatformLogos
	float                                        HighlightDelay
	float                                        MaxDistance
	float                                        ScaleValue
	float                                        MinScaleValue
	float                                        MaxScaleValue
	float                                        MinimumHealthThresholdPercent
	class UOverlay*                              Overlay_Scale
	class UProgressBar*                          ProgressBar_Health
	class UImage*                                Image_Logo
	class UProgressBar*                          ProgressBar_HealthProvisionalDamage
	class UImage*                                Image_Revenge
	float                                        TimeVisible
	struct FTimerHandle                          FadeOutTimer
	bool                                         bHasBeenFadedIn
	bool                                         bDamageTaken
	float                                        DamageTakenAmount
	class UCommonTextBlock*                      Text_RevengedPlayerName
	class UHealthComponent*                      OwnerHealthComp
	class UAbilitySystemComponent*               AbilitySystemComponent
	TArray<class UTargetComponent*>              OwnerTargetComponents
}

class UEnemyStatusUIWidget_BP_C : public UEnemyStatusWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame
	class UWidgetAnimation*                      Immortal_ReceiveDamage
	class UWidgetAnimation*                      ProvisionalDamageUpdatePosition
	class UWidgetAnimation*                      FadeOutText
	class UWidgetAnimation*                      DamageText
	class UWidgetAnimation*                      FadeIn
	class UWidgetAnimation*                      FadeOut
	class UScaleBox*                             Container_Parasyte
	class UImage*                                Image_Border
	class UImage*                                Image_ParasyteBar
	class UImage*                                Image_ParasytePoint
	class UImage*                                Image_ParasytePoint_Anim
	class UProgressBar*                          ProgressBar_HealthHighlight
	class UProgressBar*                          ProgressBar_Immortal
	class UCanvasPanel*                          RootPanel
	class UTextBlock*                            Text_DamageAmountBack
	class UTextBlock*                            Text_DamageAmountFront
	bool                                         Is_Immortal
	bool                                         Should_Fade_Out
}


class ADismemberedBleed_StatusEffect_BP_C : public AStatusEffect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame
	class USceneComponent*                       DefaultSceneRoot
	double                                       DamagePerTick
	double                                       Damage_Tick_Delay
}

class ABaseAICharacter_BP_C : public ABaseAICharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame
	class UCOMP_CharacterTendrils_C*             COMP_CharacterTendrils
	class USoftRepulsionCapsuleComponent*        SoftRepulsionCapsule
	class UHexAIDamageGaugeComponent*            HexAIDamageGauge
	class UNiagaraComponent*                     FleshieSoulVFX
	class UDualRealmBehaviourComponent*          DualRealmBehaviour
	class UBP_Comp_EnvInteraction_C*             BP_Comp_EnvInteraction
	class UTargetComponent*                      Target1
	class UActorWidgetComponent*                 StatusBar1
	class UPropManagerComponent*                 PropManager
	float                                        Random_EyeBlinking_Timeline_DoubleBlink_FD1158A5461B24D50247CF95B1E9FB93
	float                                        Random_EyeBlinking_Timeline_SingleBlink_FD1158A5461B24D50247CF95B1E9FB93
	enum class ETimelineDirection                Random_EyeBlinking_Timeline__Direction_FD1158A5461B24D50247CF95B1E9FB93
	class UTimelineComponent*                    Random_EyeBlinking_Timeline
	class UEnemyStatusUIWidget_BP_C*             StatusBarWidget
	class UTargetComponent*                      TargetComponent
	class ADismemberedBleed_StatusEffect_BP_C*   BleedOutStatusEffectActor
	bool                                         bLogDebugInfo
	double                                       SoulFlayDistance
	class UAbilityTask_Tick*                     SoulFlayTickTask
	struct FVector                               InitialSoulPullLocation
	double                                       LasSoulFlayDistance
	struct FVector                               DesiredSoulPullLocation
	struct FVector                               RelativeSoulPosition
	class UWidgetComponent*                      DebugAttributes
	bool                                         bSoulHidden
	class UNiagaraSystem*                        FleshieSoulVFX_Smoke
	class UNiagaraSystem*                        FleshieSoulVFX_Blast_Appear
	class UNiagaraSystem*                        FleshieSoulVFX_Blast_Disappear
	bool                                         bPickSingleBlink
	TMap<class UPrimitiveComponent*, class UNiagaraComponent*> SpecialDamageSpots_ActiveParticleSystems
	class UNiagaraSystem*                        SpecialDamageSpots_VFXParticleSystem
}


// Create a helper class to get and process information from ABaseAICharacter_BP_C.

class ABaseAICharacter_BP_C_Helper
{