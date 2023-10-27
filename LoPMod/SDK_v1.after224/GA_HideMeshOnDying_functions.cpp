#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_HideMeshOnDying.GA_HideMeshOnDying_C
// (None)

class UClass* UGA_HideMeshOnDying_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_HideMeshOnDying_C");

	return Clss;
}


// GA_HideMeshOnDying_C GA_HideMeshOnDying.Default__GA_HideMeshOnDying_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_HideMeshOnDying_C* UGA_HideMeshOnDying_C::GetDefaultObj()
{
	static class UGA_HideMeshOnDying_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_HideMeshOnDying_C*>(UGA_HideMeshOnDying_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_HideMeshOnDying.GA_HideMeshOnDying_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_HideMeshOnDying_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HideMeshOnDying_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_HideMeshOnDying.GA_HideMeshOnDying_C.ExecuteUbergraph_GA_HideMeshOnDying
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetOwningComponentFromActorInfo_ReturnValue             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_HideMeshOnDying_C::ExecuteUbergraph_GA_HideMeshOnDying(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwningComponentFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_HideMeshOnDying_C", "ExecuteUbergraph_GA_HideMeshOnDying");

	Params::UGA_HideMeshOnDying_C_ExecuteUbergraph_GA_HideMeshOnDying_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningComponentFromActorInfo_ReturnValue = CallFunc_GetOwningComponentFromActorInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


