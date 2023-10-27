#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_DefaultCameraTransition.DA_DefaultCameraTransition_C
// (None)

class UClass* UDA_DefaultCameraTransition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_DefaultCameraTransition_C");

	return Clss;
}


// DA_DefaultCameraTransition_C DA_DefaultCameraTransition.Default__DA_DefaultCameraTransition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_DefaultCameraTransition_C* UDA_DefaultCameraTransition_C::GetDefaultObj()
{
	static class UDA_DefaultCameraTransition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_DefaultCameraTransition_C*>(UDA_DefaultCameraTransition_C::StaticClass()->DefaultObject);

	return Default;
}

}


