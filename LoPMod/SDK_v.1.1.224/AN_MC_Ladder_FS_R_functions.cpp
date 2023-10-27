#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_MC_Ladder_FS_R.AN_MC_Ladder_FS_R_C
// (None)

class UClass* UAN_MC_Ladder_FS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_MC_Ladder_FS_R_C");

	return Clss;
}


// AN_MC_Ladder_FS_R_C AN_MC_Ladder_FS_R.Default__AN_MC_Ladder_FS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_MC_Ladder_FS_R_C* UAN_MC_Ladder_FS_R_C::GetDefaultObj()
{
	static class UAN_MC_Ladder_FS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_MC_Ladder_FS_R_C*>(UAN_MC_Ladder_FS_R_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AN_MC_Ladder_FS_R.AN_MC_Ladder_FS_R_C.Received_Notify
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        NewLocalVar_0                                                    (Edit, BlueprintVisible)

bool UAN_MC_Ladder_FS_R_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class FText NewLocalVar_0)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_MC_Ladder_FS_R_C", "Received_Notify");

	Params::UAN_MC_Ladder_FS_R_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.NewLocalVar_0 = NewLocalVar_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


