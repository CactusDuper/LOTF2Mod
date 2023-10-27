#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_DeepSparrow_FS_L.AN_DeepSparrow_FS_L_C
// (None)

class UClass* UAN_DeepSparrow_FS_L_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_DeepSparrow_FS_L_C");

	return Clss;
}


// AN_DeepSparrow_FS_L_C AN_DeepSparrow_FS_L.Default__AN_DeepSparrow_FS_L_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_DeepSparrow_FS_L_C* UAN_DeepSparrow_FS_L_C::GetDefaultObj()
{
	static class UAN_DeepSparrow_FS_L_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_DeepSparrow_FS_L_C*>(UAN_DeepSparrow_FS_L_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AN_DeepSparrow_FS_L.AN_DeepSparrow_FS_L_C.Received_Notify
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        NewLocalVar_0                                                    (Edit, BlueprintVisible)

bool UAN_DeepSparrow_FS_L_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class FText NewLocalVar_0)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_DeepSparrow_FS_L_C", "Received_Notify");

	Params::UAN_DeepSparrow_FS_L_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.NewLocalVar_0 = NewLocalVar_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


