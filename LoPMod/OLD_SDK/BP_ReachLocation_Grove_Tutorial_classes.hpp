#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x3E8 - 0x308)
// BlueprintGeneratedClass BP_ReachLocation_Grove_Tutorial.BP_ReachLocation_Grove_Tutorial_C
class ABP_ReachLocation_Grove_Tutorial_C : public ANewAreaTrigger
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ULOTF2SerializationComponent*          LOTF2Serialization;                                // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextRender;                                        // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                  New_Area_Name;                                     // 0x320(0x18)(Edit, BlueprintVisible)
	struct FAkAnathemaEvent                      NewAreaSound;                                      // 0x338(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAkAnathemaEvent                      Play_NewAreaTrigger;                               // 0x388(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABP_NewAreaTrigger_C*>          Areas_to_Link;                                     // 0x3D8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)

	static class UClass* StaticClass();
	static class ABP_ReachLocation_Grove_Tutorial_C* GetDefaultObj();

	void UserConstructionScript();
	void BndEvt__BP_NewAreaTrigger_CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_ReachLocation_Grove_Tutorial(int32 EntryPoint, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class APlayerCharacterController* K2Node_DynamicCast_AsPlayer_Character_Controller, bool K2Node_DynamicCast_bSuccess_1, class AHUD* CallFunc_GetHUD_ReturnValue, class AWBP_LOTF2HUD_C* K2Node_DynamicCast_AsWBP_LOTF2HUD, bool K2Node_DynamicCast_bSuccess_2, class ABP_NewAreaTrigger_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class USoundManager_BP_C* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


