#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_InhibitRevenge.GE_InhibitRevenge_C
// (None)

class UClass* UGE_InhibitRevenge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_InhibitRevenge_C");

	return Clss;
}


// GE_InhibitRevenge_C GE_InhibitRevenge.Default__GE_InhibitRevenge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_InhibitRevenge_C* UGE_InhibitRevenge_C::GetDefaultObj()
{
	static class UGE_InhibitRevenge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_InhibitRevenge_C*>(UGE_InhibitRevenge_C::StaticClass()->DefaultObject);

	return Default;
}

}


