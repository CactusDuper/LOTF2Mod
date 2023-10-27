#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AnimSet_Javelin.GE_AnimSet_Javelin_C
// (None)

class UClass* UGE_AnimSet_Javelin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AnimSet_Javelin_C");

	return Clss;
}


// GE_AnimSet_Javelin_C GE_AnimSet_Javelin.Default__GE_AnimSet_Javelin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AnimSet_Javelin_C* UGE_AnimSet_Javelin_C::GetDefaultObj()
{
	static class UGE_AnimSet_Javelin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AnimSet_Javelin_C*>(UGE_AnimSet_Javelin_C::StaticClass()->DefaultObject);

	return Default;
}

}


