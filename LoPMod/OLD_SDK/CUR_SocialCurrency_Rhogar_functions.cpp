#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CUR_SocialCurrency_Rhogar.CUR_SocialCurrency_Rhogar_C
// (None)

class UClass* UCUR_SocialCurrency_Rhogar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CUR_SocialCurrency_Rhogar_C");

	return Clss;
}


// CUR_SocialCurrency_Rhogar_C CUR_SocialCurrency_Rhogar.Default__CUR_SocialCurrency_Rhogar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCUR_SocialCurrency_Rhogar_C* UCUR_SocialCurrency_Rhogar_C::GetDefaultObj()
{
	static class UCUR_SocialCurrency_Rhogar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCUR_SocialCurrency_Rhogar_C*>(UCUR_SocialCurrency_Rhogar_C::StaticClass()->DefaultObject);

	return Default;
}

}


