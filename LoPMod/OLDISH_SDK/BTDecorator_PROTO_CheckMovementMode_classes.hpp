#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0xA1 - 0xA0)
// BlueprintGeneratedClass BTDecorator_PROTO_CheckMovementMode.BTDecorator_PROTO_CheckMovementMode_C
class UBTDecorator_PROTO_CheckMovementMode_C : public UBTDecorator_BlueprintBase
{
public:
	enum class EMovementMode                     MovementMode;                                      // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTDecorator_PROTO_CheckMovementMode_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


