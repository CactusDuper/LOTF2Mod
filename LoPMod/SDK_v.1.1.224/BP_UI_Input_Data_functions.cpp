#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UI_Input_Data.BP_UI_Input_Data_C
// (None)

class UClass* UBP_UI_Input_Data_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UI_Input_Data_C");

	return Clss;
}


// BP_UI_Input_Data_C BP_UI_Input_Data.Default__BP_UI_Input_Data_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UI_Input_Data_C* UBP_UI_Input_Data_C::GetDefaultObj()
{
	static class UBP_UI_Input_Data_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UI_Input_Data_C*>(UBP_UI_Input_Data_C::StaticClass()->DefaultObject);

	return Default;
}

}


