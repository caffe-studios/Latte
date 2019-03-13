#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Latte {

	class LATTE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};


}

// Core log macros
#define LT_CORE_ERROR(...)    ::Latte::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LT_CORE_WARN(...)     ::Latte::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LT_CORE_INFO(...)     ::Latte::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LT_CORE_TRACE(...)    ::Latte::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define LT_CORE_FATAL(...)    ::Latte::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define LT_ERROR(...)         ::Latte::Log::GetClientLogger()->error(__VA_ARGS__)
#define LT_WARN(...)          ::Latte::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LT_INFO(...)          ::Latte::Log::GetClientLogger()->info(__VA_ARGS__)
#define LT_TRACE(...)         ::Latte::Log::GetClientLogger()->trace(__VA_ARGS__)
#define LT_FATAL(...)         ::Latte::Log::GetClientLogger()->fatal(__VA_ARGS__)