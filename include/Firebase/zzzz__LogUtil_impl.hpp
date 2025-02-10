#pragma once
// IWYU pragma private; include "Firebase/LogUtil.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/zzzz__LogUtil_def.hpp"
#include "Firebase/Platform/zzzz__PlatformLogLevel_def.hpp"
#include "Firebase/zzzz__LogLevel_def.hpp"
#include "Firebase/zzzz__LogUtil_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Firebase::LogUtil_LogMessageDelegate._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::LogUtil_LogMessageDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Firebase::LogUtil_LogMessageDelegate::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x18f695c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil_LogMessageDelegate*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::LogUtil_LogMessageDelegate.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::LogUtil_LogMessageDelegate::*)(::Firebase::LogLevel, ::StringW)>(&::Firebase::LogUtil_LogMessageDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x18f6b50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil_LogMessageDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil_LogMessageDelegate*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
inline void Firebase::LogUtil_LogMessageDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil_LogMessageDelegate*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Firebase::LogUtil_LogMessageDelegate::Invoke(::Firebase::LogLevel  log_level, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil_LogMessageDelegate*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, log_level, message);
}
inline ::Firebase::LogUtil_LogMessageDelegate* Firebase::LogUtil_LogMessageDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::LogUtil_LogMessageDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Firebase::LogUtil_LogMessageDelegate::LogUtil_LogMessageDelegate()   {
}
//  Writing Method size for method: ::Firebase::LogUtil._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::LogUtil::*)()>(&::Firebase::LogUtil::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x18f6808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::LogUtil.InitializeLogging
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Firebase::LogUtil::InitializeLogging)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x18f087c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get(),
                        "InitializeLogging",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::LogUtil.ConvertLogLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Platform::PlatformLogLevel (*)(::Firebase::LogLevel)>(&::Firebase::LogUtil::ConvertLogLevel)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18f6660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get(),
                        "ConvertLogLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::LogLevel>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::LogUtil.LogMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Firebase::LogLevel, ::StringW)>(&::Firebase::LogUtil::LogMessage)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18f2fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get(),
                        "LogMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::LogLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::LogUtil.LogMessageFromCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Firebase::LogLevel, ::StringW)>(&::Firebase::LogUtil::LogMessageFromCallback)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x18f66d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get(),
                        "LogMessageFromCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::LogLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::LogUtil.Finalize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::LogUtil::*)()>(&::Firebase::LogUtil::Finalize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x18f69e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::LogUtil.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::LogUtil::*)()>(&::Firebase::LogUtil::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18f6ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::LogUtil.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::LogUtil::*)(bool)>(&::Firebase::LogUtil::Dispose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x18f6a90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::LogUtil._LogUtil_m__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::LogUtil::*)(::System::Object*, ::System::EventArgs*)>(&::Firebase::LogUtil::_LogUtil_m__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x18f6b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get(),
                        "<LogUtil>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Firebase::LogUtil::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& Firebase::LogUtil::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void Firebase::LogUtil::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
inline void Firebase::LogUtil::setStaticF__instance(::Firebase::LogUtil*  value)  {
::cordl_internals::setStaticField<::Firebase::LogUtil*, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get>(std::forward<::Firebase::LogUtil*>(value));
}
inline ::Firebase::LogUtil* Firebase::LogUtil::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::Firebase::LogUtil*, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get>();
}
inline void Firebase::LogUtil::setStaticF_InitializeLoggingLock(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "InitializeLoggingLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* Firebase::LogUtil::getStaticF_InitializeLoggingLock()  {
return ::cordl_internals::getStaticField<::System::Object*, "InitializeLoggingLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get>();
}
inline void Firebase::LogUtil::setStaticF___f__mg$cache0(::Firebase::LogUtil_LogMessageDelegate*  value)  {
::cordl_internals::setStaticField<::Firebase::LogUtil_LogMessageDelegate*, "<>f__mg$cache0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get>(std::forward<::Firebase::LogUtil_LogMessageDelegate*>(value));
}
inline ::Firebase::LogUtil_LogMessageDelegate* Firebase::LogUtil::getStaticF___f__mg$cache0()  {
return ::cordl_internals::getStaticField<::Firebase::LogUtil_LogMessageDelegate*, "<>f__mg$cache0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get>();
}
inline void Firebase::LogUtil::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Firebase::LogUtil::InitializeLogging()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get(),
                        "InitializeLogging",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::Firebase::Platform::PlatformLogLevel Firebase::LogUtil::ConvertLogLevel(::Firebase::LogLevel  logLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get(),
                        "ConvertLogLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::LogLevel>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Platform::PlatformLogLevel, false>(nullptr, ___internal_method, logLevel);
}
inline void Firebase::LogUtil::LogMessage(::Firebase::LogLevel  logLevel, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get(),
                        "LogMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::LogLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, logLevel, message);
}
inline void Firebase::LogUtil::LogMessageFromCallback(::Firebase::LogLevel  logLevel, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get(),
                        "LogMessageFromCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::LogLevel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, logLevel, message);
}
inline void Firebase::LogUtil::Finalize()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Firebase::LogUtil::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Firebase::LogUtil::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void Firebase::LogUtil::_LogUtil_m__0(::System::Object*  sender, ::System::EventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::LogUtil*>::get(),
                        "<LogUtil>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
inline ::Firebase::LogUtil* Firebase::LogUtil::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::LogUtil*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Firebase::LogUtil::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Firebase::LogUtil::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Firebase::LogUtil::LogUtil()   {
}
