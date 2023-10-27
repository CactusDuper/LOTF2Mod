#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_Enemy_CorruptedPilgrim_MovesetOverride.DA_Enemy_CorruptedPilgrim_MovesetOverride_C
// (None)

class UClass* UDA_Enemy_CorruptedPilgrim_MovesetOverride_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_Enemy_CorruptedPilgrim_MovesetOverride_C");

	return Clss;
}


// DA_Enemy_CorruptedPilgrim_MovesetOverride_C DA_Enemy_CorruptedPilgrim_MovesetOverride.Default__DA_Enemy_CorruptedPilgrim_MovesetOverride_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_Enemy_CorruptedPilgrim_MovesetOverride_C* UDA_Enemy_CorruptedPilgrim_MovesetOverride_C::GetDefaultObj()
{
	static class UDA_Enemy_CorruptedPilgrim_MovesetOverride_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_Enemy_CorruptedPilgrim_MovesetOverride_C*>(UDA_Enemy_CorruptedPilgrim_MovesetOverride_C::StaticClass()->DefaultObject);

	return Default;
}

}


