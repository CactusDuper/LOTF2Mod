#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass White_Text_18_Shadow_Style.White_Text_18_Shadow_Style_C
// (None)

class UClass* UWhite_Text_18_Shadow_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("White_Text_18_Shadow_Style_C");

	return Clss;
}


// White_Text_18_Shadow_Style_C White_Text_18_Shadow_Style.Default__White_Text_18_Shadow_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWhite_Text_18_Shadow_Style_C* UWhite_Text_18_Shadow_Style_C::GetDefaultObj()
{
	static class UWhite_Text_18_Shadow_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWhite_Text_18_Shadow_Style_C*>(UWhite_Text_18_Shadow_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


