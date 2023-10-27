#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_CharredSpiritFireBall.SAA_CharredSpiritFireBall_C
// (None)

class UClass* USAA_CharredSpiritFireBall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_CharredSpiritFireBall_C");

	return Clss;
}


// SAA_CharredSpiritFireBall_C SAA_CharredSpiritFireBall.Default__SAA_CharredSpiritFireBall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_CharredSpiritFireBall_C* USAA_CharredSpiritFireBall_C::GetDefaultObj()
{
	static class USAA_CharredSpiritFireBall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_CharredSpiritFireBall_C*>(USAA_CharredSpiritFireBall_C::StaticClass()->DefaultObject);

	return Default;
}

}


