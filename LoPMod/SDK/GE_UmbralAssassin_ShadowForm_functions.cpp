#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_UmbralAssassin_ShadowForm.GE_UmbralAssassin_ShadowForm_C
// (None)

class UClass* UGE_UmbralAssassin_ShadowForm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_UmbralAssassin_ShadowForm_C");

	return Clss;
}


// GE_UmbralAssassin_ShadowForm_C GE_UmbralAssassin_ShadowForm.Default__GE_UmbralAssassin_ShadowForm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_UmbralAssassin_ShadowForm_C* UGE_UmbralAssassin_ShadowForm_C::GetDefaultObj()
{
	static class UGE_UmbralAssassin_ShadowForm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_UmbralAssassin_ShadowForm_C*>(UGE_UmbralAssassin_ShadowForm_C::StaticClass()->DefaultObject);

	return Default;
}

}


