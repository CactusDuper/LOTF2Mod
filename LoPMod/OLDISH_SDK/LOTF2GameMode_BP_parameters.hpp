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

// 0x9 (0x9 - 0x0)
// Function LOTF2GameMode_BP.LOTF2GameMode_BP_C.SetProxiesVisibility
struct ALOTF2GameMode_BP_C_SetProxiesVisibility_Params
{
public:
	class FName                                  LevelName;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Visibility;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function LOTF2GameMode_BP.LOTF2GameMode_BP_C.ReceiveEndPlay
struct ALOTF2GameMode_BP_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function LOTF2GameMode_BP.LOTF2GameMode_BP_C.K2_PostLogin
struct ALOTF2GameMode_BP_C_K2_PostLogin_Params
{
public:
	class APlayerController*                     NewPlayer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function LOTF2GameMode_BP.LOTF2GameMode_BP_C.ExecuteUbergraph_LOTF2GameMode_BP
struct ALOTF2GameMode_BP_C_ExecuteUbergraph_LOTF2GameMode_BP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4183[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     K2Node_Event_NewPlayer;                            // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAICombatManagerSubsystem*             CallFunc_GetWorldSubsystem_ReturnValue;            // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetLOTF2GameInstance_IsValid;             // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4185[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULOTF2GameInstance*                    CallFunc_GetLOTF2GameInstance_GameInstance;        // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function LOTF2GameMode_BP.LOTF2GameMode_BP_C.OnNewPlayerJoin__DelegateSignature
struct ALOTF2GameMode_BP_C_OnNewPlayerJoin__DelegateSignature_Params
{
public:
	class APlayerController*                     NewPlayerController;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


