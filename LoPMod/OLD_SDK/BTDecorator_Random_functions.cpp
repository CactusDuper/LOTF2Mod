#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTDecorator_Random.BTDecorator_Random_C
// (None)

class UClass* UBTDecorator_Random_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_Random_C");

	return Clss;
}


// BTDecorator_Random_C BTDecorator_Random.Default__BTDecorator_Random_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTDecorator_Random_C* UBTDecorator_Random_C::GetDefaultObj()
{
	static class UBTDecorator_Random_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_Random_C*>(UBTDecorator_Random_C::StaticClass()->DefaultObject);

	return Default;
}

}


