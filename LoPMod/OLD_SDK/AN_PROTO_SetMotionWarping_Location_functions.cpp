#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_PROTO_SetMotionWarping_Location.AN_PROTO_SetMotionWarping_Location_C
// (None)

class UClass* UAN_PROTO_SetMotionWarping_Location_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_PROTO_SetMotionWarping_Location_C");

	return Clss;
}


// AN_PROTO_SetMotionWarping_Location_C AN_PROTO_SetMotionWarping_Location.Default__AN_PROTO_SetMotionWarping_Location_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_PROTO_SetMotionWarping_Location_C* UAN_PROTO_SetMotionWarping_Location_C::GetDefaultObj()
{
	static class UAN_PROTO_SetMotionWarping_Location_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_PROTO_SetMotionWarping_Location_C*>(UAN_PROTO_SetMotionWarping_Location_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AN_PROTO_SetMotionWarping_Location.AN_PROTO_SetMotionWarping_Location_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetMotionWarping_Location_SetWarpTarget                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAN_PROTO_SetMotionWarping_Location_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetMotionWarping_Location_SetWarpTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_PROTO_SetMotionWarping_Location_C", "Received_Notify");

	Params::UAN_PROTO_SetMotionWarping_Location_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetMotionWarping_Location_SetWarpTarget = CallFunc_SetMotionWarping_Location_SetWarpTarget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


