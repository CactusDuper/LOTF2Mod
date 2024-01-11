#pragma once

#include "SDK.hpp"
#include "helpers.hpp"
#include "stdafx.h"

using namespace std;
using namespace SDK;


//bool showTriggers = false;
//bool showCollisionComponentTriggers = false;
//bool showShapes = false;
//bool showEnemyStuff = false;
//bool showBlocking = false;
//bool showLevel = false;
//
//bool showTriggerNames = false;
//bool showCollisionComponentTriggerNames = false;
//bool showShapeNames = false;
//bool showBlockingName = false;
//bool showLevelName = false;

//float distanceToDraw = 500.0f;

UDeveloperMenuSubsystem* developerMenuSubsystem = nullptr;
UDeveloperMenuSettingsRuntime* devSettings = nullptr;


wstring lastCompletedQuest = L"hi from cactus :)";
wstring lastChangedQuest = L"hi from cactus :)";



//typedef void(__fastcall* DrawElemWire)(FKShapeElem* thisObject, FPrimitiveDrawInterface* PDI, const FTransform& ElemTM, float Scale, FColor Color);
//
//DrawElemWire DrawElemWireFunc = nullptr;

typedef void* (*TStaticConstructObject_Internal)(const UClass*, UObject*, FName Name, void* SetFlags, void* InternalSetFlags, bool bCopyTransientsFromClassDefaults, bool bAssumeTemplateIsArchetype, void* Template, void* InstanceGraph, void* ExternalPackage, void* PropertyInitCallback, void* SubobjectOverrides);


TStaticConstructObject_Internal StaticConstructObject_Internal = nullptr;



//void keycheck() {
//    if (GetAsyncKeyState(VK_NUMPAD0) & 1)
//    {
//        showBlocking = !showBlocking;
//    }
//
//    if (GetAsyncKeyState(VK_NUMPAD1) & 1)
//    {
//        showTriggers = !showTriggers;
//    }
//
//    if (GetAsyncKeyState(VK_NUMPAD2) & 1)
//    {
//        showCollisionComponentTriggers = !showCollisionComponentTriggers;
//    }
//
//    if (GetAsyncKeyState(VK_NUMPAD3) & 1)
//    {
//        showShapes = !showShapes;
//    }
//
//    if (GetAsyncKeyState(VK_NUMPAD4) & 1)
//    {
//        showTriggerNames = !showTriggerNames;
//    }
//
//    if (GetAsyncKeyState(VK_NUMPAD5) & 1)
//    {
//        showEnemyStuff = !showEnemyStuff;
//    }
//
//    if (GetAsyncKeyState(VK_NUMPAD6) & 1)
//    {
//        showShapeNames = !showShapeNames;
//    }
//
//    if (GetAsyncKeyState(VK_NUMPAD7) & 1)
//    {
//        showBlockingName = !showBlockingName;
//    }
//    if (GetAsyncKeyState(VK_NUMPAD8) & 1)
//    {
//        showLevel = !showLevel;
//    }
//
//    if (GetAsyncKeyState(VK_ADD) & 1)
//    {
//        distanceToDraw += 50.0f;
//    }
//
//    if (GetAsyncKeyState(VK_SUBTRACT) & 1)
//    {
//        distanceToDraw -= 50.0f;
//        if (distanceToDraw < 0.0f) {
//            distanceToDraw = 0.0f;
//        }
//    }
//
//}


void getStaticConstructObjectInternal() {

    // Check if the function address has been cached
    if (!StaticConstructObject_Internal) {
        MemoryManager memoryManager;
        auto gameBase = (uint64_t)GetModuleHandle(0);

        std::vector<void*> addrs = memoryManager.PatternScan("E8 ?? ?? ?? ?? 48 8B D8 48 39 75 30 74 15", 1);
        uintptr_t patternAddress = reinterpret_cast<uintptr_t>(addrs[0]);
        uintptr_t rva = patternAddress - gameBase;

        uint32_t FNTSBase = *reinterpret_cast<uint32_t*>(patternAddress + 1);
        uint32_t FNameToStringOffset = FNTSBase + rva + 5;

        // Calculate the function address based on the offset you've obtained
        uintptr_t functionAddress = reinterpret_cast<uintptr_t>(GetModuleHandle(0)) + FNameToStringOffset;

        // Cache the function address for future calls
        StaticConstructObject_Internal = reinterpret_cast<TStaticConstructObject_Internal>(functionAddress);

    }

}



