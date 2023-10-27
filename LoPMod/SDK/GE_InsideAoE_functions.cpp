#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_InsideAoE.GE_InsideAoE_C
// (None)

class UClass* UGE_InsideAoE_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_InsideAoE_C");

	return Clss;
}


// GE_InsideAoE_C GE_InsideAoE.Default__GE_InsideAoE_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_InsideAoE_C* UGE_InsideAoE_C::GetDefaultObj()
{
	static class UGE_InsideAoE_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_InsideAoE_C*>(UGE_InsideAoE_C::StaticClass()->DefaultObject);

	return Default;
}

}


