#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Host.GE_Host_C
// (None)

class UClass* UGE_Host_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Host_C");

	return Clss;
}


// GE_Host_C GE_Host.Default__GE_Host_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Host_C* UGE_Host_C::GetDefaultObj()
{
	static class UGE_Host_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Host_C*>(UGE_Host_C::StaticClass()->DefaultObject);

	return Default;
}

}


