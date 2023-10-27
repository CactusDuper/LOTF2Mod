#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Anchor_Name_Style.Anchor_Name_Style_C
// (None)

class UClass* UAnchor_Name_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Anchor_Name_Style_C");

	return Clss;
}


// Anchor_Name_Style_C Anchor_Name_Style.Default__Anchor_Name_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnchor_Name_Style_C* UAnchor_Name_Style_C::GetDefaultObj()
{
	static class UAnchor_Name_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnchor_Name_Style_C*>(UAnchor_Name_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


