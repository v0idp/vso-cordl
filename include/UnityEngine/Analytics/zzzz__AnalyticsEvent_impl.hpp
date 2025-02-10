#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/AnalyticsEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEvent_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsResult_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsEvent.get_debugMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Analytics::AnalyticsEvent::get_debugMode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2d95f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get(),
                        "get_debugMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsEvent.OnValidationFailed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::Analytics::AnalyticsEvent::OnValidationFailed)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d95f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get(),
                        "OnValidationFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsEvent.AddCustomEventData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*)>(&::UnityEngine::Analytics::AnalyticsEvent::AddCustomEventData)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x2d95fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get(),
                        "AddCustomEventData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsEvent.Custom
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Analytics::AnalyticsResult (*)(::StringW, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*)>(&::UnityEngine::Analytics::AnalyticsEvent::Custom)> {
  constexpr static std::size_t size = 0x8d0;
  constexpr static std::size_t addrs = 0x2d96388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get(),
                        "Custom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsEvent.ScreenVisit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Analytics::AnalyticsResult (*)(::StringW, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*)>(&::UnityEngine::Analytics::AnalyticsEvent::ScreenVisit)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2d96c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get(),
                        "ScreenVisit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsEvent.TutorialComplete
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Analytics::AnalyticsResult (*)(::StringW, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*)>(&::UnityEngine::Analytics::AnalyticsEvent::TutorialComplete)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2d96db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get(),
                        "TutorialComplete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsEvent.TutorialSkip
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Analytics::AnalyticsResult (*)(::StringW, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*)>(&::UnityEngine::Analytics::AnalyticsEvent::TutorialSkip)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2d96ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get(),
                        "TutorialSkip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsEvent.TutorialStart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Analytics::AnalyticsResult (*)(::StringW, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*)>(&::UnityEngine::Analytics::AnalyticsEvent::TutorialStart)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2d97010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get(),
                        "TutorialStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsEvent.TutorialStep
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Analytics::AnalyticsResult (*)(int32_t, ::StringW, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*)>(&::UnityEngine::Analytics::AnalyticsEvent::TutorialStep)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2d97140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get(),
                        "TutorialStep",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsEvent._s_StandardEventCallback_m__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*)>(&::UnityEngine::Analytics::AnalyticsEvent::_s_StandardEventCallback_m__0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d97644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get(),
                        "<s_StandardEventCallback>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Analytics::AnalyticsEvent::setStaticF_k_SdkVersion(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "k_SdkVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Analytics::AnalyticsEvent::getStaticF_k_SdkVersion()  {
return ::cordl_internals::getStaticField<::StringW, "k_SdkVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get>();
}
inline void UnityEngine::Analytics::AnalyticsEvent::setStaticF_s_StandardEventCallback(::System::Action_1<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>*, "s_StandardEventCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get>(std::forward<::System::Action_1<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>*>(value));
}
inline ::System::Action_1<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>* UnityEngine::Analytics::AnalyticsEvent::getStaticF_s_StandardEventCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>*, "s_StandardEventCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get>();
}
inline void UnityEngine::Analytics::AnalyticsEvent::setStaticF_m_EventData(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "m_EventData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* UnityEngine::Analytics::AnalyticsEvent::getStaticF_m_EventData()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*, "m_EventData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get>();
}
inline void UnityEngine::Analytics::AnalyticsEvent::setStaticF__debugMode(bool  value)  {
::cordl_internals::setStaticField<bool, "_debugMode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get>(std::forward<bool>(value));
}
inline bool UnityEngine::Analytics::AnalyticsEvent::getStaticF__debugMode()  {
return ::cordl_internals::getStaticField<bool, "_debugMode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get>();
}
inline void UnityEngine::Analytics::AnalyticsEvent::setStaticF_enumRenameTable(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "enumRenameTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* UnityEngine::Analytics::AnalyticsEvent::getStaticF_enumRenameTable()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, "enumRenameTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get>();
}
inline bool UnityEngine::Analytics::AnalyticsEvent::get_debugMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get(),
                        "get_debugMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Analytics::AnalyticsEvent::OnValidationFailed(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get(),
                        "OnValidationFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
inline void UnityEngine::Analytics::AnalyticsEvent::AddCustomEventData(::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get(),
                        "AddCustomEventData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, eventData);
}
inline ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::AnalyticsEvent::Custom(::StringW  eventName, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get(),
                        "Custom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::AnalyticsResult, false>(nullptr, ___internal_method, eventName, eventData);
}
inline ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::AnalyticsEvent::ScreenVisit(::StringW  screenName, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get(),
                        "ScreenVisit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::AnalyticsResult, false>(nullptr, ___internal_method, screenName, eventData);
}
inline ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::AnalyticsEvent::TutorialComplete(::StringW  tutorialId, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get(),
                        "TutorialComplete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::AnalyticsResult, false>(nullptr, ___internal_method, tutorialId, eventData);
}
inline ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::AnalyticsEvent::TutorialSkip(::StringW  tutorialId, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get(),
                        "TutorialSkip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::AnalyticsResult, false>(nullptr, ___internal_method, tutorialId, eventData);
}
inline ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::AnalyticsEvent::TutorialStart(::StringW  tutorialId, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get(),
                        "TutorialStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::AnalyticsResult, false>(nullptr, ___internal_method, tutorialId, eventData);
}
inline ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::AnalyticsEvent::TutorialStep(int32_t  stepIndex, ::StringW  tutorialId, ::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get(),
                        "TutorialStep",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::AnalyticsResult, false>(nullptr, ___internal_method, stepIndex, tutorialId, eventData);
}
inline void UnityEngine::Analytics::AnalyticsEvent::_s_StandardEventCallback_m__0(::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::AnalyticsEvent*>::get(),
                        "<s_StandardEventCallback>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::System::Object*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::AnalyticsEvent::AnalyticsEvent()   {
}
