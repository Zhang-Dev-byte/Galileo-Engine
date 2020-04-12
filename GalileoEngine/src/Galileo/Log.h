#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "glpch.h"
#include "spdlog/fmt/ostr.h"
namespace GALILEO {
	class GALILEO_API Log
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
#define GL_CORE_ERROR(...) :: GALILEO::Log::GetCoreLogger()->error(__VA_ARGS__)
#define GL_CORE_WARN(...) :: GALILEO::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define GL_CORE_INFO(...) :: GALILEO::Log::GetCoreLogger()->info(__VA_ARGS__)
#define GL_CORE_TRACE(...) :: GALILEO::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define GL_CORE_FATAL(...) :: GALILEO::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define GL_ERROR(...) :: GALILEO::Log::GetClientLogger()->error(__VA_ARGS__)
#define GL_WARN(...) :: GALILEO::Log::GetClientLogger()->warn(__VA_ARGS__)
#define GL_INFO(...) :: GALILEO::Log::GetClientLogger()->info(__VA_ARGS__)
#define GL_TRACE(...) :: GALILEO::Log::GetClientLogger()->trace(__VA_ARGS__)
#define GL_FATAL(...) :: GALILEO::Log::GetClientLogger()->fatal(__VA_ARGS__)

