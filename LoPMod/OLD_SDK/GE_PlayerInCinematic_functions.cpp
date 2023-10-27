#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PlayerInCinematic.GE_PlayerInCinematic_C
// (None)

class UClass* UGE_PlayerInCinematic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PlayerInCinematic_C");

	return Clss;
}


// GE_PlayerInCinematic_C GE_PlayerInCinematic.Default__GE_PlayerInCinematic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PlayerInCinematic_C* UGE_PlayerInCinematic_C::GetDefaultObj()
{
	static class UGE_PlayerInCinematic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PlayerInCinematic_C*>(UGE_PlayerInCinematic_C::StaticClass()->DefaultObject);

	return Default;
}

}


