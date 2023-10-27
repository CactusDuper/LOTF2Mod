#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_MojoSyphoning_AddProvisionalHealth.GE_MojoSyphoning_AddProvisionalHealth_C
// (None)

class UClass* UGE_MojoSyphoning_AddProvisionalHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_MojoSyphoning_AddProvisionalHealth_C");

	return Clss;
}


// GE_MojoSyphoning_AddProvisionalHealth_C GE_MojoSyphoning_AddProvisionalHealth.Default__GE_MojoSyphoning_AddProvisionalHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_MojoSyphoning_AddProvisionalHealth_C* UGE_MojoSyphoning_AddProvisionalHealth_C::GetDefaultObj()
{
	static class UGE_MojoSyphoning_AddProvisionalHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_MojoSyphoning_AddProvisionalHealth_C*>(UGE_MojoSyphoning_AddProvisionalHealth_C::StaticClass()->DefaultObject);

	return Default;
}

}


