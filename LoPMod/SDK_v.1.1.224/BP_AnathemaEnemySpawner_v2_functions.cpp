#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AnathemaEnemySpawner_v2.BP_AnathemaEnemySpawner_v2_C
// (Actor)

class UClass* ABP_AnathemaEnemySpawner_v2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AnathemaEnemySpawner_v2_C");

	return Clss;
}


// BP_AnathemaEnemySpawner_v2_C BP_AnathemaEnemySpawner_v2.Default__BP_AnathemaEnemySpawner_v2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AnathemaEnemySpawner_v2_C* ABP_AnathemaEnemySpawner_v2_C::GetDefaultObj()
{
	static class ABP_AnathemaEnemySpawner_v2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AnathemaEnemySpawner_v2_C*>(ABP_AnathemaEnemySpawner_v2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AnathemaEnemySpawner_v2.BP_AnathemaEnemySpawner_v2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsEditor_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AnathemaEnemySpawner_v2_C::UserConstructionScript(bool CallFunc_IsEditor_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AnathemaEnemySpawner_v2_C", "UserConstructionScript");

	Params::ABP_AnathemaEnemySpawner_v2_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_IsEditor_ReturnValue = CallFunc_IsEditor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


