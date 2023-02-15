#pragma once

#include "BraveFish/Core/Base.h"

#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>

namespace BraveFish {

	class Log
	{
	public:
		static void Init();

		static Ref<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		static Ref<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static Ref<spdlog::logger> s_CoreLogger;
		static Ref<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define HZ_CORE_TRACE(...)    ::BraveFish::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HZ_CORE_INFO(...)     ::BraveFish::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_WARN(...)     ::BraveFish::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_ERROR(...)    ::BraveFish::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HZ_CORE_CRITICAL(...) ::BraveFish::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define HZ_TRACE(...)         ::BraveFish::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HZ_INFO(...)          ::BraveFish::Log::GetClientLogger()->info(__VA_ARGS__)
#define HZ_WARN(...)          ::BraveFish::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HZ_ERROR(...)         ::BraveFish::Log::GetClientLogger()->error(__VA_ARGS__)
#define HZ_CRITICAL(...)      ::BraveFish::Log::GetClientLogger()->critical(__VA_ARGS__)