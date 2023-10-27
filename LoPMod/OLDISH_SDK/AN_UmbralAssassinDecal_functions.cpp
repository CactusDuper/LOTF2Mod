#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_UmbralAssassinDecal.AN_UmbralAssassinDecal_C
// (None)

class UClass* UAN_UmbralAssassinDecal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_UmbralAssassinDecal_C");

	return Clss;
}


// AN_UmbralAssassinDecal_C AN_UmbralAssassinDecal.Default__AN_UmbralAssassinDecal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_UmbralAssassinDecal_C* UAN_UmbralAssassinDecal_C::GetDefaultObj()
{
	static class UAN_UmbralAssassinDecal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_UmbralAssassinDecal_C*>(UAN_UmbralAssassinDecal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AN_UmbralAssassinDecal.AN_UmbralAssassinDecal_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_FOE_UmbralAssassin_C*    K2Node_DynamicCast_AsBP_FOE_Umbral_Assassin                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAN_UmbralAssassinDecal_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_FOE_UmbralAssassin_C* K2Node_DynamicCast_AsBP_FOE_Umbral_Assassin, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AN_UmbralAssassinDecal_C", "Received_Notify");

	Params::UAN_UmbralAssassinDecal_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_FOE_Umbral_Assassin = K2Node_DynamicCast_AsBP_FOE_Umbral_Assassin;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


