#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_LanternLightDropReincarnateTrigger.GE_LanternLightDropReincarnateTrigger_C
// (None)

class UClass* UGE_LanternLightDropReincarnateTrigger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_LanternLightDropReincarnateTrigger_C");

	return Clss;
}


// GE_LanternLightDropReincarnateTrigger_C GE_LanternLightDropReincarnateTrigger.Default__GE_LanternLightDropReincarnateTrigger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_LanternLightDropReincarnateTrigger_C* UGE_LanternLightDropReincarnateTrigger_C::GetDefaultObj()
{
	static class UGE_LanternLightDropReincarnateTrigger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_LanternLightDropReincarnateTrigger_C*>(UGE_LanternLightDropReincarnateTrigger_C::StaticClass()->DefaultObject);

	return Default;
}

}


