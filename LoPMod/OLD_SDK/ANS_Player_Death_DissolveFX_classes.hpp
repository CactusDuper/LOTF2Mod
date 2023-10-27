#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD8 - 0xD8)
// BlueprintGeneratedClass ANS_Player_Death_DissolveFX.ANS_Player_Death_DissolveFX_C
class UANS_Player_Death_DissolveFX_C : public UANS_DissolveFX_C
{
public:

	static class UClass* StaticClass();
	static class UANS_Player_Death_DissolveFX_C* GetDefaultObj();

	void GetOverrideDissolveVFX(class USkeletalMeshComponent* Mesh, bool* OverrideVFX, class UNiagaraSystem** OverriddenVFX, bool Temp_bool_Variable, bool CallFunc_GetOverrideDissolveVFX_OverrideVFX, class UNiagaraSystem* CallFunc_GetOverrideDissolveVFX_OverriddenVFX, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


