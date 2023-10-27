#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTDecorator_CheckProvisionalHealth.BTDecorator_CheckProvisionalHealth_C
// (None)

class UClass* UBTDecorator_CheckProvisionalHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_CheckProvisionalHealth_C");

	return Clss;
}


// BTDecorator_CheckProvisionalHealth_C BTDecorator_CheckProvisionalHealth.Default__BTDecorator_CheckProvisionalHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTDecorator_CheckProvisionalHealth_C* UBTDecorator_CheckProvisionalHealth_C::GetDefaultObj()
{
	static class UBTDecorator_CheckProvisionalHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_CheckProvisionalHealth_C*>(UBTDecorator_CheckProvisionalHealth_C::StaticClass()->DefaultObject);

	return Default;
}

}


