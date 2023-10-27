#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Decorator_ACanReactWithSoulFlayBlock.Decorator_ACanReactWithSoulFlayBlock_C
// (None)

class UClass* UDecorator_ACanReactWithSoulFlayBlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Decorator_ACanReactWithSoulFlayBlock_C");

	return Clss;
}


// Decorator_ACanReactWithSoulFlayBlock_C Decorator_ACanReactWithSoulFlayBlock.Default__Decorator_ACanReactWithSoulFlayBlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDecorator_ACanReactWithSoulFlayBlock_C* UDecorator_ACanReactWithSoulFlayBlock_C::GetDefaultObj()
{
	static class UDecorator_ACanReactWithSoulFlayBlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDecorator_ACanReactWithSoulFlayBlock_C*>(UDecorator_ACanReactWithSoulFlayBlock_C::StaticClass()->DefaultObject);

	return Default;
}

}


