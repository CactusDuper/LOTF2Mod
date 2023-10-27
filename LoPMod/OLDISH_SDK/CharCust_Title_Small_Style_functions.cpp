#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CharCust_Title_Small_Style.CharCust_Title_Small_Style_C
// (None)

class UClass* UCharCust_Title_Small_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharCust_Title_Small_Style_C");

	return Clss;
}


// CharCust_Title_Small_Style_C CharCust_Title_Small_Style.Default__CharCust_Title_Small_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharCust_Title_Small_Style_C* UCharCust_Title_Small_Style_C::GetDefaultObj()
{
	static class UCharCust_Title_Small_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharCust_Title_Small_Style_C*>(UCharCust_Title_Small_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


