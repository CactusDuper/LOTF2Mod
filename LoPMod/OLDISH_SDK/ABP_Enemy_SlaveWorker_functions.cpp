#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Enemy_SlaveWorker.ABP_Enemy_SlaveWorker_C
// (None)

class UClass* UABP_Enemy_SlaveWorker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Enemy_SlaveWorker_C");

	return Clss;
}


// ABP_Enemy_SlaveWorker_C ABP_Enemy_SlaveWorker.Default__ABP_Enemy_SlaveWorker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Enemy_SlaveWorker_C* UABP_Enemy_SlaveWorker_C::GetDefaultObj()
{
	static class UABP_Enemy_SlaveWorker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Enemy_SlaveWorker_C*>(UABP_Enemy_SlaveWorker_C::StaticClass()->DefaultObject);

	return Default;
}

}


