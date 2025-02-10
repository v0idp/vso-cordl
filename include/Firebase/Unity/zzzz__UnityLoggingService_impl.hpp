#pragma once
// IWYU pragma private; include "Firebase/Unity/UnityLoggingService.hpp"
#include "Firebase/Platform/zzzz__ILoggingService_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Unity/zzzz__UnityLoggingService_def.hpp"
//  Writing Method size for method: ::Firebase::Unity::UnityLoggingService._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Unity::UnityLoggingService::*)()>(&::Firebase::Unity::UnityLoggingService::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1920e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Unity::UnityLoggingService*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Unity::UnityLoggingService.get_Instance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Unity::UnityLoggingService* (*)()>(&::Firebase::Unity::UnityLoggingService::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1920e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Unity::UnityLoggingService*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Firebase::Unity::UnityLoggingService::setStaticF__instance(::Firebase::Unity::UnityLoggingService*  value)  {
::cordl_internals::setStaticField<::Firebase::Unity::UnityLoggingService*, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Unity::UnityLoggingService*>::get>(std::forward<::Firebase::Unity::UnityLoggingService*>(value));
}
inline ::Firebase::Unity::UnityLoggingService* Firebase::Unity::UnityLoggingService::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::Firebase::Unity::UnityLoggingService*, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Unity::UnityLoggingService*>::get>();
}
inline void Firebase::Unity::UnityLoggingService::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Unity::UnityLoggingService*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Unity::UnityLoggingService* Firebase::Unity::UnityLoggingService::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Unity::UnityLoggingService*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Unity::UnityLoggingService*, false>(nullptr, ___internal_method);
}
inline ::Firebase::Unity::UnityLoggingService* Firebase::Unity::UnityLoggingService::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Unity::UnityLoggingService*>());
}
/// @brief Convert operator to "::Firebase::Platform::ILoggingService"
constexpr  Firebase::Unity::UnityLoggingService::operator ::Firebase::Platform::ILoggingService*() noexcept {
return static_cast<::Firebase::Platform::ILoggingService*>(static_cast<void*>(this));
}
/// @brief Convert to "::Firebase::Platform::ILoggingService"
constexpr ::Firebase::Platform::ILoggingService* Firebase::Unity::UnityLoggingService::i___Firebase__Platform__ILoggingService() noexcept {
return static_cast<::Firebase::Platform::ILoggingService*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Firebase::Unity::UnityLoggingService::UnityLoggingService()   {
}
