#include "stdafx.h"
#include "imgui/imgui.h"
#include "imgui/imgui_impl_dx12.h"
#include "imgui/imgui_impl_win32.h"
#include <iostream>

namespace hooks {
	void Init() {
		std::cout << "HOOKS INIT CALLED" << std::endl;
		if (kiero::init(kiero::RenderType::D3D12) == kiero::Status::Success) {
			std::cout << "kiero::init SUCCESS" << std::endl;
			kiero::bind(54, (void**)&d3d12hook::oExecuteCommandListsD3D12, d3d12hook::hookExecuteCommandListsD3D12);
			kiero::bind(58, (void**)&d3d12hook::oSignalD3D12, d3d12hook::hookSignalD3D12);
			kiero::bind(140, (void**)&d3d12hook::oPresentD3D12, d3d12hook::hookPresentD3D12);
			kiero::bind(84, (void**)&d3d12hook::oDrawInstancedD3D12, d3d12hook::hookkDrawInstancedD3D12);
			kiero::bind(85, (void**)&d3d12hook::oDrawIndexedInstancedD3D12, d3d12hook::hookDrawIndexedInstancedD3D12);

			//do {
			//	Sleep(100);
			//} while (!(GetAsyncKeyState(globals::uninjectKey) & 0x1));

			//d3d12hook::release();

			//kiero::shutdown();

			//inputhook::Remove(globals::mainWindow);

			////Beep(220, 100);

			//FreeLibraryAndExitThread(globals::mainModule, 0);
		}
		else {
			std::cout << "kiero::init FAIL" << std::endl;
		}
	}
}