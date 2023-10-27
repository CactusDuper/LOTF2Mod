#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DestroyOnGlobalStateTagComponent.DestroyOnGlobalStateTagComponent_C
// (None)

class UClass* UDestroyOnGlobalStateTagComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DestroyOnGlobalStateTagComponent_C");

	return Clss;
}


// DestroyOnGlobalStateTagComponent_C DestroyOnGlobalStateTagComponent.Default__DestroyOnGlobalStateTagComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDestroyOnGlobalStateTagComponent_C* UDestroyOnGlobalStateTagComponent_C::GetDefaultObj()
{
	static class UDestroyOnGlobalStateTagComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDestroyOnGlobalStateTagComponent_C*>(UDestroyOnGlobalStateTagComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DestroyOnGlobalStateTagComponent.DestroyOnGlobalStateTagComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UDestroyOnGlobalStateTagComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DestroyOnGlobalStateTagComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DestroyOnGlobalStateTagComponent.DestroyOnGlobalStateTagComponent_C.OnGeneralTagsRegistered_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       Tags                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDestroyOnGlobalStateTagComponent_C::OnGeneralTagsRegistered_Event_0(struct FGameplayTagContainer& Tags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DestroyOnGlobalStateTagComponent_C", "OnGeneralTagsRegistered_Event_0");

	Params::UDestroyOnGlobalStateTagComponent_C_OnGeneralTagsRegistered_Event_0_Params Parms{};

	Parms.Tags = Tags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DestroyOnGlobalStateTagComponent.DestroyOnGlobalStateTagComponent_C.ExecuteUbergraph_DestroyOnGlobalStateTagComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuestDirector*              CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FQuestDirectorTags          CallFunc_GetQuestsTags_ReturnValue                               (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_CustomEvent_tags                                          (ConstParm)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UDestroyOnGlobalStateTagComponent_C::ExecuteUbergraph_DestroyOnGlobalStateTagComponent(int32 EntryPoint, class UQuestDirector* CallFunc_GetWorldSubsystem_ReturnValue, const struct FQuestDirectorTags& CallFunc_GetQuestsTags_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, const struct FGameplayTagContainer& K2Node_CustomEvent_tags, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_HasTag_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DestroyOnGlobalStateTagComponent_C", "ExecuteUbergraph_DestroyOnGlobalStateTagComponent");

	Params::UDestroyOnGlobalStateTagComponent_C_ExecuteUbergraph_DestroyOnGlobalStateTagComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetQuestsTags_ReturnValue = CallFunc_GetQuestsTags_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue_1 = CallFunc_HasTag_ReturnValue_1;
	Parms.K2Node_CustomEvent_tags = K2Node_CustomEvent_tags;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue_2 = CallFunc_HasTag_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


