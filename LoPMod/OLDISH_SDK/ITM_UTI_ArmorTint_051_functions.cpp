#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ITM_UTI_ArmorTint_051.ITM_UTI_ArmorTint_051_C
// (None)

class UClass* UITM_UTI_ArmorTint_051_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ITM_UTI_ArmorTint_051_C");

	return Clss;
}


// ITM_UTI_ArmorTint_051_C ITM_UTI_ArmorTint_051.Default__ITM_UTI_ArmorTint_051_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UITM_UTI_ArmorTint_051_C* UITM_UTI_ArmorTint_051_C::GetDefaultObj()
{
	static class UITM_UTI_ArmorTint_051_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UITM_UTI_ArmorTint_051_C*>(UITM_UTI_ArmorTint_051_C::StaticClass()->DefaultObject);

	return Default;
}

}


