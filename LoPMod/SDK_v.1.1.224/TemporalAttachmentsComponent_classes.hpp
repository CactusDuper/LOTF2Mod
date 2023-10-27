#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x108 - 0xB0)
// BlueprintGeneratedClass TemporalAttachmentsComponent.TemporalAttachmentsComponent_C
class UTemporalAttachmentsComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<class FName, class AItemVisual*>        TemporalAttachedItems;                             // 0xB8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UTemporalAttachmentsComponent_C* GetDefaultObj();

	void RemoveAttachedItem(class FName RequestID, class AItemVisual* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void AddAttachedItem(class UClass* ItemClass, class USkeletalMeshComponent* AttachmentMesh, class FName AttachmentSocket, class FName RequestID, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AItemVisual* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AItemVisual* CallFunc_FinishSpawningActor_ReturnValue, class USetOwnerVisibilityFromAttachParentActorComponent* CallFunc_AddComponentByClass_ReturnValue, class USyncAnimMontagesComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_TemporalAttachmentsComponent(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class EEndPlayReason K2Node_Event_EndPlayReason, TArray<class AItemVisual*>& CallFunc_Map_Values_Values, class AItemVisual* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


