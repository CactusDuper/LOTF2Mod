#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Materialize.GE_Materialize_C
// (None)

class UClass* UGE_Materialize_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Materialize_C");

	return Clss;
}


// GE_Materialize_C GE_Materialize.Default__GE_Materialize_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Materialize_C* UGE_Materialize_C::GetDefaultObj()
{
	static class UGE_Materialize_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Materialize_C*>(UGE_Materialize_C::StaticClass()->DefaultObject);

	return Default;
}

}


