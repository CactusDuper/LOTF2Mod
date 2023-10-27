#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ResetUmbralAggro.GE_ResetUmbralAggro_C
// (None)

class UClass* UGE_ResetUmbralAggro_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ResetUmbralAggro_C");

	return Clss;
}


// GE_ResetUmbralAggro_C GE_ResetUmbralAggro.Default__GE_ResetUmbralAggro_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ResetUmbralAggro_C* UGE_ResetUmbralAggro_C::GetDefaultObj()
{
	static class UGE_ResetUmbralAggro_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ResetUmbralAggro_C*>(UGE_ResetUmbralAggro_C::StaticClass()->DefaultObject);

	return Default;
}

}


