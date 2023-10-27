#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DisableTargeting.GE_DisableTargeting_C
// (None)

class UClass* UGE_DisableTargeting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DisableTargeting_C");

	return Clss;
}


// GE_DisableTargeting_C GE_DisableTargeting.Default__GE_DisableTargeting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DisableTargeting_C* UGE_DisableTargeting_C::GetDefaultObj()
{
	static class UGE_DisableTargeting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DisableTargeting_C*>(UGE_DisableTargeting_C::StaticClass()->DefaultObject);

	return Default;
}

}


