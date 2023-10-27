#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AfterTrueDeath.GE_AfterTrueDeath_C
// (None)

class UClass* UGE_AfterTrueDeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AfterTrueDeath_C");

	return Clss;
}


// GE_AfterTrueDeath_C GE_AfterTrueDeath.Default__GE_AfterTrueDeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AfterTrueDeath_C* UGE_AfterTrueDeath_C::GetDefaultObj()
{
	static class UGE_AfterTrueDeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AfterTrueDeath_C*>(UGE_AfterTrueDeath_C::StaticClass()->DefaultObject);

	return Default;
}

}