void drawPlayerMovement(UCharacterMovementComponent* playerMoveComponent, AHUD* HUD, UFont* font, float screenX, float screenY) {


    DrawFVectorValuesOnHUD(HUD, playerMoveComponent->Velocity, screenX, screenY, font, RED, 1, L"Vel: ");
    DrawFVectorValuesOnHUD(HUD, playerMoveComponent->Acceleration, screenX, screenY + 20, font, RED, 1, L"Acc: ");
    DrawFVectorValuesOnHUD(HUD, playerMoveComponent->LastUpdateLocation, screenX, screenY + 60, font, RED, 1, L"Loc: ");
    DrawEulerAnglesOnHUD(HUD, playerMoveComponent->LastUpdateRotation, screenX, screenY + 80, font, RED, 1, L"Rot: ");

}

void drawPlayerValidLocation(UValidLocationTrackingComponent* ValidLocationTrackingComponent, AHUD* HUD, UFont* font, float screenX, float screenY) {
    DrawFVectorValuesOnHUD(HUD, ValidLocationTrackingComponent->LastValidTempLocation.Location, screenX, screenY + 120, font, RED, 1, L"Temp: ");
    DrawFVectorValuesOnHUD(HUD, ValidLocationTrackingComponent->LastValidLocationInAxiom.Location, screenX, screenY + 140, font, RED, 1, L"Axiom: ");
    DrawFVectorValuesOnHUD(HUD, ValidLocationTrackingComponent->LastValidLocationInUmbral.Location, screenX, screenY + 160, font, RED, 1, L"Umbral: ");
    DrawFVectorValuesOnHUD(HUD, ValidLocationTrackingComponent->LastValidLocationBeforeBossFight.Location, screenX, screenY + 180, font, RED, 1, L"Before Boss: ");

}




void DrawALOTF2CharacterInfo(ABaseAICharacter_BP_C* enemy, AHUD* HUD, UFont* font) {
    if (globals::showEnemies && enemy) {
        //enemy->bDebugAttributesEnabled = true;
        // Check if the enemy is hidden (you can add more conditions if needed)
        //if (enemyCharacter->IsHidden()) {
        //    return;
        //}

        // Get the enemy's location
        FVector enemyLocation = enemy->GetLastValidLocation();
        FVector screenLocation3d = HUD->Project(enemyLocation, 0);
        FVector2D screenLocation = { screenLocation3d.X, screenLocation3d.Y };


        // Draw additional information

        wstring enemyHealth = L"Health: " + to_wstring(enemy->HealthComponent->GetCurrentHealth());

        wstring enemyInfo = enemyHealth + L"\nName: " + StringToWString(enemy->Name.ToString());

        if (enemy->AggroComponent->CurrentTargetASC) {
            enemyInfo = enemyInfo + L"\nAGGRO";
        }

        HUD->AddDebugText(enemyInfo.c_str(), enemy, 0.0f, { 0, 0, 0 }, { 0, 0, 0 }, fGREEN, 1, false, 1, font, 1, 0);

    }
}

void drawName(AActor* actor, AHUD* HUD, FColor textColor, bool absoluteLocation, UFont* font) {

    string tempString = actor->Name.ToString();
    wstring tempWString = StringToWString(tempString);
    FString actorName = FString(tempWString.c_str());
    HUD->AddDebugText(actorName, actor, 0.0f, { 0, 0, 0 }, { 0, 0, 0 }, textColor, 1, absoluteLocation, 1, font, 1, 0);
}


void drawName(UShapeComponent* shapeComponent, AHUD* HUD, FColor textColor, bool absoluteLocation, UFont* font) {

    if (shapeComponent->GetOwner() && !CC(shapeComponent->GetOwner(), ATriggerBase) && !CC(shapeComponent, ATriggerBase)) {
        string tempString = shapeComponent->GetOwner()->Name.ToString();

        wstring tempWString = StringToWString(tempString);
        FString actorName = FString(tempWString.c_str());


        //FLinearColor textColor = RED;
        //HUD->AddDebugText(actorName, ownerActor, 0.0f, { 0, 0, 0 }, { 0, 0, 0 }, fRED, 1, shapeComponent->bAbsoluteLocation, 1, font, 1, 0);
        //HUD->AddDebugText(shapeType, ownerActor, 0.0f, { 0, 0, 0 }, { 0, 0, 0 }, fRED, 1, absoluteLocation, 1, font, 1, 0);
        HUD->AddDebugText(actorName, shapeComponent->GetOwner(), 0.0f, { 0, 0, 0 }, { 0, 0, 0 }, textColor, 1, absoluteLocation, 1, font, 1, 0);
    }
}


