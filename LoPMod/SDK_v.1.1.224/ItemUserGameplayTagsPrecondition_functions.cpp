#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ItemUserGameplayTagsPrecondition.ItemUserGameplayTagsPrecondition_C
// (None)

class UClass* UItemUserGameplayTagsPrecondition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemUserGameplayTagsPrecondition_C");

	return Clss;
}


// ItemUserGameplayTagsPrecondition_C ItemUserGameplayTagsPrecondition.Default__ItemUserGameplayTagsPrecondition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemUserGameplayTagsPrecondition_C* UItemUserGameplayTagsPrecondition_C::GetDefaultObj()
{
	static class UItemUserGameplayTagsPrecondition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemUserGameplayTagsPrecondition_C*>(UItemUserGameplayTagsPrecondition_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemUserGameplayTagsPrecondition.ItemUserGameplayTagsPrecondition_C.CanBeUsedBy_BP
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APlayerCharacter*            PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTagQueryEmpty_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_GetOwnedGameplayTags_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetOwnedGameplayTags_TagContainer                       (None)
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UItemUserGameplayTagsPrecondition_C::CanBeUsedBy_BP(class APlayerCharacter* PlayerCharacter, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsTagQueryEmpty_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemUserGameplayTagsPrecondition_C", "CanBeUsedBy_BP");

	Params::UItemUserGameplayTagsPrecondition_C_CanBeUsedBy_BP_Params Parms{};

	Parms.PlayerCharacter = PlayerCharacter;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsTagQueryEmpty_ReturnValue = CallFunc_IsTagQueryEmpty_ReturnValue;
	Parms.CallFunc_GetOwnedGameplayTags_self_CastInput = CallFunc_GetOwnedGameplayTags_self_CastInput;
	Parms.CallFunc_GetOwnedGameplayTags_TagContainer = CallFunc_GetOwnedGameplayTags_TagContainer;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue = CallFunc_DoesContainerMatchTagQuery_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


