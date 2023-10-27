#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UI_Policy.BP_UI_Policy_C
// (None)

class UClass* UBP_UI_Policy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UI_Policy_C");

	return Clss;
}


// BP_UI_Policy_C BP_UI_Policy.Default__BP_UI_Policy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UI_Policy_C* UBP_UI_Policy_C::GetDefaultObj()
{
	static class UBP_UI_Policy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UI_Policy_C*>(UBP_UI_Policy_C::StaticClass()->DefaultObject);

	return Default;
}

}


