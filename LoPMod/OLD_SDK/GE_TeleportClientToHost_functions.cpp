#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TeleportClientToHost.GE_TeleportClientToHost_C
// (None)

class UClass* UGE_TeleportClientToHost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TeleportClientToHost_C");

	return Clss;
}


// GE_TeleportClientToHost_C GE_TeleportClientToHost.Default__GE_TeleportClientToHost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TeleportClientToHost_C* UGE_TeleportClientToHost_C::GetDefaultObj()
{
	static class UGE_TeleportClientToHost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TeleportClientToHost_C*>(UGE_TeleportClientToHost_C::StaticClass()->DefaultObject);

	return Default;
}

}


