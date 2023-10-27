#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xD8 - 0xA0)
// BlueprintGeneratedClass ANS_DissolveFX.ANS_DissolveFX_C
class UANS_DissolveFX_C : public UAnimNotifyState_BaseConditionalTag
{
public:
	bool                                         ReverseDissolve;                                   // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OverrideBoneCenter;                                // 0xA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_394C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BoneCenter;                                        // 0xA4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OverrideGradientScale;                             // 0xAC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_394D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       GradientScale;                                     // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FreezeWorldPosition;                               // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bDestroyAfterDissolve;                             // 0xB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OverrideVFX;                                       // 0xBA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3950[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        Overridden_VFX;                                    // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         OverrideReverseVFX;                                // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3952[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraSystem*                        OverriddenReverseVFX;                              // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANS_DissolveFX_C* GetDefaultObj();

	void GetOverrideDissolveVFX(class USkeletalMeshComponent* Mesh, bool* OverrideVFX, class UNiagaraSystem** OverriddenVFX);
	void BP_NotifyBeginImplementation(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequenceBase* Animation, float TotalDuration, int32 MontageInstanceID, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_GetOverrideDissolveVFX_OverrideVFX, class UNiagaraSystem* CallFunc_GetOverrideDissolveVFX_OverriddenVFX, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, class UDissolveFXComponent_C* CallFunc_GetComponentByClass_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, double CallFunc_StartDissolveWithParams_Duration_ImplicitCast);
};

}


