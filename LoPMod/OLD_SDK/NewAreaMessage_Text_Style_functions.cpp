#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NewAreaMessage_Text_Style.NewAreaMessage_Text_Style_C
// (None)

class UClass* UNewAreaMessage_Text_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewAreaMessage_Text_Style_C");

	return Clss;
}


// NewAreaMessage_Text_Style_C NewAreaMessage_Text_Style.Default__NewAreaMessage_Text_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNewAreaMessage_Text_Style_C* UNewAreaMessage_Text_Style_C::GetDefaultObj()
{
	static class UNewAreaMessage_Text_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNewAreaMessage_Text_Style_C*>(UNewAreaMessage_Text_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


