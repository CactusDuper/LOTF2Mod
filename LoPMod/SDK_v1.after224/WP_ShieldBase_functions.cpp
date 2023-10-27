#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WP_ShieldBase.WP_ShieldBase_C
// (None)

class UClass* UWP_ShieldBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WP_ShieldBase_C");

	return Clss;
}


// WP_ShieldBase_C WP_ShieldBase.Default__WP_ShieldBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWP_ShieldBase_C* UWP_ShieldBase_C::GetDefaultObj()
{
	static class UWP_ShieldBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWP_ShieldBase_C*>(UWP_ShieldBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


