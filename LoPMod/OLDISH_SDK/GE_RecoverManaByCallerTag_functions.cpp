#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RecoverManaByCallerTag.GE_RecoverManaByCallerTag_C
// (None)

class UClass* UGE_RecoverManaByCallerTag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RecoverManaByCallerTag_C");

	return Clss;
}


// GE_RecoverManaByCallerTag_C GE_RecoverManaByCallerTag.Default__GE_RecoverManaByCallerTag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RecoverManaByCallerTag_C* UGE_RecoverManaByCallerTag_C::GetDefaultObj()
{
	static class UGE_RecoverManaByCallerTag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RecoverManaByCallerTag_C*>(UGE_RecoverManaByCallerTag_C::StaticClass()->DefaultObject);

	return Default;
}

}


