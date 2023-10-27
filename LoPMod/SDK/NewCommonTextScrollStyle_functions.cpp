#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NewCommonTextScrollStyle.NewCommonTextScrollStyle_C
// (None)

class UClass* UNewCommonTextScrollStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewCommonTextScrollStyle_C");

	return Clss;
}


// NewCommonTextScrollStyle_C NewCommonTextScrollStyle.Default__NewCommonTextScrollStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNewCommonTextScrollStyle_C* UNewCommonTextScrollStyle_C::GetDefaultObj()
{
	static class UNewCommonTextScrollStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNewCommonTextScrollStyle_C*>(UNewCommonTextScrollStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


