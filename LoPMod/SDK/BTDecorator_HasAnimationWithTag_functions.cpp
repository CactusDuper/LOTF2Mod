#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTDecorator_HasAnimationWithTag.BTDecorator_HasAnimationWithTag_C
// (None)

class UClass* UBTDecorator_HasAnimationWithTag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_HasAnimationWithTag_C");

	return Clss;
}


// BTDecorator_HasAnimationWithTag_C BTDecorator_HasAnimationWithTag.Default__BTDecorator_HasAnimationWithTag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTDecorator_HasAnimationWithTag_C* UBTDecorator_HasAnimationWithTag_C::GetDefaultObj()
{
	static class UBTDecorator_HasAnimationWithTag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_HasAnimationWithTag_C*>(UBTDecorator_HasAnimationWithTag_C::StaticClass()->DefaultObject);

	return Default;
}

}