FVector FTransform::TransformPosition(FVector& V) const
{
    return Rotation.RotateVector(Scale3D * V) + Translation;
}

FVector FQuat::RotateVector(const FVector& V) const
{
    const FVector Q(X, Y, Z);
    const FVector T = (Q ^ V) * 2.f;
    const FVector Result = V + (T * W) + (Q ^ T);
    return Result;
}



void DrawVolumeWireframe(AVolume* Volume, AHUD* HUD, FLinearColor LineColor, float LineThickness)
{
    if (!Volume || !HUD)
    {
        return; // Check for valid pointers
    }

    FTransform ComponentTransform = Volume->BrushComponent->K2_GetComponentToWorld();
    FVector PlayerLocation = HUD->PlayerOwner->Character->CapsuleComponent->RelativeLocation;
    float DistanceToPlayer = PlayerLocation.Dist(ComponentTransform.Translation);

    UModel* model = Volume->Brush;

    if (DistanceToPlayer <= globals::distanceToDraw)
    {
        UBodySetup* BrushBodySetup = Volume->BrushComponent->BrushBodySetup;
        FKAggregateGeom aggGeom = BrushBodySetup->AggGeom;

        for (int i = 0; i < aggGeom.ConvexElems.Num(); i++)
        {
            const FKConvexElem ConvexElem = aggGeom.ConvexElems[i];

            for (int32 Index = 0; Index < aggGeom.ConvexElems[i].IndexData.Num(); Index += 3)
            {
                FVector Start = ComponentTransform.TransformPosition(aggGeom.ConvexElems[i].VertexData[aggGeom.ConvexElems[i].IndexData[Index]]);
                FVector End1 = ComponentTransform.TransformPosition(aggGeom.ConvexElems[i].VertexData[aggGeom.ConvexElems[i].IndexData[Index + 1]]);
                FVector End2 = ComponentTransform.TransformPosition(aggGeom.ConvexElems[i].VertexData[aggGeom.ConvexElems[i].IndexData[Index + 2]]);

                FVector ScreenStart = HUD->Project(Start, false);
                FVector ScreenEnd1 = HUD->Project(End1, false);
                FVector ScreenEnd2 = HUD->Project(End2, false);

                if (ScreenStart.Z > 0 && ScreenEnd1.Z > 0 && ScreenEnd2.Z > 0)
                {
                    // Check if all points are in front of the camera (Z > 0)
                    HUD->DrawLine(ScreenStart.X, ScreenStart.Y, ScreenEnd1.X, ScreenEnd1.Y, LineColor, LineThickness);
                    HUD->DrawLine(ScreenEnd1.X, ScreenEnd1.Y, ScreenEnd2.X, ScreenEnd2.Y, LineColor, LineThickness);
                    HUD->DrawLine(ScreenEnd2.X, ScreenEnd2.Y, ScreenStart.X, ScreenStart.Y, LineColor, LineThickness);
                }
            }
        }

        for (int i = 0; i < aggGeom.BoxElems.Num(); i++)
        {
            const FKBoxElem BoxElem = aggGeom.BoxElems[i];

            //void DrawDebugBox(class UObject* WorldContextObject, const struct FVector& Center, const struct FVector& Extent, const struct FLinearColor& LineColor, const struct FRotator& Rotation, float Duration, float Thickness);
            //kismet->DrawDebugBox(GWorld, BoxElem.Center, BoxElem.exten)


            // Calculate half extents of the box
            FVector HalfExtents(BoxElem.X / 2, BoxElem.Y / 2, BoxElem.Z / 2);

            // Calculate the box's vertices
            FVector Vertices[8];
            Vertices[0] = FVector(-HalfExtents.X, -HalfExtents.Y, -HalfExtents.Z);
            Vertices[1] = FVector(-HalfExtents.X, -HalfExtents.Y, HalfExtents.Z);
            Vertices[2] = FVector(-HalfExtents.X, HalfExtents.Y, -HalfExtents.Z);
            Vertices[3] = FVector(-HalfExtents.X, HalfExtents.Y, HalfExtents.Z);
            Vertices[4] = FVector(HalfExtents.X, -HalfExtents.Y, -HalfExtents.Z);
            Vertices[5] = FVector(HalfExtents.X, -HalfExtents.Y, HalfExtents.Z);
            Vertices[6] = FVector(HalfExtents.X, HalfExtents.Y, -HalfExtents.Z);
            Vertices[7] = FVector(HalfExtents.X, HalfExtents.Y, HalfExtents.Z);

            for (int32 Index = 0; Index < 8; Index++)
            {
                FVector Start = ComponentTransform.TransformPosition(Vertices[Index]);

                // Project the vertex onto the HUD
                FVector ScreenStart = HUD->Project(Start, false);

                if (ScreenStart.Z > 0)
                {
                    int32 NextIndex = (Index + 1) % 8;
                    FVector End = ComponentTransform.TransformPosition(Vertices[NextIndex]);
                    FVector ScreenEnd = HUD->Project(End, false);

                    // Draw a line between the current vertex and the next one
                    if (ScreenEnd.Z > 0)
                    {
                        HUD->DrawLine(ScreenStart.X, ScreenStart.Y, ScreenEnd.X, ScreenEnd.Y, LineColor, LineThickness);
                    }
                }
            }

        }
    }
}








