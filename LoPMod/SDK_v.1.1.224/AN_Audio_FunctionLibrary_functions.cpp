#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_Audio_FunctionLibrary.AN_Audio_FunctionLibrary_C
// (None)

class UClass* UAN_Audio_FunctionLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_Audio_FunctionLibrary_C");

	return Clss;
}


// AN_Audio_FunctionLibrary_C AN_Audio_FunctionLibrary.Default__AN_Audio_FunctionLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_Audio_FunctionLibrary_C* UAN_Audio_FunctionLibrary_C::GetDefaultObj()
{
	static class UAN_Audio_FunctionLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_Audio_FunctionLibrary_C*>(UAN_Audio_FunctionLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AN_Audio_FunctionLibrary.AN_Audio_FunctionLibrary_C.GetMCAKWorldLocation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkComponent*                InputAkComp                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     MCAKWorldLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ValidLocation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                NewLocalVar                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMCAKComponent_validAkComp                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_GetMCAKComponent_PlayerAkComp                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAN_Audio_FunctionLibrary_C::GetMCAKWorldLocation(class UAkComponent*& InputAkComp, class UObject* __WorldContext, struct FVector* MCAKWorldLocation, bool* ValidLocation, class UAkComponent* NewLocalVar, bool CallFunc_GetMCAKComponent_validAkComp, class UAkComponent* CallFunc_GetMCAKComponent_PlayerAkComp, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Audio_FunctionLibrary_C", "GetMCAKWorldLocation");

	Params::UAN_Audio_FunctionLibrary_C_GetMCAKWorldLocation_Params Parms{};

	Parms.InputAkComp = InputAkComp;
	Parms.__WorldContext = __WorldContext;
	Parms.NewLocalVar = NewLocalVar;
	Parms.CallFunc_GetMCAKComponent_validAkComp = CallFunc_GetMCAKComponent_validAkComp;
	Parms.CallFunc_GetMCAKComponent_PlayerAkComp = CallFunc_GetMCAKComponent_PlayerAkComp;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MCAKWorldLocation != nullptr)
		*MCAKWorldLocation = std::move(Parms.MCAKWorldLocation);

	if (ValidLocation != nullptr)
		*ValidLocation = Parms.ValidLocation;

}


// Function AN_Audio_FunctionLibrary.AN_Audio_FunctionLibrary_C.GetMCAKComponent
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ValidAkComp                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                PlayerAkComp                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetLocalPlayer_LocalPlayerCharacter                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_AddComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAN_Audio_FunctionLibrary_C::GetMCAKComponent(class UObject* __WorldContext, bool* ValidAkComp, class UAkComponent** PlayerAkComp, class ACharacter* CallFunc_GetLocalPlayer_LocalPlayerCharacter, bool CallFunc_IsValid_ReturnValue, class UAkComponent* CallFunc_AddComponentByClass_ReturnValue, class UAkComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Audio_FunctionLibrary_C", "GetMCAKComponent");

	Params::UAN_Audio_FunctionLibrary_C_GetMCAKComponent_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetLocalPlayer_LocalPlayerCharacter = CallFunc_GetLocalPlayer_LocalPlayerCharacter;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddComponentByClass_ReturnValue = CallFunc_AddComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ValidAkComp != nullptr)
		*ValidAkComp = Parms.ValidAkComp;

	if (PlayerAkComp != nullptr)
		*PlayerAkComp = Parms.PlayerAkComp;

}


// Function AN_Audio_FunctionLibrary.AN_Audio_FunctionLibrary_C.IsLocalPlayer
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsLocalPlayer                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetLocalPlayer_LocalPlayerCharacter                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAN_Audio_FunctionLibrary_C::IsLocalPlayer(class AActor* Actor, class UObject* __WorldContext, bool* IsLocalPlayer, class ACharacter* CallFunc_GetLocalPlayer_LocalPlayerCharacter, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Audio_FunctionLibrary_C", "IsLocalPlayer");

	Params::UAN_Audio_FunctionLibrary_C_IsLocalPlayer_Params Parms{};

	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetLocalPlayer_LocalPlayerCharacter = CallFunc_GetLocalPlayer_LocalPlayerCharacter;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsLocalPlayer != nullptr)
		*IsLocalPlayer = Parms.IsLocalPlayer;

}


// Function AN_Audio_FunctionLibrary.AN_Audio_FunctionLibrary_C.GetLocalPlayer
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  LocalPlayerCharacter                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAN_Audio_FunctionLibrary_C::GetLocalPlayer(class UObject* __WorldContext, class ACharacter** LocalPlayerCharacter, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_Audio_FunctionLibrary_C", "GetLocalPlayer");

	Params::UAN_Audio_FunctionLibrary_C_GetLocalPlayer_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LocalPlayerCharacter != nullptr)
		*LocalPlayerCharacter = Parms.LocalPlayerCharacter;

}

}


