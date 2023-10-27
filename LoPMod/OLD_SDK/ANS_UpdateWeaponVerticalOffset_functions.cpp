#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ANS_UpdateWeaponVerticalOffset.ANS_UpdateWeaponVerticalOffset_C
// (None)

class UClass* UANS_UpdateWeaponVerticalOffset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANS_UpdateWeaponVerticalOffset_C");

	return Clss;
}


// ANS_UpdateWeaponVerticalOffset_C ANS_UpdateWeaponVerticalOffset.Default__ANS_UpdateWeaponVerticalOffset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANS_UpdateWeaponVerticalOffset_C* UANS_UpdateWeaponVerticalOffset_C::GetDefaultObj()
{
	static class UANS_UpdateWeaponVerticalOffset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANS_UpdateWeaponVerticalOffset_C*>(UANS_UpdateWeaponVerticalOffset_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ANS_UpdateWeaponVerticalOffset.ANS_UpdateWeaponVerticalOffset_C.Received_NotifyTick
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              FrameDeltaTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UANS_UpdateWeaponVerticalOffset_C::Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, struct FAnimNotifyEventReference& EventReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ANS_UpdateWeaponVerticalOffset_C", "Received_NotifyTick");

	Params::UANS_UpdateWeaponVerticalOffset_C_Received_NotifyTick_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.FrameDeltaTime = FrameDeltaTime;
	Parms.EventReference = EventReference;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


