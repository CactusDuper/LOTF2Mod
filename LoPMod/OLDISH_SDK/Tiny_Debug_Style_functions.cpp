#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tiny_Debug_Style.Tiny_Debug_Style_C
// (None)

class UClass* UTiny_Debug_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tiny_Debug_Style_C");

	return Clss;
}


// Tiny_Debug_Style_C Tiny_Debug_Style.Default__Tiny_Debug_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTiny_Debug_Style_C* UTiny_Debug_Style_C::GetDefaultObj()
{
	static class UTiny_Debug_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTiny_Debug_Style_C*>(UTiny_Debug_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


