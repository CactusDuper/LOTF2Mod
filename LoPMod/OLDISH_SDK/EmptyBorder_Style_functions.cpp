#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmptyBorder_Style.EmptyBorder_Style_C
// (None)

class UClass* UEmptyBorder_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmptyBorder_Style_C");

	return Clss;
}


// EmptyBorder_Style_C EmptyBorder_Style.Default__EmptyBorder_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmptyBorder_Style_C* UEmptyBorder_Style_C::GetDefaultObj()
{
	static class UEmptyBorder_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmptyBorder_Style_C*>(UEmptyBorder_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


