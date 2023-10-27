#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_Enemy_CorruptedPilgrim_AI.DA_Enemy_CorruptedPilgrim_AI_C
// (None)

class UClass* UDA_Enemy_CorruptedPilgrim_AI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_Enemy_CorruptedPilgrim_AI_C");

	return Clss;
}


// DA_Enemy_CorruptedPilgrim_AI_C DA_Enemy_CorruptedPilgrim_AI.Default__DA_Enemy_CorruptedPilgrim_AI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_Enemy_CorruptedPilgrim_AI_C* UDA_Enemy_CorruptedPilgrim_AI_C::GetDefaultObj()
{
	static class UDA_Enemy_CorruptedPilgrim_AI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_Enemy_CorruptedPilgrim_AI_C*>(UDA_Enemy_CorruptedPilgrim_AI_C::StaticClass()->DefaultObject);

	return Default;
}

}


