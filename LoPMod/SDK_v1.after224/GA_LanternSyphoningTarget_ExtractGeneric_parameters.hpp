#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function GA_LanternSyphoningTarget_ExtractGeneric.GA_LanternSyphoningTarget_ExtractGeneric_C.SetAllowedRealmForSyphoning
struct UGA_LanternSyphoningTarget_ExtractGeneric_C_SetAllowedRealmForSyphoning_Params
{
public:
	enum class EDualRealmState                   AllowedRealm;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x150 (0x150 - 0x0)
// Function GA_LanternSyphoningTarget_ExtractGeneric.GA_LanternSyphoningTarget_ExtractGeneric_C.SpawnSyphoningTrailVFX
struct UGA_LanternSyphoningTarget_ExtractGeneric_C_SpawnSyphoningTrailVFX_Params
{
public:
	struct FGameplayAttribute                    GameplayAttribute;                                 // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_Map_Find_Value;                           // 0x40(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_205A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASoulsLanternActor*                    CallFunc_GetSyphoningPlayerSoulsLanternActor_ReturnValue; // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x70(0xE0)(ContainsInstancedReference)
};

// 0x29 (0x29 - 0x0)
// Function GA_LanternSyphoningTarget_ExtractGeneric.GA_LanternSyphoningTarget_ExtractGeneric_C.GetSyphoningPlayerSoulsLanternActor
struct UGA_LanternSyphoningTarget_ExtractGeneric_C_GetSyphoningPlayerSoulsLanternActor_Params
{
public:
	class ASoulsLanternActor*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class APlayerCharacter*                      K2Node_DynamicCast_AsPlayer_Character;             // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_205B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEquipableInventorySoulsLantern*       CallFunc_GetSoulsLanternEquipment_ReturnValue;     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ASoulsLanternActor*                    CallFunc_GetSpawnedSoulsLanternActor_ReturnValue;  // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function GA_LanternSyphoningTarget_ExtractGeneric.GA_LanternSyphoningTarget_ExtractGeneric_C.OnSyphoningExtractionTick_BP
struct UGA_LanternSyphoningTarget_ExtractGeneric_C_OnSyphoningExtractionTick_BP_Params
{
public:
	struct FGameplayAttribute                    ExtractedAttribute;                                // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	float                                        ExtractedAmount;                                   // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function GA_LanternSyphoningTarget_ExtractGeneric.GA_LanternSyphoningTarget_ExtractGeneric_C.ExecuteUbergraph_GA_LanternSyphoningTarget_ExtractGeneric
struct UGA_LanternSyphoningTarget_ExtractGeneric_C_ExecuteUbergraph_GA_LanternSyphoningTarget_ExtractGeneric_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_205C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAttribute                    K2Node_Event_extractedAttribute;                   // 0x8(0x38)(HasGetValueTypeHash)
	float                                        K2Node_Event_extractedAmount;                      // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


