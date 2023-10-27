#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_AI_AlertOthers_OnEvent.GA_AI_AlertOthers_OnEvent_C
// (None)

class UClass* UGA_AI_AlertOthers_OnEvent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_AI_AlertOthers_OnEvent_C");

	return Clss;
}


// GA_AI_AlertOthers_OnEvent_C GA_AI_AlertOthers_OnEvent.Default__GA_AI_AlertOthers_OnEvent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_AI_AlertOthers_OnEvent_C* UGA_AI_AlertOthers_OnEvent_C::GetDefaultObj()
{
	static class UGA_AI_AlertOthers_OnEvent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_AI_AlertOthers_OnEvent_C*>(UGA_AI_AlertOthers_OnEvent_C::StaticClass()->DefaultObject);

	return Default;
}

}


