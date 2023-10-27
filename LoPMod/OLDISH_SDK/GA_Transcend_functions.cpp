#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Transcend.GA_Transcend_C
// (None)

class UClass* UGA_Transcend_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Transcend_C");

	return Clss;
}


// GA_Transcend_C GA_Transcend.Default__GA_Transcend_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Transcend_C* UGA_Transcend_C::GetDefaultObj()
{
	static class UGA_Transcend_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Transcend_C*>(UGA_Transcend_C::StaticClass()->DefaultObject);

	return Default;
}

}


