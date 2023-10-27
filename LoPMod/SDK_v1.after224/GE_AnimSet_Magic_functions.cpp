#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AnimSet_Magic.GE_AnimSet_Magic_C
// (None)

class UClass* UGE_AnimSet_Magic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AnimSet_Magic_C");

	return Clss;
}


// GE_AnimSet_Magic_C GE_AnimSet_Magic.Default__GE_AnimSet_Magic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AnimSet_Magic_C* UGE_AnimSet_Magic_C::GetDefaultObj()
{
	static class UGE_AnimSet_Magic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AnimSet_Magic_C*>(UGE_AnimSet_Magic_C::StaticClass()->DefaultObject);

	return Default;
}

}


