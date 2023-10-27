#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PickupFactory_BP.PickupFactory_BP_C
// (None)

class UClass* UPickupFactory_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PickupFactory_BP_C");

	return Clss;
}


// PickupFactory_BP_C PickupFactory_BP.Default__PickupFactory_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPickupFactory_BP_C* UPickupFactory_BP_C::GetDefaultObj()
{
	static class UPickupFactory_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPickupFactory_BP_C*>(UPickupFactory_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


