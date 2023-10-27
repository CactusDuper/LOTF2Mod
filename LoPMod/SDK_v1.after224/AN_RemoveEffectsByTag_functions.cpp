#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_RemoveEffectsByTag.AN_RemoveEffectsByTag_C
// (None)

class UClass* UAN_RemoveEffectsByTag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_RemoveEffectsByTag_C");

	return Clss;
}


// AN_RemoveEffectsByTag_C AN_RemoveEffectsByTag.Default__AN_RemoveEffectsByTag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_RemoveEffectsByTag_C* UAN_RemoveEffectsByTag_C::GetDefaultObj()
{
	static class UAN_RemoveEffectsByTag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_RemoveEffectsByTag_C*>(UAN_RemoveEffectsByTag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AN_RemoveEffectsByTag.AN_RemoveEffectsByTag_C.BP_NotifyImplementation
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveActiveEffectsWithTags_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAN_RemoveEffectsByTag_C::BP_NotifyImplementation(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_RemoveEffectsByTag_C", "BP_NotifyImplementation");

	Params::UAN_RemoveEffectsByTag_C_BP_NotifyImplementation_Params Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.Animation = Animation;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_RemoveActiveEffectsWithTags_ReturnValue = CallFunc_RemoveActiveEffectsWithTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


