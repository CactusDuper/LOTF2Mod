#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0xA1 - 0xA0)
// BlueprintGeneratedClass BTDecorator_CheckPlayerRealm.BTDecorator_CheckPlayerRealm_C
class UBTDecorator_CheckPlayerRealm_C : public UBTDecorator_BlueprintBase
{
public:
	enum class EGameRealm                        RealmToCheck;                                      // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTDecorator_CheckPlayerRealm_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue, enum class EGameRealm CallFunc_GetCurrentGameRealm_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


