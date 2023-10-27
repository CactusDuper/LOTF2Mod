#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SyncAnimReq_LanternRaisedOrUmbralRealm.SyncAnimReq_LanternRaisedOrUmbralRealm_C
// (None)

class UClass* USyncAnimReq_LanternRaisedOrUmbralRealm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SyncAnimReq_LanternRaisedOrUmbralRealm_C");

	return Clss;
}


// SyncAnimReq_LanternRaisedOrUmbralRealm_C SyncAnimReq_LanternRaisedOrUmbralRealm.Default__SyncAnimReq_LanternRaisedOrUmbralRealm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USyncAnimReq_LanternRaisedOrUmbralRealm_C* USyncAnimReq_LanternRaisedOrUmbralRealm_C::GetDefaultObj()
{
	static class USyncAnimReq_LanternRaisedOrUmbralRealm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USyncAnimReq_LanternRaisedOrUmbralRealm_C*>(USyncAnimReq_LanternRaisedOrUmbralRealm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SyncAnimReq_LanternRaisedOrUmbralRealm.SyncAnimReq_LanternRaisedOrUmbralRealm_C.CanStartSyncAnim
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      ActiveParticipant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      PassiveParticipant                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue             (None)
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool USyncAnimReq_LanternRaisedOrUmbralRealm_C::CanStartSyncAnim(class AActor* ActiveParticipant, class AActor* PassiveParticipant, bool Temp_bool_Variable, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SyncAnimReq_LanternRaisedOrUmbralRealm_C", "CanStartSyncAnim");

	Params::USyncAnimReq_LanternRaisedOrUmbralRealm_C_CanStartSyncAnim_Params Parms{};

	Parms.ActiveParticipant = ActiveParticipant;
	Parms.PassiveParticipant = PassiveParticipant;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue = CallFunc_HasAnyMatchingGameplayTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


