#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WBP_LOTF2HUD.WBP_LOTF2HUD_C
// (Actor)

class UClass* AWBP_LOTF2HUD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_LOTF2HUD_C");

	return Clss;
}


// WBP_LOTF2HUD_C WBP_LOTF2HUD.Default__WBP_LOTF2HUD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWBP_LOTF2HUD_C* AWBP_LOTF2HUD_C::GetDefaultObj()
{
	static class AWBP_LOTF2HUD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWBP_LOTF2HUD_C*>(AWBP_LOTF2HUD_C::StaticClass()->DefaultObject);

	return Default;
}

}


