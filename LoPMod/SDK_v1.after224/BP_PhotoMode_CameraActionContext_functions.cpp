#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PhotoMode_CameraActionContext.BP_PhotoMode_CameraActionContext_C
// (None)

class UClass* UBP_PhotoMode_CameraActionContext_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PhotoMode_CameraActionContext_C");

	return Clss;
}


// BP_PhotoMode_CameraActionContext_C BP_PhotoMode_CameraActionContext.Default__BP_PhotoMode_CameraActionContext_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PhotoMode_CameraActionContext_C* UBP_PhotoMode_CameraActionContext_C::GetDefaultObj()
{
	static class UBP_PhotoMode_CameraActionContext_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PhotoMode_CameraActionContext_C*>(UBP_PhotoMode_CameraActionContext_C::StaticClass()->DefaultObject);

	return Default;
}

}


