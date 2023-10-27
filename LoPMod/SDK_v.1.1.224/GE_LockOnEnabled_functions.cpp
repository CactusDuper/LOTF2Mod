#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_LockOnEnabled.GE_LockOnEnabled_C
// (None)

class UClass* UGE_LockOnEnabled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_LockOnEnabled_C");

	return Clss;
}


// GE_LockOnEnabled_C GE_LockOnEnabled.Default__GE_LockOnEnabled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_LockOnEnabled_C* UGE_LockOnEnabled_C::GetDefaultObj()
{
	static class UGE_LockOnEnabled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_LockOnEnabled_C*>(UGE_LockOnEnabled_C::StaticClass()->DefaultObject);

	return Default;
}

}


