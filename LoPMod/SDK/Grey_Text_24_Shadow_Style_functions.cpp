#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Grey_Text_24_Shadow_Style.Grey_Text_24_Shadow_Style_C
// (None)

class UClass* UGrey_Text_24_Shadow_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grey_Text_24_Shadow_Style_C");

	return Clss;
}


// Grey_Text_24_Shadow_Style_C Grey_Text_24_Shadow_Style.Default__Grey_Text_24_Shadow_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGrey_Text_24_Shadow_Style_C* UGrey_Text_24_Shadow_Style_C::GetDefaultObj()
{
	static class UGrey_Text_24_Shadow_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGrey_Text_24_Shadow_Style_C*>(UGrey_Text_24_Shadow_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


