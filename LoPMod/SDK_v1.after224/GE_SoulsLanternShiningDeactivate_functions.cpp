#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SoulsLanternShiningDeactivate.GE_SoulsLanternShiningDeactivate_C
// (None)

class UClass* UGE_SoulsLanternShiningDeactivate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SoulsLanternShiningDeactivate_C");

	return Clss;
}


// GE_SoulsLanternShiningDeactivate_C GE_SoulsLanternShiningDeactivate.Default__GE_SoulsLanternShiningDeactivate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SoulsLanternShiningDeactivate_C* UGE_SoulsLanternShiningDeactivate_C::GetDefaultObj()
{
	static class UGE_SoulsLanternShiningDeactivate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SoulsLanternShiningDeactivate_C*>(UGE_SoulsLanternShiningDeactivate_C::StaticClass()->DefaultObject);

	return Default;
}

}


