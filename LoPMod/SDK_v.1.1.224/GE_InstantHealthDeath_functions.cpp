#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_InstantHealthDeath.GE_InstantHealthDeath_C
// (None)

class UClass* UGE_InstantHealthDeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_InstantHealthDeath_C");

	return Clss;
}


// GE_InstantHealthDeath_C GE_InstantHealthDeath.Default__GE_InstantHealthDeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_InstantHealthDeath_C* UGE_InstantHealthDeath_C::GetDefaultObj()
{
	static class UGE_InstantHealthDeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_InstantHealthDeath_C*>(UGE_InstantHealthDeath_C::StaticClass()->DefaultObject);

	return Default;
}

}


