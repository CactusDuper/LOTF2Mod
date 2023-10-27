#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Big_Title_Style.Big_Title_Style_C
// (None)

class UClass* UBig_Title_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Big_Title_Style_C");

	return Clss;
}


// Big_Title_Style_C Big_Title_Style.Default__Big_Title_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBig_Title_Style_C* UBig_Title_Style_C::GetDefaultObj()
{
	static class UBig_Title_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBig_Title_Style_C*>(UBig_Title_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


