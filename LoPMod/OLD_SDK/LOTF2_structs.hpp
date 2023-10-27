#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMatchmakingType : uint8
{
	Default                        = 0,
	Invasion                       = 1,
	AllyForInvasion                = 2,
	EMatchmakingType_MAX           = 3,
};

enum class EOnMontageDoneReason : uint8
{
	Completed                      = 0,
	BlendOut                       = 1,
	Interrupted                    = 2,
	Cancelled                      = 3,
	EOnMontageDoneReason_MAX       = 4,
};

enum class ECharacterBodyType : uint8
{
	Male                           = 0,
	Female                         = 1,
	ECharacterBodyType_MAX         = 2,
};

enum class EDialogueEndReason : uint8
{
	Normal                         = 0,
	Forced                         = 1,
	EDialogueEndReason_MAX         = 2,
};

enum class EForgedAnchorState : uint8
{
	None                           = 0,
	Placing                        = 1,
	ForgeInProgress                = 2,
	Forged                         = 3,
	Ancient                        = 4,
	Destroyed                      = 5,
	EForgedAnchorState_MAX         = 6,
};

enum class EDualRealmAnchorState : uint8
{
	Inactive                       = 0,
	Active                         = 1,
	SoulBound                      = 2,
	Deactivated                    = 3,
	EDualRealmAnchorState_MAX      = 4,
};

enum class EActivateRealmReason : uint8
{
	Resurrect                      = 0,
	Shifting                       = 1,
	ForcedTranscend                = 2,
	EActivateRealmReason_MAX       = 3,
};

enum class EGameRealm : uint8
{
	Real                           = 0,
	Umbral                         = 1,
	None                           = 2,
	Limbo                          = 3,
	EGameRealm_MAX                 = 4,
};

enum class ERealmDetectionState : uint8
{
	None                           = 0,
	Axiom                          = 1,
	Umbral                         = 2,
	Dual                           = 3,
	ERealmDetectionState_MAX       = 4,
};

enum class EHexAttackTypeEffectivenes : uint8
{
	Default                        = 0,
	Effective                      = 1,
	Ineffective                    = 2,
	EHexAttackTypeEffectivenes_MAX = 3,
};

enum class EInputType : uint8
{
	Unset                          = 0,
	Keyboard                       = 1,
	Mouse                          = 2,
	Gamepad                        = 3,
	EInputType_MAX                 = 4,
};

enum class EMessagingResult : uint8
{
	Confirmed                      = 0,
	Declined                       = 1,
	Killed                         = 2,
	Unknown                        = 3,
	EMessagingResult_MAX           = 4,
};

enum class EAnswerType : uint8
{
	Undefined                      = 0,
	Yes                            = 1,
	No                             = 2,
	GenericAnswer1                 = 3,
	GenericAnswer2                 = 4,
	GenericAnswer3                 = 5,
	GenericAnswer4                 = 6,
	EAnswerType_MAX                = 7,
};

enum class EeAnathemaAIActionState : uint8
{
	EIdle                          = 0,
	EReady                         = 1,
	EActive                        = 2,
	EPaused                        = 3,
	EFailed                        = 4,
	EFinished                      = 5,
	EAnathemaAIActionState_MAX     = 6,
};

enum class EFEquipmentSlot : uint8
{
	PrimaryWeapon                  = 0,
	SoulsLantern                   = 1,
	RangedWeapon                   = 2,
	SecondaryWeapon                = 3,
	Magic1                         = 4,
	Magic2                         = 5,
	Magic3                         = 6,
	Magic4                         = 7,
	Magic5                         = 8,
	RangedAmmo1                    = 9,
	RangedAmmo2                    = 10,
	RangedAmmo3                    = 11,
	Character                      = 12,
	HeadArmor                      = 13,
	BodyArmor                      = 14,
	ArmsArmor                      = 15,
	LegsArmor                      = 16,
	Accessories                    = 17,
	UmbralTumor                    = 18,
	UmbralTumor2                   = 19,
	UmbralTumor3                   = 20,
	UmbralTumor4                   = 21,
	Ring1                          = 22,
	Ring2                          = 23,
	Amulet                         = 24,
	MAX                            = 25,
	Undefined                      = 255,
};

enum class EPropJoint : uint8
{
	LeftHand                       = 0,
	RightHand                      = 1,
	LeftElbow                      = 2,
	RightElbow                     = 3,
	LeftLeg                        = 4,
	RightLeg                       = 5,
	LeftKnee                       = 6,
	RightKnee                      = 7,
	Tail                           = 8,
	Head                           = 9,
	LeftHandPommel                 = 10,
	RightHandPommel                = 11,
	PropElbow                      = 12,
	PrimaryWeapon                  = 13,
	SoulsLantern                   = 14,
	PrimaryWeaponHolster           = 15,
	RangedWeaponHolster            = 16,
	ThrowableWeaponHolster         = 17,
	LeftProp                       = 18,
	LeftShieldProp                 = 19,
	Neck                           = 20,
	ThrowableHand                  = 21,
	SecondaryWeaponHolster         = 22,
	ShieldHolster                  = 23,
	Quiver                         = 24,
	QuiverAmmo1                    = 25,
	QuiverAmmo2                    = 26,
	QuiverAmmo3                    = 27,
	SmallPrimaryWeaponHolster      = 28,
	SmallSecondaryWeaponHolster    = 29,
	LargeThrowableWeaponHolster    = 30,
	CatalystHolster                = 31,
	None                           = 32,
	MAX                            = 33,
};

enum class ECharCreationMode : uint8
{
	Home                           = 0,
	ClassSelection                 = 1,
	Presets                        = 2,
	CharCustomization              = 3,
	HeadCustomization              = 4,
	Review                         = 5,
	ShapeCustomization             = 6,
	Undefined                      = 7,
	ECharCreationMode_MAX          = 8,
};

enum class EBodyShapeAttributeType : uint8
{
	Undefined                      = 0,
	BodyShape_Muscular             = 1,
	BodyShape_Thin                 = 2,
	BodyShape_Large                = 3,
	Head_Size                      = 4,
	Head_Width                     = 5,
	Head_Height                    = 6,
	Head_Depth                     = 7,
	Skin_Color                     = 8,
	Muscular                       = 9,
	Age                            = 10,
	Brows                          = 11,
	Brows_Ridge                    = 12,
	Brows_Height                   = 13,
	Brows_Color                    = 14,
	Eyes_Spacing                   = 15,
	Eyes_Height                    = 16,
	Eyes_Depth                     = 17,
	Eyes_Iris_Primary_Color        = 18,
	Eyes_Iris_Secondary_Color      = 19,
	Eyes_Glow                      = 20,
	Ears_Angle                     = 21,
	Ears_Height                    = 22,
	Ears_Depth                     = 23,
	Nose_Width                     = 24,
	Nose_Height                    = 25,
	Nose_Depth                     = 26,
	Nose_Bridge                    = 27,
	Mouth_Width                    = 28,
	Mouth_Height                   = 29,
	Mouth_Depth                    = 30,
	Jaw_Cleft_Chin                 = 31,
	Jaw_Width                      = 32,
	Jaw_Height                     = 33,
	Jaw_Depth                      = 34,
	Jaw_Cheekbones                 = 35,
	Teeth_Shape                    = 36,
	Teeth_Color                    = 37,
	Hair_Style                     = 38,
	Primary_Hair_Color             = 39,
	Secondary_Hair_Color           = 40,
	Facial_Hair                    = 41,
	Primary_Facial_Hair_Color      = 42,
	Secondary_Facial_Hair_Color    = 43,
	Face                           = 44,
	Face_Paint                     = 45,
	Face_Scars                     = 46,
	Face_Paint_Color               = 47,
	Face_Scars_Color               = 48,
	Body_Posture                   = 49,
	Body_Type                      = 50,
	Voice                          = 51,
	Tattoo_Chest_Color             = 52,
	Tattoo_Chest_Intensity         = 53,
	Tattoo_Chest_Opacity           = 54,
	Tattoo_Back_Color              = 55,
	Tattoo_Back_Intensity          = 56,
	Tattoo_Back_Opacity            = 57,
	Tattoo_LeftArm_Color           = 58,
	Tattoo_LeftArm_Intensity       = 59,
	Tattoo_LeftArm_Opacity         = 60,
	Tattoo_RightArm_Color          = 61,
	Tattoo_RightArm_Intensity      = 62,
	Tattoo_RightArm_Opacity        = 63,
	Tattoo_LeftLeg_Color           = 64,
	Tattoo_LeftLeg_Intensity       = 65,
	Tattoo_LeftLeg_Opacity         = 66,
	Tattoo_RightLeg_Color          = 67,
	Tattoo_RightLeg_Intensity      = 68,
	Tattoo_RightLeg_Opacity        = 69,
	Tattoo_Forehead_Color          = 70,
	Tattoo_Forehead_Intensity      = 71,
	Tattoo_Forehead_Opacity        = 72,
	Tattoo_LeftCheek_Color         = 73,
	Tattoo_LeftCheek_Intensity     = 74,
	Tattoo_LeftCheek_Opacity       = 75,
	Tattoo_RightCheek_Color        = 76,
	Tattoo_RightCheek_Intensity    = 77,
	Tattoo_RightCheek_Opacity      = 78,
	Tattoo_NoseAndEyes_Color       = 79,
	Tattoo_NoseAndEyes_Intensity   = 80,
	Tattoo_NoseAndEyes_Opacity     = 81,
	Tattoo_Mouth_Color             = 82,
	Tattoo_Mouth_Intensity         = 83,
	Tattoo_Mouth_Opacity           = 84,
	Skin_Color_Intensity           = 85,
	Skin_Color_Mask                = 86,
	Body_Normal_Type               = 87,
	Face_Type                      = 88,
	Tattoo_Chest_Tint              = 89,
	Tattoo_Back_Tint               = 90,
	Tattoo_LeftArm_Tint            = 91,
	Tattoo_RightArm_Tint           = 92,
	Tattoo_LeftLeg_Tint            = 93,
	Tattoo_RightLeg_Tint           = 94,
	Tattoo_Forehead_Tint           = 95,
	Tattoo_LeftCheek_Tint          = 96,
	Tattoo_RightCheek_Tint         = 97,
	Tattoo_NoseAndEyes_Tint        = 98,
	Tattoo_Mouth_Tint              = 99,
	EBodyShapeAttributeType_MAX    = 100,
};

enum class ECustomizationCategory : uint8
{
	Undefined                      = 0,
	Body                           = 1,
	Skin_Color                     = 2,
	Generic_Color                  = 3,
	Head                           = 4,
	Brows                          = 5,
	Eyes                           = 6,
	Ears                           = 7,
	Nose                           = 8,
	Mouth                          = 9,
	Teeth                          = 10,
	Jaw                            = 11,
	Hair                           = 12,
	Facial_Hair                    = 13,
	Face                           = 14,
	Scars                          = 15,
	Tattoos                        = 16,
	Voice                          = 17,
	ECustomizationCategory_MAX     = 18,
};

enum class EEnergyType : uint8
{
	Stamina                        = 0,
	Magic                          = 1,
	Ammo                           = 2,
	ProvisionalDamage              = 3,
	MAX                            = 4,
};

enum class ELocomotionState : uint8
{
	Idle                           = 0,
	SlowWalk                       = 1,
	Walk                           = 2,
	Run                            = 3,
	Sprint                         = 4,
	ELocomotionState_MAX           = 5,
};

enum class EMeleeOption : uint8
{
	Primary                        = 0,
	Secondary                      = 1,
	Count                          = 2,
	EMeleeOption_MAX               = 3,
};

enum class EMeleeStance : uint8
{
	OneHanded                      = 0,
	TwoHanded                      = 1,
	DualWield                      = 2,
	Count                          = 3,
	EMeleeStance_MAX               = 4,
};

enum class ERagdollState : uint8
{
	Inactive                       = 0,
	Active                         = 1,
	EndedInRestingPose             = 2,
	ERagdollState_MAX              = 3,
};

enum class ERangedOption : uint8
{
	None                           = 0,
	Ranged                         = 1,
	Lantern                        = 2,
	Count                          = 3,
	ERangedOption_MAX              = 4,
};

enum class ERangedStance : uint8
{
	None                           = 0,
	Ranged                         = 1,
	Magic                          = 2,
	Lantern                        = 3,
	Count                          = 4,
	ERangedStance_MAX              = 5,
};

enum class EHeadPresetLocation : uint8
{
	Top                            = 0,
	Left                           = 1,
	Right                          = 2,
	EHeadPresetLocation_MAX        = 3,
};

enum class EBodyShapeCamera : uint8
{
	Undefined                      = 0,
	Body_Front                     = 1,
	Body_Back                      = 2,
	Face_Front                     = 3,
	Face_Side                      = 4,
	Class_Selection                = 5,
	Review                         = 6,
	EBodyShapeCamera_MAX           = 7,
};

enum class EStanceType : uint8
{
	None                           = 0,
	Primary                        = 1,
	Secondary                      = 2,
	DualWield                      = 3,
	Ranged                         = 4,
	Magic                          = 5,
	Lantern                        = 6,
	Count                          = 7,
	EStanceType_MAX                = 8,
};

enum class EAITargetEnvelopeType : uint8
{
	Unset                          = 0,
	Visual                         = 1,
	Audio                          = 2,
	Touch                          = 3,
	Sense                          = 4,
	Damage                         = 5,
	EAITargetEnvelopeType_MAX      = 6,
};

enum class ENavigationBoxOptions : uint8
{
	NONE                           = 0,
	Select                         = 1,
	Ok                             = 2,
	Switch                         = 4,
	SwitchCycle                    = 8,
	Return                         = 16,
	Unequip                        = 32,
	UnequipCycle                   = 64,
	RotateAndZoom                  = 128,
	Everything                     = 255,
	ENavigationBoxOptions_MAX      = 256,
};

enum class EHolsterState : uint8
{
	None                           = 0,
	Holstered                      = 1,
	Unholstered                    = 2,
	EHolsterState_MAX              = 3,
};

enum class EHolsterableSlot : uint8
{
	PrimaryWeapon                  = 0,
	SecondaryWeapon                = 1,
	SoulsLantern                   = 2,
	RangedWeapon                   = 3,
	RangedAmmo1                    = 4,
	RangedAmmo2                    = 5,
	RangedAmmo3                    = 6,
	PrimaryWeaponSecondaryVisual   = 7,
	MAX                            = 8,
	Undefined                      = 255,
};

enum class EDualRealmWhisperState : uint8
{
	Unavailable                    = 0,
	Available                      = 1,
	Activated                      = 2,
	Completed                      = 3,
	Disappeared                    = 4,
	EDualRealmWhisperState_MAX     = 5,
};

enum class EWorldResetReason : uint8
{
	Undefined                      = 0,
	TrueDeath                      = 1,
	AnchorResurrect                = 2,
	AnchorFastTravel               = 3,
	EWorldResetReason_MAX          = 4,
};

enum class EAchievementTrackerType : uint8
{
	None                           = 0,
	Quest                          = 1,
	SummonCoopPartner              = 2,
	PvpKillEnemy                   = 3,
	CoopKillBoss                   = 4,
	DonateTotalSocialCoins         = 5,
	UnlockAllAchievements          = 6,
	EAchievementTrackerType_MAX    = 7,
};

enum class EAdaptiveTriggerButton : uint8
{
	LeftTrigger                    = 0,
	RightTrigger                   = 1,
	EAdaptiveTriggerButton_MAX     = 2,
};

enum class EAdaptiveTriggerMode : uint8
{
	Off                            = 0,
	Weapon                         = 1,
	Vibration                      = 2,
	MultiplePositionVibration      = 3,
	Feedback                       = 4,
	MultiplePositionFeedback       = 5,
	SlopeFeedback                  = 6,
	EAdaptiveTriggerMode_MAX       = 7,
};

enum class EeAITurnDirection : uint8
{
	TowardsTarget                  = 0,
	AwayFromTarget                 = 1,
	EAITurnDirection_MAX           = 2,
};

enum class ETurnEnvironmentActionMode : uint8
{
	TurnEnvironmentActionMode_PatrolPoint = 0,
	TurnEnvironmentActionMode_Actor = 1,
	TurnEnvironmentActionMode_Degrees = 2,
	TurnEnvironmentActionMode_MAX  = 3,
};

enum class EAIFactionTeams : uint8
{
	AIFACTION_UNDEFINED            = 0,
	AIFACTION_PLAYER               = 1,
	AIFACTION_RHOGAR               = 2,
	AIFACTION_RHOGARRIENDLY        = 3,
	AIFACTION_PLAYERHOST           = 4,
	AIFACTION_PLAYERCOOP           = 5,
	AIFACTION_PLAYERINVADER        = 6,
	AIFACTION_ENEMY                = 7,
	AIFACTION_ENEMYBIG             = 8,
	AIFACTION_ENEMYRHOGAR          = 9,
	AIFACTION_ENEMYRHOGARBIG       = 10,
	AIFACTION_ENEMYATTESTANT       = 11,
	AIFACTION_ENEMYATTESTANTBIG    = 12,
	AIFACTION_ENEMYUMBRIE          = 13,
	AIFACTION_ENEMYUMBRIEBIG       = 14,
	AIFACTION_ENEMYNATIVE          = 15,
	AIFACTION_ENEMYNATIVEBIG       = 16,
	AIFACTION_FRIEND               = 17,
	AIFACTION_FRIENDANGRY          = 18,
	AIFACTION_FRIENDCOOP           = 19,
	AIFACTION_INVADERCOOP          = 20,
	AIFACTION_COUNT                = 21,
	AIFACTION_MAX                  = 22,
};

enum class EHexAITeams : uint8
{
	Undefined                      = 0,
	PlayerHost                     = 1,
	PlayerCoop                     = 2,
	PlayerInvader                  = 3,
	Enemy                          = 4,
	EnemyRhogar                    = 5,
	EnemyAttestant                 = 6,
	EnemyUmbrie                    = 7,
	EnemyNative                    = 8,
	Friend                         = 9,
	FriendCoop                     = 10,
	InvaderCoop                    = 11,
	EnemyUmbralParasite            = 12,
	HEXAITEAMS_COUNT               = 13,
	EHexAITeams_MAX                = 14,
};

enum class EHexAIFactions : uint8
{
	Undefined                      = 0,
	Player                         = 1,
	Invader                        = 2,
	Enemy                          = 3,
	EnemyRhogar                    = 4,
	EnemyAttestant                 = 5,
	EnemyUmbrie                    = 6,
	EnemyNative                    = 7,
	Friend                         = 8,
	HEXAIFACTIONS_COUNT            = 9,
	EHexAIFactions_MAX             = 10,
};

enum class EPatrolMode : uint8
{
	FullLoop                       = 0,
	LoopBackwards                  = 1,
	NoLoop                         = 2,
	EPatrolMode_MAX                = 3,
};

enum class EPatrolSpeed : uint8
{
	Walk                           = 0,
	Run                            = 1,
	EPatrolSpeed_MAX               = 2,
};

enum class EAITargetSystemThreatType : uint8
{
	High                           = 0,
	Medium                         = 1,
	Low                            = 2,
	None                           = 3,
	EAITargetSystemThreatType_MAX  = 4,
};

enum class EAITargetSystemConfirmationType : uint8
{
	Unconfirmed                    = 0,
	Visual                         = 1,
	Memory                         = 2,
	EAITargetSystemConfirmationType_MAX = 3,
};

enum class EAITargetEnvelopeState : uint8
{
	Uninitialized                  = 0,
	WarmUp                         = 1,
	Active                         = 2,
	Inactive                       = 3,
	EAITargetEnvelopeState_MAX     = 4,
};

enum class ETriggerFirstEncounterCondition : uint8
{
	None                           = 0,
	Hit                            = 1,
	Trigger                        = 2,
	Distance                       = 3,
	ETriggerFirstEncounterCondition_MAX = 4,
};

enum class EAnathemaMultiplayerType : uint8
{
	AMPT_Undefined                 = 0,
	AMPT_Local                     = 1,
	AMPT_Pvp                       = 2,
	AMPT_Coop                      = 3,
	AMPT_MAX                       = 4,
};

enum class EAmmoType : uint8
{
	Arrow                          = 0,
	Bolt                           = 1,
	Throwable                      = 2,
	Undefined                      = 3,
	AmmoType_MAX                   = 4,
};

enum class EAnathemaHitReactionBSInputMode : uint8
{
	None                           = 0,
	ShotYaw                        = 1,
	ShotYawSnappedTo90s            = 2,
	ShotYawPitchClamped            = 3,
	EAnathemaHitReactionBSInputMode_MAX = 4,
};

enum class EDoorOpenRule : uint8
{
	Both                           = 0,
	Front                          = 1,
	Back                           = 2,
	EDoorOpenRule_MAX              = 3,
};

enum class EDoorAxis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	EDoorAxis_MAX                  = 3,
};

enum class EAnathemaQuerySystem : uint8
{
	PlayerHost                     = 0,
	PlayerClientAlly               = 1,
	PlayerClientInvader            = 2,
	QuestDirector                  = 3,
	QuestStateReached              = 4,
	QuestStateComplete             = 5,
	NPCInteraction                 = 6,
	QuestStateActivated            = 7,
	EAnathemaQuerySystem_MAX       = 8,
};

enum class EConditionMode : uint8
{
	Simple                         = 0,
	Advanced                       = 1,
	EConditionMode_MAX             = 2,
};

enum class EHexRotationRateMode : uint8
{
	Default                        = 0,
	FocusUsesRotationRate          = 1,
	RotateBetweenAngles            = 2,
	EHexRotationRateMode_MAX       = 3,
};

enum class EHolsterGroup : uint8
{
	Melee1H                        = 0,
	Melee2H                        = 1,
	MeleeDW                        = 2,
	Lantern                        = 3,
	RangedWeapon                   = 4,
	Throwable                      = 5,
	MAX                            = 6,
	Undefined                      = 255,
};

enum class EArmorType : uint8
{
	Helmet                         = 0,
	Brestplate                     = 1,
	Gloves                         = 2,
	Boots                          = 3,
	Accessories                    = 4,
	EArmorType_MAX                 = 5,
};

enum class ETargetToApply : uint8
{
	All                            = 0,
	Allies                         = 1,
	AlliesAndMe                    = 2,
	Me                             = 3,
	Enemies                        = 4,
	EnemiesAndSmallAllies          = 5,
	AlliesAndNeutral               = 6,
	ETargetToApply_MAX             = 7,
};

enum class EHexDamageDefinitionBehavior : uint8
{
	Damage                         = 0,
	Grab                           = 1,
	TriggerReaction                = 2,
	None                           = 3,
	EHexDamageDefinitionBehavior_MAX = 4,
};

enum class EHexDamageMultipliersSource : uint8
{
	Default                        = 0,
	SpellPower                     = 1,
	EHexDamageMultipliersSource_MAX = 2,
};

enum class EAttributeBonusType : uint8
{
	None                           = 0,
	Positive                       = 1,
	Negative                       = 2,
	EAttributeBonusType_MAX        = 3,
};

enum class EAIBodyStance : uint8
{
	InactiveGuarder                = 0,
	InactivePatroller              = 1,
	InactiveAmbusher               = 2,
	Investigate                    = 3,
	Combat                         = 4,
	EAIBodyStance_MAX              = 5,
};

enum class EAIMoveStyle : uint8
{
	Walk                           = 0,
	Run                            = 1,
	Sprint                         = 2,
	EAIMoveStyle_MAX               = 3,
};

enum class ETargetProximityStatus : uint8
{
	Unreachable                    = 0,
	Close                          = 1,
	Distant                        = 2,
	ETargetProximityStatus_MAX     = 3,
};

enum class EHexCardinalDirection : uint8
{
	Forward                        = 0,
	Backward                       = 1,
	Left                           = 2,
	Right                          = 3,
	EHexCardinalDirection_MAX      = 4,
};

enum class EEquipAnimationType : uint8
{
	None                           = 0,
	Top                            = 1,
	BackCenter                     = 2,
	BackCenterRanged               = 3,
	Bottom                         = 4,
	BottomCrossed                  = 5,
	BottomCrossedLantern           = 6,
	EEquipAnimationType_MAX        = 7,
};

enum class EEquipAnimationState : uint8
{
	NotActive                      = 0,
	Active                         = 1,
	EEquipAnimationState_MAX       = 2,
};

enum class EArmorTintAttributeType : uint8
{
	Undefined                      = 0,
	Head_Metal                     = 1,
	Head_Leather                   = 2,
	Head_Fabric                    = 3,
	Head_Intensity                 = 4,
	Arms_Metal                     = 5,
	Arms_Leather                   = 6,
	Arms_Fabric                    = 7,
	Arms_Intensity                 = 8,
	Body_Metal                     = 9,
	Body_Leather                   = 10,
	Body_Fabric                    = 11,
	Body_Intensity                 = 12,
	Legs_Metal                     = 13,
	Legs_Leather                   = 14,
	Legs_Fabric                    = 15,
	Legs_Intensity                 = 16,
	EArmorTintAttributeType_MAX    = 17,
};

enum class ETattooType : uint8
{
	BodyPaint                      = 0,
	Scarification                  = 1,
	Tattoo                         = 2,
	Scar                           = 3,
	Undefined                      = 4,
	ETattooType_MAX                = 5,
};

enum class ETattooLocation : uint8
{
	Head_Forehead                  = 0,
	Head_LeftEye                   = 1,
	Head_RightEye                  = 2,
	Head_Nose                      = 3,
	Head_Mouth                     = 4,
	Body_Front                     = 5,
	Body_Back                      = 6,
	Body_LeftArm                   = 7,
	Body_RightArm                  = 8,
	Body_LeftLeg                   = 9,
	Body_RightLeg                  = 10,
	Undefined                      = 11,
	ETattooLocation_MAX            = 12,
};

enum class EAngleCheckMode : uint8
{
	Direction                      = 0,
	Range                          = 1,
	EAngleCheckMode_MAX            = 2,
};

enum class EeAIDirection : uint8
{
	Forward                        = 0,
	Back                           = 1,
	Left                           = 2,
	Right                          = 3,
	EAIDirection_MAX               = 4,
};

enum class EReactionType : uint8
{
	Caution                        = 0,
	Search                         = 1,
	EReactionType_MAX              = 2,
};

enum class EHexBlackBoardEntryComparison : uint8
{
	Equal                          = 0,
	NotEqual                       = 1,
	Greater                        = 2,
	Less                           = 3,
	EHexBlackBoardEntryComparison_MAX = 4,
};

enum class EHexAttributeOperation : uint8
{
	Single                         = 0,
	Ratio                          = 1,
	EHexAttributeOperation_MAX     = 2,
};

enum class EHexNavLinkProperty : uint8
{
	Direction                      = 0,
	Height                         = 1,
	Length                         = 2,
	EHexNavLinkProperty_MAX        = 3,
};

enum class EHexNavLinkDistanceCheckOperationType : uint8
{
	Min                            = 0,
	Max                            = 1,
	Range                          = 2,
};

enum class ECooldownComparison : uint8
{
	NotInCooldown                  = 0,
	Greater                        = 1,
	Less                           = 2,
	CooldownComparison_MAX         = 3,
};

enum class EeSamplingConsiderationParam : uint8
{
	Dummy                          = 0,
	DistanceToTarget               = 1,
	HorizontalDistanceToTarget     = 2,
	OwnerHealthRate                = 3,
	TargetHealthRate               = 4,
	OwnerStaminaRate               = 5,
	TargetStaminaRate              = 6,
	OwnerMPRate                    = 7,
	TargetMPRate                   = 8,
	ESamplingConsiderationParam_MAX = 9,
};

enum class EHexConditionMode : uint8
{
	TimeBased                      = 0,
	DistanceWalkedToGoalBased      = 1,
	None                           = 2,
	EHexConditionMode_MAX          = 3,
};

enum class EHexWindowState : uint8
{
	None                           = 0,
	Running                        = 1,
	Done                           = 2,
	EHexWindowState_MAX            = 3,
};

enum class EHexOverrideFocusMode : uint8
{
	DoNotOverride                  = 0,
	Snap                           = 1,
	RotateAtRate                   = 2,
	Locked                         = 3,
	EHexOverrideFocusMode_MAX      = 4,
};

enum class EHexOverrideFocusType : uint8
{
	Actor                          = 0,
	Location                       = 1,
	Always                         = 2,
	EHexOverrideFocusType_MAX      = 3,
};

enum class EActionNodeState : uint8
{
	None                           = 0,
	Waiting                        = 1,
	Running                        = 2,
	EActionNodeState_MAX           = 3,
};

enum class EAIDodgeDirection : uint8
{
	Forward                        = 0,
	Back                           = 1,
	Left                           = 2,
	Right                          = 3,
	EAIDodgeDirection_MAX          = 4,
};

enum class EMoveSidewaysDirection : uint8
{
	Random                         = 0,
	Left                           = 1,
	Right                          = 2,
	EMoveSidewaysDirection_MAX     = 3,
};

enum class EWaitFirstEncounterAnimationToPlay : uint8
{
	WaitFirstEncounterAnimation    = 0,
	TriggerFirstEncounterAnimation = 1,
	EWaitFirstEncounterAnimationToPlay_MAX = 2,
};

enum class EChangeEquipmentAction : uint8
{
	Equip                          = 0,
	Unequip                        = 1,
	EChangeEquipmentAction_MAX     = 2,
};

enum class ECharacterClassUnlockType : uint8
{
	None                           = 0,
	EndGame                        = 1,
	DLC                            = 2,
	EndGameOrDLC                   = 3,
	ECharacterClassUnlockType_MAX  = 4,
};

enum class ECharacterTickState : uint8
{
	ENeedsEvaluation               = 0,
	EEnabled                       = 1,
	ESkippingFrames                = 2,
	ERealmDisabled                 = 3,
	EDead                          = 4,
	EMaxDistanceDisabled           = 5,
	EBudgetDisabled                = 6,
	ECharacterTickState_MAX        = 7,
};

enum class ELodAISense : uint8
{
	None                           = 0,
	Sight                          = 1,
	Hearing                        = 2,
	ELodAISense_MAX                = 3,
};

enum class ECharCreationCameraMode : uint8
{
	Rotate_Zoom                    = 0,
	Rotate_Zoom_Trace              = 1,
	Rotate                         = 2,
	ECharCreationCameraMode_MAX    = 3,
};

enum class EClientDisconnectReason : uint8
{
	ConnectionLost                 = 0,
	KickedByHost                   = 1,
	ClientInitiatedLeave           = 2,
	FinalizingInvasion             = 3,
	FinalizingInvasionByDeath      = 4,
	PlayerRemovedFromSession       = 5,
	NoSaveGameData                 = 6,
	EClientDisconnectReason_MAX    = 7,
};

enum class ECollisionMaskFilter : uint8
{
	IgnoredByPlayerMove            = 0,
	ECollisionMaskFilter_MAX       = 1,
};

enum class ESubsteppedTraceMode : uint8
{
	None                           = 0,
	StrippedTrace                  = 1,
	MontageSampling                = 2,
	ESubsteppedTraceMode_MAX       = 3,
};

