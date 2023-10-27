#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlackBGBorder_Style.BlackBGBorder_Style_C
// (None)

class UClass* UBlackBGBorder_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackBGBorder_Style_C");

	return Clss;
}


// BlackBGBorder_Style_C BlackBGBorder_Style.Default__BlackBGBorder_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBlackBGBorder_Style_C* UBlackBGBorder_Style_C::GetDefaultObj()
{
	static class UBlackBGBorder_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlackBGBorder_Style_C*>(UBlackBGBorder_Style_C::StaticClass()->DefaultObject);

	return Default;
}

}


