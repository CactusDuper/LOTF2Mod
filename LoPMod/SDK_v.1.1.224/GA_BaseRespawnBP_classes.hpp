#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x568 - 0x560)
// BlueprintGeneratedClass GA_BaseRespawnBP.GA_BaseRespawnBP_C
class UGA_BaseRespawnBP_C : public UGA_BaseRespawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x560(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_BaseRespawnBP_C* GetDefaultObj();

	void SetLanternParameters(double Cone_Length, float Init_Radius, float End_Radius, float Cone_PostPro_Master, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast);
	void Set_Dual_Realm__Mask_Parameters(double Inner_Axiom_Mask, double Inner_Umbral_Mask, double Outer_Axiom_Mask, double Outer_Umbral_Mask, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_3);
	void RunCameraFades(enum class EGameRealm NewRealm, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, enum class EGameRealm Temp_byte_Variable, double Temp_real_Variable_4, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_7, enum class EGameRealm Temp_byte_Variable_1, double K2Node_Select_Default, double K2Node_Select_Default_1, TArray<enum class EGameRealm>& K2Node_MakeArray_Array, bool CallFunc_Array_Contains_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void SetRealmLook(enum class EGameRealm NewRealm);
	void RunCameraFade(enum class EGameRealm NewRealm);
	void ExecuteUbergraph_GA_BaseRespawnBP(int32 EntryPoint, TArray<class FName>& K2Node_MakeArray_Array, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, enum class EGameRealm K2Node_Event_newRealm_1, class UDualRealmLookController_BP_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class EGameRealm K2Node_Event_newRealm, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, TArray<class UNiagaraComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class UNiagaraComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_2, const struct FVector& CallFunc_Vector_Zero_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class UNiagaraComponent* CallFunc_AddComponentByClass_ReturnValue);
};

}


