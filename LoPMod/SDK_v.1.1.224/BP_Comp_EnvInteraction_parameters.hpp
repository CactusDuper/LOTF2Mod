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

// 0x15 (0x15 - 0x0)
// Function BP_Comp_EnvInteraction.BP_Comp_EnvInteraction_C.EndInteract
struct UBP_Comp_EnvInteraction_C_EndInteract_Params
{
public:
	enum class EF_EnvInteraction                 Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_380D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_EnvInteraction_InfluencerTrigger_C* Trigger;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue_1;           // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue_2;           // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue_3;           // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_Comp_EnvInteraction.BP_Comp_EnvInteraction_C.Trigger End Play Handler
struct UBP_Comp_EnvInteraction_C_Trigger_End_Play_Handler_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3811[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_EnvInteraction_InfluencerTrigger_C* Trigger;                                           // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class ABP_EnvInteraction_InfluencerTrigger_C* K2Node_DynamicCast_AsBP_Env_Interaction_Influencer_Trigger; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3E (0x3E - 0x0)
// Function BP_Comp_EnvInteraction.BP_Comp_EnvInteraction_C.BeginInteract
struct UBP_Comp_EnvInteraction_C_BeginInteract_Params
{
public:
	enum class EF_EnvInteraction                 Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3813[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_EnvInteraction_InfluencerTrigger_C* Trigger;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3815[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue_1;            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3816[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue_2;            // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3818[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue_3;            // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_3;        // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_Comp_EnvInteraction.BP_Comp_EnvInteraction_C.ReceiveEndPlay
struct UBP_Comp_EnvInteraction_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x284 (0x284 - 0x0)
// Function BP_Comp_EnvInteraction.BP_Comp_EnvInteraction_C.ExecuteUbergraph_BP_Comp_EnvInteraction
struct UBP_Comp_EnvInteraction_C_ExecuteUbergraph_BP_Comp_EnvInteraction_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_Value;                           // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_381F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_EnvInteraction_InfluencerTrigger_C*> Temp_object_Variable;                              // 0x8(0x10)(ReferenceParm)
	class UHexObjectTrackingSubsystem*           CallFunc_GetWorldSubsystem_ReturnValue;            // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EF_EnvInteraction                 Temp_byte_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3820[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AHexEnvInteraction*                    CallFunc_GetEnvInteraction_ReturnValue;            // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_EnvInteraction_C*                  K2Node_DynamicCast_AsBP_Env_Interaction;           // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3821[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_EnvInteraction_InfluencerTrigger_C*> K2Node_Select_Default;                             // 0x40(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3822[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHexObjectTrackingSubsystem*           CallFunc_GetWorldSubsystem_ReturnValue_1;          // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHexEnvInteraction*                    CallFunc_GetEnvInteraction_ReturnValue_1;          // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UHexObjectTrackingSubsystem*           CallFunc_GetWorldSubsystem_ReturnValue_2;          // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_EnvInteraction_C*                  K2Node_DynamicCast_AsBP_Env_Interaction_1;         // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3823[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AHexEnvInteraction*                    CallFunc_GetEnvInteraction_ReturnValue_2;          // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSimulationStatus_Value;                // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3824[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_EnvInteraction_C*                  K2Node_DynamicCast_AsBP_Env_Interaction_2;         // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3825[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHexObjectTrackingSubsystem*           CallFunc_GetWorldSubsystem_ReturnValue_3;          // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UHexObjectTrackingSubsystem*           CallFunc_GetWorldSubsystem_ReturnValue_4;          // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHexEnvInteraction*                    CallFunc_GetEnvInteraction_ReturnValue_3;          // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHexEnvInteraction*                    CallFunc_GetEnvInteraction_ReturnValue_4;          // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_EnvInteraction_C*                  K2Node_DynamicCast_AsBP_Env_Interaction_3;         // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3826[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_EnvInteraction_C*                  K2Node_DynamicCast_AsBP_Env_Interaction_4;         // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3827[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHexObjectTrackingSubsystem*           CallFunc_GetWorldSubsystem_ReturnValue_5;          // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UHexObjectTrackingSubsystem*           CallFunc_GetWorldSubsystem_ReturnValue_6;          // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHexEnvInteraction*                    CallFunc_GetEnvInteraction_ReturnValue_5;          // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHexEnvInteraction*                    CallFunc_GetEnvInteraction_ReturnValue_6;          // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_EnvInteraction_C*                  K2Node_DynamicCast_AsBP_Env_Interaction_5;         // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3828[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_EnvInteraction_C*                  K2Node_DynamicCast_AsBP_Env_Interaction_6;         // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3829[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHexObjectTrackingSubsystem*           CallFunc_GetWorldSubsystem_ReturnValue_7;          // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHexEnvInteraction*                    CallFunc_GetEnvInteraction_ReturnValue_7;          // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UHexObjectTrackingSubsystem*           CallFunc_GetWorldSubsystem_ReturnValue_8;          // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_EnvInteraction_C*                  K2Node_DynamicCast_AsBP_Env_Interaction_7;         // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_382A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AHexEnvInteraction*                    CallFunc_GetEnvInteraction_ReturnValue_8;          // 0x148(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_EnvInteraction_C*                  K2Node_DynamicCast_AsBP_Env_Interaction_8;         // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_382B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHexObjectTrackingSubsystem*           CallFunc_GetWorldSubsystem_ReturnValue_9;          // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UHexObjectTrackingSubsystem*           CallFunc_GetWorldSubsystem_ReturnValue_10;         // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHexEnvInteraction*                    CallFunc_GetEnvInteraction_ReturnValue_9;          // 0x170(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHexEnvInteraction*                    CallFunc_GetEnvInteraction_ReturnValue_10;         // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_EnvInteraction_C*                  K2Node_DynamicCast_AsBP_Env_Interaction_9;         // 0x180(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_382C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_EnvInteraction_C*                  K2Node_DynamicCast_AsBP_Env_Interaction_10;        // 0x190(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x199(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x19A(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_Value_1;                         // 0x19B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x19C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSimulationStatus_Value_1;              // 0x19D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x19E(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_382D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_EnvInteraction_InfluencerTrigger_C*> Temp_object_Variable_1;                            // 0x1A0(0x10)(ReferenceParm)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EF_EnvInteraction                 Temp_byte_Variable_1;                              // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSimulationStatus_Value_2;              // 0x1B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_382E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_EnvInteraction_InfluencerTrigger_C*> K2Node_Select_Default_1;                           // 0x1B8(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x1CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x1CD(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_382F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_EnvInteraction_InfluencerTrigger_C*> Temp_object_Variable_2;                            // 0x1D0(0x10)(ReferenceParm)
	enum class EF_EnvInteraction                 Temp_byte_Variable_2;                              // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x1E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x1E2(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x1E3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3830[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_EnvInteraction_InfluencerTrigger_C*> Temp_object_Variable_3;                            // 0x1E8(0x10)(ReferenceParm)
	bool                                         CallFunc_Map_Find_Value_2;                         // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x1F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSimulationStatus_Value_3;              // 0x1FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EF_EnvInteraction                 Temp_byte_Variable_3;                              // 0x1FB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x1FC(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3831[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_EnvInteraction_InfluencerTrigger_C*> K2Node_Select_Default_2;                           // 0x200(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x214(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x215(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3832[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x218(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_EnvInteraction_InfluencerTrigger_C*> K2Node_Select_Default_3;                           // 0x220(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_Value_3;                         // 0x234(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_3;                   // 0x235(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x236(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_6;                              // 0x237(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_7;                              // 0x238(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3833[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0x240(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_2;                   // 0x248(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UHexObjectTrackingSubsystem*           CallFunc_GetWorldSubsystem_ReturnValue_11;         // 0x250(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ALOTF2Character*                       K2Node_DynamicCast_AsLOTF2Character;               // 0x258(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_11;                    // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3834[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AHexEnvInteraction*                    CallFunc_GetEnvInteraction_ReturnValue_11;         // 0x268(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDualRealmStateComponent*              CallFunc_GetDualRealmStateComponent_ReturnValue;   // 0x270(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_EnvInteraction_C*                  K2Node_DynamicCast_AsBP_Env_Interaction_11;        // 0x278(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_12;                    // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGameRealm                        CallFunc_GetDualRealm_ReturnValue;                 // 0x281(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x282(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x283(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


