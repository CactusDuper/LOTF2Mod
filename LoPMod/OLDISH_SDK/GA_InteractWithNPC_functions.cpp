#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_InteractWithNPC.GA_InteractWithNPC_C
// (None)

class UClass* UGA_InteractWithNPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_InteractWithNPC_C");

	return Clss;
}


// GA_InteractWithNPC_C GA_InteractWithNPC.Default__GA_InteractWithNPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_InteractWithNPC_C* UGA_InteractWithNPC_C::GetDefaultObj()
{
	static class UGA_InteractWithNPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_InteractWithNPC_C*>(UGA_InteractWithNPC_C::StaticClass()->DefaultObject);

	return Default;
}

}


