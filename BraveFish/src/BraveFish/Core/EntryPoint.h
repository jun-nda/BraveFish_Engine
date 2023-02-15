#pragma once
#include "BraveFish/Core/Base.h"

#ifdef HZ_PLATFORM_WINDOWS

extern BraveFish::Application* BraveFish::CreateApplication();

int main(int argc, char** argv)
{
	BraveFish::Log::Init();

	HZ_PROFILE_BEGIN_SESSION("Startup", "HazelProfile-Startup.json");
	auto app = BraveFish::CreateApplication();
	HZ_PROFILE_END_SESSION();

	HZ_PROFILE_BEGIN_SESSION("Runtime", "HazelProfile-Runtime.json");
	app->Run();
	HZ_PROFILE_END_SESSION();

	HZ_PROFILE_BEGIN_SESSION("Startup", "HazelProfile-Shutdown.json");
	delete app;
	HZ_PROFILE_END_SESSION();
}

#endif
