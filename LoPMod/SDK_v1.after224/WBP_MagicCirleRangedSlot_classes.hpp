#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x7E8 - 0x7D0)
// WidgetBlueprintGeneratedClass WBP_MagicCirleRangedSlot.WBP_MagicCirleRangedSlot_C
class UWBP_MagicCirleRangedSlot_C : public UMagicCircleRangedSlotWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_RequirementsKO_Cross;                        // 0x7D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          Retainer_Icon;                                     // 0x7E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_MagicCirleRangedSlot_C* GetDefaultObj();

	void BP_SetIsUsable(bool bUsable);
	void ExecuteUbergraph_WBP_MagicCirleRangedSlot(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue, bool K2Node_Event_bUsable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