void processBaseAI(ABaseAICharacter_BP_C* o) {
    if (!o)
        return;

	wstring AIHealth = L"Health: " + to_wstring(o->HealthComponent->GetCurrentHealth());

}






void triggerProcessor(ATriggerBase* trigger, AHUD* HUD, UFont* font) {
    if (globals::showTriggers) {
        trigger->SetActorHiddenInGame(0);
    }
    else {
        trigger->SetActorHiddenInGame(1);
    }

    //if (trigger->CollisionComponent)
    //    trigger->CollisionComponent->SetHiddenInGame(showCollisionComponentTriggers, 0);

    FVector componentLocation = trigger->K2_GetActorLocation();
    FVector screenLocation3d = HUD->Project(componentLocation, 0);
    FVector2D screenLocation = { screenLocation3d.X, screenLocation3d.Y };

    //Class types:
    //ANewAreaTrigger (ABP_NewAreaTrigger_C, ABP_ReachLocation_Grove_Tutorial_C)
    //AWaitFirstEncounterTriggerBox

    //Fname types:
    //InteractionTrigger?
    //InteractionVolume?

    if(globals::showTriggerNames)
        drawName(trigger, HUD, fRED, 0, font);
}

void shapeProcessor(UShapeComponent* shapeComponent, AHUD* HUD, UFont* font) {

    //if ((shapeComponent->GetOwner() && !CC(shapeComponent->GetOwner(), ATriggerBase)) || CC(shapeComponent, ATriggerBase)) {
    //    return;
    //}

    if (globals::showShapes) {
        shapeComponent->SetHiddenInGame(0, 0);
    }
    else {
        shapeComponent->SetHiddenInGame(1, 0);
    }

    float offset = 10.0f;
    float scaleFactor = 0.1f;

    AActor* ownerActor = shapeComponent->GetOwner();

    if (ownerActor && !CC(ownerActor, ATriggerBase) && !CC(shapeComponent, ATriggerBase)) {

        if (CC(shapeComponent, UBoxComponent)) {
            auto x = CAST_(shapeComponent, UBoxComponent);
            offset = x->GetScaledBoxExtent().Z * scaleFactor;
        }
        else if (CC(shapeComponent, USphereComponent)) {
            auto x = CAST_(shapeComponent, USphereComponent);
            offset = x->GetScaledSphereRadius() * scaleFactor;
        }
        else if (CC(shapeComponent, UCapsuleComponent)) {
            auto x = CAST_(shapeComponent, UCapsuleComponent);
            offset = x->GetScaledCapsuleRadius() * scaleFactor;
        }
    }

    FVector componentLocation = shapeComponent->RelativeLocation;
    FVector screenLocation3d = HUD->Project(componentLocation, 0);
    FVector2D screenLocation = { screenLocation3d.X, screenLocation3d.Y };

    if (globals::showShapeNames) {
        drawName(shapeComponent, HUD, fRED, shapeComponent->bAbsoluteLocation, font);
    }
}