enum class EShowStreamingLevelsSortMode : uint8
{
	None                           = 0,
	StaticMeshMemory               = 1,
	TileMemory                     = 2,
	StaticMeshCount                = 3,
	TileCount                      = 4,
	ActorCount                     = 5,
	First                          = 0,
	Last                           = 5,
	EShowStreamingLevelsSortMode_MAX = 6,
};

enum class EDialogueType : uint8
{
	Undefined                      = 0,
	Welcome                        = 1,
	Normal                         = 2,
	Question                       = 3,
	Vendor                         = 4,
	Subtitles                      = 5,
	Farewell                       = 6,
	EDialogueType_MAX              = 7,
};

enum class EDLCStatus : uint8
{
	DLCNone                        = 0,
	DLCAvailable                   = 1,
	DLCNotAvailable                = 2,
	OnlyDLCLicenseAvailable        = 3,
	OnlyDLCReceiptsAvailable       = 4,
	EDLCStatus_MAX                 = 5,
};

enum class EDLCName : uint8
{
	None                           = 0,
	DeluxeDLC                      = 1,
	DarkCrusaderDLC                = 2,
	StartingBoostDLC               = 3,
	ShadersPackDLC                 = 4,
	EDLCName_MAX                   = 5,
};

enum class EForgeAnchorFailReason : uint8
{
	Unknown                        = 0,
	InsufficientResources          = 1,
	InsideForbiddenArea            = 2,
	EnemiesTooNear                 = 3,
	NavMeshNotFound                = 4,
	CollisionWithWorld             = 5,
	EForgeAnchorFailReason_MAX     = 6,
};

enum class EDualRealmState : uint8
{
	Real                           = 0,
	Umbral                         = 1,
	Both                           = 2,
	None                           = 3,
	EDualRealmState_MAX            = 4,
};

enum class EEnergyUseRule : uint8
{
	FullRequired                   = 0,
	AboveZero                      = 1,
	MAX                            = 2,
};

enum class ERegenEnergyState : uint8
{
	Normal                         = 0,
	Exhausted                      = 1,
	WasExhausted                   = 2,
	Tired                          = 3,
	WasTired                       = 4,
	MAX                            = 5,
};

enum class EAnathemaEnvironemntHitFXIntensity : uint8
{
	Default                        = 0,
	Low                            = 1,
	Mid                            = 2,
	High                           = 3,
	EAnathemaEnvironemntHitFXIntensity_MAX = 4,
};

enum class EEquipHand : uint8
{
	Left                           = 0,
	Right                          = 1,
	EEquipHand_MAX                 = 2,
};

enum class EHexEquipmentLoadTier : uint8
{
	Light                          = 0,
	Medium                         = 1,
	Heavy                          = 2,
	Encumbered                     = 3,
	EHexEquipmentLoadTier_MAX      = 4,
};

enum class EStatComparisonDirection : uint8
{
	Undefined                      = 0,
	BiggerIsBetter                 = 1,
	SmallerIsBetter                = 2,
	EStatComparisonDirection_MAX   = 3,
};

enum class EStatComparisonResult : uint8
{
	Undefined                      = 0,
	Equal                          = 1,
	Better                         = 2,
	Worse                          = 3,
	EStatComparisonResult_MAX      = 4,
};

enum class ESupportedPlatforms : uint8
{
	ESP_DEFAULT                    = 0,
	ESP_WINDOWS                    = 1,
	ESP_PS5                        = 2,
	ESP_XBOX                       = 3,
	ESP_MAX                        = 4,
};

enum class EAnathemaHitFXDamageIntensity : uint8
{
	ADL_None                       = 0,
	ADL_Low                        = 1,
	ADL_Mid                        = 2,
	ADL_High                       = 3,
	ADL_Epic                       = 4,
	ADL_MAX                        = 5,
};

enum class EAnathemaUnarmed : uint8
{
	AU_None                        = 0,
	AU_Kick                        = 1,
	AU_Punch                       = 2,
	AU_Head                        = 3,
	AU_MAX                         = 4,
};

enum class EAnathemaHitFXType : uint8
{
	AWHFX_Hit                      = 0,
	AWHFX_Block                    = 1,
	AWHFX_MAX                      = 2,
};

enum class EDamageAmount : uint8
{
	None                           = 0,
	SuperLight                     = 1,
	Light                          = 2,
	Medium                         = 3,
	Heavy                          = 4,
	SuperHeavy                     = 5,
	EDamageAmount_MAX              = 6,
};

enum class ESelectedRangedOption : uint8
{
	Lantern                        = 0,
	Ranged                         = 1,
	ESelectedRangedOption_MAX      = 2,
};

enum class ESensesActivationReaction : uint8
{
	ApproachSource                 = 0,
	WaitBattleStartDistance        = 1,
	LookAtSource                   = 2,
	RunToSource                    = 3,
	StartBattleAI                  = 4,
	ESensesActivationReaction_MAX  = 5,
};

enum class EDamageLevel : uint8
{
	None                           = 0,
	NoStagger                      = 1,
	ShortStagger                   = 2,
	LongStagger                    = 3,
	StaggerToFloor                 = 4,
	StaggerBackwards               = 5,
	FacePlant                      = 6,
	AirJuggleStagger               = 7,
	Push                           = 8,
	EDamageLevel_MAX               = 9,
};

enum class EAttackAttribute : uint8
{
	None                           = 0,
	Slash                          = 1,
	Strike                         = 2,
	Thrust                         = 3,
	Standard                       = 4,
	EAttackAttribute_MAX           = 5,
};

enum class EWeaponCategory : uint8
{
	Sword                          = 0,
	Mace                           = 1,
	Shield                         = 2,
	EWeaponCategory_MAX            = 3,
};

enum class EGuardMovesetCategory : uint8
{
	Weapon                         = 0,
	Shield                         = 1,
	EGuardMovesetCategory_MAX      = 2,
};

enum class ELadderDirection : uint8
{
	None                           = 0,
	Up                             = 1,
	Down                           = 2,
	ELadderDirection_MAX           = 3,
};

enum class EInventoryInteractionActionType : uint8
{
	Use                            = 0,
	Leave                          = 1,
	Destroy                        = 2,
	Donate                         = 3,
	Sell                           = 4,
	Buy                            = 5,
	EInventoryInteractionActionType_MAX = 6,
};

enum class EShotCurrentState : uint8
{
	None                           = 0,
	Reloading                      = 1,
	StartingNotEquipped            = 2,
	Equipped                       = 3,
	Charging                       = 4,
	ChargedLoop                    = 5,
	Shooting                       = 6,
	Failed                         = 7,
	EShotCurrentState_MAX          = 8,
};

enum class ERelativeFlightMovementType : uint8
{
	None                           = 0,
	RelativeToTargetHeight         = 1,
	RelativeToTarget               = 2,
	ERelativeFlightMovementType_MAX = 3,
};

enum class EHexWidgetInputMode : uint8
{
	Default                        = 0,
	GameAndMenu                    = 1,
	Game                           = 2,
	Menu                           = 3,
	Custom                         = 4,
	EHexWidgetInputMode_MAX        = 5,
};

enum class EAlertType : uint8
{
	AlertType_OnCombat             = 0,
	AlertType_OnEvent              = 1,
	AlertType_MAX                  = 2,
};

enum class EApproachMode : int32
{
	TargetActor                    = 0,
	Location                       = 1,
	EApproachMode_MAX              = 2,
};

enum class EHexWalkOffLedgesRequestPriority : uint8
{
	Normal                         = 0,
	High                           = 1,
	EHexWalkOffLedgesRequestPriority_MAX = 2,
};

enum class EHexAILineOfSightOffsetType : uint8
{
	None                           = 0,
	OwnerEyes_Vertical             = 1,
	TargetEyes_Vertical            = 2,
	Custom                         = 3,
	EHexAILineOfSightOffsetType_MAX = 4,
};

enum class EHexSensesMask : uint8
{
	None                           = 0,
	Sight                          = 2,
	Hearing                        = 4,
	Damage                         = 8,
	ESP                            = 16,
	Team                           = 32,
	Touch                          = 64,
	Prediction                     = 128,
	EHexSensesMask_MAX             = 129,
};

enum class EHexTurnToTargetMode : uint8
{
	TurnToActor                    = 0,
	TurnToLocation                 = 1,
	TurnToDirection                = 2,
	EHexTurnToTargetMode_MAX       = 3,
};

enum class EHexBoneTransformType : uint8
{
	Absolute                       = 0,
	Relative                       = 1,
	EHexBoneTransformType_MAX      = 2,
};

enum class EAIRelativeDirection : uint8
{
	None                           = 0,
	Forward                        = 1,
	Backwards                      = 2,
	Left                           = 4,
	Right                          = 8,
	EAIRelativeDirection_MAX       = 9,
};

enum class EHexAIObstacleMask : uint8
{
	None                           = 0,
	WorldStatic                    = 1,
	WorldDynamic                   = 2,
	Players                        = 4,
	NPC                            = 8,
	Destructibles                  = 16,
	EHexAIObstacleMask_MAX         = 17,
};

enum class ESocialCoinsType : uint8
{
	Blue                           = 0,
	Red                            = 1,
	Yellow                         = 2,
	Count                          = 3,
	ESocialCoinsType_MAX           = 4,
};

enum class ESocialAction : uint8
{
	Avenge                         = 0,
	PvP                            = 1,
	Coop                           = 2,
	Count                          = 3,
	ESocialAction_MAX              = 4,
};

enum class ESocialRewardType : uint8
{
	Avenge_Standard                = 0,
	Avenge_Dificult                = 1,
	PvP_Kill                       = 2,
	Coop_Standard                  = 3,
	Coop_Dificult                  = 4,
	Debug_Avenge                   = 5,
	Debug_PvP                      = 6,
	Debug_Coop                     = 7,
	Count                          = 8,
	ESocialRewardType_MAX          = 9,
};

enum class EReportReason : uint8
{
	Cheating                       = 0,
	Count                          = 1,
	EReportReason_MAX              = 2,
};

enum class EDirectionCheckMode : uint8
{
	Distance                       = 0,
	Time                           = 1,
	EDirectionCheckMode_MAX        = 2,
};

enum class EDirectionValidationMode : uint8
{
	Any                            = 0,
	All                            = 1,
	EDirectionValidationMode_MAX   = 2,
};

enum class EAIWorldReaction : uint8
{
	Dismemberment_LeftArm          = 0,
	Dismemberment_RightArm         = 1,
	Dismemberment_Head             = 2,
	Stunned                        = 3,
	BossIntroCinematic             = 4,
	EAIWorldReaction_MAX           = 5,
};

enum class ECombatRole : uint8
{
	None                           = 0,
	Attacker                       = 1,
	Cover                          = 2,
	Spectator                      = 3,
	ECombatRole_MAX                = 4,
};

enum class EHexBattleEffectParamType : uint8
{
	Numeric                        = 0,
	String                         = 1,
	Attribute                      = 2,
	EHexBattleEffectParamType_MAX  = 3,
};

enum class ECombatEventState : uint8
{
	StartMusic                     = 0,
	StopMusic                      = 1,
	StopMusicHostDeath             = 2,
	DeathScreen                    = 3,
	None                           = 4,
	ECombatEventState_MAX          = 5,
};

enum class EDistanceOptionMode : int32
{
	Axis2d                         = 0,
	Axis3d                         = 1,
	Vertical                       = 2,
	EDistanceOptionMode_MAX        = 3,
};

enum class ENonInterpMode : int32
{
	Start                          = 0,
	End                            = 1,
	ENonInterpMode_MAX             = 2,
};

enum class EFollowPitchMode : int32
{
	None                           = 0,
	Pulling                        = 1,
	Always                         = 2,
	EFollowPitchMode_MAX           = 3,
};

enum class ETransitionPriority : uint8
{
	Traversal                      = 0,
	Combat                         = 1,
	PlayerActions                  = 2,
	Count                          = 3,
	ETransitionPriority_MAX        = 4,
};

enum class ETransitionMode : uint8
{
	OnEnter                        = 0,
	OnExit                         = 1,
	ETransitionMode_MAX            = 2,
};

enum class EHexFrustumDefinitionType : uint8
{
	FOV                            = 0,
	PlaneSize                      = 1,
	EHexFrustumDefinitionType_MAX  = 2,
};

enum class EHexDamageFromSourceToTarget : uint8
{
	Undefined                      = 0,
	EnemyToPlayer                  = 1,
	PlayerToEnemy                  = 2,
	EnemyToEnemy                   = 3,
	PlayerToPlayer                 = 4,
	EHexDamageFromSourceToTarget_MAX = 5,
};

enum class EHexDamageFilter : uint8
{
	Damage                         = 0,
	Ignore                         = 1,
	EHexDamageFilter_MAX           = 2,
};

enum class EHexEnvInteractionSimulationBit : uint8
{
	None                           = 0,
	Water                          = 1,
	Foliage                        = 2,
	Snow                           = 4,
	EHexEnvInteractionSimulationBit_MAX = 5,
};

enum class ELOSTestType : uint8
{
	ItemToContext                  = 0,
	ContextToItem                  = 1,
	Invalid                        = 2,
	ELOSTestType_MAX               = 3,
};

enum class EHexFocusDirectionUpdateMode : uint8
{
	Snap                           = 0,
	RotateAtRate                   = 1,
	Locked                         = 2,
	RotateBetweenAngles            = 3,
	HexFocusDirectionUpdateMode_MAX = 4,
};

enum class EFSRQualityMode : int32
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Ultra                          = 3,
	EFSRQualityMode_MAX            = 4,
};

enum class EDLSSQualityMode : int32
{
	UltraPerformance               = 0,
	Performance                    = 1,
	Balanced                       = 2,
	Quality                        = 3,
	DLAA                           = 4,
	EDLSSQualityMode_MAX           = 5,
};

enum class ENVReflexMode : int32
{
	Off                            = 0,
	LowLatency                     = 1,
	LowLatencyWithBoost            = 2,
	ENVReflexMode_MAX              = 3,
};

enum class ESubtitlesSizePreset : uint8
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	ESubtitlesSizePreset_MAX       = 3,
};

enum class EPresetRenderMode : int32
{
	Performance                    = 0,
	Quality                        = 1,
	EPresetRenderMode_MAX          = 2,
};

enum class EHexNavDebugEventType : uint8
{
	NavChunk                       = 0,
	DirtyArea                      = 1,
	TileState                      = 2,
	EHexNavDebugEventType_MAX      = 3,
};

enum class EHexNavEdgeSide : uint8
{
	Left                           = 0,
	Right                          = 1,
	None                           = 2,
	EHexNavEdgeSide_MAX            = 3,
};

enum class EHexNavGetSideMode : uint8
{
	Default                        = 0,
	Inversed                       = 1,
	EHexNavGetSideMode_MAX         = 2,
};

enum class EHexFunnelState : uint8
{
	None                           = 0,
	NotNeeded                      = 1,
	Running                        = 2,
	Done                           = 3,
	EHexFunnelState_MAX            = 4,
};

enum class EHexNavLinkDirection : uint8
{
	Up                             = 0,
	Down                           = 1,
	Bridge                         = 2,
	None                           = 3,
	EHexNavLinkDirection_MAX       = 4,
};

enum class EHexNavLinkActionType_Down : uint8
{
	DoNothing                      = 0,
	Fall                           = 1,
	EHexNavLinkActionType_MAX      = 2,
};

enum class EHexNavLinkActionType_Up : uint8
{
	DoNothing                      = 0,
	Jump                           = 1,
	EHexNavLinkActionType_MAX      = 2,
};

enum class EHexNavLinkUserType : uint8
{
	AI                             = 0,
	Player                         = 1,
	Everyone                       = 2,
	EHexNavLinkUserType_MAX        = 3,
};

enum class EHexNavBoundsGenerationMode : uint8
{
	Automatic                      = 0,
	Manual                         = 1,
	EHexNavBoundsGenerationMode_MAX = 2,
};

enum class EJoinFriendFailureReason : uint8
{
	None                           = 0,
	NotInGame                      = 1,
	HasInvader                     = 2,
	UnableToConnect                = 3,
	NoValidData                    = 4,
	SessionIsFull                  = 5,
	MultiplayerDisabled            = 6,
	AlreadyInSession               = 7,
	SessionDoesNotExist            = 8,
	CouldNotRetrieveAddress        = 9,
	UnknownError                   = 10,
	BlockedByAntiCheat             = 11,
	EJoinFriendFailureReason_MAX   = 12,
};

enum class EHexMultiplayerRole : uint8
{
	OMPR_HOST                      = 0,
	OMPR_ALLY                      = 1,
	OMPR_INVADER                   = 2,
	OMPR_SPECTATOR                 = 3,
	OMPR_NONE                      = 4,
	OMPR_MAX                       = 5,
};

enum class EHexSessionVisibility : uint8
{
	Public                         = 0,
	Friends                        = 1,
	Key                            = 2,
	EHexSessionVisibility_MAX      = 3,
};

enum class EHexDataPersistenceFlags : uint8
{
	ResetsOnWorldReset             = 0,
	ResetsOnNewGamePlus            = 1,
	PersistsOnClient               = 2,
	EHexDataPersistenceFlags_MAX   = 3,
};

enum class EHexCornersOffsettingVersion : uint8
{
	None                           = 0,
	Engine                         = 1,
	Funnel                         = 2,
	PathOffsetter                  = 3,
	EHexCornersOffsettingVersion_MAX = 4,
};

enum class EHexSoulFlayPerformResult : uint8
{
	None                           = 0,
	Success                        = 1,
	HyperArmor                     = 2,
	Blocked                        = 3,
	Parried                        = 4,
	Fail                           = 5,
	EHexSoulFlayPerformResult_MAX  = 6,
};

enum class EHexStateTreeEventType : uint8
{
	StateStart                     = 0,
	StateEnd                       = 1,
	EHexStateTreeEventType_MAX     = 2,
};

enum class ESyncedAnimationRole : uint8
{
	ESAR_Leader                    = 0,
	ESAR_Follower                  = 1,
	ESAR_MAX                       = 2,
};

enum class ESyncedActionRole : uint8
{
	ESAR_Active                    = 0,
	ESAR_Passive                   = 1,
	ESAR_MAX                       = 2,
};

enum class ESyncedAttachmentMode : uint8
{
	ESAM_AttachmentNone            = 0,
	ESAM_AttachmentRelative        = 1,
	ESAM_MAX                       = 2,
};

enum class ETweenType : uint8
{
	Step                           = 0,
	LinearStep                     = 1,
	SmoothStep                     = 2,
	SmootherStep                   = 3,
	QuadraticEaseOut               = 4,
	QuadraticEaseIn                = 5,
	QuadraticEaseInout             = 6,
	QuarticEaseOut                 = 7,
	QuarticEaseIn                  = 8,
	QuarticEaseInout               = 9,
	OcticEaseOut                   = 10,
	OcticEaseIn                    = 11,
	OcticEaseInout                 = 12,
	Count                          = 13,
	ETweenType_MAX                 = 14,
};

enum class EUIExclusivity : uint8
{
	Inclusive                      = 0,
	Exclusive                      = 1,
	Undefined                      = 2,
	EUIExclusivity_MAX             = 3,
};

enum class EUIOnlineMsgCode : uint8
{
	Msg_FeatureRequiresLogin       = 0,
	Msg_LoggedOut                  = 1,
	Msg_RequestFailed              = 2,
	Msg_PurchaseFailed             = 3,
	Msg_DonationFailed             = 4,
	Msg_FeatureOnlyAvailableOnHost = 5,
	Msg_MAX                        = 6,
};

enum class EHitBoxType : uint8
{
	StartBoneOnly                  = 0,
	FromBoneToBone                 = 1,
	EHitBoxType_MAX                = 2,
};

enum class EDoDamageTraceMode : uint8
{
	Undefined                      = 0,
	LineTrace                      = 1,
	ShapeTrace                     = 2,
	EDoDamageTraceMode_MAX         = 3,
};

enum class EDoDamageTargets : uint8
{
	Undefined                      = 0,
	FirstHit                       = 1,
	EveryoneOnce                   = 2,
	EveryoneAlways                 = 3,
	EveryoneHitTimestamp           = 4,
	EDoDamageTargets_MAX           = 5,
};

enum class EDoDamageRebound : uint8
{
	Undefined                      = 0,
	IgnoreFloor                    = 1,
	IgnoreAll                      = 2,
	EDoDamageRebound_MAX           = 3,
};

enum class EDoDamageGeneralMode : uint8
{
	Undefined                      = 0,
	OverlapBased                   = 1,
	TraceBased                     = 2,
	EDoDamageGeneralMode_MAX       = 3,
};

enum class ESpawnType : uint8
{
	SinglePoint_SpawnType          = 0,
	Arc_SpawnType                  = 1,
	Line_SpawnType                 = 2,
	ESpawnType_MAX                 = 3,
};

enum class EShapePivot : uint8
{
	Center                         = 0,
	XAxisBased                     = 1,
	YAxisBased                     = 2,
	ZAxisBased                     = 3,
	EShapePivot_MAX                = 4,
};

enum class EReferenceActor : uint8
{
	Self                           = 0,
	Target                         = 1,
	Instigator                     = 2,
	BlackboardValue                = 3,
	SelfController                 = 4,
	TargetController               = 5,
	EReferenceActor_MAX            = 6,
};

enum class EReferenceActorWhenTargetInvalid : uint8
{
	Self                           = 0,
	Instigator                     = 1,
	EReferenceActorWhenTargetInvalid_MAX = 2,
};

enum class EIntermediateAttachmentMode : uint8
{
	ENone                          = 0,
	EComponent                     = 1,
	EBypass                        = 2,
	EIntermediateAttachmentMode_MAX = 3,
};

enum class EItemSortMode : int32
{
	Normal                         = 0,
	Alphabetical                   = 1,
	Undefined                      = 2,
	EItemSortMode_MAX              = 3,
};

enum class EInteractReason : uint8
{
	Normal                         = 0,
	Failed_MaxItemAmountReached    = 1,
	Failed_ItemAlreadyOwned        = 2,
	EInteractReason_MAX            = 3,
};

enum class EInventoryItemType : uint8
{
	Undefined                      = 0,
	Weapon                         = 1,
	Shield                         = 2,
	Armor                          = 3,
	Magic                          = 4,
	Ammo                           = 5,
	Accessory                      = 6,
	EInventoryItemType_MAX         = 7,
};

enum class EItemInfoDisplayMode : int32
{
	Normal                         = 0,
	Item_Comparison                = 1,
	Level_Comparison               = 2,
	EItemInfoDisplayMode_MAX       = 3,
};

enum class EInventoryVisualizationMode : uint8
{
	Full                           = 0,
	Grid_Character                 = 1,
	Grid_Item                      = 2,
	Grid                           = 3,
	Count                          = 4,
	EInventoryVisualizationMode_MAX = 5,
};

enum class ETitleScreenMode : uint8
{
	Equipment                      = 0,
	Inventory                      = 1,
	Vendor                         = 2,
	Upgrade                        = 3,
	Fast_Travel                    = 4,
	Player_Level_Up                = 5,
	Weapon_Rune_Equipment          = 6,
	Weapon_Rune_Socket             = 7,
	Lantern_Rune_Equipment         = 8,
	Lantern_Rune_Socket            = 9,
	ETitleScreenMode_MAX           = 10,
};

enum class EItemProperties : uint8
{
	Usable                         = 0,
	Inspectable                    = 1,
	Unstackable                    = 2,
	Refillable                     = 3,
	AutoUseOnAddedToPlayerInventory = 4,
	Unique                         = 5,
	Usable_in_Umbral               = 6,
	CanBeSold                      = 7,
	EItemProperties_MAX            = 8,
};

enum class EItemDevStatus : uint8
{
	Disabled                       = 0,
	Development                    = 1,
	Build                          = 2,
	EItemDevStatus_MAX             = 3,
};

enum class ELandingFxType : uint8
{
	NoFx                           = 0,
	Light                          = 1,
	Heavy                          = 2,
	ELandingFxType_MAX             = 3,
};

enum class EWitherChanceOperator : uint8
{
	Add                            = 0,
	Multiply                       = 1,
	EWitherChanceOperator_MAX      = 2,
};

enum class EApplyTagsIntoAbilityResult : uint8
{
	AbilityDoesNotHaveIdentifierTag = 0,
	AbilityWasNotFoundInTheTable   = 1,
	AbilityWasNotChanged           = 2,
	AbilityWasUpdated              = 3,
	EApplyTagsIntoAbilityResult_MAX = 4,
};

enum class EApplyHolsterNotifyResult : uint8
{
	ReplacedOldNotify              = 0,
	ModifiedExistingNotify         = 1,
	Unchanged                      = 2,
	AddedNewNotify                 = 3,
	Error                          = 4,
	EApplyHolsterNotifyResult_MAX  = 5,
};

enum class EFogGateState : uint8
{
	Enabled                        = 0,
	Disabled                       = 1,
	EnabledForClientUnblock        = 2,
	EnabledForClientBlock          = 3,
	None                           = 4,
	EFogGateState_MAX              = 5,
};

enum class EAbilitySystemComponentCreationPolicy : uint8
{
	Never                          = 0,
	Lazy                           = 1,
	Always                         = 2,
	EAbilitySystemComponentCreationPolicy_MAX = 3,
};

enum class ESettingScreenDetailsPanelPosition : uint8
{
	Right                          = 0,
	Bottom                         = 1,
	Hidden                         = 2,
	ESettingScreenDetailsPanelPosition_MAX = 3,
};

enum class EStanceWidgetIndex : uint8
{
	None                           = 0,
	Lantern                        = 1,
	Ranged                         = 2,
	Magic                          = 3,
	Throwable                      = 4,
	EStanceWidgetIndex_MAX         = 5,
};

enum class EHexLoadingState : uint8
{
	None                           = 0,
	Loading                        = 1,
	Loaded                         = 2,
	EHexLoadingState_MAX           = 3,
};

enum class EControllerPreviewControllerModel : uint8
{
	Default                        = 0,
	Xbox                           = 1,
	PS5                            = 2,
	SteamDeck                      = 3,
	EControllerPreviewControllerModel_MAX = 4,
};

enum class EMagicType : uint8
{
	SAA                            = 0,
	BattleEffect                   = 1,
	WeaponBuff                     = 2,
	EMagicType_MAX                 = 3,
};

enum class EMagicFamily : uint8
{
	Radiant                        = 0,
	Rhogar                         = 1,
	Umbral                         = 2,
	EMagicFamily_MAX               = 3,
};

enum class EMagicCueActorTarget : uint8
{
	Caster                         = 0,
	PrimaryWeapon                  = 1,
	EMagicCueActorTarget_MAX       = 2,
};

enum class EMagicCastingRules : uint8
{
	Default                        = 0,
	MeleeProjectile                = 1,
	Melee                          = 2,
	Laser                          = 3,
	EMagicCastingRules_MAX         = 4,
};

enum class EConnectionRejectedReason : uint8
{
	ProcessingDifferentConnection  = 0,
	PlayerInCombat                 = 1,
	RejectedByPlayer               = 2,
	NotReady                       = 3,
	SessionNotFound                = 4,
	BadConnection                  = 5,
	None                           = 6,
	EConnectionRejectedReason_MAX  = 7,
};

enum class ELootTableOverrideMode : uint8
{
	Override                       = 0,
	Add                            = 1,
	ELootTableOverrideMode_MAX     = 2,
};

enum class EParryableReferenceAxis : int32
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	EParryableReferenceAxis_MAX    = 3,
};

enum class EPerLevelUpgradeCurveBehavior : uint8
{
	Multiplicative                 = 0,
	Additive                       = 1,
	Override                       = 2,
	EPerLevelUpgradeCurveBehavior_MAX = 3,
};

enum class EPlayerCharacterAbilityInput : uint8
{
	Sneak                          = 0,
	Walk                           = 1,
	Run                            = 2,
	Jump                           = 3,
	Interact                       = 4,
	Dodge                          = 5,
	Target                         = 6,
	LightAttack                    = 7,
	HeavyAttack                    = 8,
	LightBlock                     = 9,
	HeavyBlock                     = 10,
	DemonForm                      = 11,
	HumanForm                      = 12,
	UseItem                        = 13,
	MAX                            = 14,
};

enum class EPlayerForm : uint8
{
	Human                          = 0,
	Boss0                          = 1,
	Boss6                          = 2,
	Boss7                          = 3,
	MAX                            = 4,
};

enum class ESettingsRemovalOptions : uint8
{
	ZeroEntry                      = 0,
	RemoveAll                      = 1,
	ESettingsRemovalOptions_MAX    = 2,
};

enum class EPlayerSpecialAction : uint8
{
	HeroAttack                     = 0,
	MAX                            = 1,
};

enum class EInputConvertionSpace : uint8
{
	Undefined                      = 0,
	Camera                         = 1,
	Character                      = 2,
	EInputConvertionSpace_MAX      = 3,
};

enum class EPlayerRespawnReason : uint8
{
	Undefined                      = 0,
	Resurrect                      = 1,
	Tethering                      = 2,
	EPlayerRespawnReason_MAX       = 3,
};

enum class EQuestStatus : uint8
{
	Inactive                       = 0,
	Active                         = 1,
	Completed                      = 2,
	Failed                         = 3,
	EQuestStatus_MAX               = 4,
};

enum class EQuestActionType : uint8
{
	None                           = 0,
	RewardItem                     = 1,
	ChangeFaction                  = 2,
	RewardItemLootTable            = 3,
	RemoveItem                     = 4,
	EQuestActionType_MAX           = 5,
};

enum class EHexQuestTaskCompletionType : uint8
{
	Default                        = 0,
	Required                       = 1,
	Optional                       = 2,
	EHexQuestTaskCompletionType_MAX = 3,
};

enum class EQuestTaskType : uint8
{
	None                           = 0,
	Talk                           = 1,
	ReachLocation                  = 2,
	Kill                           = 3,
	KillWithTag                    = 4,
	KillWithDeathReason            = 5,
	GiveItem                       = 6,
	GiveVigor                      = 7,
	RequireItem                    = 8,
	CollectItem                    = 9,
	RequireTagPlayer               = 10,
	RequireTagQuestState           = 11,
	RequireTagQuestGeneral         = 12,
	RequireStatLevel               = 13,
	RequireGear                    = 14,
	RequireAnswer                  = 15,
	RequireActivateAnchor          = 16,
	RequireActivateStigma          = 17,
	RequirePlayerToDie             = 18,
	RequireActivateAnyAnchor       = 19,
	GameplayAbilityEnds            = 20,
	ForgeAnchor                    = 21,
	UpgradePotionToMaxLevel        = 22,
	UpgradeWeaponToMaxLevel        = 23,
	UpgradeLanternToMaxLevel       = 24,
	SocketAnyRune                  = 25,
	SocketWeaponRuneToMax          = 26,
	SocketLanternRuneToMax         = 27,
	ApplyTint                      = 28,
	Revenge                        = 29,
	ShowItem                       = 30,
	RequirePlayGesture             = 31,
	HaveDLC                        = 32,
	EQuestTaskType_MAX             = 33,
};

enum class EQuestTaskActivationScope : uint8
{
	Always                         = 0,
	ReachedByQuest                 = 1,
	EQuestTaskActivationScope_MAX  = 2,
};

