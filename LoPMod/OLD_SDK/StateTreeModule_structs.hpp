#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EStateTreeLoopEvents : uint8
{
	Next                           = 0,
	Break                          = 1,
	EStateTreeLoopEvents_MAX       = 2,
};

enum class EStateTreeLinkerStatus : uint8
{
	Succeeded                      = 0,
	Failed                         = 1,
	EStateTreeLinkerStatus_MAX     = 2,
};

enum class EStateTreeBlueprintPropertyCategory : uint8
{
	NotSet                         = 0,
	Input                          = 1,
	Parameter                      = 2,
	Output                         = 3,
	ContextObject                  = 4,
	EStateTreeBlueprintPropertyCategory_MAX = 5,
};

enum class EStateTreeBindableStructSource : uint8
{
	Context                        = 0,
	Parameter                      = 1,
	Evaluator                      = 2,
	State                          = 3,
	Task                           = 4,
	Condition                      = 5,
	EStateTreeBindableStructSource_MAX = 6,
};

enum class EStateTreePropertyAccessType : uint8
{
	Offset                         = 0,
	Object                         = 1,
	WeakObject                     = 2,
	SoftObject                     = 3,
	IndexArray                     = 4,
	EStateTreePropertyAccessType_MAX = 5,
};

enum class EStateTreePropertyCopyType : uint8
{
	None                           = 0,
	CopyPlain                      = 1,
	CopyComplex                    = 2,
	CopyBool                       = 3,
	CopyStruct                     = 4,
	CopyObject                     = 5,
	CopyName                       = 6,
	CopyFixedArray                 = 7,
	StructReference                = 8,
	PromoteBoolToByte              = 9,
	PromoteBoolToInt32             = 10,
	PromoteBoolToUInt32            = 11,
	PromoteBoolToInt64             = 12,
	PromoteBoolToFloat             = 13,
	PromoteBoolToDouble            = 14,
	PromoteByteToInt32             = 15,
	PromoteByteToUInt32            = 16,
	PromoteByteToInt64             = 17,
	PromoteByteToFloat             = 18,
	PromoteByteToDouble            = 19,
	PromoteInt32ToInt64            = 20,
	PromoteInt32ToFloat            = 21,
	PromoteInt32ToDouble           = 22,
	PromoteUInt32ToInt64           = 23,
	PromoteUInt32ToFloat           = 24,
	PromoteUInt32ToDouble          = 25,
	PromoteFloatToInt32            = 26,
	PromoteFloatToInt64            = 27,
	PromoteFloatToDouble           = 28,
	DemoteDoubleToInt32            = 29,
	DemoteDoubleToInt64            = 30,
	DemoteDoubleToFloat            = 31,
	EStateTreePropertyCopyType_MAX = 32,
};

enum class EStateTreeRunStatus : uint8
{
	Running                        = 0,
	Failed                         = 1,
	Succeeded                      = 2,
	Unset                          = 3,
	EStateTreeRunStatus_MAX        = 4,
};

enum class EStateTreeEvaluationType : uint8
{
	PreSelect                      = 0,
	Tick                           = 1,
	EStateTreeEvaluationType_MAX   = 2,
};

enum class EStateTreeStateChangeType : uint8
{
	None                           = 0,
	Changed                        = 1,
	Sustained                      = 2,
	EStateTreeStateChangeType_MAX  = 3,
};

enum class EStateTreeTransitionType : uint8
{
	Succeeded                      = 0,
	Failed                         = 1,
	GotoState                      = 2,
	NotSet                         = 3,
	NextState                      = 4,
	EStateTreeTransitionType_MAX   = 5,
};

enum class EStateTreeConditionOperand : uint8
{
	Copy                           = 0,
	And                            = 1,
	Or                             = 2,
	EStateTreeConditionOperand_MAX = 3,
};

enum class EStateTreeStateType : uint8
{
	State                          = 0,
	Group                          = 1,
	Linked                         = 2,
	Subtree                        = 3,
	EStateTreeStateType_MAX        = 4,
};

enum class EStateTreeTransitionTrigger : uint8
{
	None                           = 0,
	OnStateCompleted               = 3,
	OnStateSucceeded               = 1,
	OnStateFailed                  = 2,
	OnTick                         = 4,
	OnEvent                        = 8,
	MAX                            = 9,
};

enum class EStateTreeExternalDataRequirement : uint8
{
	Required                       = 0,
	Optional                       = 1,
	EStateTreeExternalDataRequirement_MAX = 2,
};

