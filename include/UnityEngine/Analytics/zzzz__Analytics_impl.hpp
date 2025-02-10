#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/Analytics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Analytics/zzzz__Analytics_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsResult_def.hpp"
#include "UnityEngine/Analytics/zzzz__CustomEventData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::Analytics.IsInitialized
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Analytics::Analytics::IsInitialized)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3192344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::Analytics*>::get(),
                        "IsInitialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::Analytics.SendCustomEventName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Analytics::AnalyticsResult (*)(::StringW)>(&::UnityEngine::Analytics::Analytics::SendCustomEventName)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x319236c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::Analytics*>::get(),
                        "SendCustomEventName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::Analytics.SendCustomEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Analytics::AnalyticsResult (*)(::UnityEngine::Analytics::CustomEventData*)>(&::UnityEngine::Analytics::Analytics::SendCustomEvent)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x31923a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::Analytics*>::get(),
                        "SendCustomEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Analytics::CustomEventData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::Analytics.RegisterEventWithLimit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Analytics::AnalyticsResult (*)(::StringW, int32_t, int32_t, ::StringW, int32_t, ::StringW, ::StringW, bool)>(&::UnityEngine::Analytics::Analytics::RegisterEventWithLimit)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x31923e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::Analytics*>::get(),
                        "RegisterEventWithLimit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::Analytics.SendEventWithLimit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Analytics::AnalyticsResult (*)(::StringW, ::System::Object*, int32_t, ::StringW)>(&::UnityEngine::Analytics::Analytics::SendEventWithLimit)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3192470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::Analytics*>::get(),
                        "SendEventWithLimit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::Analytics.CustomEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Analytics::AnalyticsResult (*)(::StringW)>(&::UnityEngine::Analytics::Analytics::CustomEvent)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x31924cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::Analytics*>::get(),
                        "CustomEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::Analytics.CustomEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Analytics::AnalyticsResult (*)(::StringW, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*)>(&::UnityEngine::Analytics::Analytics::CustomEvent)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x3192594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::Analytics*>::get(),
                        "CustomEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::Analytics.RegisterEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Analytics::AnalyticsResult (*)(::StringW, int32_t, int32_t, ::StringW, ::StringW)>(&::UnityEngine::Analytics::Analytics::RegisterEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3192770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::Analytics*>::get(),
                        "RegisterEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::Analytics.RegisterEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Analytics::AnalyticsResult (*)(::StringW, int32_t, int32_t, ::StringW, int32_t, ::StringW, ::StringW)>(&::UnityEngine::Analytics::Analytics::RegisterEvent)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3192800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::Analytics*>::get(),
                        "RegisterEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::Analytics.SendEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Analytics::AnalyticsResult (*)(::StringW, ::System::Object*, int32_t, ::StringW)>(&::UnityEngine::Analytics::Analytics::SendEvent)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3192920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::Analytics*>::get(),
                        "SendEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::Analytics::Analytics::IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::Analytics*>::get(),
                        "IsInitialized",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::Analytics::SendCustomEventName(::StringW  customEventName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::Analytics*>::get(),
                        "SendCustomEventName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::AnalyticsResult, false>(nullptr, ___internal_method, customEventName);
}
inline ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::Analytics::SendCustomEvent(::UnityEngine::Analytics::CustomEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::Analytics*>::get(),
                        "SendCustomEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Analytics::CustomEventData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::AnalyticsResult, false>(nullptr, ___internal_method, eventData);
}
inline ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::Analytics::RegisterEventWithLimit(::StringW  eventName, int32_t  maxEventPerHour, int32_t  maxItems, ::StringW  vendorKey, int32_t  ver, ::StringW  prefix, ::StringW  assemblyInfo, bool  notifyServer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::Analytics*>::get(),
                        "RegisterEventWithLimit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::AnalyticsResult, false>(nullptr, ___internal_method, eventName, maxEventPerHour, maxItems, vendorKey, ver, prefix, assemblyInfo, notifyServer);
}
inline ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::Analytics::SendEventWithLimit(::StringW  eventName, ::System::Object*  parameters, int32_t  ver, ::StringW  prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::Analytics*>::get(),
                        "SendEventWithLimit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::AnalyticsResult, false>(nullptr, ___internal_method, eventName, parameters, ver, prefix);
}
inline ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::Analytics::CustomEvent(::StringW  customEventName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::Analytics*>::get(),
                        "CustomEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::AnalyticsResult, false>(nullptr, ___internal_method, customEventName);
}
inline ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::Analytics::CustomEvent(::StringW  customEventName, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::Analytics*>::get(),
                        "CustomEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::AnalyticsResult, false>(nullptr, ___internal_method, customEventName, eventData);
}
inline ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::Analytics::RegisterEvent(::StringW  eventName, int32_t  maxEventPerHour, int32_t  maxItems, ::StringW  vendorKey, ::StringW  prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::Analytics*>::get(),
                        "RegisterEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::AnalyticsResult, false>(nullptr, ___internal_method, eventName, maxEventPerHour, maxItems, vendorKey, prefix);
}
inline ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::Analytics::RegisterEvent(::StringW  eventName, int32_t  maxEventPerHour, int32_t  maxItems, ::StringW  vendorKey, int32_t  ver, ::StringW  prefix, ::StringW  assemblyInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::Analytics*>::get(),
                        "RegisterEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::AnalyticsResult, false>(nullptr, ___internal_method, eventName, maxEventPerHour, maxItems, vendorKey, ver, prefix, assemblyInfo);
}
inline ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::Analytics::SendEvent(::StringW  eventName, ::System::Object*  parameters, int32_t  ver, ::StringW  prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::Analytics*>::get(),
                        "SendEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::AnalyticsResult, false>(nullptr, ___internal_method, eventName, parameters, ver, prefix);
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::Analytics::Analytics()   {
}
