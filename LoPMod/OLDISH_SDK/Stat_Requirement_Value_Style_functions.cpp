#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Stat_Requirement_Value_Style.Stat_Requirement_Value_Style_C
// (None)

class UClass* UStat_Requirement_Value_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Stat_Requirement_Value_Style_C");

	return Clss;
}


// Stat_Requirement_Value_Style_C Stat_Requirement_Value_Style.Default__Stat_Requirement_Value_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStat_Requirement_Value_Style_C* UStat_Requirement_Value_Style_C::GetDefaultObj()
{
	static class UStat_Requirement_Value_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStat_Requirement_Value_Style_C*>(UStat_Requirement_Value_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


