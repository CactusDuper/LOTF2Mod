#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_UmbralAssassin_ShadowForm_Visual.GE_UmbralAssassin_ShadowForm_Visual_C
// (None)

class UClass* UGE_UmbralAssassin_ShadowForm_Visual_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_UmbralAssassin_ShadowForm_Visual_C");

	return Clss;
}


// GE_UmbralAssassin_ShadowForm_Visual_C GE_UmbralAssassin_ShadowForm_Visual.Default__GE_UmbralAssassin_ShadowForm_Visual_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_UmbralAssassin_ShadowForm_Visual_C* UGE_UmbralAssassin_ShadowForm_Visual_C::GetDefaultObj()
{
	static class UGE_UmbralAssassin_ShadowForm_Visual_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_UmbralAssassin_ShadowForm_Visual_C*>(UGE_UmbralAssassin_ShadowForm_Visual_C::StaticClass()->DefaultObject);

	return Default;
}

}