enum class EQuestDialogue : uint8
{
	Main                           = 0,
	Loop                           = 1,
	Tasks                          = 2,
	EQuestDialogue_MAX             = 3,
};

enum class EQuestTaskStatus : uint8
{
	Inactive                       = 0,
	Active                         = 1,
	Completed                      = 2,
	Failed                         = 3,
	EQuestTaskStatus_MAX           = 4,
};

enum class ERevengeStatus : uint8
{
	Available                      = 0,
	Completed                      = 1,
	Failed                         = 2,
	Unavailable                    = 3,
	ERevengeStatus_MAX             = 4,
};

enum class EHexRuneShape : uint8
{
	Circle                         = 0,
	Square                         = 1,
	Triangle                       = 2,
	Star                           = 3,
	Meta                           = 4,
	Lantern                        = 5,
	LanternPrimary                 = 6,
	LanternSecondary               = 7,
	EHexRuneShape_MAX              = 8,
};

enum class EHexRuneShardType : uint8
{
	Main                           = 0,
	Secondary                      = 1,
	EHexRuneShardType_MAX          = 2,
};

enum class EHexRuneSize : uint8
{
	Common                         = 0,
	Uncommon                       = 1,
	Rare                           = 2,
	Epic                           = 3,
	Legendary                      = 4,
	Boss                           = 5,
	EHexRuneSize_MAX               = 6,
};

enum class EHexRuneBattleEffectTarget : uint8
{
	Equipment                      = 0,
	Character                      = 1,
	EHexRuneBattleEffectTarget_MAX = 2,
};

enum class EHexRuneEquipmentApplication : uint8
{
	Weapon                         = 0,
	Armor                          = 1,
	EHexRuneEquipmentApplication_MAX = 2,
};

enum class EShapeType : uint8
{
	Box                            = 0,
	Capsule                        = 1,
	Sphere                         = 2,
	Custom                         = 3,
	EShapeType_MAX                 = 4,
};

enum class EProjectileHomingState : uint8
{
	None                           = 0,
	WaitingToStart                 = 1,
	Homing                         = 2,
	Stopped                        = 3,
	EProjectileHomingState_MAX     = 4,
};

enum class EProjectileBehaviourCondition : uint8
{
	Any                            = 0,
	All                            = 1,
	EProjectileBehaviourCondition_MAX = 2,
};

enum class EStopHomingAngleCheckCondition : uint8
{
	Inside                         = 0,
	Outside                        = 1,
	EStopHomingAngleCheckCondition_MAX = 2,
};

enum class EProjectileAimMode : uint8
{
	AimToTarget                    = 0,
	AimToTargetGround              = 1,
	AimToInstigator                = 2,
	None                           = 3,
	AimToBlackboardKey             = 4,
	Dynamic                        = 5,
	DynamicToGround                = 6,
	TargetOrDynamic                = 7,
	EProjectileAimMode_MAX         = 8,
};

enum class EProjectileHomingOffsetMode : uint8
{
	HomingOffset_InitialPosition   = 0,
	HomingOffset_None              = 1,
	HomingOffset_MAX               = 2,
};

enum class EProjectileAimDirection : uint8
{
	AimBothDirections              = 0,
	AimOnlyVertical                = 1,
	AimOnlyHorizontal              = 2,
	EProjectileAimDirection_MAX    = 3,
};

enum class EMeshType : uint8
{
	None                           = 0,
	StaticMesh                     = 1,
	SkeletalMesh                   = 2,
	CustomSkeletalMesh             = 3,
	EMeshType_MAX                  = 4,
};

enum class ELightType : uint8
{
	Directional                    = 0,
	Point                          = 1,
	Spot                           = 2,
	Rect                           = 3,
	MAX                            = 4,
};

enum class ESpawnerSpawningState : uint8
{
	NoCharacterSpawned             = 0,
	SpawningCharacter              = 1,
	CharacterSpawned               = 2,
	FailedToSpawn                  = 3,
	ESpawnerSpawningState_MAX      = 4,
};

enum class ESimpleElevatorState : uint8
{
	NotMoving                      = 0,
	StartMovement                  = 1,
	StandardMovement               = 2,
	StopMovement                   = 3,
	ESimpleElevatorState_MAX       = 4,
};

enum class EStatScalarGrades : uint8
{
	Grade_None                     = 0,
	Grade_E                        = 1,
	Grade_D_Minus                  = 2,
	Grade_D                        = 3,
	Grade_D_Plus                   = 4,
	Grade_C_Minus                  = 5,
	Grade_C                        = 6,
	Grade_C_Plus                   = 7,
	Grade_B_Minus                  = 8,
	Grade_B                        = 9,
	Grade_B_Plus                   = 10,
	Grade_A_Minus                  = 11,
	Grade_A                        = 12,
	Grade_A_Plus                   = 13,
	Grade_S                        = 14,
	Grade_MAX                      = 15,
};

enum class EBasicStat : uint8
{
	Strength                       = 0,
	Agility                        = 1,
	Endurance                      = 2,
	Vitality                       = 3,
	Faith                          = 4,
	Chaos                          = 5,
	Level                          = 6,
	EBasicStat_MAX                 = 7,
};

enum class EHexStatusEffectGEType : uint8
{
	Cooldown                       = 0,
	Overload                       = 1,
	CooldownPause                  = 2,
	OverloadCooldown               = 3,
	EHexStatusEffectGEType_MAX     = 4,
};

enum class EFindTargetFlags : uint8
{
	ZeroEntry                      = 0,
	IgnoreDeadTargets              = 1,
	UseUmbralRules                 = 2,
	IgnoreImmaterialTargets        = 4,
	IgnoreInvisibleTargets         = 8,
	EFindTargetFlags_MAX           = 9,
};

enum class ETutorialGameRealm : uint8
{
	Real                           = 0,
	Umbral                         = 1,
	Any                            = 2,
	Limbo                          = 3,
	LanternFromAxiom               = 4,
	ETutorialGameRealm_MAX         = 5,
};

enum class EUIInteractionAnimation : uint8
{
	None                           = 0,
	Start                          = 1,
	End                            = 2,
	EUIInteractionAnimation_MAX    = 3,
};

enum class EUmbralEyeBlinkState : uint8
{
	Undefined                      = 0,
	Closed                         = 1,
	Opening                        = 2,
	Open                           = 3,
	Closing                        = 4,
	EUmbralEyeBlinkState_MAX       = 5,
};

enum class EeAIActionTargetType : uint8
{
	Self                           = 0,
	Target                         = 1,
	EAIActionTargetType_MAX        = 2,
};

enum class EeAIMovementSpeed : uint8
{
	Patrol                         = 0,
	Walk                           = 1,
	Run                            = 2,
	Sprint                         = 3,
	EAIMovementSpeed_MAX           = 4,
};

enum class EeAIContextType : uint8
{
	Default                        = 0,
	Idle                           = 1,
	Patrol                         = 2,
	Attack                         = 3,
	Reposition                     = 4,
	Interrupt                      = 5,
	SwordPlay                      = 6,
	EAIContextType_MAX             = 7,
};

enum class EeInterruptionType : uint8
{
	None                           = 0,
	ParryTiming                    = 1,
	AttackIncoming                 = 2,
	Damaged                        = 3,
	TargetPerceived                = 4,
	TargetDetected                 = 5,
	TargetAquired                  = 6,
	TargetVisualLost               = 7,
	TargetLost                     = 8,
	TargetChanged                  = 9,
	GameplayEffectApplied          = 10,
	EInterruptionType_MAX          = 11,
};

enum class EVendorMode : uint8
{
	Buy                            = 0,
	Sell                           = 1,
	EVendorMode_MAX                = 2,
};

enum class EVendorTransactionCode : uint8
{
	Failed                         = 0,
	Success                        = 1,
	Failed_NoVigor                 = 2,
	Failed_UniqueItem              = 3,
	Failed_NotEnoughSocialCurrencyBlue = 4,
	Failed_NotEnoughSocialCurrencyRed = 5,
	Failed_NotEnoughSocialCurrencyYellow = 6,
	Failed_MaxItemAmountReached    = 7,
	EVendorTransactionCode_MAX     = 8,
};

enum class EWeaponToBuff : uint8
{
	PrimaryWeapon                  = 0,
	SecondaryWeapon                = 1,
	PrimaryAndSecondary            = 2,
	EWeaponToBuff_MAX              = 3,
};

enum class EAnathemaWeaponHitFXType : uint8
{
	AWHFX_Hit                      = 0,
	AWHFX_Block                    = 1,
	AWHFX_MAX                      = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0xA0 - 0x0)
