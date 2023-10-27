#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ITM_UTI_ArmorTint_050.ITM_UTI_ArmorTint_050_C
// (None)

class UClass* UITM_UTI_ArmorTint_050_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ITM_UTI_ArmorTint_050_C");

	return Clss;
}


// ITM_UTI_ArmorTint_050_C ITM_UTI_ArmorTint_050.Default__ITM_UTI_ArmorTint_050_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UITM_UTI_ArmorTint_050_C* UITM_UTI_ArmorTint_050_C::GetDefaultObj()
{
	static class UITM_UTI_ArmorTint_050_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UITM_UTI_ArmorTint_050_C*>(UITM_UTI_ArmorTint_050_C::StaticClass()->DefaultObject);

	return Default;
}

}


