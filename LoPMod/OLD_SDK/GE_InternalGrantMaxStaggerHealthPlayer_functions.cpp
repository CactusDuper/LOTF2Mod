#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_InternalGrantMaxStaggerHealthPlayer.GE_InternalGrantMaxStaggerHealthPlayer_C
// (None)

class UClass* UGE_InternalGrantMaxStaggerHealthPlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_InternalGrantMaxStaggerHealthPlayer_C");

	return Clss;
}


// GE_InternalGrantMaxStaggerHealthPlayer_C GE_InternalGrantMaxStaggerHealthPlayer.Default__GE_InternalGrantMaxStaggerHealthPlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_InternalGrantMaxStaggerHealthPlayer_C* UGE_InternalGrantMaxStaggerHealthPlayer_C::GetDefaultObj()
{
	static class UGE_InternalGrantMaxStaggerHealthPlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_InternalGrantMaxStaggerHealthPlayer_C*>(UGE_InternalGrantMaxStaggerHealthPlayer_C::StaticClass()->DefaultObject);

	return Default;
}

}


