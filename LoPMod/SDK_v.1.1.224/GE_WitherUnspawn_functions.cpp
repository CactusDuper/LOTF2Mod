#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_WitherUnspawn.GE_WitherUnspawn_C
// (None)

class UClass* UGE_WitherUnspawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_WitherUnspawn_C");

	return Clss;
}


// GE_WitherUnspawn_C GE_WitherUnspawn.Default__GE_WitherUnspawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_WitherUnspawn_C* UGE_WitherUnspawn_C::GetDefaultObj()
{
	static class UGE_WitherUnspawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_WitherUnspawn_C*>(UGE_WitherUnspawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


