#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SetVigorAbsorbMultiplier.GE_SetVigorAbsorbMultiplier_C
// (None)

class UClass* UGE_SetVigorAbsorbMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SetVigorAbsorbMultiplier_C");

	return Clss;
}


// GE_SetVigorAbsorbMultiplier_C GE_SetVigorAbsorbMultiplier.Default__GE_SetVigorAbsorbMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SetVigorAbsorbMultiplier_C* UGE_SetVigorAbsorbMultiplier_C::GetDefaultObj()
{
	static class UGE_SetVigorAbsorbMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SetVigorAbsorbMultiplier_C*>(UGE_SetVigorAbsorbMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


