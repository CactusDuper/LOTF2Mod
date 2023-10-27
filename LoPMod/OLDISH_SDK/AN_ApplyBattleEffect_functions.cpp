#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_ApplyBattleEffect.AN_ApplyBattleEffect_C
// (None)

class UClass* UAN_ApplyBattleEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_ApplyBattleEffect_C");

	return Clss;
}


// AN_ApplyBattleEffect_C AN_ApplyBattleEffect.Default__AN_ApplyBattleEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_ApplyBattleEffect_C* UAN_ApplyBattleEffect_C::GetDefaultObj()
{
	static class UAN_ApplyBattleEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_ApplyBattleEffect_C*>(UAN_ApplyBattleEffect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AN_ApplyBattleEffect.AN_ApplyBattleEffect_C.BP_NotifyImplementation
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_ApplyBattleEffectToActor_ReturnValue                    (NoDestructor, HasGetValueTypeHash)

void UAN_ApplyBattleEffect_C::BP_NotifyImplementation(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_ApplyBattleEffectToActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_ApplyBattleEffect_C", "BP_NotifyImplementation");

	Params::UAN_ApplyBattleEffect_C_BP_NotifyImplementation_Params Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.Animation = Animation;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_ApplyBattleEffectToActor_ReturnValue = CallFunc_ApplyBattleEffectToActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


