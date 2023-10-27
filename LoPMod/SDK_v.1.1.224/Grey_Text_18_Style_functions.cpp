#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Grey_Text_18_Style.Grey_Text_18_Style_C
// (None)

class UClass* UGrey_Text_18_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grey_Text_18_Style_C");

	return Clss;
}


// Grey_Text_18_Style_C Grey_Text_18_Style.Default__Grey_Text_18_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGrey_Text_18_Style_C* UGrey_Text_18_Style_C::GetDefaultObj()
{
	static class UGrey_Text_18_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGrey_Text_18_Style_C*>(UGrey_Text_18_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


