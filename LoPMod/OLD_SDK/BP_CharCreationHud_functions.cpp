#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CharCreationHud.BP_CharCreationHud_C
// (Actor)

class UClass* ABP_CharCreationHud_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CharCreationHud_C");

	return Clss;
}


// BP_CharCreationHud_C BP_CharCreationHud.Default__BP_CharCreationHud_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CharCreationHud_C* ABP_CharCreationHud_C::GetDefaultObj()
{
	static class ABP_CharCreationHud_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CharCreationHud_C*>(ABP_CharCreationHud_C::StaticClass()->DefaultObject);

	return Default;
}

}


