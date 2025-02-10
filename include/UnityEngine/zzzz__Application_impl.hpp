#pragma once
// IWYU pragma private; include "UnityEngine/Application.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Application_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "UnityEngine/zzzz__ApplicationInstallMode_def.hpp"
#include "UnityEngine/zzzz__ApplicationMemoryUsageChange_def.hpp"
#include "UnityEngine/zzzz__ApplicationMemoryUsage_def.hpp"
#include "UnityEngine/zzzz__ApplicationSandboxType_def.hpp"
#include "UnityEngine/zzzz__Application_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "UnityEngine/zzzz__NetworkReachability_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
#include "UnityEngine/zzzz__StackTraceLogType_def.hpp"
#include "UnityEngine/zzzz__SystemLanguage_def.hpp"
#include "UnityEngine/zzzz__UserAuthorization_def.hpp"
//  Writing Method size for method: ::UnityEngine::Application_LowMemoryCallback._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Application_LowMemoryCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Application_LowMemoryCallback::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2f5ec94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application_LowMemoryCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application_LowMemoryCallback.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Application_LowMemoryCallback::*)()>(&::UnityEngine::Application_LowMemoryCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2f5ed1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application_LowMemoryCallback*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application_LowMemoryCallback*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Application_LowMemoryCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application_LowMemoryCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Application_LowMemoryCallback::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application_LowMemoryCallback*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Application_LowMemoryCallback* UnityEngine::Application_LowMemoryCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Application_LowMemoryCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Application_LowMemoryCallback::Application_LowMemoryCallback()   {
}
//  Writing Method size for method: ::UnityEngine::Application_MemoryUsageChangedCallback._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Application_MemoryUsageChangedCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Application_MemoryUsageChangedCallback::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2f5ed30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application_MemoryUsageChangedCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application_MemoryUsageChangedCallback.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Application_MemoryUsageChangedCallback::*)(::ByRef<::UnityEngine::ApplicationMemoryUsageChange>)>(&::UnityEngine::Application_MemoryUsageChangedCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2f5edcc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application_MemoryUsageChangedCallback*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application_MemoryUsageChangedCallback*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Application_MemoryUsageChangedCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application_MemoryUsageChangedCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Application_MemoryUsageChangedCallback::Invoke(::ByRef<::UnityEngine::ApplicationMemoryUsageChange>  usage)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application_MemoryUsageChangedCallback*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, usage);
}
inline ::UnityEngine::Application_MemoryUsageChangedCallback* UnityEngine::Application_MemoryUsageChangedCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Application_MemoryUsageChangedCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Application_MemoryUsageChangedCallback::Application_MemoryUsageChangedCallback()   {
}
//  Writing Method size for method: ::UnityEngine::Application_LogCallback._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Application_LogCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Application_LogCallback::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2f5ede0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application_LogCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application_LogCallback.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Application_LogCallback::*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&::UnityEngine::Application_LogCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2f5ee80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application_LogCallback*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application_LogCallback*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Application_LogCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application_LogCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Application_LogCallback::Invoke(::StringW  condition, ::StringW  stackTrace, ::UnityEngine::LogType  type)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application_LogCallback*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, condition, stackTrace, type);
}
inline ::UnityEngine::Application_LogCallback* UnityEngine::Application_LogCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Application_LogCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Application_LogCallback::Application_LogCallback()   {
}
//  Writing Method size for method: ::UnityEngine::Application.Quit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::UnityEngine::Application::Quit)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f5cd98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "Quit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.Quit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Application::Quit)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f5cdd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "Quit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_isPlaying
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Application::get_isPlaying)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f5ce44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_isPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_isFocused
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Application::get_isFocused)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f5ce6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_isFocused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_buildGUID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::Application::get_buildGUID)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f5ce94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_buildGUID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_runInBackground
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Application::get_runInBackground)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f5cebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_runInBackground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.set_runInBackground
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::Application::set_runInBackground)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f5cee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "set_runInBackground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_isBatchMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Application::get_isBatchMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f5cf20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_isBatchMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_dataPath
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::Application::get_dataPath)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f5cf48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_dataPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_streamingAssetsPath
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::Application::get_streamingAssetsPath)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f5cf70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_streamingAssetsPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_persistentDataPath
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::Application::get_persistentDataPath)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f5cf98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_persistentDataPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_temporaryCachePath
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::Application::get_temporaryCachePath)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f5cfc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_temporaryCachePath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_unityVersion
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::Application::get_unityVersion)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f5cfe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_unityVersion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_version
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::Application::get_version)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f5d010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_version",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_installerName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::Application::get_installerName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f5d038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_installerName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_identifier
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::Application::get_identifier)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f5d060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_identifier",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_installMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ApplicationInstallMode (*)()>(&::UnityEngine::Application::get_installMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f5d088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_installMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_sandboxType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ApplicationSandboxType (*)()>(&::UnityEngine::Application::get_sandboxType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f5d0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_sandboxType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_productName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::Application::get_productName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f5d0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_productName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_companyName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::Application::get_companyName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f5d100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_companyName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_cloudProjectId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::Application::get_cloudProjectId)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f5d128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_cloudProjectId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.OpenURL
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::Application::OpenURL)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f5d150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "OpenURL",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.SetLogCallbackDefined
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::Application::SetLogCallbackDefined)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f5d18c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "SetLogCallbackDefined",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.GetStackTraceLogType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::StackTraceLogType (*)(::UnityEngine::LogType)>(&::UnityEngine::Application::GetStackTraceLogType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f5d1c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "GetStackTraceLogType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.RequestUserAuthorization
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (*)(::UnityEngine::UserAuthorization)>(&::UnityEngine::Application::RequestUserAuthorization)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f5d204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "RequestUserAuthorization",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UserAuthorization>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.HasUserAuthorization
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UserAuthorization)>(&::UnityEngine::Application::HasUserAuthorization)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f5d240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "HasUserAuthorization",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UserAuthorization>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_platform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RuntimePlatform (*)()>(&::UnityEngine::Application::get_platform)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f5d27c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_platform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_isMobilePlatform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Application::get_isMobilePlatform)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2f5d2a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_isMobilePlatform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_systemLanguage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SystemLanguage (*)()>(&::UnityEngine::Application::get_systemLanguage)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f5d368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_systemLanguage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_internetReachability
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::NetworkReachability (*)()>(&::UnityEngine::Application::get_internetReachability)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f5d390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_internetReachability",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.add_lowMemory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Application_LowMemoryCallback*)>(&::UnityEngine::Application::add_lowMemory)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2f5d3b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "add_lowMemory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Application_LowMemoryCallback*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.remove_lowMemory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Application_LowMemoryCallback*)>(&::UnityEngine::Application::remove_lowMemory)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2f5d490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "remove_lowMemory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Application_LowMemoryCallback*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.CallLowMemory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ApplicationMemoryUsage)>(&::UnityEngine::Application::CallLowMemory)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2f5d568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "CallLowMemory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ApplicationMemoryUsage>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.HasLogCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Application::HasLogCallback)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2f5d6a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "HasLogCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.add_logMessageReceived
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Application_LogCallback*)>(&::UnityEngine::Application::add_logMessageReceived)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2f5d724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "add_logMessageReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Application_LogCallback*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.remove_logMessageReceived
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Application_LogCallback*)>(&::UnityEngine::Application::remove_logMessageReceived)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2f5d800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "remove_logMessageReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Application_LogCallback*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.CallLogCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::UnityEngine::LogType, bool)>(&::UnityEngine::Application::CallLogCallback)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2f5d8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "CallLogCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.add_onBeforeRender
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Events::UnityAction*)>(&::UnityEngine::Application::add_onBeforeRender)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f5d994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "add_onBeforeRender",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.remove_onBeforeRender
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Events::UnityAction*)>(&::UnityEngine::Application::remove_onBeforeRender)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f5dd34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "remove_onBeforeRender",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.add_focusChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<bool>*)>(&::UnityEngine::Application::add_focusChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2f5e08c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "add_focusChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.remove_focusChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<bool>*)>(&::UnityEngine::Application::remove_focusChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2f5e180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "remove_focusChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.add_quitting
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::Application::add_quitting)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2f5e274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "add_quitting",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.remove_quitting
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::Application::remove_quitting)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2f5e350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "remove_quitting",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.Internal_ApplicationWantsToQuit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Application::Internal_ApplicationWantsToQuit)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x2f5e42c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "Internal_ApplicationWantsToQuit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.Internal_ApplicationInit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Application::Internal_ApplicationInit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2f5e730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "Internal_ApplicationInit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.Internal_ApplicationQuit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Application::Internal_ApplicationQuit)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2f5e7b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "Internal_ApplicationQuit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.Internal_ApplicationUnload
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Application::Internal_ApplicationUnload)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2f5e85c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "Internal_ApplicationUnload",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.InvokeOnBeforeRender
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Application::InvokeOnBeforeRender)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2f5e8f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "InvokeOnBeforeRender",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.InvokeFocusChanged
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::Application::InvokeFocusChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2f5eae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "InvokeFocusChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.InvokeDeepLinkActivated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::Application::InvokeDeepLinkActivated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2f5eb80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "InvokeDeepLinkActivated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Application.get_isEditor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Application::get_isEditor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f5ec1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_isEditor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Application::setStaticF_lowMemory(::UnityEngine::Application_LowMemoryCallback*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Application_LowMemoryCallback*, "lowMemory", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get>(std::forward<::UnityEngine::Application_LowMemoryCallback*>(value));
}
inline ::UnityEngine::Application_LowMemoryCallback* UnityEngine::Application::getStaticF_lowMemory()  {
return ::cordl_internals::getStaticField<::UnityEngine::Application_LowMemoryCallback*, "lowMemory", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get>();
}
inline void UnityEngine::Application::setStaticF_memoryUsageChanged(::UnityEngine::Application_MemoryUsageChangedCallback*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Application_MemoryUsageChangedCallback*, "memoryUsageChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get>(std::forward<::UnityEngine::Application_MemoryUsageChangedCallback*>(value));
}
inline ::UnityEngine::Application_MemoryUsageChangedCallback* UnityEngine::Application::getStaticF_memoryUsageChanged()  {
return ::cordl_internals::getStaticField<::UnityEngine::Application_MemoryUsageChangedCallback*, "memoryUsageChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get>();
}
inline void UnityEngine::Application::setStaticF_s_LogCallbackHandler(::UnityEngine::Application_LogCallback*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Application_LogCallback*, "s_LogCallbackHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get>(std::forward<::UnityEngine::Application_LogCallback*>(value));
}
inline ::UnityEngine::Application_LogCallback* UnityEngine::Application::getStaticF_s_LogCallbackHandler()  {
return ::cordl_internals::getStaticField<::UnityEngine::Application_LogCallback*, "s_LogCallbackHandler", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get>();
}
inline void UnityEngine::Application::setStaticF_s_LogCallbackHandlerThreaded(::UnityEngine::Application_LogCallback*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Application_LogCallback*, "s_LogCallbackHandlerThreaded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get>(std::forward<::UnityEngine::Application_LogCallback*>(value));
}
inline ::UnityEngine::Application_LogCallback* UnityEngine::Application::getStaticF_s_LogCallbackHandlerThreaded()  {
return ::cordl_internals::getStaticField<::UnityEngine::Application_LogCallback*, "s_LogCallbackHandlerThreaded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get>();
}
inline void UnityEngine::Application::setStaticF_focusChanged(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "focusChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* UnityEngine::Application::getStaticF_focusChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "focusChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get>();
}
inline void UnityEngine::Application::setStaticF_deepLinkActivated(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "deepLinkActivated", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* UnityEngine::Application::getStaticF_deepLinkActivated()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "deepLinkActivated", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get>();
}
inline void UnityEngine::Application::setStaticF_wantsToQuit(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "wantsToQuit", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* UnityEngine::Application::getStaticF_wantsToQuit()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "wantsToQuit", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get>();
}
inline void UnityEngine::Application::setStaticF_quitting(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "quitting", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::Application::getStaticF_quitting()  {
return ::cordl_internals::getStaticField<::System::Action*, "quitting", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get>();
}
inline void UnityEngine::Application::setStaticF_unloading(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "unloading", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::Application::getStaticF_unloading()  {
return ::cordl_internals::getStaticField<::System::Action*, "unloading", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get>();
}
inline void UnityEngine::Application::setStaticF_s_currentCancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
::cordl_internals::setStaticField<::System::Threading::CancellationTokenSource*, "s_currentCancellationTokenSource", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get>(std::forward<::System::Threading::CancellationTokenSource*>(value));
}
inline ::System::Threading::CancellationTokenSource* UnityEngine::Application::getStaticF_s_currentCancellationTokenSource()  {
return ::cordl_internals::getStaticField<::System::Threading::CancellationTokenSource*, "s_currentCancellationTokenSource", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get>();
}
inline void UnityEngine::Application::Quit(int32_t  exitCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "Quit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, exitCode);
}
inline void UnityEngine::Application::Quit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "Quit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::Application::get_isPlaying()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_isPlaying",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::Application::get_isFocused()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_isFocused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Application::get_buildGUID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_buildGUID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::Application::get_runInBackground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_runInBackground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Application::set_runInBackground(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "set_runInBackground",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Application::get_isBatchMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_isBatchMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Application::get_dataPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_dataPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Application::get_streamingAssetsPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_streamingAssetsPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Application::get_persistentDataPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_persistentDataPath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Application::get_temporaryCachePath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_temporaryCachePath",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Application::get_unityVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_unityVersion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Application::get_version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_version",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Application::get_installerName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_installerName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Application::get_identifier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_identifier",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::ApplicationInstallMode UnityEngine::Application::get_installMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_installMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ApplicationInstallMode, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::ApplicationSandboxType UnityEngine::Application::get_sandboxType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_sandboxType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ApplicationSandboxType, false>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Application::get_productName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_productName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Application::get_companyName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_companyName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Application::get_cloudProjectId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_cloudProjectId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Application::OpenURL(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "OpenURL",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, url);
}
inline void UnityEngine::Application::SetLogCallbackDefined(bool  defined)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "SetLogCallbackDefined",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, defined);
}
inline ::UnityEngine::StackTraceLogType UnityEngine::Application::GetStackTraceLogType(::UnityEngine::LogType  logType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "GetStackTraceLogType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::StackTraceLogType, false>(nullptr, ___internal_method, logType);
}
inline ::UnityEngine::AsyncOperation* UnityEngine::Application::RequestUserAuthorization(::UnityEngine::UserAuthorization  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "RequestUserAuthorization",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UserAuthorization>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(nullptr, ___internal_method, mode);
}
inline bool UnityEngine::Application::HasUserAuthorization(::UnityEngine::UserAuthorization  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "HasUserAuthorization",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UserAuthorization>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mode);
}
inline ::UnityEngine::RuntimePlatform UnityEngine::Application::get_platform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_platform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RuntimePlatform, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::Application::get_isMobilePlatform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_isMobilePlatform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::SystemLanguage UnityEngine::Application::get_systemLanguage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_systemLanguage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SystemLanguage, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::NetworkReachability UnityEngine::Application::get_internetReachability()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_internetReachability",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::NetworkReachability, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Application::add_lowMemory(::UnityEngine::Application_LowMemoryCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "add_lowMemory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Application_LowMemoryCallback*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Application::remove_lowMemory(::UnityEngine::Application_LowMemoryCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "remove_lowMemory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Application_LowMemoryCallback*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Application::CallLowMemory(::UnityEngine::ApplicationMemoryUsage  usage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "CallLowMemory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ApplicationMemoryUsage>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, usage);
}
inline bool UnityEngine::Application::HasLogCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "HasLogCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Application::add_logMessageReceived(::UnityEngine::Application_LogCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "add_logMessageReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Application_LogCallback*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Application::remove_logMessageReceived(::UnityEngine::Application_LogCallback*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "remove_logMessageReceived",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Application_LogCallback*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Application::CallLogCallback(::StringW  logString, ::StringW  stackTrace, ::UnityEngine::LogType  type, bool  invokedOnMainThread)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "CallLogCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LogType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, logString, stackTrace, type, invokedOnMainThread);
}
inline void UnityEngine::Application::add_onBeforeRender(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "add_onBeforeRender",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Application::remove_onBeforeRender(::UnityEngine::Events::UnityAction*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "remove_onBeforeRender",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Application::add_focusChanged(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "add_focusChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Application::remove_focusChanged(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "remove_focusChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Application::add_quitting(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "add_quitting",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Application::remove_quitting(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "remove_quitting",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Application::Internal_ApplicationWantsToQuit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "Internal_ApplicationWantsToQuit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Application::Internal_ApplicationInit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "Internal_ApplicationInit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Application::Internal_ApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "Internal_ApplicationQuit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Application::Internal_ApplicationUnload()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "Internal_ApplicationUnload",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Application::InvokeOnBeforeRender()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "InvokeOnBeforeRender",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Application::InvokeFocusChanged(bool  focus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "InvokeFocusChanged",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, focus);
}
inline void UnityEngine::Application::InvokeDeepLinkActivated(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "InvokeDeepLinkActivated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, url);
}
inline bool UnityEngine::Application::get_isEditor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Application*>::get(),
                        "get_isEditor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Application::Application()   {
}
