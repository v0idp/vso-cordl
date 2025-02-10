#pragma once
// IWYU pragma private; include "Firebase/Platform/FirebaseAppUtils.hpp"
#include "Firebase/Platform/zzzz__IFirebaseAppUtils_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Platform/zzzz__FirebaseAppUtils_def.hpp"
#include "Firebase/Platform/zzzz__PlatformLogLevel_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Firebase::Platform::FirebaseAppUtils._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Platform::FirebaseAppUtils::*)()>(&::Firebase::Platform::FirebaseAppUtils::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18f64b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseAppUtils*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Platform::FirebaseAppUtils.get_Instance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Platform::FirebaseAppUtils* (*)()>(&::Firebase::Platform::FirebaseAppUtils::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x18f64b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseAppUtils*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Platform::FirebaseAppUtils.TranslateDllNotFoundException
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Platform::FirebaseAppUtils::*)(::System::Action*)>(&::Firebase::Platform::FirebaseAppUtils::TranslateDllNotFoundException)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x18f6510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseAppUtils*>::get(),
                        "TranslateDllNotFoundException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Platform::FirebaseAppUtils.PollCallbacks
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Platform::FirebaseAppUtils::*)()>(&::Firebase::Platform::FirebaseAppUtils::PollCallbacks)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18f6564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseAppUtils*>::get(),
                        "PollCallbacks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Platform::FirebaseAppUtils.GetLogLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Platform::PlatformLogLevel (::Firebase::Platform::FirebaseAppUtils::*)()>(&::Firebase::Platform::FirebaseAppUtils::GetLogLevel)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x18f6568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseAppUtils*>::get(),
                        "GetLogLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Firebase::Platform::FirebaseAppUtils::setStaticF_instance(::Firebase::Platform::FirebaseAppUtils*  value)  {
::cordl_internals::setStaticField<::Firebase::Platform::FirebaseAppUtils*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseAppUtils*>::get>(std::forward<::Firebase::Platform::FirebaseAppUtils*>(value));
}
inline ::Firebase::Platform::FirebaseAppUtils* Firebase::Platform::FirebaseAppUtils::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::Firebase::Platform::FirebaseAppUtils*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseAppUtils*>::get>();
}
inline void Firebase::Platform::FirebaseAppUtils::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseAppUtils*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Platform::FirebaseAppUtils* Firebase::Platform::FirebaseAppUtils::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseAppUtils*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Platform::FirebaseAppUtils*, false>(nullptr, ___internal_method);
}
inline void Firebase::Platform::FirebaseAppUtils::TranslateDllNotFoundException(::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseAppUtils*>::get(),
                        "TranslateDllNotFoundException",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline void Firebase::Platform::FirebaseAppUtils::PollCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseAppUtils*>::get(),
                        "PollCallbacks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Firebase::Platform::PlatformLogLevel Firebase::Platform::FirebaseAppUtils::GetLogLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseAppUtils*>::get(),
                        "GetLogLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Platform::PlatformLogLevel, false>(this, ___internal_method);
}
inline ::Firebase::Platform::FirebaseAppUtils* Firebase::Platform::FirebaseAppUtils::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Platform::FirebaseAppUtils*>());
}
/// @brief Convert operator to "::Firebase::Platform::IFirebaseAppUtils"
constexpr  Firebase::Platform::FirebaseAppUtils::operator ::Firebase::Platform::IFirebaseAppUtils*() noexcept {
return static_cast<::Firebase::Platform::IFirebaseAppUtils*>(static_cast<void*>(this));
}
/// @brief Convert to "::Firebase::Platform::IFirebaseAppUtils"
constexpr ::Firebase::Platform::IFirebaseAppUtils* Firebase::Platform::FirebaseAppUtils::i___Firebase__Platform__IFirebaseAppUtils() noexcept {
return static_cast<::Firebase::Platform::IFirebaseAppUtils*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Firebase::Platform::FirebaseAppUtils::FirebaseAppUtils()   {
}
