#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SAA_SpawnSAAOnIgniteApplication.SAA_SpawnSAAOnIgniteApplication_C
// (None)

class UClass* USAA_SpawnSAAOnIgniteApplication_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SAA_SpawnSAAOnIgniteApplication_C");

	return Clss;
}


// SAA_SpawnSAAOnIgniteApplication_C SAA_SpawnSAAOnIgniteApplication.Default__SAA_SpawnSAAOnIgniteApplication_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USAA_SpawnSAAOnIgniteApplication_C* USAA_SpawnSAAOnIgniteApplication_C::GetDefaultObj()
{
	static class USAA_SpawnSAAOnIgniteApplication_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USAA_SpawnSAAOnIgniteApplication_C*>(USAA_SpawnSAAOnIgniteApplication_C::StaticClass()->DefaultObject);

	return Default;
}

}


