#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WitherForbiddenArea_BP.WitherForbiddenArea_BP_C
// (Actor)

class UClass* AWitherForbiddenArea_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WitherForbiddenArea_BP_C");

	return Clss;
}


// WitherForbiddenArea_BP_C WitherForbiddenArea_BP.Default__WitherForbiddenArea_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWitherForbiddenArea_BP_C* AWitherForbiddenArea_BP_C::GetDefaultObj()
{
	static class AWitherForbiddenArea_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWitherForbiddenArea_BP_C*>(AWitherForbiddenArea_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


