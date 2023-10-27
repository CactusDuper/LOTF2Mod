#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DestroyedBadBlister_BP.DestroyedBadBlister_BP_C
// (Actor)

class UClass* ADestroyedBadBlister_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DestroyedBadBlister_BP_C");

	return Clss;
}


// DestroyedBadBlister_BP_C DestroyedBadBlister_BP.Default__DestroyedBadBlister_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADestroyedBadBlister_BP_C* ADestroyedBadBlister_BP_C::GetDefaultObj()
{
	static class ADestroyedBadBlister_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADestroyedBadBlister_BP_C*>(ADestroyedBadBlister_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


