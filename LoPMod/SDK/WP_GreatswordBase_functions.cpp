#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WP_GreatswordBase.WP_GreatswordBase_C
// (None)

class UClass* UWP_GreatswordBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WP_GreatswordBase_C");

	return Clss;
}


// WP_GreatswordBase_C WP_GreatswordBase.Default__WP_GreatswordBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWP_GreatswordBase_C* UWP_GreatswordBase_C::GetDefaultObj()
{
	static class UWP_GreatswordBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWP_GreatswordBase_C*>(UWP_GreatswordBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


