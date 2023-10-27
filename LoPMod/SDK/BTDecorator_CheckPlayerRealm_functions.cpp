#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTDecorator_CheckPlayerRealm.BTDecorator_CheckPlayerRealm_C
// (None)

class UClass* UBTDecorator_CheckPlayerRealm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_CheckPlayerRealm_C");

	return Clss;
}


// BTDecorator_CheckPlayerRealm_C BTDecorator_CheckPlayerRealm.Default__BTDecorator_CheckPlayerRealm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTDecorator_CheckPlayerRealm_C* UBTDecorator_CheckPlayerRealm_C::GetDefaultObj()
{
	static class UBTDecorator_CheckPlayerRealm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_CheckPlayerRealm_C*>(UBTDecorator_CheckPlayerRealm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTDecorator_CheckPlayerRealm.BTDecorator_CheckPlayerRealm_C.PerformConditionCheckAI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDualRealmDirector*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EGameRealm              CallFunc_GetCurrentGameRealm_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBTDecorator_CheckPlayerRealm_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class UDualRealmDirector* CallFunc_GetWorldSubsystem_ReturnValue, enum class EGameRealm CallFunc_GetCurrentGameRealm_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_CheckPlayerRealm_C", "PerformConditionCheckAI");

	Params::UBTDecorator_CheckPlayerRealm_C_PerformConditionCheckAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentGameRealm_ReturnValue = CallFunc_GetCurrentGameRealm_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


