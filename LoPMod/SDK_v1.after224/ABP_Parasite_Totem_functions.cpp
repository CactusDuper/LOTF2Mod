#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Parasite_Totem.ABP_Parasite_Totem_C
// (None)

class UClass* UABP_Parasite_Totem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Parasite_Totem_C");

	return Clss;
}


// ABP_Parasite_Totem_C ABP_Parasite_Totem.Default__ABP_Parasite_Totem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Parasite_Totem_C* UABP_Parasite_Totem_C::GetDefaultObj()
{
	static class UABP_Parasite_Totem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Parasite_Totem_C*>(UABP_Parasite_Totem_C::StaticClass()->DefaultObject);

	return Default;
}

}


