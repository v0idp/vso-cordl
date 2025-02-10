#pragma once
// IWYU pragma private; include "Firebase/Platform/FirebaseLogger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Platform/zzzz__FirebaseLogger_def.hpp"
#include "Firebase/Platform/zzzz__MainThreadProperty_1_def.hpp"
#include "Firebase/Platform/zzzz__PlatformLogLevel_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__StackTraceLogType_def.hpp"
//  Writing Method size for method: ::Firebase::Platform::FirebaseLogger.IsStackTraceLogTypeIncompatibleWithNativeLogs
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::StackTraceLogType)>(&::Firebase::Platform::FirebaseLogger::IsStackTraceLogTypeIncompatibleWithNativeLogs)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1920298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseLogger*>::get(),
                        "IsStackTraceLogTypeIncompatibleWithNativeLogs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::StackTraceLogType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Platform::FirebaseLogger.CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Firebase::Platform::FirebaseLogger::CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x19202a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseLogger*>::get(),
                        "CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Platform::FirebaseLogger.get_CanRedirectNativeLogs
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Firebase::Platform::FirebaseLogger::get_CanRedirectNativeLogs)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x19204fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseLogger*>::get(),
                        "get_CanRedirectNativeLogs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Platform::FirebaseLogger.LogMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Firebase::Platform::PlatformLogLevel, ::StringW)>(&::Firebase::Platform::FirebaseLogger::LogMessage)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x191f0e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseLogger*>::get(),
                        "LogMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Platform::PlatformLogLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Firebase::Platform::FirebaseLogger::setStaticF_incompatibleStackUnwindingEnabled(::Firebase::Platform::MainThreadProperty_1<bool>*  value)  {
::cordl_internals::setStaticField<::Firebase::Platform::MainThreadProperty_1<bool>*, "incompatibleStackUnwindingEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseLogger*>::get>(std::forward<::Firebase::Platform::MainThreadProperty_1<bool>*>(value));
}
inline ::Firebase::Platform::MainThreadProperty_1<bool>* Firebase::Platform::FirebaseLogger::getStaticF_incompatibleStackUnwindingEnabled()  {
return ::cordl_internals::getStaticField<::Firebase::Platform::MainThreadProperty_1<bool>*, "incompatibleStackUnwindingEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseLogger*>::get>();
}
inline void Firebase::Platform::FirebaseLogger::setStaticF___f__mg$cache0(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>f__mg$cache0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseLogger*>::get>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* Firebase::Platform::FirebaseLogger::getStaticF___f__mg$cache0()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>f__mg$cache0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseLogger*>::get>();
}
inline bool Firebase::Platform::FirebaseLogger::IsStackTraceLogTypeIncompatibleWithNativeLogs(::UnityEngine::StackTraceLogType  logType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseLogger*>::get(),
                        "IsStackTraceLogTypeIncompatibleWithNativeLogs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::StackTraceLogType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, logType);
}
inline bool Firebase::Platform::FirebaseLogger::CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseLogger*>::get(),
                        "CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool Firebase::Platform::FirebaseLogger::get_CanRedirectNativeLogs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseLogger*>::get(),
                        "get_CanRedirectNativeLogs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Firebase::Platform::FirebaseLogger::LogMessage(::Firebase::Platform::PlatformLogLevel  logLevel, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::FirebaseLogger*>::get(),
                        "LogMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Platform::PlatformLogLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, logLevel, message);
}
// Ctor Parameters []
constexpr ::Firebase::Platform::FirebaseLogger::FirebaseLogger()   {
}
