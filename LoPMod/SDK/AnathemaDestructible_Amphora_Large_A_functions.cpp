#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnathemaDestructible_Amphora_Large_A.AnathemaDestructible_Amphora_Large_A_C
// (Actor)

class UClass* AAnathemaDestructible_Amphora_Large_A_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnathemaDestructible_Amphora_Large_A_C");

	return Clss;
}


// AnathemaDestructible_Amphora_Large_A_C AnathemaDestructible_Amphora_Large_A.Default__AnathemaDestructible_Amphora_Large_A_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnathemaDestructible_Amphora_Large_A_C* AAnathemaDestructible_Amphora_Large_A_C::GetDefaultObj()
{
	static class AAnathemaDestructible_Amphora_Large_A_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnathemaDestructible_Amphora_Large_A_C*>(AAnathemaDestructible_Amphora_Large_A_C::StaticClass()->DefaultObject);

	return Default;
}

}


