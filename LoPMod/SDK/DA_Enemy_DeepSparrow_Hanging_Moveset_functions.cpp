#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_Enemy_DeepSparrow_Hanging_Moveset.DA_Enemy_DeepSparrow_Hanging_Moveset_C
// (None)

class UClass* UDA_Enemy_DeepSparrow_Hanging_Moveset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_Enemy_DeepSparrow_Hanging_Moveset_C");

	return Clss;
}


// DA_Enemy_DeepSparrow_Hanging_Moveset_C DA_Enemy_DeepSparrow_Hanging_Moveset.Default__DA_Enemy_DeepSparrow_Hanging_Moveset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_Enemy_DeepSparrow_Hanging_Moveset_C* UDA_Enemy_DeepSparrow_Hanging_Moveset_C::GetDefaultObj()
{
	static class UDA_Enemy_DeepSparrow_Hanging_Moveset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_Enemy_DeepSparrow_Hanging_Moveset_C*>(UDA_Enemy_DeepSparrow_Hanging_Moveset_C::StaticClass()->DefaultObject);

	return Default;
}

}


