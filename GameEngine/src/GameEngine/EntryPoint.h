#pragma once

#ifdef GE_PLATFORM_WINDOWS

extern GameEngine::Application* GameEngine::CreateApplication();

int main(int argc, char** argv) {
	GameEngine::Log::Init();
	GE_CORE_WARN("Logging initialized.");
	GE_INFO("Welcome from the Underworld!");

	auto app = GameEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif