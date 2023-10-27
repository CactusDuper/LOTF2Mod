#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Stat_Decrease_Style.Stat_Decrease_Style_C
// (None)

class UClass* UStat_Decrease_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Stat_Decrease_Style_C");

	return Clss;
}


// Stat_Decrease_Style_C Stat_Decrease_Style.Default__Stat_Decrease_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStat_Decrease_Style_C* UStat_Decrease_Style_C::GetDefaultObj()
{
	static class UStat_Decrease_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStat_Decrease_Style_C*>(UStat_Decrease_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