// ScriptStruct LOTF2.InheritedMontagesMap
struct FInheritedMontagesMap
{
public:
	TMap<struct FGameplayTag, TSoftObjectPtr<class UAnimMontage>> Combined;                                          // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, TSoftObjectPtr<class UAnimMontage>> Added;                                             // 0x50(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.MultiAnimationInfo
struct FMultiAnimationInfo
{
public:
	TArray<class UAnimSequence*>                 AnimSequences;                                     // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LOTF2.VoiceOverMappingEntry
struct FVoiceOverMappingEntry
{
public:
	TSoftObjectPtr<class UAkAudioEvent>          Event;                                             // 0x0(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          FacialAnimation;                                   // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LOTF2.VoiceOverMediaMappingEntry
struct FVoiceOverMediaMappingEntry
{
public:
	TSoftObjectPtr<class UAkMediaAsset>          MediaAsset;                                        // 0x0(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          FacialAnimation;                                   // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct LOTF2.VoiceOverMappings
struct FVoiceOverMappings
{
public:
	TArray<struct FVoiceOverMappingEntry>        Mappings;                                          // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVoiceOverMediaMappingEntry>   MediaMappings;                                     // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<TSoftObjectPtr<class UAkAudioEvent>, int32> MappingEntryIndexOfAudioEvent;                     // 0x20(0x50)(Transient, NativeAccessSpecifierPublic)
	TMap<uint32, int32>                          MappingEntryIndexOfMediaAsset;                     // 0x70(0x50)(Transient, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct LOTF2.TurnAnimationInfo
struct FTurnAnimationInfo
{
public:
	class UAnimMontage*                          TurnAnimationMontageToUse;                         // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimMontage>           TurnAnimationMontage;                              // 0x8(0x30)(Deprecated, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRange                           AngleRange;                                        // 0x38(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct LOTF2.InheritedAnimSequencesMap
struct FInheritedAnimSequencesMap
{
public:
	TMap<struct FGameplayTag, TSoftObjectPtr<class UAnimSequence>> Combined;                                          // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, TSoftObjectPtr<class UAnimSequence>> Added;                                             // 0x50(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct LOTF2.InheritedBlendspacessMap
struct FInheritedBlendspacessMap
{
public:
	TMap<struct FGameplayTag, TSoftObjectPtr<class UBlendSpace>> Combined;                                          // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, TSoftObjectPtr<class UBlendSpace>> Added;                                             // 0x50(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x5C8 (0x5D0 - 0x8)
// ScriptStruct LOTF2.CharacterAnimationsConfig
struct FCharacterAnimationsConfig : public FTableRowBase
{
public:
	TMap<struct FGameplayTag, class UAnimMontage*> MontagesList;                                      // 0x8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, class UAnimSequence*> AnimSequencesList;                                 // 0x58(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, class UBlendSpace*> BlendSpacesList;                                   // 0xA8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, class UAimOffsetBlendSpace*> AimOffsetsList;                                    // 0xF8(0x50)(Edit, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FMultiAnimationInfo> AnimSequencesArrayList;                            // 0x148(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class UAnimMontage*>                  LooseMontagesList;                                 // 0x198(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVoiceOverMappings                    VoiceOverMappings;                                 // 0x1A8(0xC0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, TSoftObjectPtr<class UAnimMontage>> Montages;                                          // 0x268(0x50)(Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, TSoftObjectPtr<class UAnimSequence>> AnimSequences;                                     // 0x2B8(0x50)(Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, TSoftObjectPtr<class UBlendSpace>> BlendSpaces;                                       // 0x308(0x50)(Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FTurnAnimationInfo>            TurnAnimationInfos;                                // 0x358(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, TSoftObjectPtr<class UAimOffsetBlendSpace>> AimOffsets;                                        // 0x368(0x50)(Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimInstance>             AnimationBlueprint;                                // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UAnimInstance>           AnimationBP;                                       // 0x3C0(0x30)(Deprecated, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInheritedMontagesMap                 InheritedMontagesMap;                              // 0x3F0(0xA0)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	struct FInheritedAnimSequencesMap            InheritedAnimSequencesMap;                         // 0x490(0xA0)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	struct FInheritedBlendspacessMap             InheritedBlendSpacesMap;                           // 0x530(0xA0)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LOTF2.LoadingTipData
struct FLoadingTipData
{
public:
	class UTexture2D*                            LoadingTipIcon;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  LoadingTipName;                                    // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  LoadingTipDescription;                             // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.AchievementSubsystemConfig
struct FAchievementSubsystemConfig
{
public:
	class UDataTable*                            TrackerTable;                                      // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x98 - 0x8)
// ScriptStruct LOTF2.AchievementTrackerConfig
struct FAchievementTrackerConfig : public FTableRowBase
{
public:
	TMap<class FName, class FString>             AchievementIdOfOnlineSubsystem;                    // 0x8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EAchievementTrackerType           Type;                                              // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  QuestId;                                           // 0x5C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 Tags;                                              // 0x68(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ESocialCoinsType                  SocialCoinsType;                                   // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Count;                                             // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCoopRequired;                                   // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31BD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct LOTF2.ActionBufferData
struct FActionBufferData
{
public:
	struct FGameplayTag                          AbilityTag;                                        // 0x0(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputActionValue                     ActionValue;                                       // 0x8(0x20)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                  GameplayEvents;                                    // 0x28(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        InputTimestamp;                                    // 0x38(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferPriority;                                    // 0x3C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x40(0x28)(NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct LOTF2.InputActionGameplayEventMapping
struct FInputActionGameplayEventMapping
{
public:
	class UInputAction*                          InputAction;                                       // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class ETriggerEvent, struct FGameplayTag> GameplayEvents;                                    // 0x8(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bCanBeBuffered;                                    // 0x58(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31BE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          AssociatedAbilityTag;                              // 0x5C(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferPriority;                                    // 0x64(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputActionPayloadFactory*            InputActionPayloadFactory;                         // 0x68(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct LOTF2.ComboInputsMapping
struct FComboInputsMapping
{
public:
	struct FGameplayTag                          FirstGameplayEvent;                                // 0x0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SecondGameplayEvent;                               // 0x8(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeWindow;                                        // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          GeneratedGameplayEvent;                            // 0x14(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeBuffered;                                    // 0x1C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          AssociatedAbilityTag;                              // 0x20(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferPriority;                                    // 0x28(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct LOTF2.AdaptiveTriggerProperties
struct FAdaptiveTriggerProperties : public FTableRowBase
{
public:
	enum class EAdaptiveTriggerMode              Mode;                                              // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Position;                                          // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Strength;                                          // 0xA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Frequency;                                         // 0xB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Amplitude;                                         // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        StartPosition;                                     // 0xD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        StartStrength;                                     // 0xE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        EndPosition;                                       // 0xF(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        EndStrength;                                       // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                Amplitudes;                                        // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                Strengths;                                         // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct LOTF2.AIArchetypeGatingConfig
struct FAIArchetypeGatingConfig
{
public:
	int32                                        ClassRank;                                         // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        OverrideGateLockOwnerMaxDistance : 1;              // Mask: 0x1, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        OverrideGateLockOwnerForgetDistance : 1;           // Mask: 0x2, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        OverrideGateLockOwnerIgnoreCenternessDistance : 1; // Mask: 0x4, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        OverrideGateLockOwnerMinCenterness : 1;            // Mask: 0x8, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        OverrideGateLockOwnerMaxSpeed : 1;                 // Mask: 0x10, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_24F : 3;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_31C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GateLockOwnerMaxDistance;                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GateLockOwnerForgetDistance;                       // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GateLockOwnerIgnoreCenternessDistance;             // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GateLockOwnerMinCenterness;                        // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GateLockOwnerMaxSpeed;                             // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.EnemyAggroData
struct FEnemyAggroData
{
public:
	class ABaseAICharacter*                      Character;                                         // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAITargetAssociatedSet*                HighestScoringSet;                                 // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31C2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LOTF2.EnvironmentActionsData
struct FEnvironmentActionsData
{
public:
	struct FGameplayTagContainer                 RequiredCharacterTags;                             // 0x0(0x20)(Edit, NativeAccessSpecifierPrivate)
	TArray<class UEnvironmentActionData*>        Actions;                                           // 0x20(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LOTF2.EnvironmentActionsInfo
struct FEnvironmentActionsInfo
{
public:
	class UEnvironmentActionsDataAsset*          ActionsDataAsset;                                  // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FEnvironmentActionsData               ActionsData;                                       // 0x8(0x30)(Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct LOTF2.AIInterruptionData
struct FAIInterruptionData
{
public:
	uint8                                        Pad_31C3[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LOTF2.PatrolPointConfig
struct FPatrolPointConfig
{
public:
	struct FEnvironmentActionsInfo               EnvironmentActions;                                // 0x0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        PatrolSpeedMultiplier;                             // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31C4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct LOTF2.PatrolPointInfo
struct FPatrolPointInfo
{
public:
	uint8                                        Pad_31C5[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPatrolPointConfig                    PointConfig;                                       // 0x18(0x40)(ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.AnimationSource
struct FAnimationSource
{
public:
	struct FGameplayTag                          AnimationTag;                                      // 0x0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StartSection;                                      // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct LOTF2.LandingAnimationInfo
struct FLandingAnimationInfo
{
public:
	float                                        FallHeight;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimationSource                      LandingAnimation;                                  // 0x4(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF8 - 0x8)
// ScriptStruct LOTF2.GameplayAbilityTargetData_Landed
struct FGameplayAbilityTargetData_Landed : public FGameplayAbilityTargetData
{
public:
	uint8                                        Pad_31C6[0xF0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct LOTF2.LeashingBoxInfo
struct FLeashingBoxInfo
{
public:
	uint8                                        Pad_31C7[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct LOTF2.AITargetEnvelopeConfig
struct FAITargetEnvelopeConfig
{
public:
	float                                        ReactionTime;                                      // 0x0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForgetTime;                                        // 0x4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackValue;                                       // 0x8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecayRate;                                         // 0xC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SustainValue;                                      // 0x10(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReleaseRate;                                       // 0x14(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForgetRate;                                        // 0x18(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LOTF2.AITargetDefaultEnvelopeConfig
struct FAITargetDefaultEnvelopeConfig
{
public:
	enum class EAITargetEnvelopeType             Type;                                              // 0x0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAITargetEnvelopeConfig               Config;                                            // 0x4(0x1C)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct LOTF2.AITargetEnvelopeState
struct FAITargetEnvelopeState
{
public:
	enum class EAITargetEnvelopeState            State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EnvelopeValue;                                     // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActiveTime;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InactiveTime;                                      // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LastKnownPosition;                                 // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LastKnownFacing;                                   // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LastKnownStimulusLocation;                         // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LOTF2.AITargetGatingActiveLocationSettings
struct FAITargetGatingActiveLocationSettings
{
public:
	uint8                                        EnableCloseInTime : 1;                             // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        EnableStrafing : 1;                                // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_251 : 6;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_31CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinDistance;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDistance;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseInTime;                                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CloseInDelay;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StrafeFOV;                                         // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StrafeDelay;                                       // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StrafeSpeed;                                       // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.AITargetGatingInterceptLocationEntry
struct FAITargetGatingInterceptLocationEntry
{
public:
	class AAITargetGatingInterceptLocation*      InterceptLocation;                                 // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class ABaseAIController>      UsingController;                                   // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct LOTF2.AITargetGatingWaitingLocationEntry
struct FAITargetGatingWaitingLocationEntry
{
public:
	uint8                                        UsingControllerHighPriorityRequest : 1;            // Mask: 0x1, PropSize: 0x10x0(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_252 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_31CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AngleOffset;                                       // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDistance;                                       // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDistance;                                       // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UsingControllerDistSq;                             // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAITargetGatingWaitingLocation*        WaitingLocation;                                   // 0x18(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class ABaseAIController>      UsingController;                                   // 0x20(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LOTF2.AITargetGatingWaitingNavDataLocation
struct FAITargetGatingWaitingNavDataLocation
{
public:
	uint8                                        IsValidOnNavMesh : 1;                              // Mask: 0x1, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_253 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_31D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       LastUpdateFrame;                                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RelativeWorldLocation;                             // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct LOTF2.AITargetSystemConfig
struct FAITargetSystemConfig
{
public:
	bool                                         IgnoreGatingLock;                                  // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HighThreatValue;                                   // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MediumThreatValue;                                 // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LowThreatValue;                                    // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IncludeDefaultEnvelopes;                           // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EAITargetEnvelopeType, struct FAITargetEnvelopeConfig> AITargetSystemEnvelopes;                           // 0x18(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.AkAnathemaEvent
struct FAkAnathemaEvent
{
public:
	uint8                                        Pad_31D8[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         AkEvent;                                           // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSendForLocal;                                     // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkSwitchValue*                        LocalSwitch;                                       // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSendForPVP;                                       // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkSwitchValue*                        PVPSwitch;                                         // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSendForCoop;                                      // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkSwitchValue*                        CoopSwitch;                                        // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsVoiceOver;                                      // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31DF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.TempGameplayEffectHandleArrayForNotifies
struct FTempGameplayEffectHandleArrayForNotifies
{
public:
	uint8                                        Pad_31E0[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x48 - 0x8)
// ScriptStruct LOTF2.GameplayAbilityTargetData_RepositionInfo
struct FGameplayAbilityTargetData_RepositionInfo : public FGameplayAbilityTargetData
{
public:
	uint8                                        Pad_31E1[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct LOTF2.DecalRandomizationData
struct FDecalRandomizationData
{
public:
	int32                                        MaxAmount;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LocationOffset;                                    // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SizeOffset;                                        // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RotationOffset;                                    // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LifeSpanOffset;                                    // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31E6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LOTF2.SurfaceHit
struct FSurfaceHit
{
public:
	class UPhysicalMaterial*                     PhysicalMaterial;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.MontageToPlay
struct FMontageToPlay
{
public:
	class UAnimMontage*                          Montage;                                           // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StartSection;                                      // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct LOTF2.HitReactData
struct FHitReactData
{
public:
	struct FGameplayTag                          HitEventType;                                      // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31E7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EAnathemaHitReactionBSInputMode   BlendSpaceInputMode;                               // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlendInTime;                                       // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendOutTime;                                      // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotName;                                          // 0x1C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGenerateFlinch : 1;                               // Mask: 0x1, PropSize: 0x10x24(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_256 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_31E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 RequiredTags;                                      // 0x28(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 IgnoreTags;                                        // 0x48(0x20)(Edit, NativeAccessSpecifierPublic)
	float                                        ExtraOffset;                                       // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtraOffsetTime;                                   // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveVerticalOffset;                             // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UGameplayEffect>>   GameplayEffectsToApply;                            // 0x78(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LOTF2.DirectionalAnimationData
struct FDirectionalAnimationData
{
public:
	struct FGameplayTag                          NoLockOnRollAnimation;                             // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          FrontAnimation;                                    // 0x8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          BackAnimation;                                     // 0x10(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          LeftAnimation;                                     // 0x18(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          RightAnimation;                                    // 0x20(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          BackstepAnimation;                                 // 0x28(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct LOTF2.HitReactEventData
struct FHitReactEventData
{
public:
	struct FGameplayTag                          AnimationToUse;                                    // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectionalAnimationData             DirectionalAnimationsToUse;                        // 0x8(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                          FallbackAnimationToUse;                            // 0x38(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGenerateFlinch : 1;                               // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_257 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_31EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FlinchIntensity;                                   // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, float>             PerPoiseReactionFlinchIntensity;                   // 0x48(0x50)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        bUseDynamicKnockback : 1;                          // Mask: 0x1, PropSize: 0x10x98(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_258 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_31EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DynamicKnocbackWaitTime;                           // 0x9C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DynamicKnocbackDuration;                           // 0xA0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseProtoFrameTimings : 1;                         // Mask: 0x1, PropSize: 0x10xA4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_259 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_31ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       ProtoInterruptAtFrame;                             // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSubclassOf<class UGameplayEffect>>   GameplayEffectsToApply;                            // 0xB0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bClearBufferOnReaction;                            // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31EF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.DoorActionContext
struct FDoorActionContext
{
public:
	class AActor*                                Instigator;                                        // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsForced;                                         // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31F0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.AnathemaQuery
struct FAnathemaQuery
{
public:
	uint8                                        SystemsToQuery;                                    // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_31F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagQuery                     Query;                                             // 0x8(0x48)(Edit, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.InteractableState
struct FInteractableState
{
public:
	TArray<class FName>                          StatesToTrasition;                                 // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bShouldDisableInteraction;                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldDestroyAsc;                                 // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31F2[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct LOTF2.InteractableCurrentState
struct FInteractableCurrentState
{
public:
	class FName                                  CurrentStateName;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTransition;                                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31F3[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct LOTF2.CreatePlayMontageProxyParameters
struct FCreatePlayMontageProxyParameters
{
public:
	class UAnimMontage*                          MontageToPlay;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rate;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StartSection;                                      // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAbilityEnds;                              // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexFocusDirectionUpdateMode      FocusUpdateMode;                                   // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31F4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AnimRootMotionTranslationScale;                    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTimeSeconds;                                  // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceDisableAutoBlendOut;                         // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31F5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x78 - 0x8)
// ScriptStruct LOTF2.AnchorTeleportInfo
struct FAnchorTeleportInfo : public FTableRowBase
{
public:
	int32                                        Order;                                             // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDebugLocation;                                  // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ShortName;                                         // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  LongName;                                          // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DescriptionText;                                   // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  LocationText;                                      // 0x58(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UTexture2D*                            PortraitImage;                                     // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct LOTF2.ConditionalTagNotifySettings
struct FConditionalTagNotifySettings
{
public:
	enum class EConditionMode                    ConditionMode;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31F7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          ConditionalTagToCheck;                             // 0x4(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckIfTagIsNotPresent;                           // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagQuery                     OwnedTagsConditionQuery;                           // 0x10(0x48)(Edit, NativeAccessSpecifierPublic)
	bool                                         bDebugForceNotifyToTrigger;                        // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31F9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LOTF2.AnimTagDestinationDesc
struct FAnimTagDestinationDesc
{
public:
	struct FGameplayTagContainer                 DestinationTags;                                   // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LOTF2.TaggedAnimRowAnim
struct FTaggedAnimRowAnim
{
public:
	class UAnimationAsset*                       Anim;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AdditionalAnimTags;                                // 0x8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        PlaybackRate;                                      // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31FA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          AllowedNotifyGroups;                               // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB8 - 0x8)
// ScriptStruct LOTF2.TaggedAnimRow
struct FTaggedAnimRow : public FTableRowBase
{
public:
	TArray<struct FTaggedAnimRowAnim>            Anims;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                          AttackType;                                        // 0x18(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AnimTags;                                          // 0x20(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RequiredComboWindowTags;                           // 0x40(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SuggestedNextAttackType;                           // 0x60(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FAnimTagDestinationDesc> DestinationDescriptions;                           // 0x68(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct LOTF2.PostProcessBlendWeightData
struct FPostProcessBlendWeightData : public FTableRowBase
{
public:
	float                                        BlendTime;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetValue;                                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETweenType                        Curve;                                             // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31FB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct LOTF2.AreaNamesDB
struct FAreaNamesDB : public FTableRowBase
{
public:
	struct FGameplayTag                          LocationId;                                        // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct LOTF2.ArtBookAreaDataAsset
struct FArtBookAreaDataAsset : public FTableRowBase
{
public:
	class FText                                  AreaName;                                          // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UDataTable*                            ArtDataTable;                                      // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialyUnlocked;                               // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          UnlockCondition;                                   // 0x2C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ImageDescription;                                  // 0x38(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct LOTF2.ArtBookDataAsset
struct FArtBookDataAsset : public FTableRowBase
{
public:
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x8(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideUnlock;                                   // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          UnlockCondition;                                   // 0x3C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31FF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct LOTF2.GameplayEffectWithParams
struct FGameplayEffectWithParams
{
public:
	TSubclassOf<class UGameplayEffect>           GameplayEffectClass;                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, float>             Params;                                            // 0x8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 DynamicAssetTags;                                  // 0x58(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_3200[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               OptionalObject;                                    // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.GameplayEffectsWithParamsContainer
struct FGameplayEffectsWithParamsContainer
{
public:
	TArray<struct FGameplayEffectWithParams>     GameplayEffects;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.HexBattleEffectIdentifier
struct FHexBattleEffectIdentifier
{
public:
	class FName                                  BattleEffectID;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.HexBattleEffectIdentifierContainer
struct FHexBattleEffectIdentifierContainer
{
public:
	TArray<struct FHexBattleEffectIdentifier>    BattleEffects;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x268 (0x270 - 0x8)
// ScriptStruct LOTF2.AttackDamageDefinition
struct FAttackDamageDefinition : public FTableRowBase
{
public:
	float                                        MotionValue;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3201[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayTag, float>             DamagePercentageMultiplier;                        // 0x10(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTag                          AttackType;                                        // 0x60(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          FXType;                                            // 0x68(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          PoiseReaction;                                     // 0x70(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          PoiseReactionDirection;                            // 0x78(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          AttackSourceType;                                  // 0x80(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AttackProperties;                                  // 0x88(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, float>             FlatDamage;                                        // 0xA8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, float>             Cost;                                              // 0xF8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, float>             HitstopData;                                       // 0x148(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTag                          AttackDirection;                                   // 0x198(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectsWithParamsContainer   GameplayEffectsWhenInside;                         // 0x1A0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayEffectsWithParamsContainer   GameplayEffects;                                   // 0x1B0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FHexBattleEffectIdentifierContainer   BattleEffectsWhenInside;                           // 0x1C0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FHexBattleEffectIdentifierContainer   BattleEffects;                                     // 0x1D0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AdditionalDynamicAssetTags;                        // 0x1E0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTag                          OnApplicationEvent;                                // 0x200(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexDamageDefinitionBehavior      DamageDefinitionBehavior;                          // 0x208(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3202[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          AdditionalBehaviorTag;                             // 0x20C(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3203[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagQuery                     QueryNeededToApplyDamage;                          // 0x218(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ETargetToApply                    TargetToApply;                                     // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexDamageMultipliersSource       DamageMultipliersSource;                           // 0x261(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3205[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueTag                       OnDamagedGameplayCue;                              // 0x264(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOnDamagedGameplayCueUseHitLocation;               // 0x26C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3206[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LOTF2.HitBoxDefinition
struct FHitBoxDefinition
{
public:
	enum class EHitBoxType                       HitBoxType;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3207[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  StartBoneName;                                     // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBoneName;                                       // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CapsuleRadius;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CapsuleLength;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtraCapsuleLength;                                // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocalOffset;                                       // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             AxisFromBone;                                      // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvertAxis;                                       // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableObstacleDetection;                          // 0x3A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3208[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.TraceSettings
struct FTraceSettings
{
public:
	enum class EDoDamageTraceMode                DoDamageTraceMode;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDoDamageTargets                  DoDamageTargets;                                   // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3209[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeToConsiderReHit;                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDoDamageGeneralMode              DoDamageGeneralMode;                               // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 DamageTraceChannel;                                // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSecondaryTraceChannel;                         // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 SecondaryDamageTraceChannel;                       // 0xB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 ReboundTraceChannel;                               // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_320A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x48 - 0x8)
// ScriptStruct LOTF2.AttackHitBoxesDefinition
struct FAttackHitBoxesDefinition : public FTableRowBase
{
public:
	TArray<struct FHitBoxDefinition>             HitBoxes;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FHitBoxDefinition>             PhysicalHitBoxes;                                  // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FHitBoxDefinition>             EnvironmentHitBoxes;                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTraceSettings                        TraceSettings;                                     // 0x38(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.GrabAttackDefinition
struct FGrabAttackDefinition
{
public:
	class UHexSyncedAnimationDataAsset*          SyncAnimation;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          EventTagToSendToTargetOnGrab;                      // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.DamageDefinitionIdentifier
struct FDamageDefinitionIdentifier
{
public:
	class FName                                  DamageDefID;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.NextAttackDescriptor
struct FNextAttackDescriptor
{
public:
	class FName                                  NextAttackName;                                    // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ComboTag;                                          // 0x8(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct LOTF2.AttackDescriptionRow
struct FAttackDescriptionRow : public FTableRowBase
{
public:
	struct FGameplayTag                          AttackIdTag;                                       // 0x8(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          InitialComboTag;                                   // 0x10(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          InitialRequiredTag;                                // 0x18(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNextAttackDescriptor>         PossibleNextAttacks;                               // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FString                                Comment;                                           // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// ScriptStruct LOTF2.SpawnDefinition
struct FSpawnDefinition
{
public:
	class FName                                  StartBoneName;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocalOffset;                                       // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              LocalRotationOffset;                               // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAxis                             AxisFromBone;                                      // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvertAxis;                                       // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttached;                                         // 0x3A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttachedToSpringArm;                              // 0x3B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetArmLength;                                   // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SocketOffset;                                      // 0x40(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetOffset;                                      // 0x58(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableCameraLag;                                  // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_320B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CameraLagSpeed;                                    // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableCameraRotationLag;                          // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_320C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CameraRotationLagSpeed;                            // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraLagMaxDistance;                              // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttachedToHit;                                    // 0x84(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldDoRaycastIfTargetValid;                     // 0x85(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRayCastToGroundOnSpawn;                           // 0x86(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRayCastForwardOnSpawn;                            // 0x87(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RayCastToGroundOnSpawnLength;                      // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_320D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LocalOffsetAfterRayCastToGround;                   // 0x90(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDontSpawnIfRayCastToGroundDontHit;                // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_320E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RayCastFowardOnSpawnLength;                        // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreParentRotation;                             // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOrient2DOnly;                                     // 0xB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreBoneRotationAndUseOwnerInstead;             // 0xB2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseOwnerAimOffsetToOverrideRotation;              // 0xB3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EReferenceActor                   ReferenceActor;                                    // 0xB4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EReferenceActorWhenTargetInvalid  ReferenceActorWhenTargetInvalid;                   // 0xB5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_320F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BlackboardKeyReferenceActor;                       // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpawnType                        SpawnType;                                         // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3210[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ArcMinRadius;                                      // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArcMaxRadius;                                      // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChangeArcRadiusOverTime;                          // 0xCC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3211[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeToChangeArcRadius;                             // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChangedArcMinRadius;                               // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChangedArcMaxRadius;                               // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArcAngle;                                          // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArcVerticalAngle;                                  // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArcRandomFinalOffsetMinAngle;                      // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArcRandomFinalOffsetMaxAngle;                      // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArcRandomFinalOffsetMinVerticalAngle;              // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArcRandomFinalOffsetMaxVerticalAngle;              // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArcRandomLocalOffsetMinAngle;                      // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArcRandomLocalOffsetMaxAngle;                      // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArcRandomLocalOffsetMinVerticalAngle;              // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArcRandomLocalOffsetMaxVerticalAngle;              // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseRandomArcAngleInRange;                         // 0x104(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddsArcRotationToSpawnRotation;                   // 0x105(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3212[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LineSpawnLength;                                   // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseRandomPositionInLine;                          // 0x10C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             LineSpawnAxisOrientation;                          // 0x10D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLineSpawnPivotCentered;                           // 0x10E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLineSpawnAxisInvertOrientation;                   // 0x10F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreTarget;                                     // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3213[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpawnDelay;                                        // 0x114(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtraSpawnDelayByInstance;                         // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NumInstancesToSpawn;                               // 0x11C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckIfEnoughResourcesToSpawnSAA;                 // 0x11D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3214[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x148 (0x148 - 0x0)
// ScriptStruct LOTF2.AutonomousAreaSpawnDef
struct FAutonomousAreaSpawnDef
{
public:
	struct FDataTableRowHandle                   AutonomousAbility;                                 // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSpawnDefinition                      SpawnDefinition;                                   // 0x10(0x120)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class USubAutonomousAbilityData> SubAutonomousAbilityData;                          // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          GameplayCue;                                       // 0x138(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLinkToSpawnerEndPlay;                             // 0x140(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDestroyParent;                                    // 0x141(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnTriggerIgnoreNextSpawnEvents;                   // 0x142(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3215[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct LOTF2.AutonomousAbilityCooldown
struct FAutonomousAbilityCooldown
{
public:
	struct FGameplayTag                          CooldownTag;                                       // 0x0(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CooldownDuration;                                  // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x750 (0x9C0 - 0x270)
// ScriptStruct LOTF2.AutonomousAbilityDefinition
struct FAutonomousAbilityDefinition : public FAttackDamageDefinition
{
public:
	TSoftClassPtr<class AActor>                  BaseBP;                                            // 0x270(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, float>             ActorParams;                                       // 0x2A0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   OptionalAutonomousAbilityParam;                    // 0x2F0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UObject>                 OptionalClassParam;                                // 0x300(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LifeSpan;                                          // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3216[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSpawnDefinition                      SpawnDefinition;                                   // 0x338(0x120)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDestroyOnValidOverlap;                            // 0x458(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDestroyOnPhysicalCollision;                       // 0x459(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3217[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   SpawnAutonomousAbilityOnDestroy;                   // 0x460(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAutonomousAreaSpawnDef               SpawnOnDestroy;                                    // 0x470(0x148)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAutonomousAreaSpawnDef               SpawnOnPhysicalHit;                                // 0x5B8(0x148)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAutonomousAreaSpawnDef               SpawnOnOverlap;                                    // 0x700(0x148)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAutonomousAreaSpawnDef               SpawnOnTimeout;                                    // 0x848(0x148)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GameplayCueTags;                                   // 0x990(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAutonomousAbilityCooldown            Cooldown;                                          // 0x9B0(0xC)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3218[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct LOTF2.AIAnimatedFlinch
struct FAIAnimatedFlinch
{
public:
	int32                                        AGE;                                               // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirectionPsi;                                      // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirectionTheta;                                    // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LOTF2.FocusOverrideData
struct FFocusOverrideData
{
public:
	class AActor*                                OverrideFocusTarget;                               // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3219[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LOTF2.HexCardinalDirectionAnimationStruct
struct FHexCardinalDirectionAnimationStruct
{
public:
	class UAnimSequence*                         Forward;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Backward;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Left;                                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         Right;                                             // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct LOTF2.HandAnimInfo
struct FHandAnimInfo
{
public:
	enum class EEquipAnimationType               EquipAnimationType;                                // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEquip;                                            // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.HandAnimInfoEx
struct FHandAnimInfoEx
{
public:
	struct FHandAnimInfo                         HandAnimInfo;                                      // 0x0(0x2)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHolsterableSlot                  HolsterableSlot;                                   // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHolsterableSlot                  ComplementaryHolsterableSlot;                      // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_321A[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AGE;                                               // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEquipAnimationState              EquipAnimationState;                               // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_321B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct LOTF2.HexBattleEffectWithQuery
struct FHexBattleEffectWithQuery
{
public:
	struct FAnathemaQuery                        Query;                                             // 0x0(0x50)(Edit, NativeAccessSpecifierPrivate)
	struct FHexBattleEffectIdentifier            BattleEffectID;                                    // 0x50(0x8)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct LOTF2.BodyShapeSubCategoryType
struct FBodyShapeSubCategoryType
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  MutableName;                                       // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBodyShapeAttributeType           AttributeType;                                     // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_321C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LOTF2.BodyShapeCustomizationType
struct FBodyShapeCustomizationType
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  MutableName;                                       // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.BodyShapeOptions
struct FBodyShapeOptions
{
public:
	TArray<enum class EBodyShapeAttributeType>   Attributes;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LOTF2.PhysMergeConfig
struct FPhysMergeConfig
{
public:
	class UPhysicsAsset*                         OriginalPhysAsset;                                 // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicsAsset*                         FatPhysAsset;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicsAsset*                         MuscularPhysAsset;                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicsAsset*                         SkinnyPhysAsset;                                   // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct LOTF2.UIShapeData
struct FUIShapeData
{
public:
	class FString                                MutableName;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bZoomIn;                                           // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECharacterBodyType                bodyType;                                          // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_321D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Image;                                             // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMorphTarget;                                    // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBodyShapeCamera                  CameraToUse;                                       // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_321E[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.TattooArray
struct FTattooArray
{
public:
	TArray<struct FUIShapeData>                  Tattoo;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.TattooDataArray
struct FTattooDataArray
{
public:
	TMap<enum class ETattooLocation, struct FTattooArray> Tattoos;                                           // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct LOTF2.TattooData
struct FTattooData
{
public:
	TMap<enum class ETattooType, struct FTattooDataArray> HeadTattooData;                                    // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<enum class ETattooType, struct FTattooDataArray> BodyTattooData;                                    // 0x50(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.UIShapeDataArray
struct FUIShapeDataArray
{
public:
	TArray<struct FUIShapeData>                  Shapes;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.MorphFeatureArray
struct FMorphFeatureArray
{
public:
	TArray<class FString>                        MutableShapes;                                     // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LOTF2.PlayerSocketOverrides
struct FPlayerSocketOverrides
{
public:
	enum class EPropJoint                        Joint;                                             // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_321F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LOTF2.PlayerSocketOverridesArray
struct FPlayerSocketOverridesArray
{
public:
	class FString                                ArmorName;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerSocketOverrides>        OverriddenSockets;                                 // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct LOTF2.TattooAttributeByLocation
struct FTattooAttributeByLocation
{
public:
	enum class EBodyShapeAttributeType           Color;                                             // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBodyShapeAttributeType           Intensity;                                         // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBodyShapeAttributeType           Opacity;                                           // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBodyShapeAttributeType           Tint;                                              // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD8 - 0x8)
// ScriptStruct LOTF2.BossRemembranceDefinition
struct FBossRemembranceDefinition : public FTableRowBase
{
public:
	struct FGameplayTag                          BossId;                                            // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          QuestStateId;                                      // 0x10(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          RemembranceItemId;                                 // 0x18(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  BossName;                                          // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ItemName;                                          // 0x38(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  BossDescription;                                   // 0x50(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image_Portrait_Small;                              // 0x68(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image_Portrait_Big;                                // 0x98(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   VendorTable;                                       // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.StepsToProbability
struct FStepsToProbability
{
public:
	float                                        Step;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Probability;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C0 (0x1C0 - 0x0)
// ScriptStruct LOTF2.TargetDesc
struct FTargetDesc
{
public:
	float                                        TranslationStiffnessRampTime;                      // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TranslationStiffness;                              // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TranslationDampingFactor;                          // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3220[0x8C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RotationStiffness;                                 // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationDampingFactor;                             // 0x9C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3221[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ScreenSpaceDeadZoneRadius;                         // 0xE0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3222[0xDC];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct LOTF2.LockDistanceSettings
struct FLockDistanceSettings
{
public:
	float                                        WaitingForTargetTime;                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraLockOnAngle;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ThresholdAngularDistance;                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraTargetZOffset;                               // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetZOffset;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x5E8 (0x5E8 - 0x0)
// ScriptStruct LOTF2.AnimationMovesetLayer
struct FAnimationMovesetLayer
{
public:
	struct FCharacterAnimationsConfig            Animations;                                        // 0x0(0x5D0)(RepSkip, NativeAccessSpecifierPublic)
	struct FGameplayTag                          MovesetSourceID;                                   // 0x5D0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                AnimationSourceClass;                              // 0x5D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x5E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3223[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.AnimationMovesetStack
struct FAnimationMovesetStack
{
public:
	TArray<struct FAnimationMovesetLayer>        MovesetLayers;                                     // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.InitialInventoryData
struct FInitialInventoryData
{
public:
	TSubclassOf<class UItemData>                 ItemClassData;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Amount;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemLevel;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LOTF2.CharacterClassUnlockInfo
struct FCharacterClassUnlockInfo
{
public:
	enum class ECharacterClassUnlockType         UnlockType;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3224[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          QuestCompleteTag;                                  // 0x4(0x8)(Edit, BlueprintVisible, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDLCName                          DLC;                                               // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3225[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             UnlockPortrait;                                    // 0x10(0x30)(Edit, BlueprintVisible, SaveGame, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x208 (0x210 - 0x8)
// ScriptStruct LOTF2.CharacterEquipmentConfig
struct FCharacterEquipmentConfig : public FTableRowBase
{
public:
	TSubclassOf<class UWeaponsData>              PrimaryWeaponDataClass;                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PrimaryWeaponLevel;                                // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3226[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UWeaponsData>              SecondaryWeaponDataClass;                          // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SecondaryWeaponLevel;                              // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3227[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class URangedWeaponData>         RangedWeaponDataClass;                             // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RangedWeaponLevel;                                 // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3228[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UEquipementData>         SoulsLanternData;                                  // 0x38(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LanternLevel;                                      // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3229[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UArmorPieceData>         HeadDataClass;                                     // 0x70(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UArmorPieceData>         BodyDataClass;                                     // 0xA0(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UArmorPieceData>         ArmsDataClass;                                     // 0xD0(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UArmorPieceData>         LegsDataClass;                                     // 0x100(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UArmorPieceData>         Ring1DataClass;                                    // 0x130(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UArmorPieceData>         Ring2DataClass;                                    // 0x160(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UArmorPieceData>         AmuletDataClass;                                   // 0x190(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UArmorPieceData>         AccessoriesDataClass;                              // 0x1C0(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UMagicItemData>>    MagicDataClassArray;                               // 0x1F0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UAmmoData>>         AmmoDataClassArray;                                // 0x200(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x328 (0x330 - 0x8)
// ScriptStruct LOTF2.CharacterClassData
struct FCharacterClassData : public FTableRowBase
{
public:
	bool                                         bTestCharacter;                                    // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_322A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterClassUnlockInfo             UnlockInfo;                                        // 0x10(0x40)(Edit, BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x50(0x18)(Edit, BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x68(0x18)(Edit, BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   StatsRow;                                          // 0x80(0x10)(Edit, BlueprintVisible, SaveGame, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterEquipmentConfig             EquipmentConfig;                                   // 0x90(0x210)(Edit, BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FInitialInventoryData>         InitialInventory;                                  // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FInitialInventoryData>         NotEquippedInitialInventory;                       // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         ClassSelectionSound;                               // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          CharacterSelectionAnimationTag;                    // 0x2C8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UCustomizableObjectInstance> MaleClassPreset;                                   // 0x2D0(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UCustomizableObjectInstance> FemaleClassPreset;                                 // 0x300(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.AttributeInitializationData
struct FAttributeInitializationData
{
public:
	TSubclassOf<class UAttributeSet>             AttributeSetToInitialize;                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            AttributesTable;                                   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct LOTF2.AttackHitCapsuleDefinition
struct FAttackHitCapsuleDefinition
{
public:
	class FName                                  StartSocket;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndSocket;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct LOTF2.DamageParamDefinition
struct FDamageParamDefinition : public FTableRowBase
{
public:
	float                                        Knockback;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PhysicalDamage;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaDamage;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoiseDamage;                                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttackAttribute                  AttackAttribute;                                   // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDamageLevel                      DamageLevel;                                       // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_322B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAttackHitCapsuleDefinition>   HitBoxes;                                          // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x74 (0x74 - 0x0)
// ScriptStruct LOTF2.CharacterAIBattleConfig
struct FCharacterAIBattleConfig
{
public:
	float                                        NearDistance;                                      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MiddleDistance;                                    // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FarDistance;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutOfRangeDistance;                                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RetreatHomeMaxDistance;                            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RetreatHomeDistance;                               // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RetreatHomeBattleDistance;                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RetreatHomeLookForTargetTime;                      // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RetreatHomeLookForTargetDistance;                  // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CombatStartDistance;                               // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TeamAttackEffectivity;                             // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeTeamSpectator;                               // 0x2C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanRunWhileSpectating;                            // 0x2D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseDefaultSpectatorBehavior;                      // 0x2E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseDefaultDestroyDestructibleBehavior;            // 0x2F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseDefaultAttackReactionBehavior;                 // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_322C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReactionBlockProbability;                          // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReactionDeflectProbability;                        // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReactionParryProbability;                          // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReactionDodgeProbability;                          // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReactionBlockProbabilityPerConsecutiveHit;         // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReactionDeflectProbabilityPerConsecutiveGuardHit;  // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReactionDodgeProbabilityPerConsecutiveHit;         // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReactionDodgeProjectileProbability;                // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReactionBlockProjectileProbability;                // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMagicSpecificProbability;                      // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_322D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReactionDodgeMagicProjectileProbability;           // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReactionBlockMagicProjectileProbability;           // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReactionSoulFlayBlockProbability;                  // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReactionSoulFlayParryProbability;                  // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReactionSoulFlayDodgeProbability;                  // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDistanceToHitThroughObstaclesInBetweenRealms;   // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.CharacterAITargetConfig
struct FCharacterAITargetConfig
{
public:
	float                                        TargetSwapCooldown;                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreFirstDeathInvisibility;                     // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_322E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.HexSenseConfig_Sight_Coffin_FOV_UI
struct FHexSenseConfig_Sight_Coffin_FOV_UI
{
public:
	struct FVector2D                             FrustumFOV;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceBetweenFrustumNearAndFarPlanes;            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_322F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.HexSenseConfig_Sight_Coffin_PlaneSize_UI
struct FHexSenseConfig_Sight_Coffin_PlaneSize_UI
{
public:
	struct FVector2D                             FrustumFarPlaneSize;                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceBetweenFrustumNearAndFarPlanes;            // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3230[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LOTF2.HexSenseConfig_Coffin_Combat_FOV_UI
struct FHexSenseConfig_Coffin_Combat_FOV_UI
{
public:
	struct FVector2D                             CombatFirstNearPlaneSize;                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHexSenseConfig_Sight_Coffin_FOV_UI> CombatFOVFrustumDefinitions;                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseCombatFrustumLoseSightDefinition;              // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3231[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHexSenseConfig_Sight_Coffin_FOV_UI   CombatFOVFrustumLoseSightDefinition;               // 0x28(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LOTF2.HexSenseConfig_Coffin_Combat_PlaneSize_UI
struct FHexSenseConfig_Coffin_Combat_PlaneSize_UI
{
public:
	struct FVector2D                             CombatFirstNearPlaneSize;                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHexSenseConfig_Sight_Coffin_PlaneSize_UI> CombatPlaneSizeFrustumDefinitions;                 // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseCombatFrustumLoseSightDefinition;              // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3232[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHexSenseConfig_Sight_Coffin_PlaneSize_UI CombatPlaneSizeFrustumLoseSightDefinition;         // 0x28(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// ScriptStruct LOTF2.SensesConfig_Sight
struct FSensesConfig_Sight
{
public:
	bool                                         bOmniVision;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3233[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OmniVisionRadius;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexFrustumDefinitionType         CoffinDefinitionType;                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3234[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             FirstNearPlaneSize;                                // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHexSenseConfig_Sight_Coffin_FOV_UI> FOVFrustumDefinitions;                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseFrustumLoseSightDefinition;                    // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3235[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHexSenseConfig_Sight_Coffin_FOV_UI   FOVFrustumLoseSightDefinition;                     // 0x38(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FHexSenseConfig_Sight_Coffin_PlaneSize_UI> PlaneSizeFrustumDefinitions;                       // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FHexSenseConfig_Sight_Coffin_PlaneSize_UI PlaneSizeFrustumLoseSightDefinition;               // 0x60(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseDifferentCombatCoffin;                         // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3236[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHexSenseConfig_Coffin_Combat_FOV_UI  FOVCombatCoffinSetup;                              // 0x80(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FHexSenseConfig_Coffin_Combat_PlaneSize_UI PlaneSizeCombatCoffinSetup;                        // 0xC0(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct LOTF2.SensesConfig_Hearing
struct FSensesConfig_Hearing
{
public:
	float                                        DistanceListen;                                    // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct LOTF2.SensesConfig_ESP
struct FSensesConfig_ESP
{
public:
	float                                        DistanceSense;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CombatScale;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRadiusDuringCombat;                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.SensesConfig_Reaction
struct FSensesConfig_Reaction
{
public:
	enum class ESensesActivationReaction         CautionReaction;                                   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESensesActivationReaction         SearchReaction;                                    // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldAlertOthers;                                // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3237[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AlertRadiusMeters;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanReactToAlert;                                  // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3238[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumHitsUntilAngered;                               // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// ScriptStruct LOTF2.CharacterAISensesConfig
struct FCharacterAISensesConfig
{
public:
	struct FSensesConfig_Sight                   Sight;                                             // 0x0(0x100)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSensesConfig_Hearing                 Hearing;                                           // 0x100(0x4)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSensesConfig_ESP                     ESP;                                               // 0x104(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSensesConfig_Reaction                Reactions;                                         // 0x110(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.RubberBandingAIConfig
struct FRubberBandingAIConfig
{
public:
	bool                                         bShouldEnableRubberBanding;                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3239[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DistanceToTarget;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LimitFallbackDistanceFromHome;                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceToBeAtHome;                                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct LOTF2.AwarenessAIConfig
struct FAwarenessAIConfig
{
public:
	bool                                         bShouldOverrideGlobalData;                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_323A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ObstacleOrNavEdgeMinDistanceDefault;               // 0x4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                DistancesToCheckInCardinalDirections;              // 0x8(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	float                                        CheckForSpaceAroundAI_Rate;                        // 0x18(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CheckForObstaclesAroundAI_Rate;                    // 0x1C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ObstaclesMask;                                     // 0x20(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_323B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DestructibleReactionDistance;                      // 0x24(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct LOTF2.NavMovementAIConfig
struct FNavMovementAIConfig
{
public:
	float                                        ComputeFloorDistSweepOffset;                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ComputeFloorDistSweepMultiplier;                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxGoalDistanceOutOfNavInCentimeters;              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanNavigateWater;                                 // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanNavigateFire;                                  // 0xD(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanNavigatePoison;                                // 0xE(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexNavLinkActionType_Down        NavLinksConfig_Down;                               // 0xF(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexNavLinkActionType_Up          NavLinksConfig_Up;                                 // 0x10(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_323C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LOTF2.CharacterStatsBasic
struct FCharacterStatsBasic
{
public:
	float                                        Health;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Vigor;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VigorCapacity;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stamina;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Poise;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoiseLevel;                                        // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Toughness;                                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mana;                                              // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct LOTF2.CharacterBattleStats
struct FCharacterBattleStats
{
public:
	float                                        AttackPhysical;                                    // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackFire;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackHoly;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackDark;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackMagic;                                       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackPoise;                                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackStamina;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackStagger;                                     // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackProvisionalDamage;                           // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackAggro;                                       // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaCost;                                       // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackRepelAmount;                                 // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefensePhysical;                                   // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseSlash;                                      // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseStrike;                                     // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseThrust;                                     // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseFire;                                       // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseHoly;                                       // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseDark;                                       // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseMagic;                                      // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefensePoise;                                      // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseStamina;                                    // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseStagger;                                    // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseProvisionalDamage;                          // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseAggro;                                      // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardDefensePhysical;                              // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardDefenseFire;                                  // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardDefenseHoly;                                  // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardDefenseDark;                                  // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardDefenseMagic;                                 // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardDefensePoise;                                 // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardDefenseStamina;                               // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardDefenseProvisionalDamage;                     // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardDefenseAggro;                                 // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardAngle;                                        // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardAngleOffset;                                  // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardStability;                                    // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardDefenseStagger;                               // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeflectionGuard;                                   // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeflectionGuardMultiplierOnParry;                  // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct LOTF2.CharacterStatusEffectsStats
struct FCharacterStatusEffectsStats
{
public:
	float                                        DamageBleed;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamagePoison;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageWither;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageFrostbite;                                   // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageSmite;                                       // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageBurn;                                        // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageIgnite;                                      // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LOTF2.CharacterResitancesStats
struct FCharacterResitancesStats
{
public:
	float                                        ResistanceBleed;                                   // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResistancePoison;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResistanceWither;                                  // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResistanceFrostbite;                               // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResistanceSmite;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResistanceBurn;                                    // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResistanceIgnite;                                  // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardResistanceBleed;                              // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardResistancePoison;                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardResistanceWither;                             // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardResistanceFrostbite;                          // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardResistanceSmite;                              // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardResistanceBurn;                               // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardResistanceIgnite;                             // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.CharacterLootConfig
struct FCharacterLootConfig
{
public:
	float                                        TODO_Souls;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_323F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          TODO_ItemsToDrop;                                  // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LOTF2.CharacterStatsMovement
struct FCharacterStatsMovement
{
public:
	float                                        WalkSpeed;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RunSpeed;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SprintSpeed;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SprintStaminaCost;                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardSpeed;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PatrolSpeed;                                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PatrolSpeedMultiplier;                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultRotationRate;                               // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultRotationRateDuringMontages;                 // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DodgeStaminaBaseCost;                              // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxEquippedWeight;                                 // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EncumbranceThreshold;                              // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct LOTF2.CharacterStaminaConfig
struct FCharacterStaminaConfig
{
public:
	bool                                         StaminaInfinite;                                   // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3243[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TiredStaminaThreshold;                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinStamina;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaRegenRate;                                  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TiredStaminaRegenRate;                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExhaustedStaminaRegenRate;                         // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaRegenDelay;                                 // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExhaustedStaminaRegenDelay;                        // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaStunInitialDuration;                        // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaStunResetDuration;                          // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct LOTF2.CharacterMagicConfig
struct FCharacterMagicConfig
{
public:
	float                                        Mana;                                              // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxMana;                                           // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ManaRegenRate;                                     // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct LOTF2.CharacterAmmoConfig
struct FCharacterAmmoConfig
{
public:
	float                                        Ammo;                                              // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAmmo;                                           // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmmoRegenRate;                                     // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct LOTF2.CharacterBodyConfigOld
struct FCharacterBodyConfigOld
{
public:
	float                                        HitHeight;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HitRadius;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x380 (0x388 - 0x8)
// ScriptStruct LOTF2.CharacterAIConfig
struct FCharacterAIConfig : public FTableRowBase
{
public:
	class UBehaviorTree*                         MasterBehavior;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, class UBehaviorTree*> DynamicBehaviors;                                  // 0x10(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UBehaviorTree>          MasterBehaviorTree;                                // 0x60(0x30)(Deprecated, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, TSoftObjectPtr<class UBehaviorTree>> Behaviors;                                         // 0x90(0x50)(Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
	class UBlackboardData*                       BlackboardAsset;                                   // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UBlackboardData>        Blackboard;                                        // 0xE8(0x30)(Deprecated, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAITargetSystemConfig                 TargetSystemConfig;                                // 0x118(0x68)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRubberBandingAIConfig                RubberBandingConfig;                               // 0x180(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterAISensesConfig              SensesConfig;                                      // 0x190(0x120)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FCharacterAIBattleConfig              BattleConfig;                                      // 0x2B0(0x74)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterAITargetConfig              TargetConfig;                                      // 0x324(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3244[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAwarenessAIConfig                    AwarenessConfig;                                   // 0x330(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FVector                               EnvironmentCapsuleChecksOffset;                    // 0x358(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EnvironmentCapsuleRadiusChecks;                    // 0x370(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavMovementAIConfig                  NavMovmentConfig;                                  // 0x374(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.TraversalSpline
struct FTraversalSpline
{
public:
	TArray<struct FSplinePoint>                  SplinePoints;                                      // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LOTF2.CharacterAttributes
struct FCharacterAttributes
{
public:
	float                                        Strength;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Agility;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Faith;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Endurance;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Vitality;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Luck;                                              // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Order;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chaos;                                             // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1A8 (0x1B0 - 0x8)
// ScriptStruct LOTF2.CharacterStatsConfig
struct FCharacterStatsConfig : public FTableRowBase
{
public:
	struct FCharacterStatsBasic                  BasicStats;                                        // 0x8(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUsesAttributes;                                   // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3248[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterAttributes                  Attributes;                                        // 0x2C(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterBattleStats                 BattleStats;                                       // 0x4C(0xA0)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterStatsMovement               MovementStats;                                     // 0xEC(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterStaminaConfig               StaminaConfig;                                     // 0x11C(0x28)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterMagicConfig                 MagicStats;                                        // 0x144(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterAmmoConfig                  AmmoStats;                                         // 0x150(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterStatusEffectsStats          StatusEffectsStats;                                // 0x15C(0x1C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterResitancesStats             ResistancesStats;                                  // 0x178(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct LOTF2.CharacterAnimConfig
struct FCharacterAnimConfig : public FTableRowBase
{
public:
	TMap<enum class EStanceType, struct FCharacterAnimationsConfig> AnimationsConfigs;                                 // 0x8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct LOTF2.CharactersBodyConfig
struct FCharactersBodyConfig : public FTableRowBase
{
public:
	TSubclassOf<class ALOTF2Character>           CharacterBlueprintData;                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class ALOTF2Character>         CharacterBlueprint;                                // 0x10(0x30)(Deprecated, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LOTF2.InheritedGameplayEffectsWithParams
struct FInheritedGameplayEffectsWithParams
{
public:
	struct FGameplayEffectsWithParamsContainer   Combined;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NativeAccessSpecifierPublic)
	struct FGameplayEffectsWithParamsContainer   Added;                                             // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LOTF2.InheritedGameplayAbilitiesArray
struct FInheritedGameplayAbilitiesArray
{
public:
	TArray<TSubclassOf<class UGameplayAbility>>  CombinedWithParent;                                // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayAbility>>  AddedThisClass;                                    // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftClassPtr<class UGameplayAbility>> Combined;                                          // 0x20(0x10)(ZeroConstructor, Transient, Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftClassPtr<class UGameplayAbility>> Added;                                             // 0x30(0x10)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE8 - 0x8)
// ScriptStruct LOTF2.CharacterGameplayAbilitiesConfig
struct FCharacterGameplayAbilitiesConfig : public FTableRowBase
{
public:
	struct FInheritedGameplayEffectsWithParams   InheritedGameplayEffects;                          // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FInheritedGameplayAbilitiesArray      InheritedGameplayAbilities;                        // 0x28(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FInheritedTagContainer                InheritedCharacterTags;                            // 0x68(0x60)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TArray<struct FHexBattleEffectIdentifier>    BattleEffects;                                     // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FAutonomousAreaSpawnDef>       AutonomousAreaSpawnDefs;                           // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x5F8 (0x600 - 0x8)
// ScriptStruct LOTF2.WeaponStance
struct FWeaponStance : public FTableRowBase
{
public:
	struct FDataTableRowHandle                   MovementMoveset;                                   // 0x8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCharacterAnimationsConfig            GeneralMoveset;                                    // 0x18(0x5D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UDataTable*                            AttackMoveset;                                     // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            AttackDefinitions;                                 // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            HitboxesDefinition;                                // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x200 (0x208 - 0x8)
// ScriptStruct LOTF2.WeaponData
struct FWeaponData : public FTableRowBase
{
public:
	uint8                                        Pad_324A[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseStaminaCost;                                   // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackRepelAmount;                                 // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardAngle;                                        // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stability;                                         // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardRepelAmount;                                  // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardRepelMultiplierOnParryAmount;                 // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScalingStrength;                                   // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScalingAgility;                                    // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScalingFaith;                                      // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RequirementStrenth;                                // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RequirementAgility;                                // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RequirementFaith;                                  // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_324B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class AWeaponActor>            WeaponActor;                                       // 0x90(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EStanceType, struct FWeaponStance> Stances;                                           // 0xC0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UDataTable*                            VFXData;                                           // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharacterGameplayAbilitiesConfig     GameplayAbilitiesConfig;                           // 0x118(0xE8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EWeaponCategory                   WeaponCategory;                                    // 0x200(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_324C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x8 - 0x8)
// ScriptStruct LOTF2.ArmorData
struct FArmorData : public FTableRowBase
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct LOTF2.AccessoryData
struct FAccessoryData : public FTableRowBase
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct LOTF2.ConsumableItemData
struct FConsumableItemData : public FTableRowBase
{
public:
};

// 0xD8 (0xE0 - 0x8)
// ScriptStruct LOTF2.CharacterDefinition
struct FCharacterDefinition : public FTableRowBase
{
public:
	TSoftObjectPtr<class UCharacterData>         RedirectCharacterData;                             // 0x8(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCharacterData>          RedirectCharacterDataClass;                        // 0x38(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   Stats;                                             // 0x68(0x10)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   BodyConfiguration;                                 // 0x78(0x10)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   AnimationsConfiguration;                           // 0x88(0x10)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsAICharacter;                                    // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_324D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   AIConfiguration;                                   // 0xA0(0x10)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bHasEquipment;                                     // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_324E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   EquipmentConfig;                                   // 0xB8(0x10)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   GameplayAbilitiesConfig;                           // 0xC8(0x10)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EAIFactionTeams                   Faction;                                           // 0xD8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_324F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.BloodDataFX
struct FBloodDataFX
{
public:
	class UNiagaraSystem*                        BloodVisual;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        NiagaraDecalGenerator;                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.CustomizationCamera
struct FCustomizationCamera
{
public:
	enum class EBodyShapeCamera                  CameraType;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3250[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACameraActor*                          Camera;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.PoiseReactionLevelSetting
struct FPoiseReactionLevelSetting
{
public:
	int32                                        PoiseReactionLevel;                                // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3251[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  PoiseReactions;                                    // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LOTF2.ExtraStaggerByHealthDamageConfig
struct FExtraStaggerByHealthDamageConfig
{
public:
	struct FGameplayAttribute                    ExtraDamageMultiplierAttribute;                    // 0x0(0x38)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.HexStatusEffectBattleEffectsArray
struct FHexStatusEffectBattleEffectsArray
{
public:
	TArray<struct FHexBattleEffectIdentifier>    BattleEffects;                                     // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.HexStatusEffectBattleEffectsByAttribute
struct FHexStatusEffectBattleEffectsByAttribute
{
public:
	TMap<struct FGameplayAttribute, struct FHexStatusEffectBattleEffectsArray> EffectClasses;                                     // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct LOTF2.HexAIDamageAggroSettings
struct FHexAIDamageAggroSettings
{
public:
	float                                        MinAggroIncreaseDamage;                            // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAggroIncreaseDamage;                            // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasMaxAggroIncreaseDamage;                        // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3252[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DamageAggroDecayStartDelay;                        // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    DamageAggroDecayCurve;                             // 0x10(0x88)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTag                          AggroDamageType;                                   // 0x98(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.HexAITargetAggroSettings
struct FHexAITargetAggroSettings
{
public:
	float                                        NewTargetAggroBonusScore;                          // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecayRateForNewTargetAggroBonusScore;              // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviousTargetAggroDetrimentScore;                 // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecayRateForPreviousTargetAggroDetrimentScore;     // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct LOTF2.ComboAnimData
struct FComboAnimData : public FTableRowBase
{
public:
	TSoftObjectPtr<class UAnimationAsset>        Anim;                                              // 0x8(0x30)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          AttackTypeTag;                                     // 0x38(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlaybackRate;                                      // 0x40(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendInTime;                                       // 0x44(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendOutTime;                                      // 0x48(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3253[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          AllowedNotifyGroups;                               // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LOTF2.LOTF2Input
struct FLOTF2Input
{
public:
	class FString                                ActionName;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x10(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KeyAsString;                                       // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShift : 1;                                        // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCtrl : 1;                                         // Mask: 0x2, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlt : 1;                                          // Mask: 0x4, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCmd : 1;                                          // Mask: 0x8, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3254[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LOTF2.LOTF2InputAxis
struct FLOTF2InputAxis
{
public:
	class FString                                AxisName;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KeyAsString;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x20(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3255[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LOTF2.PlayerPresetData
struct FPlayerPresetData
{
public:
	class ALOTF2Character*                       PresetCharacter;                                   // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEquipmentManagerComponent*            EquipmentManagerComponent;                         // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMutableWrapperComponent*              MutableWrapperComponent;                           // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASpotLight*>                    SelectionLights;                                   // 0x18(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UEquipableInventoryWeapon*>     WeaponsEquipment;                                  // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UCustomizationSettings*                CustomizationSettings;                             // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.MorphTargetFeature
struct FMorphTargetFeature
{
public:
	class FString                                MutableName;                                       // 0x0(0x10)(Edit, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        bValue;                                            // 0x10(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3256[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.MorphTargetFeatureArray
struct FMorphTargetFeatureArray
{
public:
	TArray<struct FMorphTargetFeature>           MorphFeature;                                      // 0x0(0x10)(Edit, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.CustomizationHeadArray
struct FCustomizationHeadArray
{
public:
	TArray<class FString>                        HeadArray;                                         // 0x0(0x10)(Edit, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct LOTF2.DamageDealerInitialParams
struct FDamageDealerInitialParams
{
public:
	uint8                                        Pad_3257[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x110 (0x110 - 0x0)
// ScriptStruct LOTF2.HitBoxRuntimeData
struct FHitBoxRuntimeData
{
public:
	uint8                                        Pad_3258[0x70];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       ComponentToAttach;                                 // 0x70(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               SourceObject;                                      // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3259[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectsWithParamsContainer   GameplayEffectsWithParamsContainer;                // 0xD0(0x10)(NativeAccessSpecifierPublic)
	uint8                                        Pad_325A[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x220 (0x220 - 0x0)
// ScriptStruct LOTF2.TemporalHitboxPair
struct FTemporalHitboxPair
{
public:
	struct FHitBoxRuntimeData                    CurrentHitbox;                                     // 0x0(0x110)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FHitBoxRuntimeData                    PreviousHitbox;                                    // 0x110(0x110)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.TemporalHitboxArray
struct FTemporalHitboxArray
{
public:
	TArray<struct FTemporalHitboxPair>           HitboxesArray;                                     // 0x0(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct LOTF2.CameraSettingElement
struct FCameraSettingElement
{
public:
	class FString                                StringName;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BufferName;                                        // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHexCameraSettings*                    CameraSettings;                                    // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.EquipmentElement
struct FEquipmentElement
{
public:
	class FString                                StringName;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BufferName;                                        // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UEquipementData>         EquipmentDataClass;                                // 0x20(0x30)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.ItemElement
struct FItemElement
{
public:
	class FString                                StringName;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BufferName;                                        // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UItemData>               ItemDataClass;                                     // 0x20(0x30)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.UpgradeMaterialElement
struct FUpgradeMaterialElement
{
public:
	class FString                                StringName;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BufferName;                                        // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UUpgradeMaterialItemData> UpgradeMaterialData;                               // 0x20(0x30)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LOTF2.DialogueAnswerData
struct FDialogueAnswerData
{
public:
	class FText                                  AnswerText;                                        // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EAnswerType                       AnswerType;                                        // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_325B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimationSource                      PlayerAnimation;                                   // 0x1C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_325C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct LOTF2.DialogueMessage
struct FDialogueMessage
{
public:
	class FText                                  NPCText;                                           // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAkAnathemaEvent                      DialogueAudio;                                     // 0x18(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bOverrideTimeOut;                                  // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_325D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OverriddenTimeOut;                                 // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtraTimeoutAfterAudioEnds;                        // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_325E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  OverrideNPCName;                                   // 0x78(0x18)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// 0x168 (0x168 - 0x0)
// ScriptStruct LOTF2.DialogueStepData
struct FDialogueStepData
{
public:
	enum class EDialogueType                     DialogueType;                                      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_325F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogueMessage                      Message;                                           // 0x8(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FDialogueAnswerData>           Answers;                                           // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class EAnswerType>               FinalAnswers;                                      // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<enum class EAnswerType, class FName>    Branches;                                          // 0xB8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  ItemId;                                            // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Vigor;                                             // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          DialogueAnimation;                                 // 0x114(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3260[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UAnimMontage>           FacialAnimationMontage;                            // 0x120(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          QuestActions;                                      // 0x150(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTag                          DialogueStepOptionalTag;                           // 0x160(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct LOTF2.NPCDialogue
struct FNPCDialogue : public FTableRowBase
{
public:
	class FText                                  NPCName;                                           // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FDialogueStepData>             Phrases;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDialogueMessage>              WelcomeMessages;                                   // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDialogueMessage>              FarewellMessages;                                  // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.DLCState
struct FDLCState
{
public:
	uint8                                        Pad_3261[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.MontageSourceIDs
struct FMontageSourceIDs
{
public:
	uint8                                        Pad_3262[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.MaterialsToSwitch
struct FMaterialsToSwitch
{
public:
	TArray<class UMaterialInterface*>            Materials;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct LOTF2.EnergyChangeBase
struct FEnergyChangeBase
{
public:
	TWeakObjectPtr<class UObject>                Owner;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEnergyType                       EnergyType;                                        // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3263[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x14 - 0xC)
// ScriptStruct LOTF2.EnergyChangeRule
struct FEnergyChangeRule : public FEnergyChangeBase
{
public:
	float                                        ChangeRate;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoDiscard;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlagForRemoval;                                   // 0x11(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3264[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x10 - 0xC)
// ScriptStruct LOTF2.EnergyRegenRateChangeRule
struct FEnergyRegenRateChangeRule : public FEnergyChangeBase
{
public:
	float                                        RegenRateMod;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct LOTF2.PendingEnergy
struct FPendingEnergy
{
public:
	enum class EEnergyUseRule                    UseRule;                                           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3265[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Energy;                                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPending : 1;                                      // Mask: 0x1, PropSize: 0x10x8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3266[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.LandingFxByFallHeight
struct FLandingFxByFallHeight
{
public:
	class UNiagaraSystem*                        LightLandingFX;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        HeavyLandingFX;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.LandingFxData
struct FLandingFxData
{
public:
	TMap<class UPhysicalMaterial*, struct FLandingFxByFallHeight> LandingFXByPhysicalMaterial;                       // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.HexRuneEquipmentSlot
struct FHexRuneEquipmentSlot
{
public:
	class UHexRuneInventoryItem*                 RuneItem;                                          // 0x0(0x8)(Edit, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.AkSwitchesOnEquip
struct FAkSwitchesOnEquip
{
public:
	class UAkSwitchValue*                        AkSwitchOnEquipItem;                               // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkSwitchValue*                        AkSwitchEndOnEquipItem;                            // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct LOTF2.EventNameBasedTextures
struct FEventNameBasedTextures
{
public:
	struct FGameplayTag                          Action;                                            // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class ESupportedPlatforms, class UTexture2D*> TexturesByPlatform;                                // 0x8(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.InputKeyPlatformTextures
struct FInputKeyPlatformTextures
{
public:
	TMap<enum class ESupportedPlatforms, class UTexture2D*> TexturesByPlatform;                                // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x18 (0x68 - 0x50)
// ScriptStruct LOTF2.InputKeyBasedTextures
struct FInputKeyBasedTextures : public FInputKeyPlatformTextures
{
public:
	struct FKey                                  Key;                                               // 0x50(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x60 - 0x50)
// ScriptStruct LOTF2.CompositeInputKeyBasedTextures
struct FCompositeInputKeyBasedTextures : public FInputKeyPlatformTextures
{
public:
	TArray<struct FKey>                          Keys;                                              // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.HexAttackTypeTags
struct FHexAttackTypeTags
{
public:
	uint8                                        Pad_3267[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LOTF2.DamageData
struct FDamageData
{
public:
	uint8                                        Pad_3268[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x210 (0x210 - 0x0)
// ScriptStruct LOTF2.ExecutionContextData
struct FExecutionContextData
{
public:
	uint8                                        Pad_3269[0x1F8];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UHexDamageDefEffectData*               AttackDamageData;                                  // 0x1F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_326A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.EntryPointWidgetEntry
struct FEntryPointWidgetEntry
{
public:
	class UExtensionPointEntryWidget*            EntryWidget;                                       // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_326B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct LOTF2.FeedbackCueDefinitionRow
struct FFeedbackCueDefinitionRow : public FTableRowBase
{
public:
	struct FGameplayTag                          GameplayEventTag;                                  // 0x8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          GameplayCueTag;                                    // 0x10(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_326C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct LOTF2.AnathemaGameplayCueData
struct FAnathemaGameplayCueData
{
public:
	struct FGameplayTagContainer                 AllAssetsTags;                                     // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TargetTags;                                        // 0x20(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 InstigatorTags;                                    // 0x40(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 SourceTags;                                        // 0x60(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EHexAttackTypeEffectivenes        AttackTypeEffectiveness;                           // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasBeenBlocked;                                   // 0x81(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_326D[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LOTF2.PlayHitFXParameters
struct FPlayHitFXParameters
{
public:
	struct FRotator                              Orientation;                                       // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAnathemaHitFXType                WeaponHitFXType;                                   // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableSound;                                      // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableVFX;                                        // 0x1A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_326E[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct LOTF2.HitFxData
struct FHitFxData
{
public:
	struct FAkAnathemaEvent                      HitAkAnathemaEvent;                                // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UAkSwitchValue*                        HitAkSwitch;                                       // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkSwitchValue*                        BlockAkSwitch;                                     // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAkAnathemaEvent                      BlockAkAnathemaEvent;                              // 0x60(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        HitNiagaraFx;                                      // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        BlockNiagaraFx;                                    // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  HitSocketName;                                     // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BlockSocketName;                                   // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        HitNiagaraTrail;                                   // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// ScriptStruct LOTF2.GalleryEntry
struct FGalleryEntry
{
public:
	TSoftObjectPtr<class UTexture2D>             IconTexture;                                       // 0x0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAnimationAsset>        AnimationAsset;                                    // 0x30(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCharacterData>          CharacterDataClass;                                // 0x60(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            OffsetTransform;                                   // 0x90(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffsetLevelScale;                                  // 0xF0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_326F[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.GalleryEntryMapWrapper
struct FGalleryEntryMapWrapper
{
public:
	TMap<struct FGameplayTag, struct FGalleryEntry> EntryTagMap;                                       // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LOTF2.GalleryActor
struct FGalleryActor
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x20(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttenuationRadius;                                 // 0x38(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3270[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.DamageAmount
struct FDamageAmount
{
public:
	float                                        BaseAmount;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageAmount;                                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.SubDamageEvent
struct FSubDamageEvent
{
public:
	TSubclassOf<class UDamageType>               DamageType;                                        // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageAmount;                                      // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3271[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x190 (0x1A0 - 0x10)
// ScriptStruct LOTF2.DamageComponentDamageEvent
struct FDamageComponentDamageEvent : public FDamageEvent
{
public:
	float                                        Damage;                                            // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaDamage;                                     // 0x14(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ManaDamage;                                        // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PoiseDamage;                                       // 0x1C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal             ShotDirection;                                     // 0x20(0x18)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceLaunchIntoTheAir;                            // 0x38(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3272[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector_NetQuantizeNormal             ShotForce;                                         // 0x40(0x18)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            HitInfo;                                           // 0x58(0xE8)(BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                PropActor;                                         // 0x140(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSubDamageEvent>               SubDamageEvents;                                   // 0x148(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bDEBUGAlwaysDismember : 1;                         // Mask: 0x1, PropSize: 0x10x158(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDismember : 1;                                    // Mask: 0x2, PropSize: 0x10x158(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanBeDeflected : 1;                               // Mask: 0x4, PropSize: 0x10x158(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWasDeflected : 1;                                 // Mask: 0x8, PropSize: 0x10x158(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanBeParried : 1;                                 // Mask: 0x10, PropSize: 0x10x158(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWasParried : 1;                                   // Mask: 0x20, PropSize: 0x10x158(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_25A : 2;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3273[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          LimbTagToDismember;                                // 0x15C(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3274[0x3C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1B8 (0x1C8 - 0x10)
// ScriptStruct LOTF2.DamageComponentDamagerEvent
struct FDamageComponentDamagerEvent : public FDamageEvent
{
public:
	float                                        StaminaCost;                                       // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ManaCost;                                          // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmmoCost;                                          // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3275[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDamageComponentDamageEvent           DamageEvent;                                       // 0x20(0x1A0)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                DamageReceiver;                                    // 0x1C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct LOTF2.GameplayAbilityTargetData_Attack
struct FGameplayAbilityTargetData_Attack : public FGameplayAbilityTargetData
{
public:
	uint8                                        Pad_3276[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x38 - 0x8)
// ScriptStruct LOTF2.GameplayAbilityTargetData_Dodge
struct FGameplayAbilityTargetData_Dodge : public FGameplayAbilityTargetData
{
public:
	uint8                                        Pad_3277[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.MovesetAttackData
struct FMovesetAttackData
{
public:
	class UDataTable*                            AttackMoveset;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            AttackDefinitions;                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            HitboxesDefinition;                                // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct LOTF2.WeaponMovesetData
struct FWeaponMovesetData
{
public:
	struct FGameplayTag                          MovesetTag;                                        // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          SyncedAnimsTag;                                    // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovesetAttackData                    AttackData;                                        // 0x10(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UDataTable*                            OverrideStanceComboSequenceTable;                  // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHexBattleEffectIdentifierContainer   StanceBattleEffects;                               // 0x30(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   GameplayEffectsList;                               // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftClassPtr<class UGameplayEffect>> GameplayEffects;                                   // 0x50(0x10)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.ActiveAreaEffectsList
struct FActiveAreaEffectsList
{
public:
	TArray<struct FActiveGameplayEffectHandle>   AppliedEffects;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.ActiveEffectsList
struct FActiveEffectsList
{
public:
	TArray<struct FActiveGameplayEffectHandle>   AppliedEffects;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct LOTF2.GameplayAbilityTargetData_ComboAttack
struct FGameplayAbilityTargetData_ComboAttack : public FGameplayAbilityTargetData
{
public:
	struct FGameplayTag                          AttackTag;                                         // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal             InputVector;                                       // 0x10(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct LOTF2.GameplayAbilityTargetData_MagicConcatenationAbility
struct FGameplayAbilityTargetData_MagicConcatenationAbility : public FGameplayAbilityTargetData
{
public:
	struct FGameplayTag                          ComboTag;                                          // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.LadderMovementData
struct FLadderMovementData
{
public:
	int32                                        TargetRung;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSprinting;                                        // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3278[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct LOTF2.GameplayAbilityTargetData_LadderMovement
struct FGameplayAbilityTargetData_LadderMovement : public FGameplayAbilityTargetData
{
public:
	struct FLadderMovementData                   LadderMovementData;                                // 0x8(0x8)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct LOTF2.GameplayAbilityTargetData_DodgeRoll
struct FGameplayAbilityTargetData_DodgeRoll : public FGameplayAbilityTargetData
{
public:
	class UAnimMontage*                          DodgeRollMontage;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.DodgeRollAnimationData
struct FDodgeRollAnimationData
{
public:
	TMap<struct FGameplayTag, struct FGameplayTag> DodgeRollAnimationByPresentTag;                    // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct LOTF2.GA_InteractWithInventoryItem_TargetData
struct FGA_InteractWithInventoryItem_TargetData : public FGameplayAbilityTargetData
{
public:
	TWeakObjectPtr<class UInventoryItem>         InventoryItem;                                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Amount;                                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInventoryInteractionActionType   ActionType;                                        // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3279[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct LOTF2.UIInteractionAnimationData
struct FUIInteractionAnimationData
{
public:
	struct FAnimationSource                      Start;                                             // 0x0(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  LoopSectionName;                                   // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimationSource                      End;                                               // 0x18(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FAnimationSource                      ConfirmEnd;                                        // 0x28(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	class ULevelSequence*                        LevelSequenceAssetStart;                           // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequence*                        LevelSequenceAssetEnd;                             // 0x40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct LOTF2.HexUIInteractionMontageTargetData
struct FHexUIInteractionMontageTargetData : public FGameplayAbilityTargetData
{
public:
	struct FUIInteractionAnimationData           UIInteractionAnimationData;                        // 0x8(0x48)(NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bSkipStart;                                        // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_327A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ALOTF2Character*                       InteractingCharacter;                              // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct LOTF2.GameplayAbilityTargetData_RangedShotAbility
struct FGameplayAbilityTargetData_RangedShotAbility : public FGameplayAbilityTargetData
{
public:
	float                                        ShootForceAlpha;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPlantShot;                                      // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsShotData;                                       // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_327B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          ComboTag;                                          // 0x10(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrioritizeQuickShotEnabled;                       // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_327C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct LOTF2.GameplayAbilityTargetData_SoulFlayHitConfirm
struct FGameplayAbilityTargetData_SoulFlayHitConfirm : public FGameplayAbilityTargetData
{
public:
	class AActor*                                SoulFlayedTarget;                                  // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexSoulFlayPerformResult         SoulFlayAttackState;                               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_327D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct LOTF2.GameplayAbilityTargetData_SoulFlayPull
struct FGameplayAbilityTargetData_SoulFlayPull : public FGameplayAbilityTargetData
{
public:
	struct FVector_NetQuantize                   PullDirectionWS;                                   // 0x8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct LOTF2.GA_SpawnPickup_TargetData
struct FGA_SpawnPickup_TargetData : public FGameplayAbilityTargetData
{
public:
	uint8                                        Pad_327E[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x48 - 0x8)
// ScriptStruct LOTF2.GameplayAbilityTargetData_SyncAnimInfo
struct FGameplayAbilityTargetData_SyncAnimInfo : public FGameplayAbilityTargetData
{
public:
	class UAnimMontage*                          MontageToPlay;                                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherParticipantActor;                             // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESyncedAnimationRole              AnimationRole;                                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESyncedAttachmentMode             AttachmentMode;                                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_327F[0x26];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bShouldOverrideMovementMode;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3280[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct LOTF2.GameplayAbilityTargetData_SyncedAttack
struct FGameplayAbilityTargetData_SyncedAttack : public FGameplayAbilityTargetData
{
public:
	class APawn*                                 TargetPawn;                                        // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct LOTF2.Turn180Info
struct FTurn180Info
{
public:
	struct FAnimationSource                      TurnAroundLeft;                                    // 0x0(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FAnimationSource                      TurnAroundRight;                                   // 0x10(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MarginDegreesFor180;                               // 0x20(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.DamageCustomCalculationDefinition
struct FDamageCustomCalculationDefinition
{
public:
	uint8                                        Pad_3281[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.BoneWidgetArray
struct FBoneWidgetArray
{
public:
	TMap<class FName, class UHeadFeatureSlider*> BoneWidget;                                        // 0x0(0x50)(BlueprintVisible, ExportObject, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct LOTF2.HeadShape
struct FHeadShape
{
public:
	class FString                                HeadName;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SkinColor;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECharacterBodyType                bodyType;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3282[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x28(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class ECustomizationCategory, class FString> ShapeData;                                         // 0x58(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.BoneNameArray
struct FBoneNameArray
{
public:
	TArray<class FName>                          Bones;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct LOTF2.HexAbilityTagRelationship
struct FHexAbilityTagRelationship : public FTableRowBase
{
public:
	struct FGameplayTag                          AbilityTag;                                        // 0x8(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                  AbilityTags;                                       // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                  BlockAbilitiesWithTag;                             // 0x20(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                  WhiteListForBlockAbilitiesWithTag;                 // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                  CancelAbilitiesWithTag;                            // 0x40(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                  WhiteListForCancelAbilitiesWithTag;                // 0x50(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                  ActivationOwnedTags;                               // 0x60(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                  ActivationRequiredTags;                            // 0x70(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTag>                  ActivationBlockedTags;                             // 0x80(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct LOTF2.FlyTaskParams
struct FFlyTaskParams
{
public:
	uint8                                        Pad_3283[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct LOTF2.HexAILineOfSightParams
struct FHexAILineOfSightParams
{
public:
	enum class EHexAILineOfSightOffsetType       StartPointOffsetType;                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3284[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               StartPointCustomOffset;                            // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexAILineOfSightOffsetType       EndPointOffsetType;                                // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3285[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               EndPointCustomOffset;                              // 0x28(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RayLenghtOffset;                                   // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseQuerierRealm;                                  // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameRealm                        RealmToCheck;                                      // 0x45(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3286[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x40 - 0x40)
// ScriptStruct LOTF2.HexAINoiseEvent
struct FHexAINoiseEvent : public FAINoiseEvent
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.HexAISightEvent
struct FHexAISightEvent
{
public:
	uint8                                        Pad_3287[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SeenActor;                                         // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Observer;                                          // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct LOTF2.HexObstacleDirectionDataWrapper
struct FHexObstacleDirectionDataWrapper
{
public:
	uint8                                        Pad_3288[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct LOTF2.RevengeData
struct FRevengeData
{
public:
	class FString                                LevelId;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SubLevelId;                                        // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SpawnerId;                                         // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RevengeBuffer;                                     // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerEosPid;                                      // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterName;                                     // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFriend;                                         // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3289[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       Date;                                              // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct LOTF2.HexBattleEffectTemplate
struct FHexBattleEffectTemplate : public FTableRowBase
{
public:
	TSubclassOf<class UGameplayEffect>           GameplayEffectClass;                               // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          Param0;                                            // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHexBattleEffectParamType         ParamType0;                                        // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_328A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Param1;                                            // 0x1C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHexBattleEffectParamType         ParamType1;                                        // 0x24(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_328B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Param2;                                            // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHexBattleEffectParamType         ParamType2;                                        // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_328C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Param3;                                            // 0x34(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHexBattleEffectParamType         ParamType3;                                        // 0x3C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_328D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Param4;                                            // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHexBattleEffectParamType         ParamType4;                                        // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_328E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.HexBattleEffectParam
struct FHexBattleEffectParam
{
public:
	struct FGameplayTag                          Param;                                             // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.PerLevelUpgradeCurveDefinition
struct FPerLevelUpgradeCurveDefinition
{
public:
	struct FCurveTableRowHandle                  Curve;                                             // 0x0(0x10)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPerLevelUpgradeCurveBehavior     ApplicationType;                                   // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_328F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x60 - 0x8)
// ScriptStruct LOTF2.HexBattleEffectNumericParam
struct FHexBattleEffectNumericParam : public FHexBattleEffectParam
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayModOp                    ModType;                                           // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3290[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAttribute                    Attribute;                                         // 0x10(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerLevelUpgradeCurveDefinition       ValueByLevel;                                      // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct LOTF2.HexBattleEffectStringParam
struct FHexBattleEffectStringParam : public FHexBattleEffectParam
{
public:
	class FName                                  Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x98 - 0x8)
// ScriptStruct LOTF2.HexBattleEffectAttributeParam
struct FHexBattleEffectAttributeParam : public FHexBattleEffectParam
{
public:
	struct FGameplayAttribute                    Value;                                             // 0x8(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Coefficient;                                       // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayModOp                    ModType;                                           // 0x44(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3291[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAttribute                    Attribute;                                         // 0x48(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerLevelUpgradeCurveDefinition       ValueByLevel;                                      // 0x80(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LOTF2.HexBattleEffectParamsContainer
struct FHexBattleEffectParamsContainer
{
public:
	TArray<struct FHexBattleEffectNumericParam>  NumericEffectParams;                               // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FHexBattleEffectStringParam>   StringEffectParams;                                // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FHexBattleEffectAttributeParam> AttributeEffectParams;                             // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct LOTF2.HexBattleEffectData
struct FHexBattleEffectData : public FTableRowBase
{
public:
	class FName                                  EffectType;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGameplayEffectDurationType       DurationPolicy;                                    // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3292[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Period;                                            // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        StackLimit;                                        // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FHexBattleEffectParamsContainer       EffectParamsContainer;                             // 0x20(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueTag                       GameplayCueTag;                                    // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>           GeneratedGameplayEffectClass;                      // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.CombatEventState
struct FCombatEventState
{
public:
	enum class ECombatEventState                 CombatState;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3293[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ALOTF2Character*                       MainBoss;                                          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct LOTF2.DistanceBasedOptions
struct FDistanceBasedOptions : public FTableRowBase
{
public:
	struct FFloatRange                           DistanceRange;                                     // 0x8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETweenType                        DistanceSmoothCurve;                               // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3294[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EDistanceOptionMode               DistanceMode;                                      // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct LOTF2.FloatSetting
struct FFloatSetting
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3295[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultTargetValue;                                // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDistanceBased;                                    // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3296[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FarTargetValue;                                    // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideFarSettingsSource;                        // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3297[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   DistanceBasedSettingToOverride;                    // 0x18(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3298[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct LOTF2.VectorSetting
struct FVectorSetting
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3299[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DefaultTargetValue;                                // 0x8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDistanceBased;                                    // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_329A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               FarTargetValue;                                    // 0x28(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideFarSettingsSource;                        // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_329B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   DistanceBasedSettingToOverride;                    // 0x48(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_329C[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct LOTF2.Vector2DSetting
struct FVector2DSetting
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_329D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             DefaultTargetValue;                                // 0x8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDistanceBased;                                    // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_329E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             FarTargetValue;                                    // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideFarSettingsSource;                        // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_329F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   DistanceBasedSettingToOverride;                    // 0x38(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_32A0[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct LOTF2.BoolSetting
struct FBoolSetting
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TargetValue;                                       // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32A1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ENonInterpMode                    NonInterpMode;                                     // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32A2[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct LOTF2.HexTransitionCurve
struct FHexTransitionCurve
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETweenType                        TweenCurve;                                        // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct LOTF2.HexCameraTransitionData
struct FHexCameraTransitionData
{
public:
	float                                        TransitionTime;                                    // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHexTransitionCurve                   MasterCurve;                                       // 0x4(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHexTransitionCurve                   FOV;                                               // 0x6(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHexTransitionCurve                   FOVOffset;                                         // 0x8(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHexTransitionCurve                   ViewPitchMin;                                      // 0xA(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHexTransitionCurve                   ViewPitchMax;                                      // 0xC(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHexTransitionCurve                   YawOffset;                                         // 0xE(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHexTransitionCurve                   SpringArmLength;                                   // 0x10(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHexTransitionCurve                   SpringArmLengthOffset;                             // 0x12(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHexTransitionCurve                   CloseArmLength;                                    // 0x14(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHexTransitionCurve                   BaseTargetOffset;                                  // 0x16(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHexTransitionCurve                   TargetOffset;                                      // 0x18(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHexTransitionCurve                   BaseSocketOffset;                                  // 0x1A(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHexTransitionCurve                   SocketOffset;                                      // 0x1C(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHexTransitionCurve                   CameraLagSpeed;                                    // 0x1E(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHexTransitionCurve                   CameraRotationLagSpeed;                            // 0x20(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHexTransitionCurve                   CameraLagMaxDistance;                              // 0x22(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHexTransitionCurve                   CloseCollisionFOVOffset;                           // 0x24(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHexTransitionCurve                   CloseCollisionHeightOffset;                        // 0x26(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHexTransitionCurve                   FocusCenterOffsetRatio;                            // 0x28(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHexTransitionCurve                   FocusAreaSizeRatio;                                // 0x2A(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_32A3[0x54];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.HexTransition
struct FHexTransition
{
public:
	class UHexCameraTransition*                  CameraTransition;                                  // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHexCameraSettings*                    CameraSettings;                                    // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LOTF2.HexCoffinFrustumDefinition
struct FHexCoffinFrustumDefinition
{
public:
	uint8                                        Pad_32A4[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LOTF2.HexCoffinSetup
struct FHexCoffinSetup
{
public:
	uint8                                        Pad_32A5[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x108 - 0x0)
// ScriptStruct LOTF2.HexCoffinShape
struct FHexCoffinShape
{
public:
	uint8                                        Pad_32A6[0x108];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.HexPlayerPowerLevel
struct FHexPlayerPowerLevel
{
public:
	int32                                        WeaponUpgradePowerLevel;                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VigorLevelPowerLevel;                              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct LOTF2.GameCreditsData
struct FGameCreditsData : public FTableRowBase
{
public:
	class FText                                  Category;                                          // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class FString>                        TeamMembers;                                       // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Logo;                                              // 0x30(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct LOTF2.GameCreditsSpecialThanksData
struct FGameCreditsSpecialThanksData : public FTableRowBase
{
public:
	TArray<class FString>                        SpecialThanksText;                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct LOTF2.ConfirmationDialogAction
struct FConfirmationDialogAction
{
public:
	enum class EMessagingResult                  Result;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ActionId;                                          // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ActionDescription;                                 // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.QuestionsArray
struct FQuestionsArray
{
public:
	TSet<int32>                                  QuestionIndexes;                                   // 0x0(0x50)(Edit, BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.HexNPCAnsweredQuestions
struct FHexNPCAnsweredQuestions
{
public:
	TMap<class FName, struct FQuestionsArray>    AnsweredQuestionsByDialogue;                       // 0x0(0x50)(SaveGame, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.HexDialogueSystemSaveData
struct FHexDialogueSystemSaveData
{
public:
	TMap<struct FGameplayTag, struct FHexNPCAnsweredQuestions> AnsweredQuestionsByNPC;                            // 0x0(0x50)(SaveGame, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct LOTF2.HexEnvInteractionInfluencerCapsuleDefinition
struct FHexEnvInteractionInfluencerCapsuleDefinition
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StartBoneName;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBoneName;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct LOTF2.HexEnvInteractionParticle
struct FHexEnvInteractionParticle
{
public:
	struct FVector                               Position;                                          // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ForwardVector;                                     // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rotation;                                          // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32A9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Velocity;                                          // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pressure;                                          // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct LOTF2.HexEnvInteractionInfluencerSimulationParameters
struct FHexEnvInteractionInfluencerSimulationParameters
{
public:
	float                                        ParticleSize;                                      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParticlePressure;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnIntervalMinValue;                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnIntervalMaxValue;                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnMinimumVelocityMagnitude;                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnForwardOffset;                                // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawAlignedParticles;                             // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32AA[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct LOTF2.HexEnvInteractionInfluencer
struct FHexEnvInteractionInfluencer
{
public:
	class UHexEnvInteractionInfluencerComponent* Component;                                         // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHexEnvInteractionInfluencerSimulationParameters SimulationParameters;                              // 0x8(0x1C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_32AB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHexEnvInteractionParticle>    Particles;                                         // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewSpawnTime;                                      // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CapsuleRowIndex;                                   // 0x40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TriggerCounter;                                    // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x198 (0x198 - 0x0)
// ScriptStruct LOTF2.EnvOverlapDataWithProfile
struct FEnvOverlapDataWithProfile
{
public:
	struct FAIDataProviderFloatValue             ExtentX;                                           // 0x0(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             ExtentY;                                           // 0x38(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             ExtentZ;                                           // 0x70(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             ShapeOffsetX;                                      // 0xA8(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             ShapeOffsetY;                                      // 0xE0(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue             ShapeOffsetZ;                                      // 0x118(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue              CheckAxiomObstacles;                               // 0x150(0x38)(Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FName                                  OverlapProfileName;                                // 0x188(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEnvOverlapShape                  OverlapShape;                                      // 0x190(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyBlockingHits;                                 // 0x191(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverlapComplex;                                   // 0x192(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipOverlapQuerier;                               // 0x193(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32AC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct LOTF2.HexTraceData
struct FHexTraceData
{
public:
	uint8                                        Pad_32AD[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ItemActor;                                         // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorld*                                World;                                             // 0x38(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32AE[0x98];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.HexFocusDirSettings
struct FHexFocusDirSettings
{
public:
	uint8                                        Pad_32AF[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LOTF2.RotationRateAngleLimits
struct FRotationRateAngleLimits
{
public:
	struct FVector                               CenterLimitDirection;                              // 0x0(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinAngle;                                          // 0x18(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAngle;                                          // 0x1C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.AngleSnapSetting
struct FAngleSnapSetting
{
public:
	float                                        MinAngle;                                          // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAngle;                                          // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x98 - 0x80)
// ScriptStruct LOTF2.HexGameplayEffectContext
struct FHexGameplayEffectContext : public FGameplayEffectContext
{
public:
	class FName                                  BattleEffectName;                                  // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                          GenericGameplayTag;                                // 0x88(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               OptionalObject;                                    // 0x90(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LOTF2.HexGameUserSettingsLocalData
struct FHexGameUserSettingsLocalData
{
public:
	bool                                         FSREnabled;                                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFSRQualityMode                   FSRQuality;                                        // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FSRSharpness;                                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DLSSEnabled;                                       // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EDLSSQualityMode                  DLSSQuality;                                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DLSSSharpness;                                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DLSSFrameGenerationEnabled;                        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DLSSPPreferNISSharpen;                             // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NISEnabled;                                        // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32B2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NISSharpness;                                      // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENVReflexMode                     NVReflexMode;                                      // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMotionBlurEnabled;                                // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFilmGrainEnabled;                                 // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChromaticAberrationEnabled;                       // 0x26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayerLanternCastShadows;                         // 0x27(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPresetRenderMode                 PresetRenderMode;                                  // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bQualityAutoDetected;                              // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RunAndApplyBenchmarkAtStartup;                     // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32B3[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct LOTF2.HexGameUserSettingsData
struct FHexGameUserSettingsData
{
public:
	uint32                                       HexVersion;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUserReadLegalAgreements;                          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32B4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Brightness;                                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Contrast;                                          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Saturation;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MasterSoundVolume;                                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectsSoundVolume;                                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MusicSoundVolume;                                  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VoiceSoundVolume;                                  // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EnvironmentSoundVolume;                            // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ControllerSpeakerSoundVolume;                      // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMouseVerticalAxisInverted;                      // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMouseHorizontalAxisInverted;                    // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGamepadVerticalAxisInverted;                    // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGamepadHorizontalAxisInverted;                  // 0x2F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAutoTargetChangeEnabled;                        // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlineMode;                                       // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowCrossplay;                                   // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32B5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PendingCulture;                                    // 0x38(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32B6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FKey>               Mappings;                                          // 0x50(0x50)(NativeAccessSpecifierPublic)
	bool                                         bIsAutoLockOnEnabled;                              // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoesStabCancelLock;                               // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsControllerVibrationEnabled;                     // 0xA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDisplayBloodEnabled;                            // 0xA3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsResetCameraYAxis;                               // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CameraSpeed;                                       // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouseSensitivity;                                  // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStabCameraEnabled;                                // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCameraShakeEnabled;                               // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrioritizeQuickShotEnabled;                       // 0xB2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSubtitlesEnabled;                                 // 0xB3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESubtitleDisplayTextSize          SubtitleTextSize;                                  // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTutorialsEnabled;                                 // 0xB5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DisplayBrightnesCalibrationAtStart;                // 0xB6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCompositeModeEnabled;                             // 0xB7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       CompositeModeUILevels;                             // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.InputModifierStepFunctionStep
struct FInputModifierStepFunctionStep
{
public:
	float                                        Threshold;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.InputModifierStepFunction
struct FInputModifierStepFunction
{
public:
	float                                        DefaultValue;                                      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInputModifierStepFunctionStep> Steps;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.LevelNavBoundsContainer
struct FLevelNavBoundsContainer
{
public:
	class ULevel*                                OwningLevel;                                       // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ANavMeshBoundsVolume*>          OwnedNavVolumes;                                   // 0x8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.HexTileData
struct FHexTileData
{
public:
	uint8                                        Pad_32B9[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct LOTF2.HexNavDataDebugEvent
struct FHexNavDataDebugEvent
{
public:
	uint8                                        Pad_32BA[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LOTF2.HexNavLinkInfo
struct FHexNavLinkInfo
{
public:
	struct FVector                               NavStartLocation;                                  // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               NavEndLocation;                                    // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EHexNavLinkDirection              NavLinkDir;                                        // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_32BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NavLinkHeight;                                     // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        NavLinkLength;                                     // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_32BC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LOTF2.SplitGamertag
struct FSplitGamertag
{
public:
	uint8                                        Pad_32BD[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1E8 (0x1E8 - 0x0)
// ScriptStruct LOTF2.HexPersistentData
struct FHexPersistentData
{
public:
	TMap<class FName, class FString>             StringData;                                        // 0x0(0x50)(SaveGame, NativeAccessSpecifierPublic)
	TMap<class FName, int32>                     IntData;                                           // 0x50(0x50)(SaveGame, NativeAccessSpecifierPublic)
	TMap<class FName, float>                     FloatData;                                         // 0xA0(0x50)(SaveGame, NativeAccessSpecifierPublic)
	TMap<class FName, bool>                      BoolData;                                          // 0xF0(0x50)(SaveGame, NativeAccessSpecifierPublic)
	TMap<class FName, uint8>                     DataPersistenceFlags;                              // 0x140(0x50)(SaveGame, NativeAccessSpecifierPublic)
	uint32                                       SaveVersion;                                       // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32BE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class FString>             DebugTranslationMap;                               // 0x198(0x50)(SaveGame, NativeAccessSpecifierPublic)
};

// 0x0 (0x880 - 0x880)
// ScriptStruct LOTF2.HexPlayerAnimInstanceProxy
struct FHexPlayerAnimInstanceProxy : public FAnimInstanceProxy
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct LOTF2.HexPlayMontageTargetData
struct FHexPlayMontageTargetData : public FGameplayAbilityTargetData
{
public:
	struct FGameplayTag                          AnimationTag;                                      // 0x8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct LOTF2.GameplayAbilityTargetData_RangedAbility
struct FGameplayAbilityTargetData_RangedAbility : public FGameplayAbilityTargetData
{
public:
	float                                        ShootForceAlpha;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              PlayerCameraRotation;                              // 0x10(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsPlantShot;                                      // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32C0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct LOTF2.GameplayAbilityTargetData_MagicComboAbility
struct FGameplayAbilityTargetData_MagicComboAbility : public FGameplayAbilityTargetData
{
public:
	struct FGameplayTag                          NewMagicTag;                                       // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.HexRecastStreamingChunk
struct FHexRecastStreamingChunk
{
public:
	class UHexRecastNavMeshDataChunk*            Chunk;                                             // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAdd;                                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentTile;                                       // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct LOTF2.HexTileID
struct FHexTileID
{
public:
	uint8                                        Pad_32C2[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LOTF2.SoulFlayPull
struct FSoulFlayPull
{
public:
	class AActor*                                SoulPullInstigator;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal             PullDirectionWS;                                   // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PullMaxDistance;                                   // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PullDuration;                                      // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsCosmeticSoulFlay : 1;                           // Mask: 0x1, PropSize: 0x10x28(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldCauseTargetChange : 1;                      // Mask: 0x2, PropSize: 0x10x28(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSoulPullStarted : 1;                              // Mask: 0x4, PropSize: 0x10x28(0x1)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32C3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.HexStateTreeCondition_InstanceData_Target
struct FHexStateTreeCondition_InstanceData_Target
{
public:
	class UAITargetSystemComponent*              OwnerTargetComponentSystem;                        // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.HexStateTreeCondition_InstanceData_IsTargetSensed
struct FHexStateTreeCondition_InstanceData_IsTargetSensed
{
public:
	class ABaseAICharacter*                      OwnerAICharacter;                                  // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexSensesMask                    Sense;                                             // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32C4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x28 - 0x20)
// ScriptStruct LOTF2.HexStateTreeCondition
struct FHexStateTreeCondition : public FStateTreeConditionCommonBase
{
public:
	bool                                         bInvert;                                           // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32C5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x28 - 0x28)
// ScriptStruct LOTF2.HexStateTreeCondition_IsTargetSensedBy
struct FHexStateTreeCondition_IsTargetSensedBy : public FHexStateTreeCondition
{
public:
};

// 0x0 (0x28 - 0x28)
// ScriptStruct LOTF2.HexStateTreeCondition_IsTargetForgotten
struct FHexStateTreeCondition_IsTargetForgotten : public FHexStateTreeCondition
{
public:
};

// 0x0 (0x28 - 0x28)
// ScriptStruct LOTF2.HexStateTreeCondition_HasGoalTarget
struct FHexStateTreeCondition_HasGoalTarget : public FHexStateTreeCondition
{
public:
};

// 0x0 (0x28 - 0x28)
// ScriptStruct LOTF2.HexStateTreeCondition_IsTargetLost
struct FHexStateTreeCondition_IsTargetLost : public FHexStateTreeCondition
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.HexStateTreeCondition_InstanceData_WithinDistance
struct FHexStateTreeCondition_InstanceData_WithinDistance
{
public:
	class UAITargetSystemComponent*              OwnerTargetComponentSystem;                        // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ABaseAICharacter*                      OwnerAICharacter;                                  // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCharacterAIData*                      ActorAIData;                                       // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x28 - 0x28)
// ScriptStruct LOTF2.HexStateTreeCondition_IsWithinStartCombatDistance
struct FHexStateTreeCondition_IsWithinStartCombatDistance : public FHexStateTreeCondition
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.HexStateTreeCondition_InstanceData_IsForcedIntoCombat
struct FHexStateTreeCondition_InstanceData_IsForcedIntoCombat
{
public:
	class ABaseAICharacter*                      OwnerAICharacter;                                  // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x28 - 0x28)
// ScriptStruct LOTF2.HexStateTreeCondition_IsForcedIntoCombat
struct FHexStateTreeCondition_IsForcedIntoCombat : public FHexStateTreeCondition
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.HexStateTreeCondition_Fly_InstanceData
struct FHexStateTreeCondition_Fly_InstanceData
{
public:
	class UHexAICharacterMovementComponent*      OwnerMovementComponent;                            // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x28 - 0x28)
// ScriptStruct LOTF2.HexStateTreeCondition_IsFlying
struct FHexStateTreeCondition_IsFlying : public FHexStateTreeCondition
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct LOTF2.HexSubtitleData
struct FHexSubtitleData : public FTableRowBase
{
public:
	TSoftObjectPtr<class UAkAudioEvent>          AkEvent;                                           // 0x8(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSubtitleCue>                  SubtitleCues;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LOTF2.HexSyncedAnimParticipantData
struct FHexSyncedAnimParticipantData
{
public:
	enum class ESyncedAnimationRole              AnimationRole;                                     // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AnchorName;                                        // 0x4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          AnimationTag;                                      // 0xC(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldCancelLockOn;                               // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          MontageToPlay;                                     // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.SyncedAnimationParamsParticipant
struct FSyncedAnimationParamsParticipant
{
public:
	class AActor*                                ActorPtr;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESyncedActionRole                 ActionRole;                                        // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32C8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.HexRuntimeSyncedAnimParticipantData
struct FHexRuntimeSyncedAnimParticipantData
{
public:
	uint8                                        Pad_32C9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class AActor>                 Actor;                                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          RuntimeMontage;                                    // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32CA[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.HexSyncAnimRawData
struct FHexSyncAnimRawData
{
public:
	class UHexSyncedAnimationDataAsset*          CurrentSyncedAnimationDataAsset;                   // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 ActiveActor;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 PassiveActor;                                      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.HexAggregatedObject
struct FHexAggregatedObject
{
public:
	TWeakObjectPtr<class UObject>                ObjectPtr;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FramesSinceLastTick;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Priority;                                          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Importance;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedDeltaTime;                              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0xA8 - 0x30)
// ScriptStruct LOTF2.HexAggregatedTickFunction
struct FHexAggregatedTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_32CB[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.RootViewportLayoutInfo
struct FRootViewportLayoutInfo
{
public:
	class UHexLocalPlayer*                       LocalPlayer;                                       // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHexGameLayout*                        RootLayout;                                        // 0x8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddedToViewport;                                  // 0x10(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32CC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct LOTF2.AttackEffectivenessUIStyle
struct FAttackEffectivenessUIStyle
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FontSize;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LOTF2.MagicCatalystRequirementInfo
struct FMagicCatalystRequirementInfo
{
public:
	struct FGameplayTag                          MagicAllowanceTag;                                 // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  MagicRequirementText;                              // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LOTF2.DLCOwnedMessage
struct FDLCOwnedMessage
{
public:
	class FText                                  DLC_Title;                                         // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  DLC_Message;                                       // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.WorldStateSavedData
struct FWorldStateSavedData
{
public:
	class FName                                  WorldStateName;                                    // 0x0(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WorldStateSavedData;                               // 0x8(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.HitBoxGroupRankData
struct FHitBoxGroupRankData
{
public:
	int32                                        Rank;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GroupID;                                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceID;                                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.HitBox
struct FHitBox
{
public:
	uint8                                        Pad_32CD[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct LOTF2.TransformedHitboxData
struct FTransformedHitboxData
{
public:
	struct FTransform                            HitboxTransform;                                   // 0x0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HalfHeight;                                        // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32CE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct LOTF2.HitBoxRuntimeSubsteppingData
struct FHitBoxRuntimeSubsteppingData
{
public:
	uint8                                        Pad_32CF[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct LOTF2.HitBoxIntermediateData
struct FHitBoxIntermediateData
{
public:
	uint8                                        Pad_32D0[0xD0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x210 (0x210 - 0x0)
// ScriptStruct LOTF2.HitBoxHitResultData
struct FHitBoxHitResultData
{
public:
	uint8                                        Pad_32D1[0xE8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UObject>                PSourceObject;                                     // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32D2[0x120];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct LOTF2.HitBoxToUpdate
struct FHitBoxToUpdate
{
public:
	uint8                                        Pad_32D3[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct LOTF2.ItemPickupMessageInfo
struct FItemPickupMessageInfo
{
public:
	uint8                                        Pad_32D4[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.InteractionEntry
struct FInteractionEntry
{
public:
	class UInteractionComponent*                 Interaction;                                       // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInteractionContext*                   InteractionContext;                                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32D5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct LOTF2.GameplayAbilityTargetData_Interaction
struct FGameplayAbilityTargetData_Interaction : public FGameplayAbilityTargetData
{
public:
	class UInteractionContext*                   InteractionContext;                                // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct LOTF2.InventoryCategoryElement
struct FInventoryCategoryElement
{
public:
	struct FGameplayTag                          CategoryTag;                                       // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          AdditionalCategoryTag;                             // 0x8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x10(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EItemSortMode                     SortMode;                                          // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UInventoryItemPanel>       InventoryPanelClass;                               // 0x48(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UInventoryGridItem>        OverrideGridItemClass;                             // 0x50(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CategoryName;                                      // 0x58(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.HexInventoryItemSaveData
struct FHexInventoryItemSaveData
{
public:
	class FName                                  AssetId;                                           // 0x0(0x8)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Stock;                                             // 0x8(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UsableStock;                                       // 0xC(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemLevel;                                         // 0x10(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bItemIsNew;                                        // 0x14(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32D7[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.HexItemSlottedRunesSaveData
struct FHexItemSlottedRunesSaveData
{
public:
	int32                                        ItemIDX;                                           // 0x0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                RunesItemIDX;                                      // 0x8(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.HexSlottedEquipableInventoryItemSaveData
struct FHexSlottedEquipableInventoryItemSaveData
{
public:
	enum class EFEquipmentSlot                   Slot;                                              // 0x0(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32D9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemIDX;                                           // 0x4(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.HexWeaponHolsterSaveData
struct FHexWeaponHolsterSaveData
{
public:
	struct FGameplayTag                          WeaponTag;                                         // 0x0(0x8)(SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FHexSlottedEquipableInventoryItemSaveData> AmmoSlots;                                         // 0x8(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct LOTF2.HexInventoryComponentSaveData
struct FHexInventoryComponentSaveData
{
public:
	TArray<struct FHexInventoryItemSaveData>     Content;                                           // 0x0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FHexItemSlottedRunesSaveData>  RunesSlottedToItems;                               // 0x10(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<int32>                                EquippedItems;                                     // 0x20(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<int32>                                EquippedGear;                                      // 0x30(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FHexWeaponHolsterSaveData>     HolsteredAmmo;                                     // 0x40(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	struct FHexWeaponHolsterSaveData             HolsteredMagic;                                    // 0x50(0x18)(SaveGame, NativeAccessSpecifierPublic)
	TArray<int32>                                EquippedGestures;                                  // 0x68(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	enum class EFEquipmentSlot                   RangedAmmoSlot;                                    // 0x78(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESelectedRangedOption             SelectedRangedOption;                              // 0x79(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32DA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          RemembranceItems;                                  // 0x80(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<class FName>                          UniqueItems;                                       // 0x90(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 InventoryTags;                                     // 0xA0(0x20)(SaveGame, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.RunesSlottedToItem
struct FRunesSlottedToItem
{
public:
	class UEquipableInventoryItem*               Item;                                              // 0x0(0x8)(ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UHexRuneInventoryItem*>         SlottedRunes;                                      // 0x8(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.SlottedEquipableInventoryItem
struct FSlottedEquipableInventoryItem
{
public:
	enum class EFEquipmentSlot                   Slot;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEquipableInventoryItem*               Item;                                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.WeaponHolster
struct FWeaponHolster
{
public:
	struct FGameplayTag                          WeaponTag;                                         // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSlottedEquipableInventoryItem> AmmoSlots;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LOTF2.InventoryItemUIData
struct FInventoryItemUIData
{
public:
	class FText                                  ItemName;                                          // 0x0(0x18)(NativeAccessSpecifierPublic)
	int32                                        UsableStock;                                       // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            ItemIcon;                                          // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsHidden;                                          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32DD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LOTF2.ItemUseAnimationData
struct FItemUseAnimationData
{
public:
	struct FGameplayTag                          UseAnimation;                                      // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          RepeatAnimation;                                   // 0x8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          FinishAnimation;                                   // 0x10(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          FailAnimation;                                     // 0x18(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.ItemLoreStatRequirements
struct FItemLoreStatRequirements
{
public:
	int32                                        StrengthRequirement;                               // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AgilityRequirement;                                // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnduranceRequirement;                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VitalityRequirement;                               // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FaithRequirement;                                  // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChaosRequirement;                                  // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x88 - 0x8)
// ScriptStruct LOTF2.ItemPrice
struct FItemPrice : public FTableRowBase
{
public:
	int32                                        VigorPrice;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, int32>                     PriceMap;                                          // 0x10(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                        SellVigorPrice;                                    // 0x60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESocialCoinsType                  SocialCoinsPriceType;                              // 0x64(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SocialCoinsPrice;                                  // 0x68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemLoreStatRequirements             LoreStatRequirements;                              // 0x6C(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        SortOrderId;                                       // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.DamageResistanceDataSet
struct FDamageResistanceDataSet
{
public:
	float                                        ProtectionPhysical;                                // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProtectionFire;                                    // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProtectionHoly;                                    // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProtectionDark;                                    // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct LOTF2.ItemDropTableRow
struct FItemDropTableRow : public FTableRowBase
{
public:
	TMap<class UItemData*, int32>                DropMap;                                           // 0x8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct LOTF2.ItemFamilyDefinition
struct FItemFamilyDefinition : public FTableRowBase
{
public:
	struct FGameplayTag                          Identifier;                                        // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  FamilyName;                                        // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct LOTF2.ItemDataBaseRow
struct FItemDataBaseRow : public FTableRowBase
{
public:
	TSoftClassPtr<class UItemData>               ItemClass;                                         // 0x8(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct LOTF2.JournalPageDefinition
struct FJournalPageDefinition : public FTableRowBase
{
public:
	struct FGameplayTag                          QuestTag;                                          // 0x8(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  PageText;                                          // 0x10(0x18)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             JournalImageTexture;                               // 0x28(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageIndex;                                         // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32E0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x68 - 0x8)
// ScriptStruct LOTF2.LoadingTipRow
struct FLoadingTipRow : public FTableRowBase
{
public:
	TSoftObjectPtr<class UTexture2D>             LoadingTipIcon;                                    // 0x8(0x30)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  LoadingTipName;                                    // 0x38(0x18)(NativeAccessSpecifierPublic)
	class FText                                  LoadingTipDescription;                             // 0x50(0x18)(NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct LOTF2.KeysTableRow
struct FKeysTableRow : public FTableRowBase
{
public:
	TArray<class FName>                          Keys;                                              // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.RelevantVolume
struct FRelevantVolume
{
public:
	uint8                                        Pad_32E1[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Owner;                                             // 0x38(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALOTF2Character*                       Character;                                         // 0x40(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayEffectsApplierComponent*      GameplayEffectsApplierComponent;                   // 0x48(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LOTF2.LootTableAlternativeItemInfo
struct FLootTableAlternativeItemInfo
{
public:
	int32                                        MinStack;                                          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxStack;                                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UItemData>               ItemClass;                                         // 0x8(0x30)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct LOTF2.LootTableStackedItemInfo
struct FLootTableStackedItemInfo
{
public:
	int32                                        Weight;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinStack;                                          // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxStack;                                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  QuestStateCompleteTag;                             // 0xC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  QuestStateReachedTag;                              // 0x14(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ItemId;                                            // 0x1C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32E2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UItemData>               ItemClass;                                         // 0x28(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLootTableAlternativeItemInfo         AlternativeItem;                                   // 0x58(0x38)(NativeAccessSpecifierPublic)
	bool                                         bCreateInventoryItem;                              // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32E3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct LOTF2.LootTableItemSetChanceInfo
struct FLootTableItemSetChanceInfo
{
public:
	float                                        Chance;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                WitherChances;                                     // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class EWitherChanceOperator             WitherChanceOperator;                              // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  FilterTag;                                         // 0x1C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  QuestStateCompleteTag;                             // 0x24(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  QuestStateReachedTag;                              // 0x2C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLootTableStackedItemInfo>     Items;                                             // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct LOTF2.LootTableInfo
struct FLootTableInfo : public FTableRowBase
{
public:
	float                                        VigorAmount;                                       // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLootTableItemSetChanceInfo>   Bundle;                                            // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LOTF2.HexNavMovementState
struct FHexNavMovementState
{
public:
	uint8                                        Pad_32E8[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.NotifyStateData
struct FNotifyStateData
{
public:
	uint8                                        Pad_32E9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CustomData;                                        // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct LOTF2.NotifyStateDataHolder
struct FNotifyStateDataHolder
{
public:
	class UAnimSequenceBase*                     AnimSequence;                                      // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimNotifyState*                      AnimNotifyState;                                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32EA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNotifyStateData                      Data;                                              // 0x18(0x10)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct LOTF2.HexAITeamsAttitudes
struct FHexAITeamsAttitudes : public FTableRowBase
{
public:
	enum class EHexAITeams                       Team;                                              // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamAttitude                     PlayerHost;                                        // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamAttitude                     PlayerCoop;                                        // 0xA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamAttitude                     PlayerInvader;                                     // 0xB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamAttitude                     Enemy;                                             // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamAttitude                     EnemyRhogar;                                       // 0xD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamAttitude                     EnemyAttestant;                                    // 0xE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamAttitude                     EnemyUmbrie;                                       // 0xF(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamAttitude                     EnemyUmbralParasite;                               // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamAttitude                     EnemyNative;                                       // 0x11(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamAttitude                     Friend;                                            // 0x12(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamAttitude                     FriendCoop;                                        // 0x13(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamAttitude                     InvaderCoop;                                       // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamAttitude                     Undefined;                                         // 0x15(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32EB[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct LOTF2.HexAITeamsDamages
struct FHexAITeamsDamages : public FTableRowBase
{
public:
	enum class EHexAITeams                       Team;                                              // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexDamageFilter                  PlayerHost;                                        // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexDamageFilter                  PlayerCoop;                                        // 0xA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexDamageFilter                  PlayerInvader;                                     // 0xB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexDamageFilter                  Enemy;                                             // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexDamageFilter                  EnemyRhogar;                                       // 0xD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexDamageFilter                  EnemyAttestant;                                    // 0xE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexDamageFilter                  EnemyUmbrie;                                       // 0xF(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexDamageFilter                  EnemyUmbralParasite;                               // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexDamageFilter                  EnemyNative;                                       // 0x11(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexDamageFilter                  Friend;                                            // 0x12(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexDamageFilter                  FriendCoop;                                        // 0x13(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexDamageFilter                  InvaderCoop;                                       // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexDamageFilter                  Undefined;                                         // 0x15(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32EC[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct LOTF2.HexAITeamsToFactions
struct FHexAITeamsToFactions : public FTableRowBase
{
public:
	enum class EHexAITeams                       Team;                                              // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexAIFactions                    Faction;                                           // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32ED[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct LOTF2.AIBehaviorNodeProperty
struct FAIBehaviorNodeProperty
{
public:
	float                                        Value;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ConfigVar;                                         // 0x4(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.ApplyTagsIntoAbilityResult
struct FApplyTagsIntoAbilityResult
{
public:
	enum class EApplyTagsIntoAbilityResult       Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DetailedChanges;                                   // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.AimOffset
struct FAimOffset
{
public:
	float                                        Pitch;                                             // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct LOTF2.AimOffsetLockOnTargetParams
struct FAimOffsetLockOnTargetParams
{
public:
	bool                                         CurrentProjectileHasParabola;                      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentStrengthForProjectileAimOffset;             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityForProjectileAimOffset;                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentMinSpeedProjectileAimOffset;                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentMaxSpeedProjectileAimOffset;                // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.LOTF2CharacterDamageWindowData
struct FLOTF2CharacterDamageWindowData
{
public:
	uint8                                        Pad_32F0[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.ConnectionHistoryData
struct FConnectionHistoryData
{
public:
	uint8                                        Pad_32F1[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LOTF2.ComponentRecord
struct FComponentRecord
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClassName;                                         // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                Data;                                              // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                JsonData;                                          // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x150 (0x150 - 0x0)
// ScriptStruct LOTF2.ObjectRecordDetails
struct FObjectRecordDetails
{
public:
	class FString                                ClassName;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PathName;                                          // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OuterPathName;                                     // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       SaveVersion;                                       // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32F2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                Data;                                              // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                JsonData;                                          // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32F3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x70(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, struct FComponentRecord>   Components;                                        // 0xD0(0x50)(RepSkip, NativeAccessSpecifierPublic)
	TArray<class FString>                        Dependencies;                                      // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                 ID;                                                // 0x130(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldIgnoreTransientSavedData;                   // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32F4[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.DependencyValuesDetails
struct FDependencyValuesDetails
{
public:
	TMap<class FString, struct FObjectRecordDetails> DependenciesValues;                                // 0x0(0x50)(NativeAccessSpecifierPublic)
};

// 0x1A0 (0x1A0 - 0x0)
// ScriptStruct LOTF2.ObjectRecord
struct FObjectRecord
{
public:
	struct FObjectRecordDetails                  ObjectRecordDetails;                               // 0x0(0x150)(NativeAccessSpecifierPublic)
	TMap<struct FGuid, struct FDependencyValuesDetails> DependenciesValues;                                // 0x150(0x50)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.VendorTransactionEntry
struct FVendorTransactionEntry
{
public:
	struct FGameplayTag                          NPCTag;                                            // 0x0(0x8)(SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ItemIDHash;                                        // 0x8(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Amount;                                            // 0xC(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x54 (0x54 - 0x0)
// ScriptStruct LOTF2.PlayerStatsSave
struct FPlayerStatsSave
{
public:
	int32                                        PlayerHealth;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerHealthProvisionalDamage;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerMana;                                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerAmmo;                                        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerStamina;                                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerSoulFlayCharges;                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerMaxSoulFlayCharges;                          // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerLevel;                                       // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerStrength;                                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerAgility;                                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerEndurance;                                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerVitality;                                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerFaith;                                       // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerChaos;                                       // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerVigor;                                       // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxVigor;                                          // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WitherTime;                                        // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WitherStage;                                       // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WitherLevel;                                       // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WitherStageType;                                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QuestProgressionBasedMaxRuneSlots;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct LOTF2.SaveGameQualityLevelsSettings
struct FSaveGameQualityLevelsSettings
{
public:
	bool                                         bHasBeenWritten;                                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ResolutionQuality;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ViewDistanceQuality;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AntiAliasingQuality;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ShadowQuality;                                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GlobalIlluminationQuality;                         // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReflectionQuality;                                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PostProcessQuality;                                // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TextureQuality;                                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EffectsQuality;                                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FoliageQuality;                                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ShadingQuality;                                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CPUBenchmarkResults;                               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GPUBenchmarkResults;                               // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                CPUBenchmarkSteps;                                 // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                GPUBenchmarkSteps;                                 // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x200 (0x200 - 0x0)
// ScriptStruct LOTF2.SaveGameUserSettings
struct FSaveGameUserSettings
{
public:
	bool                                         bIsSet;                                            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseVSync;                                         // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseDynamicResolution;                             // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32F6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       ResolutionSizeX;                                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ResolutionSizeY;                                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       LastUserConfirmedResolutionSizeX;                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       LastUserConfirmedResolutionSizeY;                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WindowPosX;                                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WindowPosY;                                        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FullscreenMode;                                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastConfirmedFullscreenMode;                       // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PreferredFullscreenMode;                           // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Version;                                           // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AudioQualityLevel;                                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastConfirmedAudioQualityLevel;                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrameRateLimit;                                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DesiredScreenWidth;                                // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseDesiredScreenHeight;                           // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32F7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DesiredScreenHeight;                               // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastUserConfirmedDesiredScreenWidth;               // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastUserConfirmedDesiredScreenHeight;              // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastRecommendedScreenWidth;                        // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastRecommendedScreenHeight;                       // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastCPUBenchmarkResult;                            // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastGPUBenchmarkResult;                            // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                LastCPUBenchmarkSteps;                             // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                LastGPUBenchmarkSteps;                             // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        LastGPUBenchmarkMultiplier;                        // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseHDRDisplayOutput;                              // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HDRDisplayOutputNits;                              // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32FA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FKey>               Mappings;                                          // 0x90(0x50)(NativeAccessSpecifierPublic)
	struct FSaveGameQualityLevelsSettings        ScalabilitySettings;                               // 0xE0(0x58)(NativeAccessSpecifierPublic)
	bool                                         bMotionBlurEnabled;                                // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFilmGrainEnabled;                                 // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChromaticAberrationEnabled;                       // 0x13A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayerLanternCastShadows;                         // 0x13B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPresetRenderMode                 PresetRenderMode;                                  // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHexGameUserSettingsData              HexGameUserSettingsData;                           // 0x140(0xC0)(NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct LOTF2.SerializationId
struct FSerializationId
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bManualOverrideIdValue;                            // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  FriendlyName;                                      // 0x14(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.ObjectRecordsMap
struct FObjectRecordsMap
{
public:
	TMap<struct FSerializationId, struct FObjectRecord> Map;                                               // 0x0(0x50)(NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.DependencyValues
struct FDependencyValues
{
public:
	TMap<class FString, struct FObjectRecord>    DependenciesValues;                                // 0x0(0x50)(NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct LOTF2.SerializationData
struct FSerializationData
{
public:
	struct FObjectRecordsMap                     ObjectRecords;                                     // 0x0(0x50)(NativeAccessSpecifierPublic)
	TMap<class FString, struct FObjectRecordsMap> DynamicObjectRecords;                              // 0x50(0x50)(NativeAccessSpecifierPublic)
	TMap<struct FSerializationId, class FString> DynamicObjectToMap;                                // 0xA0(0x50)(NativeAccessSpecifierPublic)
	struct FObjectRecordsMap                     ManualManagementObjectRecords;                     // 0xF0(0x50)(NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct LOTF2.ControllerPreviewControllerModelWidgetMapping
struct FControllerPreviewControllerModelWidgetMapping
{
public:
	TMap<struct FKey, class FName>               LabelIdOfKey;                                      // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UWidget>                 WidgetClass;                                       // 0x50(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LOTF2.ControllerPreviewMappingFilter
struct FControllerPreviewMappingFilter
{
public:
	TArray<class FName>                          MappingsToShow;                                    // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FEnhancedActionKeyMapping>     AdditionalMappings;                                // 0x10(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.LOTF2WindTransitionData
struct FLOTF2WindTransitionData
{
public:
	class ULOTF2WindData*                        Data;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransitionInterval;                                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32FC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LOTF2.LOTF2WindParameters
struct FLOTF2WindParameters
{
public:
	float                                        Strength;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct LOTF2.TargetData
struct FTargetData
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x60(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32FD[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct LOTF2.HexAnimatedFlinch
struct FHexAnimatedFlinch
{
public:
	int32                                        AGE;                                               // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Active;                                            // 0x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DirectionPsi;                                      // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirectionTheta;                                    // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct LOTF2.SlotAnimationAsDynamicMontageParams
struct FSlotAnimationAsDynamicMontageParams
{
public:
	float                                        BlendInTime;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendOutTime;                                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LoopCount;                                         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendOutTriggerTime;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeToStartMontageAt;                              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeToEndMontageAt;                                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameToStartMontageAt;                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameToEndMontageAt;                               // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SampleRate;                                        // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x48 - 0x28)
// ScriptStruct LOTF2.BlendSpaceAsDynamicMontageParams
struct FBlendSpaceAsDynamicMontageParams : public FSlotAnimationAsDynamicMontageParams
{
public:
	bool                                         EnableRootMotion;                                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERootMotionRootLock               RootLock;                                          // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32FF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               BlendSpaceInput;                                   // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct LOTF2.MagicCastCueDefinition
struct FMagicCastCueDefinition
{
public:
	enum class EMagicCueActorTarget              MagicCueActorTarget;                               // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3300[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayCueTag                       GameplayCueTag;                                    // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x150 (0x150 - 0x0)
// ScriptStruct LOTF2.MagicItemToSpawn
struct FMagicItemToSpawn
{
public:
	enum class EMagicType                        MagicTypeDef;                                      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3301[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class USubAutonomousAbilityData> SSAToTrigger;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSpawnDefinition                      SpawnDefinition;                                   // 0x10(0x120)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FHexBattleEffectIdentifier            BattleEffects;                                     // 0x130(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsInfiniteBattleEffect;                           // 0x138(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3302[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   WeaponBuffHandle;                                  // 0x140(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.MagicItemToSpawnArray
struct FMagicItemToSpawnArray
{
public:
	TArray<struct FMagicItemToSpawn>             MagicItemToSpawn;                                  // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct LOTF2.AudioData
struct FAudioData
{
public:
	TSoftObjectPtr<class UAkAudioEvent>          SoundRef;                                          // 0x0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TrackName;                                         // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  TrackAuthor;                                       // 0x48(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.PhysAssetData
struct FPhysAssetData
{
public:
	class UPhysicsAsset*                         PhysAsset;                                         // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OriginalName;                                      // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LOTF2.NaturalLightingTransition
struct FNaturalLightingTransition
{
public:
	class UNaturalLightingData*                  Source;                                            // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNaturalLightingData*                  Result;                                            // 0x8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNaturalLightingData*                  Target;                                            // 0x10(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x18(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Interval;                                          // 0x1C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameRealm                        SourceRealm;                                       // 0x20(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameRealm                        TargetRealm;                                       // 0x21(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3303[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PostProcessSourceWeight;                           // 0x24(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PostProcessTargetWeight;                           // 0x28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3304[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.NaturalLightingTransitionData
struct FNaturalLightingTransitionData
{
public:
	class UNaturalLightingData*                  Data;                                              // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TransitionInterval;                                // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.NaturalLightingPlayerLightData
struct FNaturalLightingPlayerLightData
{
public:
	float                                        PlayerFillLightMinimumIntensity;                   // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerFillLightMaximumIntensity;                   // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerShiningAbilityFillLightIntensity;            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayerShiningAbilityLanternIntensity;              // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LOTF2.NaturalLightingPlayerLightTransitionData
struct FNaturalLightingPlayerLightTransitionData
{
public:
	struct FNaturalLightingPlayerLightData       SourceState;                                       // 0x0(0x10)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	class UNaturalLightingData*                  Target;                                            // 0x10(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNaturalLightingPlayerLightData       CurrentState;                                      // 0x18(0x10)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x28(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Interval;                                          // 0x2C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.NetDuplicateWrapper
struct FNetDuplicateWrapper
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct LOTF2.VendorTableItemInfo
struct FVendorTableItemInfo
{
public:
	int32                                        Stack;                                             // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInfinite;                                         // 0x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3305[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ItemId;                                            // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  QuestStateCompleteTag;                             // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseSocialCurrencyPrice;                            // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3306[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EVendorTransactionCode, struct FAkAnathemaEvent> OverrideVoiceOverWhenBought;                       // 0x20(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<enum class EVendorTransactionCode, class FText> OverrideMessageWhenBought;                         // 0x70(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0xD4 (0xE0 - 0xC)
// ScriptStruct LOTF2.VendorInventoryItem
struct FVendorInventoryItem : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_3307[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryItem*                        Item;                                              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ClientStock;                                       // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ServerStock;                                       // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVendorTableItemInfo                  ItemInfo;                                          // 0x20(0xC0)(RepSkip, NativeAccessSpecifierPrivate)
};

// 0x18 (0x120 - 0x108)
// ScriptStruct LOTF2.VendorInventoryContainer
struct FVendorInventoryContainer : public FFastArraySerializer
{
public:
	TArray<struct FVendorInventoryItem>          Items;                                             // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UNPCComponent>          OwnerComponent;                                    // 0x118(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.ContextInfo
struct FContextInfo
{
public:
	class UActionsContext*                       Context;                                           // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3308[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct LOTF2.ComboInputsMappingState
struct FComboInputsMappingState
{
public:
	uint8                                        Pad_3309[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LOTF2.PlayerControllerSettings
struct FPlayerControllerSettings
{
public:
	uint8                                        bOverrideTurnRate : 1;                             // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideLookUpRate : 1;                           // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideCharacterAngleOffset : 1;                 // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideBlockAllAbilitiesExceptions : 1;          // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideMaxWalkSpeed : 1;                         // Mask: 0x10, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideRotationRate : 1;                         // Mask: 0x20, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverridebMovementLocked : 1;                      // Mask: 0x40, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverridebLookLocked : 1;                          // Mask: 0x80, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverridebUseControllerDesiredRotation : 1;        // Mask: 0x1, PropSize: 0x10x1(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverridebOrientRotationToMovement : 1;            // Mask: 0x2, PropSize: 0x10x1(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverridebBlockAllAbilities : 1;                   // Mask: 0x4, PropSize: 0x10x1(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_25B : 5;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_330A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CharacterAngleOffset;                              // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWalkSpeed;                                      // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BlockAllAbilitiesExceptions;                       // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RotationRate;                                      // 0x10(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bMovementLocked : 1;                               // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLookLocked : 1;                                   // Mask: 0x2, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseControllerDesiredRotation : 1;                 // Mask: 0x4, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOrientRotationToMovement : 1;                     // Mask: 0x8, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bBlockAllAbilities : 1;                            // Mask: 0x10, PropSize: 0x10x28(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_330B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LOTF2.PlayerControllerSettingsEntry
struct FPlayerControllerSettingsEntry
{
public:
	TWeakObjectPtr<class UObject>                Owner;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ID;                                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerControllerSettings             Settings;                                          // 0x10(0x30)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct LOTF2.PlayerCameraRepCache
struct FPlayerCameraRepCache
{
public:
	float                                        FOV;                                               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_330C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CameraPosition;                                    // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              CameraRotation;                                    // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_330D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMatrix                               ProjectionMatrix;                                  // 0x40(0x80)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct LOTF2.PlayerRespawnInfo
struct FPlayerRespawnInfo
{
public:
	class APlayerCharacterController*            PlayerController;                                  // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_330E[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct LOTF2.SpecialAttackDataRow
struct FSpecialAttackDataRow : public FTableRowBase
{
public:
	class UHexSyncedAnimationDataAsset*          SyncedAnimation;                                   // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USpecialAttackActivationConditionSet> ActivationConditionSet;                            // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct LOTF2.StatusEffectUIData
struct FStatusEffectUIData
{
public:
	class UBuffIconWidget*                       Icon;                                              // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_330F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameplayEffectUIData_BuffIcon*        UIData;                                            // 0x10(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStatusEffectBar*                      StatusEffectBar;                                   // 0x18(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3310[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LOTF2.BuffEffectUIData
struct FBuffEffectUIData
{
public:
	class UBuffIconWidget*                       Icon;                                              // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayEffectUIData_BuffIcon*        UIData;                                            // 0x8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3311[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.PlayerEquippedGear
struct FPlayerEquippedGear
{
public:
	int32                                        Slot;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3312[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ItemName;                                          // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x268 (0x268 - 0x0)
// ScriptStruct LOTF2.PlayerVisualData
struct FPlayerVisualData
{
public:
	TArray<struct FPlayerEquippedGear>           PlayerGear;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UItemData>              PrimaryWeaponDataClass;                            // 0x10(0x30)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UItemData>              SecondaryWeaponDataClass;                          // 0x40(0x30)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UItemData>              RangeWeaponDataClass;                              // 0x70(0x30)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UItemData>              LanternItemDataClass;                              // 0xA0(0x30)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EBodyShapeAttributeType, float> FloatAttributes;                                   // 0xD0(0x50)(RepSkip, NativeAccessSpecifierPublic)
	TMap<enum class ECustomizationCategory, struct FMorphTargetFeatureArray> MorphFeatureAttributes;                            // 0x120(0x50)(RepSkip, NativeAccessSpecifierPublic)
	TMap<enum class EBodyShapeAttributeType, class FString> OptionAttributes;                                  // 0x170(0x50)(RepSkip, NativeAccessSpecifierPublic)
	TMap<enum class EBodyShapeAttributeType, struct FLinearColor> ColorAttributes;                                   // 0x1C0(0x50)(RepSkip, NativeAccessSpecifierPublic)
	TMap<class FString, class UTintItemData*>    TintAttributes;                                    // 0x210(0x50)(RepSkip, NativeAccessSpecifierPublic)
	enum class ECharacterBodyType                CharacterBodyType;                                 // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3313[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.PoiseRange
struct FPoiseRange
{
public:
	int32                                        MinValue;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxValue;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct LOTF2.PoiseDataEntry
struct FPoiseDataEntry : public FTableRowBase
{
public:
	struct FPoiseRange                           PoiseRange;                                        // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameDamageType>           DamageType;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct LOTF2.PoiseConfiguration
struct FPoiseConfiguration : public FTableRowBase
{
public:
	struct FPoiseRange                           PoiseRange;                                        // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UDataTable*                            PoisePreset;                                       // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct LOTF2.PoiseThreshold
struct FPoiseThreshold : public FTableRowBase
{
public:
	struct FFloatRange                           PoiseRange;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HurtReactionsReduction;                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3314[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.PresenceData
struct FPresenceData
{
public:
	uint8                                        Pad_3315[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x170 (0x170 - 0x0)
// ScriptStruct LOTF2.PresenceSubsystemPlatformConfig
struct FPresenceSubsystemPlatformConfig
{
public:
	class FText                                  LevelPresenceString;                               // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	TMap<class FString, class FText>             LevelNames;                                        // 0x18(0x50)(Edit, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           LevelActivityIds;                                  // 0x68(0x50)(Edit, NativeAccessSpecifierPublic)
	class FText                                  AreaPresenceString;                                // 0xB8(0x18)(Edit, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, class FText>       AreaNames;                                         // 0xD0(0x50)(Edit, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, class FString>     AreaActivityIds;                                   // 0x120(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct LOTF2.PropAndOriginalScale
struct FPropAndOriginalScale
{
public:
	class AActor*                                Prop;                                              // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OriginalScale;                                     // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            RelativeTransform;                                 // 0x20(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct LOTF2.PropsHolder
struct FPropsHolder
{
public:
	TArray<struct FPropAndOriginalScale>         Props;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3316[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x38 - 0x8)
// ScriptStruct LOTF2.QuestActionData
struct FQuestActionData : public FTableRowBase
{
public:
	enum class EQuestActionType                  Type;                                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3317[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          NPC;                                               // 0xC(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Item;                                              // 0x14(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHexAIFactions                    Faction;                                           // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamAttitude                     Attitude;                                          // 0x1D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3318[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   ItemLootTable;                                     // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Stack;                                             // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3319[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x68 - 0x8)
// ScriptStruct LOTF2.QuestTaskData
struct FQuestTaskData : public FTableRowBase
{
public:
	enum class EQuestTaskType                    Type;                                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuestTaskActivationScope         ActivationScope;                                   // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_331A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TaskDialogue;                                      // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OnCompleteTaskDialogue;                            // 0x14(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          NPC;                                               // 0x1C(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Item;                                              // 0x24(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Stack;                                             // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Tag;                                               // 0x30(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNegatedCheck;                                     // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCounter;                                        // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_331B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Count;                                             // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBasicStat                        Stat;                                              // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_331C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StatLevel;                                         // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnswerType                       AnswerType;                                        // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_331D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Anchor;                                            // 0x4C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Vigor;                                             // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          OnCompleteGameStateFlag;                           // 0x58(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDLCName                          DLCName;                                           // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_331E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.QuestTaskInstanceData
struct FQuestTaskInstanceData
{
public:
	class FName                                  TaskName;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          CustomOnCompleteGameStateFlag;                     // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x178 (0x180 - 0x8)
// ScriptStruct LOTF2.QuestStateData
struct FQuestStateData : public FTableRowBase
{
public:
	struct FGameplayTag                          StateIdentifier;                                   // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Tags;                                              // 0x10(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  PrimaryDialogue;                                   // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Dialogues;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  LoopDialogue;                                      // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OnCompleteDialogue;                                // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          OnCompleteDialogues;                               // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RequiredTags;                                      // 0x68(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RequiredTagsOR;                                    // 0x88(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class FName>                          RequiredTasks;                                     // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          RequiredTasksOR;                                   // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          Tasks;                                             // 0xC8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          TasksOR;                                           // 0xD8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          OptionalTasks;                                     // 0xE8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          OptionalTasksOR;                                   // 0xF8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQuestTaskInstanceData>        StateTasks;                                        // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQuestTaskInstanceData>        StateTasksOR;                                      // 0x118(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQuestTaskInstanceData>        StateOptionalTasks;                                // 0x128(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQuestTaskInstanceData>        StateOptionalTasksOR;                              // 0x138(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          OnCompleteActions;                                 // 0x148(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          OnFailActions;                                     // 0x158(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                NextStates;                                        // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAllowMoveWithoutCheckingSpawner;                  // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_331F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct LOTF2.QuestData
struct FQuestData : public FTableRowBase
{
public:
	struct FGameplayTag                          QuestActorTag;                                     // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          QuestIdentifier;                                   // 0x10(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FQuestStateData>               QuestStates;                                       // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct LOTF2.QuestDirectorTags
struct FQuestDirectorTags
{
public:
	struct FGameplayTagContainer                 GeneralTags;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 QuestsStateReachedTags;                            // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 QuestsStateActivatedTags;                          // 0x40(0x20)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 QuestsStateCompleteTags;                           // 0x60(0x20)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 DeadNPCTags;                                       // 0x80(0x20)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PendingGeneralTagsToAdd;                           // 0xA0(0x20)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.QuestTasksArray
struct FQuestTasksArray
{
public:
	TArray<class UQuestTask*>                    Tasks;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct LOTF2.HexQuestDirectorSaveData
struct FHexQuestDirectorSaveData
{
public:
	struct FQuestDirectorTags                    QuestsTags;                                        // 0x0(0xC0)(SaveGame, NativeAccessSpecifierPublic)
	struct FGameplayTag                          LastVisitedArea;                                   // 0xC0(0x8)(SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.HexQuestCachedWorldStateKeys
struct FHexQuestCachedWorldStateKeys
{
public:
	class FName                                  CurrentQuestStateID;                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  QuestStatus;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.HexPotentialNPCSpawnersArray
struct FHexPotentialNPCSpawnersArray
{
public:
	TSet<TWeakObjectPtr<class ASimpleCharacterSpawner>> Spawners;                                          // 0x0(0x50)(UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct LOTF2.HexQuestStateCachedWorldStateKeys
struct FHexQuestStateCachedWorldStateKeys
{
public:
	class FName                                  Completed;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PreSelected;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurrentDialogueIndex;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurrentTaskDialogueIndex;                          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurrentOnCompleteDialogueIndex;                    // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class FName>               TaskDialogueTriggeredOnce;                         // 0x28(0x50)(NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct LOTF2.QuestDirectorConfig
struct FQuestDirectorConfig
{
public:
	TSoftObjectPtr<class UDataTable>             QuestDataBase;                                     // 0x0(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataTable>             QuestTaskDataBase;                                 // 0x30(0x30)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataTable>             QuestActionDataBase;                               // 0x60(0x30)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataTable>             DialogueDataBase;                                  // 0x90(0x30)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.QuickBarItem
struct FQuickBarItem
{
public:
	class UInventoryItem*                        InventoryItem;                                     // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UItemSlotWidget*                       ItemWidget;                                        // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemSlotIndex;                                     // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OriginalItemSlot;                                  // 0x14(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct LOTF2.AmmoCostModifier
struct FAmmoCostModifier
{
public:
	struct FGameplayTag                          AmmoTag;                                           // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ValueModifier;                                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x300 (0x300 - 0x0)
// ScriptStruct LOTF2.RevengeActivationPointConfiguration
struct FRevengeActivationPointConfiguration
{
public:
	TSoftObjectPtr<class ASimpleCharacterSpawner> TargetEnemySpawner;                                // 0x0(0x30)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       BackupPath;                                        // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                  RevengedPlayerName;                                // 0x40(0x18)(NativeAccessSpecifierPublic)
	struct FPlayerVisualData                     PlayerVisuals;                                     // 0x58(0x268)(NativeAccessSpecifierPublic)
	bool                                         bIsAnOnlinePoint;                                  // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3320[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x2C8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Rotation;                                          // 0x2E0(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct LOTF2.RevengeStats
struct FRevengeStats
{
public:
	uint8                                        Pad_3321[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct LOTF2.HexBattleEffectRuneContainer
struct FHexBattleEffectRuneContainer
{
public:
	enum class EHexRuneBattleEffectTarget        BattleEffectTarget;                                // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3322[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHexBattleEffectIdentifier            BattleEffect;                                      // 0x4(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.HexRuneBattleEffectContainerArray
struct FHexRuneBattleEffectContainerArray
{
public:
	TArray<struct FHexBattleEffectRuneContainer> ContainerArray;                                    // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct LOTF2.HexRuneDefinition
struct FHexRuneDefinition : public FTableRowBase
{
public:
	enum class EHexRuneShape                     Shape;                                             // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3323[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EHexRuneEquipmentApplication, struct FHexRuneBattleEffectContainerArray> BattleEffects;                                     // 0x10(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct LOTF2.HexRuneActiveGameplayEffectsData
struct FHexRuneActiveGameplayEffectsData
{
public:
	uint8                                        Pad_3324[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LOTF2.ImagePaths
struct FImagePaths
{
public:
	class FString                                FullImagePath;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FullImageName;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ThumbnailImagePath;                                // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ThumbnailImageName;                                // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LOTF2.MaterialInstanceParameters
struct FMaterialInstanceParameters
{
public:
	TArray<struct FScalarParameterValue>         ScalarParameterValues;                             // 0x0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FVectorParameterValue>         VectorParameterValues;                             // 0x10(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FTextureParameterValue>        TextureParameterValues;                            // 0x20(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FFontParameterValue>           FontParameterValues;                               // 0x30(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LOTF2.NiagaraParameter
struct FNiagaraParameter
{
public:
	struct FNiagaraVariable                      Variable;                                          // 0x0(0x20)(SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                Data;                                              // 0x20(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct LOTF2.EffectSnapshot
struct FEffectSnapshot
{
public:
	float                                        AGE;                                               // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3325[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AttachmentRule;                                    // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3326[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UNiagaraSystem>         System;                                            // 0x78(0x30)(Edit, BlueprintVisible, SaveGame, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraParameter>             NiagaraParameters;                                 // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	int32                                        RandomSeedOffset;                                  // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3327[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                SimCacheData;                                      // 0xC0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct LOTF2.LightSettings
struct FLightSettings
{
public:
	bool                                         bUseTemperature;                                   // 0x0(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3328[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temperature;                                       // 0x4(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectsWorld;                                     // 0x8(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCastShadows;                                      // 0x9(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3329[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IndirectLightingIntensity;                         // 0xC(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VolumetricScatteringIntensity;                     // 0x10(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0x14(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                LightColor;                                        // 0x18(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttenuationRadius;                                 // 0x1C(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCastTranslucentShadows;                           // 0x20(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCastStaticShadows;                                // 0x21(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCastDynamicShadows;                               // 0x22(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectTranslucentLighting;                        // 0x23(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.PointLightSettings
struct FPointLightSettings
{
public:
	float                                        SourceRadius;                                      // 0x0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SoftSourceRadius;                                  // 0x4(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceLength;                                      // 0x8(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseInverseSquaredFalloff;                         // 0xC(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_332A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.SpotLightSettings
struct FSpotLightSettings
{
public:
	float                                        InnerConeAngle;                                    // 0x0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OuterConeAngle;                                    // 0x4(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct LOTF2.LightSnapshot
struct FLightSnapshot
{
public:
	enum class ELightType                        Type;                                              // 0x0(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_332B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLightSettings                        Settings;                                          // 0x4(0x24)(SaveGame, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointLightSettings                   PointLightSettings;                                // 0x28(0x10)(SaveGame, NoDestructor, NativeAccessSpecifierPublic)
	struct FSpotLightSettings                    SpotLightSettings;                                 // 0x38(0x8)(SaveGame, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x40(0x60)(SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct LOTF2.MaterialSnapshot
struct FMaterialSnapshot
{
public:
	TSoftObjectPtr<class UMaterialInterface>     Material;                                          // 0x0(0x30)(SaveGame, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialIndex;                                     // 0x30(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_332C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMaterialInstanceParameters           Parameters;                                        // 0x38(0x40)(SaveGame, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct LOTF2.MeshSnapshot
struct FMeshSnapshot
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMeshType                         Type;                                              // 0x60(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_332D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UObject>                Mesh;                                              // 0x68(0x30)(SaveGame, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMaterialSnapshot>             Materials;                                         // 0x98(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	struct FPoseSnapshot                         Pose;                                              // 0xA8(0x38)(SaveGame, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct LOTF2.ActorSnapshot
struct FActorSnapshot
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x10(0x60)(SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMeshSnapshot>                 Meshes;                                            // 0x70(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FLightSnapshot>                Lights;                                            // 0x80(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FEffectSnapshot>               Effects;                                           // 0x90(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.ItemSnapshot
struct FItemSnapshot
{
public:
	uint8                                        ItemSlot;                                          // 0x0(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_332E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ItemName;                                          // 0x8(0x10)(ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x350 (0x350 - 0x0)
// ScriptStruct LOTF2.PlayerSnapshot
struct FPlayerSnapshot
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            MeshTransform;                                     // 0x60(0x60)(SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPoseSnapshot                         Pose;                                              // 0xC0(0x38)(SaveGame, NativeAccessSpecifierPublic)
	uint8                                        Pad_332F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FObjectRecord                         CustomizationSettingsData;                         // 0x100(0x1A0)(SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FItemSnapshot>                 MutableItems;                                      // 0x2A0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	struct FActorSnapshot                        ActorSnapshot;                                     // 0x2B0(0xA0)(SaveGame, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct LOTF2.DecalSnapshot
struct FDecalSnapshot
{
public:
	struct FMaterialSnapshot                     MaterialSnapshot;                                  // 0x0(0x78)(SaveGame, NativeAccessSpecifierPublic)
	struct FVector                               Size;                                              // 0x78(0x18)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x90(0x18)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0xA8(0x18)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct LOTF2.SceneStateSlot
struct FSceneStateSlot
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Slot;                                              // 0x10(0x10)(BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameRealm                        Realm;                                             // 0x20(0x1)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3330[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct LOTF2.PhotoModePlayers
struct FPhotoModePlayers
{
public:
	bool                                         bCharacterRotation;                                // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3331[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PLayerOffset;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideCharacter;                                    // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3332[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x7B0 (0x7B0 - 0x0)
// ScriptStruct LOTF2.PhotoModeSettings
struct FPhotoModeSettings
{
public:
	bool                                         bDefaultSettings;                                  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3333[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CameraPosition;                                    // 0x10(0x60)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FOV;                                               // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Roll;                                              // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3334[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPostProcessSettings                  PostProcessSettings;                               // 0x80(0x6E0)(Edit, BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	float                                        FilterIndex;                                       // 0x760(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilterIntensity;                                   // 0x764(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilterRenderingIndex;                              // 0x768(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3335[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPhotoModePlayers>             Players;                                           // 0x770(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	bool                                         bHideAI;                                           // 0x780(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3336[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FrameIndex;                                        // 0x784(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrameSize;                                         // 0x788(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrameRed;                                          // 0x78C(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrameGreen;                                        // 0x790(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrameBlue;                                         // 0x794(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LogoIndex;                                         // 0x798(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LogoSize;                                          // 0x79C(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LogoAngle;                                         // 0x7A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LogoHorizontalAlignment;                           // 0x7A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LogoVerticalAlignment;                             // 0x7A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3337[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x910 (0x910 - 0x0)
// ScriptStruct LOTF2.SceneState
struct FSceneState
{
public:
	class FString                                SlotName;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Slot;                                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FActorSnapshot>                Characters;                                        // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FActorSnapshot>                RuntimeActors;                                     // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FPlayerSnapshot>               Players;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FEffectSnapshot>               Effects;                                           // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<struct FDecalSnapshot>                Decals;                                            // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TSet<class FString>                          Destructibles;                                     // 0x70(0x50)(Edit, BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	struct FTransform                            SaveTransform;                                     // 0xC0(0x60)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WorldName;                                         // 0x120(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameRealm                        Realm;                                             // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3338[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPhotoModeSettings                    PhotoModeSettings;                                 // 0x140(0x7B0)(Edit, BlueprintVisible, SaveGame, NativeAccessSpecifierPublic)
	struct FIntPoint                             ThumbnailResolution;                               // 0x8F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FColor>                        ThumbnailColors;                                   // 0x8F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	uint8                                        Pad_3339[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.SettingsCategoryElement
struct FSettingsCategoryElement
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct LOTF2.ShakeFeedbackRow
struct FShakeFeedbackRow : public FTableRowBase
{
public:
	TSubclassOf<class ULegacyCameraShake>        CameraShake;                                       // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UForceFeedbackEffect*                  ForceFeedback;                                     // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLooping;                                          // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_333A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LOTF2.ShapeCustomizationWidgetSetup
struct FShapeCustomizationWidgetSetup
{
public:
	TSubclassOf<class UShapeCategoryWidget>      StepWidget;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CategoryName;                                      // 0x8(0x18)(Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	enum class ECustomizationCategory            CustomizationCategory;                             // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_333B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UShapeCategoryWidget*                  ShapeCategoryWidget;                               // 0x28(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct LOTF2.SpawnerSaveState
struct FSpawnerSaveState
{
public:
	bool                                         bCharacterDead;                                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpawningEnabled;                                  // 0x1(0x1)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.ElevatorState
struct FElevatorState
{
public:
	enum class ESimpleElevatorState              ElevatorState;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOriginalPosition : 1;                             // Mask: 0x1, PropSize: 0x10x1(0x1)(BlueprintVisible, BlueprintReadOnly, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_25C : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_333C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Timestamp;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct LOTF2.SkinColorDefaults
struct FSkinColorDefaults : public FTableRowBase
{
public:
	struct FLinearColor                          Color;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct LOTF2.SocialCurrencyDonationOptions
struct FSocialCurrencyDonationOptions
{
public:
	uint8                                        Pad_333D[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.SocialCurrencyInventoryTier
struct FSocialCurrencyInventoryTier
{
public:
	TArray<class UInventoryItem*>                Items;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_333E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.SoulflayActor
struct FSoulflayActor
{
public:
	class AActor*                                Victim;                                            // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraComponent*                     Tendril;                                           // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtensionLength;                                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProjectileTimeToLive;                              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// ScriptStruct LOTF2.HexSpawnActorRequest
struct FHexSpawnActorRequest
{
public:
	TSubclassOf<class AActor>                    ClassToSpawn;                                      // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            DelegateToCall;                                    // 0x8(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 RequestingActor;                                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_333F[0xE0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct LOTF2.SpawnPoolsInfo
struct FSpawnPoolsInfo
{
public:
	uint8                                        Pad_3340[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentNumberOfSpawns;                             // 0x8(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LOTF2.SpawnedCharacterData
struct FSpawnedCharacterData
{
public:
	TSoftClassPtr<class UCharacterData>          CharacterDataClass;                                // 0x0(0x30)(Edit, DisableEditOnTemplate, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnWeightChance;                                 // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3341[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.SpawnwerData
struct FSpawnwerData
{
public:
	class ASimpleCharacterSpawner*               Spawner;                                           // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpawnWeightChance;                                 // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3342[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LOTF2.CurrentlyUsedData
struct FCurrentlyUsedData
{
public:
	int32                                        SpawnerIndex;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CharacterIndex;                                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x78 - 0x8)
// ScriptStruct LOTF2.SpecialDamageSpotDamageDefinition
struct FSpecialDamageSpotDamageDefinition : public FTableRowBase
{
public:
	struct FGameplayTagContainer                 InvalidAttackSourceTypes;                          // 0x8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, float>             AttackMultipliers;                                 // 0x28(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct LOTF2.StatScalarUIDefinition
struct FStatScalarUIDefinition : public FTableRowBase
{
public:
	enum class EStatScalarGrades                 Grade;                                             // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3343[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinValue;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxValue;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3344[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GradeName;                                         // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x228 (0x230 - 0x8)
// ScriptStruct LOTF2.CharacterStatsInfo
struct FCharacterStatsInfo : public FTableRowBase
{
public:
	bool                                         bCalculatedAttributes;                             // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3345[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Health;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Vigor;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VigorCapacity;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mojo;                                              // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MojoCapacity;                                      // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stamina;                                           // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemDiscovery;                                     // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InnateSuperArmor;                                  // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TemporarySuperArmor;                               // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoiseLevel;                                        // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoiseRegenDelay;                                   // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaggerHealth;                                     // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaggerHealthRegenRate;                            // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaggerHealthRegenDelay;                           // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Agility;                                           // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Endurance;                                         // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Vitality;                                          // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Faith;                                             // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chaos;                                             // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackPhysical;                                    // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackFire;                                        // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackHoly;                                        // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackDark;                                        // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackMagic;                                       // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackPoise;                                       // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackStamina;                                     // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackStagger;                                     // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackProvisionalDamage;                           // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackAggro;                                       // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaCost;                                       // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ManaCost;                                          // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmmoCost;                                          // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackRepelAmount;                                 // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardRepelAmount;                                  // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardRepelMultiplierOnParryAmount;                 // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefensePhysical;                                   // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseSlash;                                      // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseStrike;                                     // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseThrust;                                     // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseFire;                                       // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseHoly;                                       // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseDark;                                       // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseMagic;                                      // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefensePoise;                                      // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseStamina;                                    // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseStagger;                                    // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseProvisionalDamage;                          // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseAggro;                                      // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardDefensePhysical;                              // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardDefenseFire;                                  // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardDefenseHoly;                                  // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardDefenseDark;                                  // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardDefenseMagic;                                 // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardDefensePoise;                                 // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardDefenseStamina;                               // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardAngle;                                        // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardAngleOffset;                                  // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardStability;                                    // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageStaggerParry;                                // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParryGuardProtectionStamina;                       // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParryGuardProtectionDamage;                        // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParryGuardProtectionStatusEffect;                  // 0x104(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParryWindow;                                       // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardDefenseStagger;                               // 0x10C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardDefenseProvisionalDamage;                     // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardDefenseAggro;                                 // 0x114(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlowWalkSpeed;                                     // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WalkSpeed;                                         // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WalkSpeedBackward;                                 // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WalkSpeedLateral;                                  // 0x124(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RunSpeed;                                          // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SprintSpeed;                                       // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LadderClimbUpSpeed;                                // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LadderClimbDownSpeed;                              // 0x134(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LadderClimbUpSprintSpeed;                          // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LadderSlideDownSpeed;                              // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SprintStaminaCost;                                 // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardSpeed;                                        // 0x144(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PatrolSpeed;                                       // 0x148(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultRotationRate;                               // 0x14C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IdleRotationRate;                                  // 0x150(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultRotationRateDuringMontages;                 // 0x154(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DodgeStaminaBaseCost;                              // 0x158(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxEquippedWeight;                                 // 0x15C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EncumbranceThreshold;                              // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StaminaInfinite;                                   // 0x164(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3346[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinStamina;                                        // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaRegenRate;                                  // 0x16C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TiredStaminaRegenRate;                             // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExhaustedStaminaRegenRate;                         // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaStunInitialDuration;                        // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaStunResetDuration;                          // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mana;                                              // 0x180(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ManaRegenRate;                                     // 0x184(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ammo;                                              // 0x188(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmmoRegenRate;                                     // 0x18C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageBleed;                                       // 0x190(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamagePoison;                                      // 0x194(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageWither;                                      // 0x198(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageFrostbite;                                   // 0x19C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageSmite;                                       // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageBurn;                                        // 0x1A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageIgnite;                                      // 0x1A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResistanceBleed;                                   // 0x1AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResistancePoison;                                  // 0x1B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResistanceWither;                                  // 0x1B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResistanceFrostbite;                               // 0x1B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResistanceSmite;                                   // 0x1BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResistanceBurn;                                    // 0x1C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResistanceIgnite;                                  // 0x1C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardResistanceBleed;                              // 0x1C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardResistancePoison;                             // 0x1CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardResistanceWither;                             // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardResistanceFrostbite;                          // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardResistanceSmite;                              // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardResistanceBurn;                               // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardResistanceIgnite;                             // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CooldownBleed;                                     // 0x1E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CooldownPoison;                                    // 0x1E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CooldownWither;                                    // 0x1EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CooldownFrostbite;                                 // 0x1F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CooldownSmite;                                     // 0x1F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CooldownBurn;                                      // 0x1F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CooldownIgnite;                                    // 0x1FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoresRegionalScaling;                           // 0x200(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3347[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VisceralDamageMultiplier;                          // 0x204(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultDamageLevelForDestructibles;                // 0x208(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocomotionDamageLevelForDestructibles;             // 0x20C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageReceivedMultiplierStaggerFromBack;           // 0x210(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageReceivedMultiplierForVisceralAttacks;        // 0x214(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProvisionalDamagePerHitRecoveryMultiplier;         // 0x218(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScalingStrength;                                   // 0x21C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScalingAgility;                                    // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScalingFaith;                                      // 0x224(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScalingChaos;                                      // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3348[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x560 (0x568 - 0x8)
// ScriptStruct LOTF2.WeaponStatsInfo
struct FWeaponStatsInfo : public FTableRowBase
{
public:
	float                                        DamagePhysical;                                    // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3349[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       DamagePhysicalByLevel;                             // 0x10(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DamageFire;                                        // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_334A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       DamageFireByLevel;                                 // 0x30(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DamageDark;                                        // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_334B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       DamageDarkByLevel;                                 // 0x50(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DamageHoly;                                        // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_334C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       DamageHolyByLevel;                                 // 0x70(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DamageMagic;                                       // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_334D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       DamageMagicByLevel;                                // 0x90(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DamageStamina;                                     // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_334E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       DamageStaminaByLevel;                              // 0xB0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DamagePoise;                                       // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_334F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       DamagePoiseByLevel;                                // 0xD0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DamageStagger;                                     // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3350[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       DamageStaggerByLevel;                              // 0xF0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DamageProvisionalDamage;                           // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3351[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       DamageProvisionalDamageByLevel;                    // 0x110(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DamageAggro;                                       // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3352[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       DamageAggroByLevel;                                // 0x130(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DamageThreat;                                      // 0x148(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3353[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       DamageThreatByLevel;                               // 0x150(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        StaminaCost;                                       // 0x168(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttackRepelAmount;                                 // 0x16C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScalingStrength;                                   // 0x170(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3354[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       ScalingStrengthByLevel;                            // 0x178(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ScalingAgility;                                    // 0x190(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3355[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       ScalingAgilityByLevel;                             // 0x198(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ScalingOrder;                                      // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3356[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       ScalingOrderByLevel;                               // 0x1B8(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ScalingChaos;                                      // 0x1D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3357[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       ScalingChaosByLevel;                               // 0x1D8(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        GuardProtectionPhysical;                           // 0x1F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3358[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       GuardProtectionPhysicalByLevel;                    // 0x1F8(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        GuardProtectionFire;                               // 0x210(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3359[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       GuardProtectionFireByLevel;                        // 0x218(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        GuardProtectionHoly;                               // 0x230(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_335A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       GuardProtectionHolyByLevel;                        // 0x238(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        GuardProtectionDark;                               // 0x250(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_335B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       GuardProtectionDarkByLevel;                        // 0x258(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        GuardProtectionMagic;                              // 0x270(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_335C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       GuardProtectionMagicByLevel;                       // 0x278(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        GuardProtectionPoise;                              // 0x290(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_335D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       GuardProtectionPoiseByLevel;                       // 0x298(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        GuardProtectionStamina;                            // 0x2B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_335E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       GuardProtectionStaminaByLevel;                     // 0x2B8(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        GuardAngle;                                        // 0x2D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stability;                                         // 0x2D4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerLevelUpgradeCurveDefinition       StabilityByLevel;                                  // 0x2D8(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        GuardProtectionStagger;                            // 0x2F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_335F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       GuardProtectionStaggerByLevel;                     // 0x2F8(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        GuardProtectionProvisionalDamage;                  // 0x310(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3360[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       GuardProtectionProvisionalDamageByLevel;           // 0x318(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        GuardProtectionAggro;                              // 0x330(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3361[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       GuardProtectionAggroByLevel;                       // 0x338(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        GuardProtectionThreat;                             // 0x350(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3362[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       GuardProtectionThreatByLevel;                      // 0x358(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        GuardRepelAmount;                                  // 0x370(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardRepelMultiplierOnParryAmount;                 // 0x374(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageStaggerParry;                                // 0x378(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParryGuardProtectionStamina;                       // 0x37C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParryGuardProtectionDamage;                        // 0x380(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParryGuardProtectionStatusEffect;                  // 0x384(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParryWindow;                                       // 0x388(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageStatusEffectBleed;                           // 0x38C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerLevelUpgradeCurveDefinition       DamageStatusEffectBleedByLevel;                    // 0x390(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DamageStatusEffectPoison;                          // 0x3A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3363[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       DamageStatusEffectPoisonByLevel;                   // 0x3B0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DamageStatusEffectWither;                          // 0x3C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3364[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       DamageStatusEffectWitherByLevel;                   // 0x3D0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DamageStatusEffectFrostbite;                       // 0x3E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3365[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       DamageStatusEffectFrostbiteByLevel;                // 0x3F0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DamageStatusEffectSmite;                           // 0x408(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3366[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       DamageStatusEffectSmiteByLevel;                    // 0x410(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DamageStatusEffectBurn;                            // 0x428(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3367[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       DamageStatusEffectBurnByLevel;                     // 0x430(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DamageStatusEffectIgnite;                          // 0x448(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3368[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       DamageStatusEffectIgniteByLevel;                   // 0x450(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        GuardResistanceBleed;                              // 0x468(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardResistancePoison;                             // 0x46C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardResistanceWither;                             // 0x470(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardResistanceFrostbite;                          // 0x474(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardResistanceSmite;                              // 0x478(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardResistanceBurn;                               // 0x47C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GuardResistanceIgnite;                             // 0x480(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementStrength;                               // 0x484(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementAgility;                                // 0x488(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementEndurance;                              // 0x48C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementVitality;                               // 0x490(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementFaith;                                  // 0x494(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementChaos;                                  // 0x498(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpellPower;                                        // 0x49C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerLevelUpgradeCurveDefinition       SpellPowerByLevel;                                 // 0x4A0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        VisceralDamageMultiplier;                          // 0x4B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxEquipmentLevel;                                 // 0x4BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerLevelUpgradeCurveDefinition       RuneSocketsByLevel;                                // 0x4C0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TMap<TSubclassOf<class UUpgradeMaterialItemData>, struct FPerLevelUpgradeCurveDefinition> UpgradeCosts;                                      // 0x4D8(0x50)(Edit, NativeAccessSpecifierPublic)
	struct FPerLevelUpgradeCurveDefinition       VigorUpgradeCostByLevel;                           // 0x528(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ItemDiscovery;                                     // 0x540(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x544(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Durability;                                        // 0x548(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3369[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EHexRuneShape>             RuneSocketShapes;                                  // 0x550(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bCanBeBuffed;                                      // 0x560(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_336A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StaggerDamageMultiplierFromBack;                   // 0x564(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x570 - 0x568)
// ScriptStruct LOTF2.RangedWeaponStatsInfo
struct FRangedWeaponStatsInfo : public FWeaponStatsInfo
{
public:
	int32                                        NumberOfAmmoAvailable;                             // 0x568(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_336B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x48 - 0x8)
// ScriptStruct LOTF2.AmmoStatsInfo
struct FAmmoStatsInfo : public FTableRowBase
{
public:
	float                                        AmmoCost;                                          // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaCost;                                       // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtraStaminaCostWhenCharged;                       // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementStrength;                               // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementAgility;                                // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementEndurance;                              // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementVitality;                               // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementFaith;                                  // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementChaos;                                  // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScalingStrength;                                   // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScalingAgility;                                    // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScalingOrder;                                      // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScalingChaos;                                      // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDamageDefinitionIdentifier           DamageDefinitionShownInUI;                         // 0x3C(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_336C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct LOTF2.SpellStatsInfo
struct FSpellStatsInfo : public FTableRowBase
{
public:
	float                                        StaminaCost;                                       // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ManaCost;                                          // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoopingStaminaCost;                                // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoopingManaCost;                                   // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PeriodBetweenLoopingCosts;                         // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementStrength;                               // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementAgility;                                // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementEndurance;                              // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementVitality;                               // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementFaith;                                  // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementChaos;                                  // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDamageDefinitionIdentifier           DamageDefinitionShownInUI;                         // 0x34(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_336D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x98 - 0x8)
// ScriptStruct LOTF2.ArmorStatsInfo
struct FArmorStatsInfo : public FTableRowBase
{
public:
	float                                        DefensePhysical;                                   // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseFire;                                       // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseHoly;                                       // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseDark;                                       // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseMagic;                                      // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Poise;                                             // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Toughness;                                         // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResistanceBleed;                                   // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResistancePoison;                                  // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResistanceWither;                                  // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResistanceFrostbite;                               // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResistanceSmite;                                   // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResistanceBurn;                                    // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResistanceIgnite;                                  // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementStrength;                               // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementAgility;                                // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementEndurance;                              // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementVitality;                               // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementFaith;                                  // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequirementChaos;                                  // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemDiscovery;                                     // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Durability;                                        // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        KickPoiseDamageMultiplier;                         // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        KickStaggerDamageMultiplier;                       // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_336E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPerLevelUpgradeCurveDefinition       RuneSocketsByLevel;                                // 0x70(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<enum class EHexRuneShape>             RuneSocketShapes;                                  // 0x88(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct LOTF2.AIStatsInfo
struct FAIStatsInfo : public FTableRowBase
{
public:
	float                                        DistanceSight;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SightHorizontalFOV;                                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SightVerticalFOV;                                  // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceListen;                                    // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceSense;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESensesActivationReaction         CautionReaction;                                   // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESensesActivationReaction         SearchReaction;                                    // 0x1D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_336F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NearDistance;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MiddleDistance;                                    // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FarDistance;                                       // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutOfRangeDistance;                                // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RetreatHomeMaxDistance;                            // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RetreatHomeDistance;                               // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RetreatHomeBattleDistance;                         // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RetreatHomeLookForTargetTime;                      // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RetreatHomeLookForTargetDistance;                  // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BattleStartDistance;                               // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TeamAttackEffectivity;                             // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeTeamSpectator;                               // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanRunWhileSpectating;                            // 0x4D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseDefaultSpectatorBehavior;                      // 0x4E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseDefaultAttackReactionBehavior;                 // 0x4F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReactionBlockProbability;                          // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReactionDeflectProbability;                        // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReactionParryProbability;                          // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReactionDodgeProbability;                          // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReactionBlockProbabilityPerConsecutiveHit;         // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReactionDeflectProbabilityPerConsecutiveGuardHit;  // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReactionDodgeProbabilityPerConsecutiveHit;         // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3370[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct LOTF2.RegionScalingData
struct FRegionScalingData : public FTableRowBase
{
public:
	float                                        HealthMultiplier;                                  // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageMultiplier;                                  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaminaDamageMultiplier;                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefenseMultiplier;                                 // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ResistancesMultiplier;                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaggerHealthMultiplier;                           // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VigorDropMultiplier;                               // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3371[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.VigorToUpdateFormulaData
struct FVigorToUpdateFormulaData
{
public:
	float                                        BaseXP;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Factor3;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Factor2;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Factor1;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct LOTF2.LevelFormulaData
struct FLevelFormulaData
{
public:
	float                                        LevelFormulaConstant;                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct LOTF2.StatFormulaData
struct FStatFormulaData
{
public:
	float                                        Initial;                                           // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Base;                                              // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Factor;                                            // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.StatsRequirements
struct FStatsRequirements
{
public:
	int32                                        RequiredStrength;                                  // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredAgility;                                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredEndurance;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredVitality;                                  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredFaith;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredChaos;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.FirstEncounterAnimationGameplayTags
struct FFirstEncounterAnimationGameplayTags
{
public:
	struct FGameplayTag                          WaitFirstEncounterAnimationTag;                    // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          TriggerFirstEncounterAnimationTag;                 // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LOTF2.StatueSpawnerPose
struct FStatueSpawnerPose
{
public:
	class UStaticMesh*                           StatueMesh;                                        // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFirstEncounterAnimationGameplayTags  FirstEncounterAnimationTags;                       // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.HexActiveGameplayEffectHandlesArray
struct FHexActiveGameplayEffectHandlesArray
{
public:
	TArray<struct FActiveGameplayEffectHandle>   EffectHandles;                                     // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.HexStatusEffectHandleByAttribute
struct FHexStatusEffectHandleByAttribute
{
public:
	TMap<struct FGameplayAttribute, struct FHexActiveGameplayEffectHandlesArray> EffectHandlesArray;                                // 0x0(0x50)(NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct LOTF2.GameplayAbilityTargetData_TargetComponent
struct FGameplayAbilityTargetData_TargetComponent : public FGameplayAbilityTargetData
{
public:
	TWeakObjectPtr<class UTargetComponent>       TargetComponent;                                   // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct LOTF2.GameplayAbilityTargetData_HitReaction
struct FGameplayAbilityTargetData_HitReaction : public FGameplayAbilityTargetData
{
public:
	struct FVector_NetQuantize                   HitActorLocation;                                  // 0x8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal             HitActorForward;                                   // 0x20(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   InstigatorActorLocation;                           // 0x38(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct LOTF2.GameplayAbilityTargetData_NavLinkInfo
struct FGameplayAbilityTargetData_NavLinkInfo : public FGameplayAbilityTargetData
{
public:
	struct FVector_NetQuantize                   NavLinkStartLocation;                              // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   NavLinkEndLocation;                                // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct LOTF2.TattooDefaults
struct FTattooDefaults : public FTableRowBase
{
public:
	class FString                                TattooName;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DefaultColor;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Opacity;                                           // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TintAmount;                                        // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3372[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4E8 (0x4F0 - 0x8)
// ScriptStruct LOTF2.ThreeValueSliderStyle
struct FThreeValueSliderStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_3373[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           NormalThumbImage;                                  // 0x10(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SelectedThumbImage;                                // 0xE0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DisabledThumbImage;                                // 0x1B0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalBackgroundImage;                             // 0x280(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SelectedBackgroundImage;                           // 0x350(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DisabledBackgroundImage;                           // 0x420(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct LOTF2.HexTintDefinition
struct FHexTintDefinition : public FTableRowBase
{
public:
	struct FLinearColor                          MetalColor;                                        // 0x8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FabricColor;                                       // 0x18(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LeatherColor;                                      // 0x28(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TintStrength;                                      // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3374[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x60 - 0x8)
// ScriptStruct LOTF2.TopBarButtonsDefinition
struct FTopBarButtonsDefinition : public FTableRowBase
{
public:
	struct FGameplayTag                          Identifier;                                        // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x10(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  buttonName;                                        // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bDefaultVisible;                                   // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMultiplayerOnly;                                  // 0x59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAvailableInCoopMultiplayer;                       // 0x5A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAvailableInSpectatorMode;                         // 0x5B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBackHandler;                                    // 0x5D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideWhenGoingBack;                                // 0x5E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3375[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LOTF2.EquipmentSlotsSet
struct FEquipmentSlotsSet
{
public:
	TSet<enum class EFEquipmentSlot>             EquipmentSlots;                                    // 0x0(0x50)(SaveGame, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LOTF2.LevelUpRowWidgetArray
struct FLevelUpRowWidgetArray
{
public:
	TArray<class ULevelUpStatRow*>               Rows;                                              // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LOTF2.AIBehaviorContext
struct FAIBehaviorContext
{
public:
	TSoftObjectPtr<class UBehaviorTree>          MainBehavior;                                      // 0x0(0x30)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LOTF2.TimestampedLocation
struct FTimestampedLocation
{
public:
	float                                        Timestamp;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3376[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct LOTF2.VendorTableInfo
struct FVendorTableInfo : public FTableRowBase
{
public:
	float                                        VendorPriceModifier;                               // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  QuestStateCompleteTagApplyModifier;                // 0xC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  QuestStateActivatedTagBecomeVendor;                // 0x14(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  QuestStateReachedTagBecomeVendor;                  // 0x1C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  QuestStateCompleteTagBecomeVendor;                 // 0x24(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  QuestStateActivatedTagStopVendor;                  // 0x2C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  QuestStateReachedTagStopVendor;                    // 0x34(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  QuestStateCompleteTagStopVendor;                   // 0x3C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3377[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVendorTableItemInfo>          Items;                                             // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct LOTF2.VendorInventorySlot
struct FVendorInventorySlot
{
public:
	class UInventoryItem*                        Item;                                              // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ClientStock;                                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3378[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVendorTableItemInfo                  ItemInfo;                                          // 0x10(0xC0)(NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct LOTF2.SingleWeaponBuff
struct FSingleWeaponBuff
{
public:
	enum class EWeaponToBuff                     WeaponToBuff;                                      // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3379[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHexBattleEffectIdentifier            BattleEffectIfWeapon;                              // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FHexBattleEffectIdentifier            BattleEffectIfShield;                              // 0xC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FHexBattleEffectIdentifier            BattleEffectToPlayerIfShield;                      // 0x14(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct LOTF2.HexWeaponBuffDefinition
struct FHexWeaponBuffDefinition : public FTableRowBase
{
public:
	TArray<struct FSingleWeaponBuff>             WeaponBuffs;                                       // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct LOTF2.WeaponHitFxData
struct FWeaponHitFxData
{
public:
	struct FAkAnathemaEvent                      HitAkAnathemaEvent;                                // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UAkSwitchValue*                        HitAkSwitch;                                       // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkSwitchValue*                        BlockAkSwitch;                                     // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAkAnathemaEvent                      BlockAkAnathemaEvent;                              // 0x60(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        HitNiagaraFx;                                      // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        BlockNiagaraFx;                                    // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  WeaponHitSocketName;                               // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  WeaponBlockSocketName;                             // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct LOTF2.WeaponsHitFXMap
struct FWeaponsHitFXMap
{
public:
	TMap<enum class EAnathemaUnarmed, struct FWeaponHitFxData> UnarmedsHitFX;                                     // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
	TMap<TSoftClassPtr<class UWeaponsData>, struct FWeaponHitFxData> WeaponsHitFX;                                      // 0x50(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct LOTF2.WitherGameplayEffect
struct FWitherGameplayEffect
{
public:
	float                                        WitherProgressThreshold;                           // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_337A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectWithParams             GameplayEffect;                                    // 0x8(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct LOTF2.WitherEntitySpawn
struct FWitherEntitySpawn
{
public:
	TSoftClassPtr<class UCharacterData>          Character;                                         // 0x0(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RequiredTagsToSpawnCharacter;                      // 0x30(0x20)(Edit, NativeAccessSpecifierPublic)
	uint32                                       SpawnWeight;                                       // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_337B[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct LOTF2.WitherLevelDefinition
struct FWitherLevelDefinition
{
public:
	struct FVector2f                             DurationMinMax;                                    // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MirageSpawnMultiplier;                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_337C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FWitherGameplayEffect>         GameplayEffects;                                   // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FWitherEntitySpawn>            Entities;                                          // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UCurveVector>           SpawnCurveMinMax;                                  // 0x30(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct LOTF2.WitherChaserEnemyDefinition
struct FWitherChaserEnemyDefinition
{
public:
	TSoftClassPtr<class UCharacterData>          Character;                                         // 0x0(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ActivationWitherLevel;                             // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActivationWitherProgressThreshold;                 // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RespawnCooldownTime;                               // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_337D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UGameplayEffect>         UnspawnGameplayEffect;                             // 0x40(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LOTF2.ActorSplineData
struct FActorSplineData
{
public:
	TSoftObjectPtr<class AActor>                 ActorSpline;                                       // 0x0(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayBackwards;                                    // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAxiomRealm;                                       // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_337E[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


