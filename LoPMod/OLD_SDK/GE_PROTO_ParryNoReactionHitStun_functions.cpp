#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PROTO_ParryNoReactionHitStun.GE_PROTO_ParryNoReactionHitStun_C
// (None)

class UClass* UGE_PROTO_ParryNoReactionHitStun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PROTO_ParryNoReactionHitStun_C");

	return Clss;
}


// GE_PROTO_ParryNoReactionHitStun_C GE_PROTO_ParryNoReactionHitStun.Default__GE_PROTO_ParryNoReactionHitStun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PROTO_ParryNoReactionHitStun_C* UGE_PROTO_ParryNoReactionHitStun_C::GetDefaultObj()
{
	static class UGE_PROTO_ParryNoReactionHitStun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PROTO_ParryNoReactionHitStun_C*>(UGE_PROTO_ParryNoReactionHitStun_C::StaticClass()->DefaultObject);

	return Default;
}

}