void blockingVolumeProcessor(ABlockingVolume* blockingVolume, AHUD* HUD, UFont* font) {
    if (globals::showBlockingVolumes) {
        FTransform ComponentTransform = blockingVolume->BrushComponent->K2_GetComponentToWorld();
        FVector PlayerLocation = HUD->PlayerOwner->Character->CapsuleComponent->RelativeLocation;
        float DistanceToPlayer = PlayerLocation.Dist(ComponentTransform.Translation);

        if (DistanceToPlayer <= globals::distanceToDraw)
            DrawVolumeWireframe(blockingVolume, HUD, BLUE, 1.0f);
    }

    if (globals::showBlockingVolumeNames) {
        FTransform ComponentTransform = blockingVolume->BrushComponent->K2_GetComponentToWorld();
        FVector PlayerLocation = HUD->PlayerOwner->Character->CapsuleComponent->RelativeLocation;
        float DistanceToPlayer = PlayerLocation.Dist(ComponentTransform.Translation);

        if (DistanceToPlayer <= globals::distanceToDraw)
            drawName(blockingVolume, HUD, fRED, 0, font);
    }
}

void levelStreamingVolumeProcessor(ALevelStreamingVolume* levelVolume, AHUD* HUD, UFont* font) {
    if (globals::showLevelStreamingVolumes) {
        FTransform ComponentTransform = levelVolume->BrushComponent->K2_GetComponentToWorld();
        FVector PlayerLocation = HUD->PlayerOwner->Character->CapsuleComponent->RelativeLocation;
        float DistanceToPlayer = PlayerLocation.Dist(ComponentTransform.Translation);

        if (DistanceToPlayer <= globals::distanceToDraw)
            DrawVolumeWireframe(levelVolume, HUD, BLUE, 1.0f);
    }

    if (globals::showLevelStreamingVolumeNames) {
        FTransform ComponentTransform = levelVolume->BrushComponent->K2_GetComponentToWorld();
        FVector PlayerLocation = HUD->PlayerOwner->Character->CapsuleComponent->RelativeLocation;
        float DistanceToPlayer = PlayerLocation.Dist(ComponentTransform.Translation);

        if (DistanceToPlayer <= globals::distanceToDraw)
            drawName(levelVolume, HUD, fRED, 0, font);
    }
}

void objectProcessor(AHUD* HUD) {

    UFont* font = GetFont();

    //keycheck();

    for (int i = 0; i < UObject::GObjects->Num(); i++) {
        UObject* Obj = UObject::GObjects->GetByIndex(i);

        if ((Obj && !Obj->IsDefaultObject())) {

            CAC(Obj, ATriggerBase, triggerProcessor)
            else CAC(Obj, UShapeComponent, shapeProcessor)
            else CAC(Obj, ABlockingVolume, blockingVolumeProcessor)
            else CAC(Obj, ALevelStreamingVolume, levelStreamingVolumeProcessor)
            else CAC(Obj, ABaseAICharacter_BP_C, DrawALOTF2CharacterInfo)
        }
            
            //else if (CC(Obj, UDeveloperMenuSubsystem)) {
        //    if (!developerMenuSubsystem)
        //        developerMenuSubsystem = CAST_(Obj, UDeveloperMenuSubsystem);
        //}
    }

    UGameplayStatics* statics = UObject::FindObject<UGameplayStatics>("GameplayStatics Engine.Default__GameplayStatics");
    UKismetSystemLibrary* kismet = UObject::FindObject<UKismetSystemLibrary>("KismetSystemLibrary Engine.Default__KismetSystemLibrary");
    



    //if (developerMenuSubsystem && gameplayStatics) {
    //    cout << "GAMING" << endl;
    //    if (!developerMenuSubsystem->DevSettings) {
    //        cout << "SOMETHING" << endl;
    //        TSubclassOf<UObject> ObjectClass = UDeveloperMenuSettingsRuntime::StaticClass();
    //        UObject* Outer = developerMenuSubsystem;
    //        developerMenuSubsystem->DevSettings = static_cast<UDeveloperMenuSettingsRuntime*>(gameplayStatics->SpawnObject(ObjectClass, Outer));
    //    }
    //    else
    //        cout << "DevSettings is: " << developerMenuSubsystem->DevSettings << endl;
    //}

    //, UGameplayStatics* gameplayStatics

    
}





