#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AnathemaNPCSpawner.BP_AnathemaNPCSpawner_C
// (Actor)

class UClass* ABP_AnathemaNPCSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AnathemaNPCSpawner_C");

	return Clss;
}


// BP_AnathemaNPCSpawner_C BP_AnathemaNPCSpawner.Default__BP_AnathemaNPCSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AnathemaNPCSpawner_C* ABP_AnathemaNPCSpawner_C::GetDefaultObj()
{
	static class ABP_AnathemaNPCSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AnathemaNPCSpawner_C*>(ABP_AnathemaNPCSpawner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AnathemaNPCSpawner.BP_AnathemaNPCSpawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AnathemaNPCSpawner_C::UserConstructionScript(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AnathemaNPCSpawner_C", "UserConstructionScript");

	Params::ABP_AnathemaNPCSpawner_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


