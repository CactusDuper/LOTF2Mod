#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_LanternSyphoningTarget_ExtractFromParasites.GA_LanternSyphoningTarget_ExtractFromParasites_C
// (None)

class UClass* UGA_LanternSyphoningTarget_ExtractFromParasites_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_LanternSyphoningTarget_ExtractFromParasites_C");

	return Clss;
}


// GA_LanternSyphoningTarget_ExtractFromParasites_C GA_LanternSyphoningTarget_ExtractFromParasites.Default__GA_LanternSyphoningTarget_ExtractFromParasites_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_LanternSyphoningTarget_ExtractFromParasites_C* UGA_LanternSyphoningTarget_ExtractFromParasites_C::GetDefaultObj()
{
	static class UGA_LanternSyphoningTarget_ExtractFromParasites_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_LanternSyphoningTarget_ExtractFromParasites_C*>(UGA_LanternSyphoningTarget_ExtractFromParasites_C::StaticClass()->DefaultObject);

	return Default;
}

}


