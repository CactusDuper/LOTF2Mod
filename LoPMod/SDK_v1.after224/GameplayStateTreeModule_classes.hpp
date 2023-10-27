#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x168 - 0x108)
// Class GameplayStateTreeModule.StateTreeComponent
class UStateTreeComponent : public UBrainComponent
{
public:
	uint8                                        Pad_139[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStateTreeReference                   StateTreeRef;                                      // 0x110(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	bool                                         bStartLogicAutomatically;                          // 0x128(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStateTreeInstanceData                InstanceData;                                      // 0x130(0x30)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_13C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UStateTreeComponent* GetDefaultObj();

	void SendStateTreeEvent(struct FStateTreeEvent& Event);
};

// 0x20 (0x48 - 0x28)
// Class GameplayStateTreeModule.StateTreeComponentSchema
class UStateTreeComponentSchema : public UStateTreeSchema
{
public:
	TSubclassOf<class AActor>                    ContextActorClass;                                 // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FStateTreeExternalDataDesc            ContextActorDataDesc;                              // 0x30(0x18)(NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UStateTreeComponentSchema* GetDefaultObj();

};

}


