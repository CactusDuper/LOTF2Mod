#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Stat_Increase_Style.Stat_Increase_Style_C
// (None)

class UClass* UStat_Increase_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Stat_Increase_Style_C");

	return Clss;
}


// Stat_Increase_Style_C Stat_Increase_Style.Default__Stat_Increase_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStat_Increase_Style_C* UStat_Increase_Style_C::GetDefaultObj()
{
	static class UStat_Increase_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStat_Increase_Style_C*>(UStat_Increase_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


