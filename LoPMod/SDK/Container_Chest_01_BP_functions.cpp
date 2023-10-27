#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Container_Chest_01_BP.Container_Chest_01_BP_C
// (Actor)

class UClass* AContainer_Chest_01_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Container_Chest_01_BP_C");

	return Clss;
}


// Container_Chest_01_BP_C Container_Chest_01_BP.Default__Container_Chest_01_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AContainer_Chest_01_BP_C* AContainer_Chest_01_BP_C::GetDefaultObj()
{
	static class AContainer_Chest_01_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AContainer_Chest_01_BP_C*>(AContainer_Chest_01_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


