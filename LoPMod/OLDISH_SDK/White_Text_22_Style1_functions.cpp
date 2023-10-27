#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass White_Text_22_Style1.White_Text_22_Style1_C
// (None)

class UClass* UWhite_Text_22_Style1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("White_Text_22_Style1_C");

	return Clss;
}


// White_Text_22_Style1_C White_Text_22_Style1.Default__White_Text_22_Style1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWhite_Text_22_Style1_C* UWhite_Text_22_Style1_C::GetDefaultObj()
{
	static class UWhite_Text_22_Style1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWhite_Text_22_Style1_C*>(UWhite_Text_22_Style1_C::StaticClass()->DefaultObject);

	return Default;
}

}


