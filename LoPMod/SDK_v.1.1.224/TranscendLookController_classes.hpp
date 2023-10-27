#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x320 - 0x2A0)
// BlueprintGeneratedClass TranscendLookController.TranscendLookController_C
class ATranscendLookController_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 TranscendPP;                                       // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ReincarnateTransition_Flare_CA20173A45BBC6B6B55AEF974EE9A638; // 0x2B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReincarnateTransition_Global_CA20173A45BBC6B6B55AEF974EE9A638; // 0x2BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ReincarnateTransition__Direction_CA20173A45BBC6B6B55AEF974EE9A638; // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E0D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ReincarnateTransition;                             // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        TranscendBlendIn_Flare_29162A87423E9485032E979F386C4FBE; // 0x2D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TranscendBlendIn_Global_29162A87423E9485032E979F386C4FBE; // 0x2D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TranscendBlendIn__Direction_29162A87423E9485032E979F386C4FBE; // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E0F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    TranscendBlendIn;                                  // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        TranscendBlendOut_Flare_E4DB8B914F68A79499C0FDBEDBE1CB4C; // 0x2E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TranscendBlendOut_Global_E4DB8B914F68A79499C0FDBEDBE1CB4C; // 0x2EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TranscendBlendOut__Direction_E4DB8B914F68A79499C0FDBEDBE1CB4C; // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    TranscendBlendOut;                                 // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       CurEffectWeight;                                   // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurFlareBrigthness;                                // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              FlareMaterial;                                     // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialBillboardComponent*           FlareComponent;                                    // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ATranscendLookController_C* GetDefaultObj();

	void Blend_Out_Transcend_Values(double Global, double FlareIntensity, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1);
	void ApplyPostProcessValues(float CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast, float K2Node_VariableSet_BlendWeight_ImplicitCast);
	void UpdateTranscendValues(double EffectWeight, double Flare);
	void TranscendBlendIn__FinishedFunc();
	void TranscendBlendIn__UpdateFunc();
	void TranscendBlendOut__FinishedFunc();
	void TranscendBlendOut__UpdateFunc();
	void ReincarnateTransition__FinishedFunc();
	void ReincarnateTransition__UpdateFunc();
	void OnTranscendBegin(double PlayRate);
	void OnBlendOutRequest(double PlayRate);
	void OnTranscendInterrupted();
	void Init(class ADualRealmSoulsLanternActor_BP_C* LanternActor);
	void OnReincarnateBegin(double PlayRate);
	void ExecuteUbergraph_TranscendLookController(int32 EntryPoint, double K2Node_CustomEvent_PlayRate_2, double CallFunc_Divide_DoubleDouble_ReturnValue, double K2Node_CustomEvent_PlayRate_1, class ADualRealmSoulsLanternActor_BP_C* K2Node_CustomEvent_LanternActor, double K2Node_CustomEvent_PlayRate, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_UpdateTranscendValues_Flare_ImplicitCast, double CallFunc_UpdateTranscendValues_EffectWeight_ImplicitCast, double CallFunc_Blend_Out_Transcend_Values_FlareIntensity_ImplicitCast, double CallFunc_Blend_Out_Transcend_Values_Global_ImplicitCast, double CallFunc_UpdateTranscendValues_Flare_ImplicitCast_1, double CallFunc_UpdateTranscendValues_EffectWeight_ImplicitCast_1, float CallFunc_SetPlayRate_NewRate_ImplicitCast, float CallFunc_SetPlayRate_NewRate_ImplicitCast_1, float CallFunc_SetPlayRate_NewRate_ImplicitCast_2);
};

}


