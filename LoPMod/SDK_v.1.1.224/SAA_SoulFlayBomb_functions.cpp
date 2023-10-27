#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_SoulFlayBomb.SAA_SoulFlayBomb_C
// (None)

class UClass* USAA_SoulFlayBomb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_SoulFlayBomb_C");

	return Clss;
}


// SAA_SoulFlayBomb_C SAA_SoulFlayBomb.Default__SAA_SoulFlayBomb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_SoulFlayBomb_C* USAA_SoulFlayBomb_C::GetDefaultObj()
{
	static class USAA_SoulFlayBomb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_SoulFlayBomb_C*>(USAA_SoulFlayBomb_C::StaticClass()->DefaultObject);

	return Default;
}

}


