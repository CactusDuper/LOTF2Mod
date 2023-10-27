#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x358 - 0x2F0)
// WidgetBlueprintGeneratedClass W_AttrScaling.W_AttrScaling_C
class UW_AttrScaling_C : public UInventoryStatRow
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Icon;                                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                Requirements_KO_style;                             // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Requirements_OK_style;                             // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x310(0x30)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FText                                  Stat_name;                                         // 0x340(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UW_AttrScaling_C* GetDefaultObj();

	void SetStatRequirementsStatus(bool bPlayerHasStats, bool bRequirementsIgnored);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_AttrScaling(int32 EntryPoint, bool K2Node_Event_bPlayerHasStats, bool K2Node_Event_bRequirementsIgnored, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
};

}