void processPlayer(AAnathemaPlayerCharacter_BP_C* AnathemaPlayer, UQuestDirector* QuestDirector, AHUD* HUD, UFont* font, float screenX, float screenY) {
    ALOTF2PlayerState_BP_C* AnathemaPlayerState = static_cast<ALOTF2PlayerState_BP_C*>(AnathemaPlayer->PlayerState);
    EHexLoadingState LoadingState = AnathemaPlayerState->LoadingState;
    UEquipmentManagerComponent* EquipmentManager = AnathemaPlayerState->EquipmentManagerComponent;
    //ranged weapons from AnathemaPlayerState around 0x450
    bool bPlayerNameSet = AnathemaPlayerState->bPlayerNameSet;
    UInventoryComponent* InventoryComponent = AnathemaPlayerState->InventoryComponent;
    UAIFactionComponent* AIFactionComponent = AnathemaPlayerState->AIFactionComponent;
    UHexDialogueComponent* DialogueComponent = AnathemaPlayerState->DialogueComponent;

    if (AnathemaPlayer != nullptr) {
        UCharacterMovementComponent* playerMoveComponent = AnathemaPlayer->CharacterMovement;
        UCapsuleComponent* playerCollisionComponent = AnathemaPlayer->CapsuleComponent;
        if (playerMoveComponent && playerCollisionComponent) {
            UValidLocationTrackingComponent* ValidLocationTrackingComponent = AnathemaPlayer->ValidLocationTrackingComponent;
            drawPlayerMovement(playerMoveComponent, HUD, font, screenX, screenY);
            drawPlayerValidLocation(ValidLocationTrackingComponent, HUD, font, screenX, screenY);
        }
    }

    if (QuestDirector != nullptr) {
        FHexQuestDirectorSaveData QSD = QuestDirector->QuestsSaveData;
        FQuestDirectorTags QT = QSD.QuestsTags;
        FGameplayTag LVA = QSD.LastVisitedArea;
        auto tstr = LVA.TagName.GetRawString();
        std::wstring ws(tstr.begin(), tstr.end());
        HUD->DrawText(FString(ws.c_str()), RED, screenX, screenY - 20, font, 1, false);

        TArray<FGameplayTag> completedQuests = QT.QuestsStateCompleteTags.GameplayTags;

        HUD->DrawText(FString(lastCompletedQuest.c_str()), RED, screenX, screenY - 40, font, 1, false);
        HUD->DrawText(FString(lastChangedQuest.c_str()), RED, screenX, screenY - 60, font, 1, false);
    }

}


//
//
//
//void DrawBox(FPrimitiveDrawInterface* PDI, const FMatrix& BoxToWorld, const FVector& Radii, const FMaterialRenderProxy* MaterialRenderProxy, uint8 DepthPriorityGroup)
//{
//    // Calculate verts for a face pointing down Z
//    FVector3f Positions[4] =
//    {
//        FVector3f(-1, -1, +1),
//        FVector3f(-1, +1, +1),
//        FVector3f(+1, +1, +1),
//        FVector3f(+1, -1, +1)
//    };
//    FVector2f UVs[4] =
//    {
//        FVector2f(0,0),
//        FVector2f(0,1),
//        FVector2f(1,1),
//        FVector2f(1,0),
//    };
//
//    // Then rotate this face 6 times
//    FRotator3f FaceRotations[6];
//    FaceRotations[0] = FRotator3f(0, 0, 0);
//    FaceRotations[1] = FRotator3f(90.f, 0, 0);
//    FaceRotations[2] = FRotator3f(-90.f, 0, 0);
//    FaceRotations[3] = FRotator3f(0, 0, 90.f);
//    FaceRotations[4] = FRotator3f(0, 0, -90.f);
//    FaceRotations[5] = FRotator3f(180.f, 0, 0);
//
//    FDynamicMeshBuilder MeshBuilder(PDI->View->FeatureLevel);
//
//    for (int32 f = 0; f < 6; f++)
//    {
//        FMatrix44f FaceTransform = FRotationMatrix44f(FaceRotations[f]);
//
//        int32 VertexIndices[4];
//        for (int32 VertexIndex = 0; VertexIndex < 4; VertexIndex++)
//        {
//            VertexIndices[VertexIndex] = MeshBuilder.AddVertex(
//                FaceTransform.TransformPosition(Positions[VertexIndex]),
//                UVs[VertexIndex],
//                FaceTransform.TransformVector(FVector3f(1, 0, 0)),
//                FaceTransform.TransformVector(FVector3f(0, 1, 0)),
//                FaceTransform.TransformVector(FVector3f(0, 0, 1)),
//                FColor::White
//            );
//        }
//
//        MeshBuilder.AddTriangle(VertexIndices[0], VertexIndices[1], VertexIndices[2]);
//        MeshBuilder.AddTriangle(VertexIndices[0], VertexIndices[2], VertexIndices[3]);
//    }
//
//    MeshBuilder.Draw(PDI, FScaleMatrix(Radii) * BoxToWorld, MaterialRenderProxy, DepthPriorityGroup, 0.f);
//}