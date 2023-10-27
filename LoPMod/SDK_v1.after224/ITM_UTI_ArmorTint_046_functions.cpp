#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ITM_UTI_ArmorTint_046.ITM_UTI_ArmorTint_046_C
// (None)

class UClass* UITM_UTI_ArmorTint_046_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ITM_UTI_ArmorTint_046_C");

	return Clss;
}


// ITM_UTI_ArmorTint_046_C ITM_UTI_ArmorTint_046.Default__ITM_UTI_ArmorTint_046_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UITM_UTI_ArmorTint_046_C* UITM_UTI_ArmorTint_046_C::GetDefaultObj()
{
	static class UITM_UTI_ArmorTint_046_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UITM_UTI_ArmorTint_046_C*>(UITM_UTI_ArmorTint_046_C::StaticClass()->DefaultObject);

	return Default;
}

}


