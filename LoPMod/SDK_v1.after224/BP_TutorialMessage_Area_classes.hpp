#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x3A8 - 0x328)
// BlueprintGeneratedClass BP_TutorialMessage_Area.BP_TutorialMessage_Area_C
class ABP_TutorialMessage_Area_C : public ATutorialMessage_Area
{
public:
	class UBillboardComponent*                   Billboard;                                         // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Trigger;                                           // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextRender;                                        // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       Text_Duration;                                     // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                Color;                                             // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Should_Spin;                                       // 0x34C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_435B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Rotator;                                           // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExtraDurationOnEndMessage;                         // 0x358(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_435C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       UIMessageFadeOutTime;                              // 0x360(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TSoftObjectPtr<class AActor>                 OverlappedPlayer_0;                                // 0x368(0x30)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, AdvancedDisplay, HasGetValueTypeHash)
	TArray<class ASimpleCharacterSpawner*>       Spanwers;                                          // 0x398(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)

	static class UClass* StaticClass();
	static class ABP_TutorialMessage_Area_C* GetDefaultObj();

	void UserConstructionScript();
};

}


