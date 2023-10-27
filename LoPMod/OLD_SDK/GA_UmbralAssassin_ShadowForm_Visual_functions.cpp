#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_UmbralAssassin_ShadowForm_Visual.GA_UmbralAssassin_ShadowForm_Visual_C
// (None)

class UClass* UGA_UmbralAssassin_ShadowForm_Visual_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_UmbralAssassin_ShadowForm_Visual_C");

	return Clss;
}


// GA_UmbralAssassin_ShadowForm_Visual_C GA_UmbralAssassin_ShadowForm_Visual.Default__GA_UmbralAssassin_ShadowForm_Visual_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_UmbralAssassin_ShadowForm_Visual_C* UGA_UmbralAssassin_ShadowForm_Visual_C::GetDefaultObj()
{
	static class UGA_UmbralAssassin_ShadowForm_Visual_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_UmbralAssassin_ShadowForm_Visual_C*>(UGA_UmbralAssassin_ShadowForm_Visual_C::StaticClass()->DefaultObject);

	return Default;
}

}


