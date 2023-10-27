#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DebugSpawnDirSeed.DebugSpawnDirSeed_C
// (None)

class UClass* UDebugSpawnDirSeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DebugSpawnDirSeed_C");

	return Clss;
}


// DebugSpawnDirSeed_C DebugSpawnDirSeed.Default__DebugSpawnDirSeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDebugSpawnDirSeed_C* UDebugSpawnDirSeed_C::GetDefaultObj()
{
	static class UDebugSpawnDirSeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDebugSpawnDirSeed_C*>(UDebugSpawnDirSeed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DebugSpawnDirSeed.DebugSpawnDirSeed_C.Get_TextBlock_Seed_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UDebugSpawnDirSeed_C::Get_TextBlock_Seed_Text_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DebugSpawnDirSeed_C", "Get_TextBlock_Seed_Text_0");

	Params::UDebugSpawnDirSeed_C_Get_TextBlock_Seed_Text_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


