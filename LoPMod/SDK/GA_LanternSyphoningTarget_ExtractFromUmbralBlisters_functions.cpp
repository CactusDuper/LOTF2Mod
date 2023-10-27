#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_LanternSyphoningTarget_ExtractFromUmbralBlisters.GA_LanternSyphoningTarget_ExtractFromUmbralBlisters_C
// (None)

class UClass* UGA_LanternSyphoningTarget_ExtractFromUmbralBlisters_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_LanternSyphoningTarget_ExtractFromUmbralBlisters_C");

	return Clss;
}


// GA_LanternSyphoningTarget_ExtractFromUmbralBlisters_C GA_LanternSyphoningTarget_ExtractFromUmbralBlisters.Default__GA_LanternSyphoningTarget_ExtractFromUmbralBlisters_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_LanternSyphoningTarget_ExtractFromUmbralBlisters_C* UGA_LanternSyphoningTarget_ExtractFromUmbralBlisters_C::GetDefaultObj()
{
	static class UGA_LanternSyphoningTarget_ExtractFromUmbralBlisters_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_LanternSyphoningTarget_ExtractFromUmbralBlisters_C*>(UGA_LanternSyphoningTarget_ExtractFromUmbralBlisters_C::StaticClass()->DefaultObject);

	return Default;
}

}


