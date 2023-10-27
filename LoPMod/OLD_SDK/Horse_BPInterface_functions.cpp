#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Horse_BPInterface.Horse_BPInterface_C
// (None)

class UClass* IHorse_BPInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Horse_BPInterface_C");

	return Clss;
}


// Horse_BPInterface_C Horse_BPInterface.Default__Horse_BPInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IHorse_BPInterface_C* IHorse_BPInterface_C::GetDefaultObj()
{
	static class IHorse_BPInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IHorse_BPInterface_C*>(IHorse_BPInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Horse_BPInterface.Horse_BPInterface_C.GetRider
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      Rider                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IHorse_BPInterface_C::GetRider(class AActor** Rider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Horse_BPInterface_C", "GetRider");

	Params::IHorse_BPInterface_C_GetRider_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Rider != nullptr)
		*Rider = Parms.Rider;

}


// Function Horse_BPInterface.Horse_BPInterface_C.SetRider
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Rider                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IHorse_BPInterface_C::SetRider(class AActor* Rider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Horse_BPInterface_C", "SetRider");

	Params::IHorse_BPInterface_C_SetRider_Params Parms{};

	Parms.Rider = Rider;

	UObject::ProcessEvent(Func, &Parms);

}

}


