#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SanguinarixBlockedPrecondition.SanguinarixBlockedPrecondition_C
// (None)

class UClass* USanguinarixBlockedPrecondition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SanguinarixBlockedPrecondition_C");

	return Clss;
}


// SanguinarixBlockedPrecondition_C SanguinarixBlockedPrecondition.Default__SanguinarixBlockedPrecondition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USanguinarixBlockedPrecondition_C* USanguinarixBlockedPrecondition_C::GetDefaultObj()
{
	static class USanguinarixBlockedPrecondition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USanguinarixBlockedPrecondition_C*>(USanguinarixBlockedPrecondition_C::StaticClass()->DefaultObject);

	return Default;
}

}


