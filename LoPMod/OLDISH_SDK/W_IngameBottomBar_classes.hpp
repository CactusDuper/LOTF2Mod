#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x5E0 - 0x548)
// WidgetBlueprintGeneratedClass W_IngameBottomBar.W_IngameBottomBar_C
class UW_IngameBottomBar_C : public UInGameBottomBarPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x548(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Background;                                  // 0x550(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Gradient;                                    // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Show_Switch;                                       // 0x560(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_366B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Confirm_Text;                                      // 0x568(0x18)(Edit, BlueprintVisible)
	class FText                                  Navigation_Text;                                   // 0x580(0x18)(Edit, BlueprintVisible)
	class FText                                  Switch_Text;                                       // 0x598(0x18)(Edit, BlueprintVisible)
	class FText                                  Return_Text;                                       // 0x5B0(0x18)(Edit, BlueprintVisible)
	class FText                                  Unequip_Text;                                      // 0x5C8(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UW_IngameBottomBar_C* GetDefaultObj();

	void SetNavigationBoxOptions(uint8 InNavigationOptions);
	void SetSwitchPercent(enum class ENavigationBoxOptions NavOption, float Progress);
	void ExecuteUbergraph_W_IngameBottomBar(int32 EntryPoint, uint8 K2Node_Event_inNavigationOptions, enum class ENavigationBoxOptions K2Node_Event_navOption, float K2Node_Event_progress);
};

}


