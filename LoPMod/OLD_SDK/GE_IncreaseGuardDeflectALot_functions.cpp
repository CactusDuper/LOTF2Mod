#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_IncreaseGuardDeflectALot.GE_IncreaseGuardDeflectALot_C
// (None)

class UClass* UGE_IncreaseGuardDeflectALot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_IncreaseGuardDeflectALot_C");

	return Clss;
}


// GE_IncreaseGuardDeflectALot_C GE_IncreaseGuardDeflectALot.Default__GE_IncreaseGuardDeflectALot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_IncreaseGuardDeflectALot_C* UGE_IncreaseGuardDeflectALot_C::GetDefaultObj()
{
	static class UGE_IncreaseGuardDeflectALot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_IncreaseGuardDeflectALot_C*>(UGE_IncreaseGuardDeflectALot_C::StaticClass()->DefaultObject);

	return Default;
}

}