enum class EStateTreePropertyUsage : uint8
{
	Invalid                        = 0,
	Context                        = 1,
	Input                          = 2,
	Parameter                      = 3,
	Output                         = 4,
	EStateTreePropertyUsage_MAX    = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct StateTreeModule.StateTreeAnyEnum
struct FStateTreeAnyEnum
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnum*                                 Enum;                                              // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct StateTreeModule.StateTreeEvent
struct FStateTreeEvent
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInstancedStruct                      Payload;                                           // 0x8(0x10)(Edit, NativeAccessSpecifierPublic)
	class FName                                  Origin;                                            // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct StateTreeModule.StateTreeIndex16
struct FStateTreeIndex16
{
public:
	uint16                                       Value;                                             // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct StateTreeModule.StateTreeNodeBase
struct FStateTreeNodeBase
{
public:
	uint8                                        Pad_2FA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStateTreeIndex16                     BindingsBatch;                                     // 0x10(0x2)(NoDestructor, NativeAccessSpecifierPublic)
	struct FStateTreeIndex16                     DataViewIndex;                                     // 0x12(0x2)(NoDestructor, NativeAccessSpecifierPublic)
	struct FStateTreeIndex16                     InstanceIndex;                                     // 0x14(0x2)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bInstanceIsObject : 1;                             // Mask: 0x1, PropSize: 0x10x16(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2FB[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x20 - 0x18)
// ScriptStruct StateTreeModule.StateTreeConditionBase
struct FStateTreeConditionBase : public FStateTreeNodeBase
{
public:
	enum class EStateTreeConditionOperand        Operand;                                           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         DeltaIndent;                                       // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2FC[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x28 - 0x20)
// ScriptStruct StateTreeModule.StateTreeBlueprintConditionWrapper
struct FStateTreeBlueprintConditionWrapper : public FStateTreeConditionBase
{
public:
	TSubclassOf<class UStateTreeConditionBlueprintBase> ConditionClass;                                    // 0x20(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct StateTreeModule.StateTreeEvaluatorBase
struct FStateTreeEvaluatorBase : public FStateTreeNodeBase
{
public:
};

// 0x8 (0x20 - 0x18)
// ScriptStruct StateTreeModule.StateTreeBlueprintEvaluatorWrapper
struct FStateTreeBlueprintEvaluatorWrapper : public FStateTreeEvaluatorBase
{
public:
	TSubclassOf<class UStateTreeEvaluatorBlueprintBase> EvaluatorClass;                                    // 0x18(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x20 - 0x18)
// ScriptStruct StateTreeModule.StateTreeTaskBase
struct FStateTreeTaskBase : public FStateTreeNodeBase
{
public:
	uint8                                        Pad_2FF[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x28 - 0x20)
// ScriptStruct StateTreeModule.StateTreeBlueprintTaskWrapper
struct FStateTreeBlueprintTaskWrapper : public FStateTreeTaskBase
{
public:
	TSubclassOf<class UStateTreeTaskBlueprintBase> TaskClass;                                         // 0x20(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct StateTreeModule.StateTreeCompareIntConditionInstanceData
struct FStateTreeCompareIntConditionInstanceData
{
public:
	int32                                        Left;                                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Right;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct StateTreeModule.StateTreeConditionCommonBase
struct FStateTreeConditionCommonBase : public FStateTreeConditionBase
{
public:
};

// 0x8 (0x28 - 0x20)
// ScriptStruct StateTreeModule.StateTreeCompareIntCondition
struct FStateTreeCompareIntCondition : public FStateTreeConditionCommonBase
{
public:
	bool                                         bInvert;                                           // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGenericAICheck                   Operator;                                          // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_301[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct StateTreeModule.StateTreeCompareFloatConditionInstanceData
struct FStateTreeCompareFloatConditionInstanceData
{
public:
	double                                       Left;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Right;                                             // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct StateTreeModule.StateTreeCompareFloatCondition
struct FStateTreeCompareFloatCondition : public FStateTreeConditionCommonBase
{
public:
	bool                                         bInvert;                                           // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGenericAICheck                   Operator;                                          // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_302[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct StateTreeModule.StateTreeCompareBoolConditionInstanceData
struct FStateTreeCompareBoolConditionInstanceData
{
public:
	bool                                         bLeft;                                             // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRight;                                            // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct StateTreeModule.StateTreeCompareBoolCondition
struct FStateTreeCompareBoolCondition : public FStateTreeConditionCommonBase
{
public:
	bool                                         bInvert;                                           // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_304[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct StateTreeModule.StateTreeCompareEnumConditionInstanceData
struct FStateTreeCompareEnumConditionInstanceData
{
public:
	struct FStateTreeAnyEnum                     Left;                                              // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FStateTreeAnyEnum                     Right;                                             // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct StateTreeModule.StateTreeCompareEnumCondition
struct FStateTreeCompareEnumCondition : public FStateTreeConditionCommonBase
{
public:
	bool                                         bInvert;                                           // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_305[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct StateTreeModule.StateTreeCompareDistanceConditionInstanceData
struct FStateTreeCompareDistanceConditionInstanceData
{
public:
	struct FVector                               Source;                                            // 0x0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Target;                                            // 0x18(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Distance;                                          // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct StateTreeModule.StateTreeCompareDistanceCondition
struct FStateTreeCompareDistanceCondition : public FStateTreeConditionCommonBase
{
public:
	bool                                         bInvert;                                           // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGenericAICheck                   Operator;                                          // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_306[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct StateTreeModule.StateTreeRandomConditionInstanceData
struct FStateTreeRandomConditionInstanceData
{
public:
	float                                        Threshold;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct StateTreeModule.StateTreeRandomCondition
struct FStateTreeRandomCondition : public FStateTreeConditionCommonBase
{
public:
};

// 0x28 (0x28 - 0x0)
// ScriptStruct StateTreeModule.GameplayTagMatchConditionInstanceData
struct FGameplayTagMatchConditionInstanceData
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Tag;                                               // 0x20(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct StateTreeModule.GameplayTagMatchCondition
struct FGameplayTagMatchCondition : public FStateTreeConditionCommonBase
{
public:
	bool                                         bExactMatch;                                       // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvert;                                           // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_307[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct StateTreeModule.GameplayTagContainerMatchConditionInstanceData
struct FGameplayTagContainerMatchConditionInstanceData
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 OtherContainer;                                    // 0x20(0x20)(Edit, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct StateTreeModule.GameplayTagContainerMatchCondition
struct FGameplayTagContainerMatchCondition : public FStateTreeConditionCommonBase
{
public:
	enum class EGameplayContainerMatchType       MatchType;                                         // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExactMatch;                                       // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvert;                                           // 0x22(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_309[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct StateTreeModule.GameplayTagQueryConditionInstanceData
struct FGameplayTagQueryConditionInstanceData
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(Edit, NativeAccessSpecifierPublic)
};

// 0x50 (0x70 - 0x20)
// ScriptStruct StateTreeModule.GameplayTagQueryCondition
struct FGameplayTagQueryCondition : public FStateTreeConditionCommonBase
{
public:
	struct FGameplayTagQuery                     TagQuery;                                          // 0x20(0x48)(Edit, NativeAccessSpecifierPublic)
	bool                                         bInvert;                                           // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct StateTreeModule.StateTreeObjectIsValidConditionInstanceData
struct FStateTreeObjectIsValidConditionInstanceData
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct StateTreeModule.StateTreeObjectIsValidCondition
struct FStateTreeObjectIsValidCondition : public FStateTreeConditionCommonBase
{
public:
	bool                                         bInvert;                                           // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct StateTreeModule.StateTreeObjectEqualsConditionInstanceData
struct FStateTreeObjectEqualsConditionInstanceData
{
public:
	class UObject*                               Left;                                              // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Right;                                             // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct StateTreeModule.StateTreeObjectEqualsCondition
struct FStateTreeObjectEqualsCondition : public FStateTreeConditionCommonBase
{
public:
	bool                                         bInvert;                                           // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct StateTreeModule.StateTreeObjectIsChildOfClassConditionInstanceData
struct FStateTreeObjectIsChildOfClassConditionInstanceData
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   Class;                                             // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct StateTreeModule.StateTreeObjectIsChildOfClassCondition
struct FStateTreeObjectIsChildOfClassCondition : public FStateTreeConditionCommonBase
{
public:
	bool                                         bInvert;                                           // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct StateTreeModule.StateTreeEvaluatorCommonBase
struct FStateTreeEvaluatorCommonBase : public FStateTreeEvaluatorBase
{
public:
};

// 0x24 (0x24 - 0x0)
// ScriptStruct StateTreeModule.StateTreeExecutionState
struct FStateTreeExecutionState
{
public:
	uint8                                        Pad_310[0x24];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct StateTreeModule.StateTreeInstanceData
struct FStateTreeInstanceData
{
public:
	struct FInstancedStructArray                 InstanceStructs;                                   // 0x0(0x10)(NativeAccessSpecifierPrivate)
	TArray<class UObject*>                       InstanceObjects;                                   // 0x10(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FStateTreeEvent>               Events;                                            // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct StateTreeModule.StateTreeBindableStructDesc
struct FStateTreeBindableStructDesc
{
public:
	class UStruct*                               Struct;                                            // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStateTreeBindableStructSource    DataSource;                                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_311[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct StateTreeModule.StateTreePropertySegment
struct FStateTreePropertySegment
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStateTreeIndex16                     ArrayIndex;                                        // 0x8(0x2)(NoDestructor, NativeAccessSpecifierPublic)
	struct FStateTreeIndex16                     NextIndex;                                         // 0xA(0x2)(NoDestructor, NativeAccessSpecifierPublic)
	enum class EStateTreePropertyAccessType      Type;                                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_312[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// ScriptStruct StateTreeModule.StateTreePropertyBinding
struct FStateTreePropertyBinding
{
public:
	struct FStateTreePropertySegment             SourcePath;                                        // 0x0(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FStateTreePropertySegment             TargetPath;                                        // 0x10(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FStateTreeIndex16                     SourceStructIndex;                                 // 0x20(0x2)(NoDestructor, NativeAccessSpecifierPublic)
	enum class EStateTreePropertyCopyType        CopyType;                                          // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_314[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct StateTreeModule.StateTreePropertyIndirection
struct FStateTreePropertyIndirection
{
public:
	struct FStateTreeIndex16                     ArrayIndex;                                        // 0x0(0x2)(NoDestructor, NativeAccessSpecifierPublic)
	uint16                                       Offset;                                            // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStateTreeIndex16                     NextIndex;                                         // 0x4(0x2)(NoDestructor, NativeAccessSpecifierPublic)
	enum class EStateTreePropertyAccessType      Type;                                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_315[0x9];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct StateTreeModule.StateTreePropCopy
struct FStateTreePropCopy
{
public:
	struct FStateTreePropertyIndirection         SourceIndirection;                                 // 0x0(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FStateTreePropertyIndirection         TargetIndirection;                                 // 0x10(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_316[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CopySize;                                          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStateTreeIndex16                     SourceStructIndex;                                 // 0x34(0x2)(NoDestructor, NativeAccessSpecifierPublic)
	enum class EStateTreePropertyCopyType        Type;                                              // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_317[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct StateTreeModule.StateTreePropCopyBatch
struct FStateTreePropCopyBatch
{
public:
	struct FStateTreeBindableStructDesc          TargetStruct;                                      // 0x0(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	uint16                                       BindingsBegin;                                     // 0x18(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       BindingsEnd;                                       // 0x1A(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_319[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct StateTreeModule.StateTreePropertyBindings
struct FStateTreePropertyBindings
{
public:
	TArray<struct FStateTreeBindableStructDesc>  SourceStructs;                                     // 0x0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FStateTreePropCopyBatch>       CopyBatches;                                       // 0x10(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FStateTreePropertyBinding>     PropertyBindings;                                  // 0x20(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FStateTreePropertySegment>     PropertySegments;                                  // 0x30(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FStateTreePropCopy>            PropertyCopies;                                    // 0x40(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct FStateTreePropertyIndirection> PropertyIndirections;                              // 0x50(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_31B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct StateTreeModule.StateTreeEditorPropertyPath
struct FStateTreeEditorPropertyPath
{
public:
	struct FGuid                                 StructID;                                          // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Path;                                              // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct StateTreeModule.StateTreeReference
struct FStateTreeReference
{
public:
	class UStateTree*                            StateTree;                                         // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FInstancedPropertyBag                 Parameters;                                        // 0x8(0x10)(Edit, Protected, NativeAccessSpecifierProtected)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct StateTreeModule.StateTreeTaskCommonBase
struct FStateTreeTaskCommonBase : public FStateTreeTaskBase
{
public:
};

// 0x2 (0x2 - 0x0)
// ScriptStruct StateTreeModule.StateTreeStateHandle
struct FStateTreeStateHandle
{
public:
	uint16                                       Index;                                             // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct StateTreeModule.StateTreeIndex8
struct FStateTreeIndex8
{
public:
	uint8                                        Value;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x12 (0x12 - 0x0)
// ScriptStruct StateTreeModule.StateTreeActiveStates
struct FStateTreeActiveStates
{
public:
	struct FStateTreeStateHandle                 States[0x8];                                       // 0x0(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        NumStates;                                         // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_320[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C (0x2C - 0x0)
// ScriptStruct StateTreeModule.StateTreeTransitionResult
struct FStateTreeTransitionResult
{
public:
	struct FStateTreeActiveStates                CurrentActiveStates;                               // 0x0(0x12)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	enum class EStateTreeRunStatus               CurrentRunStatus;                                  // 0x12(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_322[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStateTreeStateHandle                 TargetState;                                       // 0x14(0x2)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FStateTreeActiveStates                NextActiveStates;                                  // 0x16(0x12)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FStateTreeStateHandle                 CurrentState;                                      // 0x28(0x2)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	enum class EStateTreeStateChangeType         ChangeType;                                        // 0x2A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_323[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct StateTreeModule.CompactStateTransition
struct FCompactStateTransition
{
public:
	struct FGameplayTag                          EventTag;                                          // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ConditionsBegin;                                   // 0x8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStateTreeStateHandle                 State;                                             // 0xA(0x2)(NoDestructor, NativeAccessSpecifierPublic)
	enum class EStateTreeTransitionType          Type;                                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStateTreeTransitionTrigger       Trigger;                                           // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        GateDelay;                                         // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ConditionsNum;                                     // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct StateTreeModule.CompactStateTreeState
struct FCompactStateTreeState
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStateTreeStateHandle                 LinkedState;                                       // 0x8(0x2)(NoDestructor, NativeAccessSpecifierPublic)
	struct FStateTreeStateHandle                 Parent;                                            // 0xA(0x2)(NoDestructor, NativeAccessSpecifierPublic)
	uint16                                       ChildrenBegin;                                     // 0xC(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ChildrenEnd;                                       // 0xE(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       EnterConditionsBegin;                              // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       TransitionsBegin;                                  // 0x12(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       TasksBegin;                                        // 0x14(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStateTreeIndex16                     ParameterInstanceIndex;                            // 0x16(0x2)(NoDestructor, NativeAccessSpecifierPublic)
	struct FStateTreeIndex16                     ParameterDataViewIndex;                            // 0x18(0x2)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        EnterConditionsNum;                                // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TransitionsNum;                                    // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TasksNum;                                          // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStateTreeStateType               Type;                                              // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_324[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct StateTreeModule.CompactStateTreeParameters
struct FCompactStateTreeParameters
{
public:
	struct FStateTreeIndex16                     BindingsBatch;                                     // 0x0(0x2)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_325[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInstancedPropertyBag                 Parameters;                                        // 0x8(0x10)(NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct StateTreeModule.StateTreeExternalDataHandle
struct FStateTreeExternalDataHandle
{
public:
	struct FStateTreeIndex8                      DataViewIndex;                                     // 0x0(0x1)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct StateTreeModule.StateTreeExternalDataDesc
struct FStateTreeExternalDataDesc
{
public:
	class UStruct*                               Struct;                                            // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStateTreeExternalDataHandle          Handle;                                            // 0x10(0x1)(NoDestructor, NativeAccessSpecifierPublic)
	enum class EStateTreeExternalDataRequirement Requirement;                                       // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_326[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct StateTreeModule.StateTreeStructRef
struct FStateTreeStructRef
{
public:
	uint8                                        Pad_327[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct StateTreeModule.StateTreeDebugTextTaskInstanceData
struct FStateTreeDebugTextTaskInstanceData
{
public:
	uint8                                        Pad_328[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x60 - 0x20)
// ScriptStruct StateTreeModule.StateTreeDebugTextTask
struct FStateTreeDebugTextTask : public FStateTreeTaskCommonBase
{
public:
	uint8                                        Pad_329[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Text;                                              // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                TextColor;                                         // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FontScale;                                         // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Offset;                                            // 0x40(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct StateTreeModule.StateTreeDelayTaskInstanceData
struct FStateTreeDelayTaskInstanceData
{
public:
	float                                        Duration;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomDeviation;                                   // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRunForever;                                       // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x20 - 0x20)
// ScriptStruct StateTreeModule.StateTreeDelayTask
struct FStateTreeDelayTask : public FStateTreeTaskCommonBase
{
public:
};

}


