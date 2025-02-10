#pragma once
// IWYU pragma private; include "Firebase/Platform/DebugLogger.hpp"
#include "Firebase/Platform/zzzz__ILoggingService_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Platform/zzzz__DebugLogger_def.hpp"
//  Writing Method size for method: ::Firebase::Platform::DebugLogger._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Platform::DebugLogger::*)()>(&::Firebase::Platform::DebugLogger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x192228c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::DebugLogger*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Platform::DebugLogger.get_Instance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Platform::DebugLogger* (*)()>(&::Firebase::Platform::DebugLogger::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1922294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::DebugLogger*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Firebase::Platform::DebugLogger::setStaticF__instance(::Firebase::Platform::DebugLogger*  value)  {
::cordl_internals::setStaticField<::Firebase::Platform::DebugLogger*, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::DebugLogger*>::get>(std::forward<::Firebase::Platform::DebugLogger*>(value));
}
inline ::Firebase::Platform::DebugLogger* Firebase::Platform::DebugLogger::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::Firebase::Platform::DebugLogger*, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::DebugLogger*>::get>();
}
inline void Firebase::Platform::DebugLogger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::DebugLogger*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Platform::DebugLogger* Firebase::Platform::DebugLogger::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::DebugLogger*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Platform::DebugLogger*, false>(nullptr, ___internal_method);
}
inline ::Firebase::Platform::DebugLogger* Firebase::Platform::DebugLogger::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Platform::DebugLogger*>());
}
/// @brief Convert operator to "::Firebase::Platform::ILoggingService"
constexpr  Firebase::Platform::DebugLogger::operator ::Firebase::Platform::ILoggingService*() noexcept {
return static_cast<::Firebase::Platform::ILoggingService*>(static_cast<void*>(this));
}
/// @brief Convert to "::Firebase::Platform::ILoggingService"
constexpr ::Firebase::Platform::ILoggingService* Firebase::Platform::DebugLogger::i___Firebase__Platform__ILoggingService() noexcept {
return static_cast<::Firebase::Platform::ILoggingService*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Firebase::Platform::DebugLogger::DebugLogger()   {
}
