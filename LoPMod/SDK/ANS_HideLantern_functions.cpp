#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ANS_HideLantern.ANS_HideLantern_C
// (None)

class UClass* UANS_HideLantern_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANS_HideLantern_C");

	return Clss;
}


// ANS_HideLantern_C ANS_HideLantern.Default__ANS_HideLantern_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANS_HideLantern_C* UANS_HideLantern_C::GetDefaultObj()
{
	static class UANS_HideLantern_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANS_HideLantern_C*>(UANS_HideLantern_C::StaticClass()->DefaultObject);

	return Default;
}

}


