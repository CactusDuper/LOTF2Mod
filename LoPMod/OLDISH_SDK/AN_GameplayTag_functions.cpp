#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_GameplayTag.AN_GameplayTag_C
// (None)

class UClass* UAN_GameplayTag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_GameplayTag_C");

	return Clss;
}


// AN_GameplayTag_C AN_GameplayTag.Default__AN_GameplayTag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_GameplayTag_C* UAN_GameplayTag_C::GetDefaultObj()
{
	static class UAN_GameplayTag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_GameplayTag_C*>(UAN_GameplayTag_C::StaticClass()->DefaultObject);

	return Default;
}

}


