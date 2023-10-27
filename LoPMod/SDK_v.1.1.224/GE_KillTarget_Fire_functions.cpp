#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_KillTarget_Fire.GE_KillTarget_Fire_C
// (None)

class UClass* UGE_KillTarget_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_KillTarget_Fire_C");

	return Clss;
}


// GE_KillTarget_Fire_C GE_KillTarget_Fire.Default__GE_KillTarget_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_KillTarget_Fire_C* UGE_KillTarget_Fire_C::GetDefaultObj()
{
	static class UGE_KillTarget_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_KillTarget_Fire_C*>(UGE_KillTarget_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


