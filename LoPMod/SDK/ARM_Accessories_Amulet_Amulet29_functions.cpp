#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ARM_Accessories_Amulet_Amulet29.ARM_Accessories_Amulet_Amulet29_C
// (None)

class UClass* UARM_Accessories_Amulet_Amulet29_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARM_Accessories_Amulet_Amulet29_C");

	return Clss;
}


// ARM_Accessories_Amulet_Amulet29_C ARM_Accessories_Amulet_Amulet29.Default__ARM_Accessories_Amulet_Amulet29_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UARM_Accessories_Amulet_Amulet29_C* UARM_Accessories_Amulet_Amulet29_C::GetDefaultObj()
{
	static class UARM_Accessories_Amulet_Amulet29_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UARM_Accessories_Amulet_Amulet29_C*>(UARM_Accessories_Amulet_Amulet29_C::StaticClass()->DefaultObject);

	return Default;
}

}


