#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HyperArmor.GE_HyperArmor_C
// (None)

class UClass* UGE_HyperArmor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HyperArmor_C");

	return Clss;
}


// GE_HyperArmor_C GE_HyperArmor.Default__GE_HyperArmor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HyperArmor_C* UGE_HyperArmor_C::GetDefaultObj()
{
	static class UGE_HyperArmor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HyperArmor_C*>(UGE_HyperArmor_C::StaticClass()->DefaultObject);

	return Default;
}

}


