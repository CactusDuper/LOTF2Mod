#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimNotify_AKAnathemaEvent_HitMaterials_NPC.AnimNotify_AKAnathemaEvent_HitMaterials_NPC_C
// (None)

class UClass* UAnimNotify_AKAnathemaEvent_HitMaterials_NPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_AKAnathemaEvent_HitMaterials_NPC_C");

	return Clss;
}


// AnimNotify_AKAnathemaEvent_HitMaterials_NPC_C AnimNotify_AKAnathemaEvent_HitMaterials_NPC.Default__AnimNotify_AKAnathemaEvent_HitMaterials_NPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimNotify_AKAnathemaEvent_HitMaterials_NPC_C* UAnimNotify_AKAnathemaEvent_HitMaterials_NPC_C::GetDefaultObj()
{
	static class UAnimNotify_AKAnathemaEvent_HitMaterials_NPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_AKAnathemaEvent_HitMaterials_NPC_C*>(UAnimNotify_AKAnathemaEvent_HitMaterials_NPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimNotify_AKAnathemaEvent_HitMaterials_NPC.AnimNotify_AKAnathemaEvent_HitMaterials_NPC_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAnimNotify_AKAnathemaEvent_HitMaterials_NPC_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotify_AKAnathemaEvent_HitMaterials_NPC_C", "Received_Notify");

	Params::UAnimNotify_AKAnathemaEvent_HitMaterials_NPC_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


