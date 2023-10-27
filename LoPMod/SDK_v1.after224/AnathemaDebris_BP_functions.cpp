#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnathemaDebris_BP.AnathemaDebris_BP_C
// (Actor)

class UClass* AAnathemaDebris_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnathemaDebris_BP_C");

	return Clss;
}


// AnathemaDebris_BP_C AnathemaDebris_BP.Default__AnathemaDebris_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnathemaDebris_BP_C* AAnathemaDebris_BP_C::GetDefaultObj()
{
	static class AAnathemaDebris_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnathemaDebris_BP_C*>(AAnathemaDebris_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


