#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_BlockTargetingWhileAiming.GA_BlockTargetingWhileAiming_C
// (None)

class UClass* UGA_BlockTargetingWhileAiming_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_BlockTargetingWhileAiming_C");

	return Clss;
}


// GA_BlockTargetingWhileAiming_C GA_BlockTargetingWhileAiming.Default__GA_BlockTargetingWhileAiming_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_BlockTargetingWhileAiming_C* UGA_BlockTargetingWhileAiming_C::GetDefaultObj()
{
	static class UGA_BlockTargetingWhileAiming_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_BlockTargetingWhileAiming_C*>(UGA_BlockTargetingWhileAiming_C::StaticClass()->DefaultObject);

	return Default;
}

}


