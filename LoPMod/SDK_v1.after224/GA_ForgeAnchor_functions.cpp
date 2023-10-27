#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ForgeAnchor.GA_ForgeAnchor_C
// (None)

class UClass* UGA_ForgeAnchor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ForgeAnchor_C");

	return Clss;
}


// GA_ForgeAnchor_C GA_ForgeAnchor.Default__GA_ForgeAnchor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ForgeAnchor_C* UGA_ForgeAnchor_C::GetDefaultObj()
{
	static class UGA_ForgeAnchor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ForgeAnchor_C*>(UGA_ForgeAnchor_C::StaticClass()->DefaultObject);

	return Default;
}

}


