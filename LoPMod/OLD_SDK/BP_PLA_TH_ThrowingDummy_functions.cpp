#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PLA_TH_ThrowingDummy.BP_PLA_TH_ThrowingDummy_C
// (Actor)

class UClass* ABP_PLA_TH_ThrowingDummy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PLA_TH_ThrowingDummy_C");

	return Clss;
}


// BP_PLA_TH_ThrowingDummy_C BP_PLA_TH_ThrowingDummy.Default__BP_PLA_TH_ThrowingDummy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PLA_TH_ThrowingDummy_C* ABP_PLA_TH_ThrowingDummy_C::GetDefaultObj()
{
	static class ABP_PLA_TH_ThrowingDummy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PLA_TH_ThrowingDummy_C*>(ABP_PLA_TH_ThrowingDummy_C::StaticClass()->DefaultObject);

	return Default;
}

}


