#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x68 - 0x48)
// BlueprintGeneratedClass AIConsideration_NPC_ConfigVar.AIConsideration_NPC_ConfigVar_C
class UAIConsideration_NPC_ConfigVar_C : public UAIConsideration
{
public:
	struct FGameplayTag                          Config_Var_Tag;                                    // 0x48(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Bonus_Tag;                                         // 0x50(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	double                                       Default_Score;                                     // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TempScore;                                         // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIConsideration_NPC_ConfigVar_C* GetDefaultObj();

	float InternalScoreBP(bool CallFunc_IsValid_ReturnValue, class ALOTF2Character* K2Node_DynamicCast_AsLOTF2Character, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool Temp_bool_Variable, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_BP_GetConfigVar_varValue, bool CallFunc_BP_GetConfigVar_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, float K2Node_FunctionResult_ReturnValue_ImplicitCast_1, float K2Node_FunctionResult_ReturnValue_ImplicitCast_2, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_TempScore_ImplicitCast);
};

}


