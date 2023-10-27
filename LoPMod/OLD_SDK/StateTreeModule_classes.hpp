#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class StateTreeModule.StateTreeSchema
class UStateTreeSchema : public UObject
{
public:

	static class UClass* StaticClass();
	static class UStateTreeSchema* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class StateTreeModule.StateTreeNodeBlueprintBase
class UStateTreeNodeBlueprintBase : public UObject
{
public:
	uint8                                        Pad_2D6[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStateTreeNodeBlueprintBase* GetDefaultObj();

	void SendEvent(struct FStateTreeEvent& Event);
};

// 0x8 (0x38 - 0x30)
// Class StateTreeModule.StateTreeConditionBlueprintBase
class UStateTreeConditionBlueprintBase : public UStateTreeNodeBlueprintBase
{
public:
	uint8                                        Pad_2D7[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStateTreeConditionBlueprintBase* GetDefaultObj();

	bool ReceiveTestCondition();
};

// 0x8 (0x38 - 0x30)
// Class StateTreeModule.StateTreeEvaluatorBlueprintBase
class UStateTreeEvaluatorBlueprintBase : public UStateTreeNodeBlueprintBase
{
public:
	uint8                                        Pad_2E3[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStateTreeEvaluatorBlueprintBase* GetDefaultObj();

	void ReceiveTreeStop();
	void ReceiveTreeStart();
	void ReceiveTick(float DeltaTime);
};

// 0x8 (0x38 - 0x30)
// Class StateTreeModule.StateTreeTaskBlueprintBase
class UStateTreeTaskBlueprintBase : public UStateTreeNodeBlueprintBase
{
public:
	bool                                         bShouldStateChangeOnReselect;                      // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2ED[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStateTreeTaskBlueprintBase* GetDefaultObj();

	enum class EStateTreeRunStatus ReceiveTick(float DeltaTime);
	void ReceiveStateCompleted(enum class EStateTreeRunStatus CompletionStatus, const struct FStateTreeActiveStates& CompletedActiveStates);
	void ReceiveExitState(struct FStateTreeTransitionResult& Transition);
	enum class EStateTreeRunStatus ReceiveEnterState(struct FStateTreeTransitionResult& Transition);
};

// 0x160 (0x190 - 0x30)
// Class StateTreeModule.StateTree
class UStateTree : public UDataAsset
{
public:
	class UStateTreeSchema*                      Schema;                                            // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FCompactStateTreeState>        States;                                            // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FCompactStateTransition>       Transitions;                                       // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FInstancedStructArray                 Nodes;                                             // 0x58(0x10)(NativeAccessSpecifierPrivate)
	struct FStateTreeInstanceData                DefaultInstanceData;                               // 0x68(0x30)(NativeAccessSpecifierPrivate)
	struct FStateTreeInstanceData                SharedInstanceData;                                // 0x98(0x30)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_2EE[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStateTreeExternalDataDesc>    ContextDataDescs;                                  // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FStateTreePropertyBindings            PropertyBindings;                                  // 0xF0(0x68)(NativeAccessSpecifierPrivate)
	struct FInstancedPropertyBag                 Parameters;                                        // 0x158(0x10)(NativeAccessSpecifierPrivate)
	struct FStateTreeIndex8                      ParametersDataViewIndex;                           // 0x168(0x1)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2EF[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       EvaluatorsBegin;                                   // 0x16A(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       EvaluatorsNum;                                     // 0x16C(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2F1[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStateTreeExternalDataDesc>    ExternalDataDescs;                                 // 0x170(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	int32                                        ExternalDataBaseIndex;                             // 0x180(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumDataViews;                                      // 0x184(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2F2[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStateTree* GetDefaultObj();

};

}


