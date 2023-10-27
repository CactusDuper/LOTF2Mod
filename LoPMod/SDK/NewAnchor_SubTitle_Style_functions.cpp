#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NewAnchor_SubTitle_Style.NewAnchor_SubTitle_Style_C
// (None)

class UClass* UNewAnchor_SubTitle_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewAnchor_SubTitle_Style_C");

	return Clss;
}


// NewAnchor_SubTitle_Style_C NewAnchor_SubTitle_Style.Default__NewAnchor_SubTitle_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNewAnchor_SubTitle_Style_C* UNewAnchor_SubTitle_Style_C::GetDefaultObj()
{
	static class UNewAnchor_SubTitle_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNewAnchor_SubTitle_Style_C*>(UNewAnchor_SubTitle_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


