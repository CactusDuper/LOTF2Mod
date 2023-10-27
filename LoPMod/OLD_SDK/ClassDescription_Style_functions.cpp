#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ClassDescription_Style.ClassDescription_Style_C
// (None)

class UClass* UClassDescription_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClassDescription_Style_C");

	return Clss;
}


// ClassDescription_Style_C ClassDescription_Style.Default__ClassDescription_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UClassDescription_Style_C* UClassDescription_Style_C::GetDefaultObj()
{
	static class UClassDescription_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UClassDescription_Style_C*>(UClassDescription_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


