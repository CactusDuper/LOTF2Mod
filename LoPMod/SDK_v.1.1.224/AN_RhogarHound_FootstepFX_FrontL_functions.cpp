#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_RhogarHound_FootstepFX_FrontL.AN_RhogarHound_FootstepFX_FrontL_C
// (None)

class UClass* UAN_RhogarHound_FootstepFX_FrontL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_RhogarHound_FootstepFX_FrontL_C");

	return Clss;
}


// AN_RhogarHound_FootstepFX_FrontL_C AN_RhogarHound_FootstepFX_FrontL.Default__AN_RhogarHound_FootstepFX_FrontL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_RhogarHound_FootstepFX_FrontL_C* UAN_RhogarHound_FootstepFX_FrontL_C::GetDefaultObj()
{
	static class UAN_RhogarHound_FootstepFX_FrontL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_RhogarHound_FootstepFX_FrontL_C*>(UAN_RhogarHound_FootstepFX_FrontL_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AN_RhogarHound_FootstepFX_FrontL.AN_RhogarHound_FootstepFX_FrontL_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWithEditor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAN_RhogarHound_FootstepFX_FrontL_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, bool CallFunc_IsWithEditor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_RhogarHound_FootstepFX_FrontL_C", "Received_Notify");

	Params::UAN_RhogarHound_FootstepFX_FrontL_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.CallFunc_IsWithEditor_ReturnValue = CallFunc_IsWithEditor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


