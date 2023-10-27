#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TotalImmunity.GE_TotalImmunity_C
// (None)

class UClass* UGE_TotalImmunity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TotalImmunity_C");

	return Clss;
}


// GE_TotalImmunity_C GE_TotalImmunity.Default__GE_TotalImmunity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TotalImmunity_C* UGE_TotalImmunity_C::GetDefaultObj()
{
	static class UGE_TotalImmunity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TotalImmunity_C*>(UGE_TotalImmunity_C::StaticClass()->DefaultObject);

	return Default;
}

}


