#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_SharedNotify_Thud_Small.AN_SharedNotify_Thud_Small_C
// (None)

class UClass* UAN_SharedNotify_Thud_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_SharedNotify_Thud_Small_C");

	return Clss;
}


// AN_SharedNotify_Thud_Small_C AN_SharedNotify_Thud_Small.Default__AN_SharedNotify_Thud_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_SharedNotify_Thud_Small_C* UAN_SharedNotify_Thud_Small_C::GetDefaultObj()
{
	static class UAN_SharedNotify_Thud_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_SharedNotify_Thud_Small_C*>(UAN_SharedNotify_Thud_Small_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AN_SharedNotify_Thud_Small.AN_SharedNotify_Thud_Small_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAN_SharedNotify_Thud_Small_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_SharedNotify_Thud_Small_C", "Received_Notify");

	Params::UAN_SharedNotify_Thud_Small_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


