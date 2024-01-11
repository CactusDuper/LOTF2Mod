#include "stdafx.h"

namespace globals {
	HMODULE mainModule;
	HWND mainWindow;
	int uninjectKey = VK_F12;
	int openMenuKey = VK_INSERT;

    bool showEnemies = false;
    bool showEnemyText = false;

    bool showTriggers = false;
    bool showTriggerNames = false;

    bool showShapes = false;
    bool showShapeNames = false;

    bool showBlockingVolumes = false;
    bool showBlockingVolumeNames = false;

    bool showLevelStreamingVolumes = false;
    bool showLevelStreamingVolumeNames = false;

    float distanceToDraw = 500.0f;


    /*
    
    bool showTriggers = false;
    bool showCollisionComponentTriggers = false;
    bool showShapes = false;
    bool showEnemyStuff = false;
    bool showBlocking = false;
    bool showLevel = false;

    bool showTriggerNames = false;
    bool showCollisionComponentTriggerNames = false;
    bool showShapeNames = false;
    bool showBlockingName = false;
    bool showLevelName = false;


*/
}
