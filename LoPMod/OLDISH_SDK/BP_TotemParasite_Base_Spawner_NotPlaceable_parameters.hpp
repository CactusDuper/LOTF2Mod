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

// 0x10 (0x10 - 0x0)
// Function BP_TotemParasite_Base_Spawner_NotPlaceable.BP_TotemParasite_Base_Spawner_NotPlaceable_C.OnCharacterSpawnedDelegate_Event
struct ABP_TotemParasite_Base_Spawner_NotPlaceable_C_OnCharacterSpawnedDelegate_Event_Params
{
public:
	class ASimpleCharacterSpawner*               Spawner;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ALOTF2Character*                       Character;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function BP_TotemParasite_Base_Spawner_NotPlaceable.BP_TotemParasite_Base_Spawner_NotPlaceable_C.ExecuteUbergraph_BP_TotemParasite_Base_Spawner_NotPlaceable
struct ABP_TotemParasite_Base_Spawner_NotPlaceable_C_ExecuteUbergraph_BP_TotemParasite_Base_Spawner_NotPlaceable_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4357[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASimpleCharacterSpawner*               K2Node_CustomEvent_spawner;                        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ALOTF2Character*                       K2Node_CustomEvent_Character;                      // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_FOE_UmbralTotemParasite_C*         K2Node_DynamicCast_AsBP_FOE_Umbral_Totem_Parasite; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


