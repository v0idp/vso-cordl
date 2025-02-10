#pragma once
// IWYU pragma private; include "VROSC/TutorialEventBehaviour.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "VROSC/zzzz__TutorialEvent_impl.hpp"
#include "VROSC/zzzz__TutorialEventBehaviour_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "VROSC/zzzz__TutorialEvent_def.hpp"
//  Writing Method size for method: ::VROSC::TutorialEventBehaviour.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialEventBehaviour::*)(::VROSC::TutorialEvent, ::VROSC::TutorialEvent)>(&::VROSC::TutorialEventBehaviour::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x176f3c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialEventBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialEvent>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialEventBehaviour.OnBehaviourPlay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialEventBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&::VROSC::TutorialEventBehaviour::OnBehaviourPlay)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x176f3d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialEventBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialEventBehaviour*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialEventBehaviour.OnBehaviourPause
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialEventBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&::VROSC::TutorialEventBehaviour::OnBehaviourPause)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x176f4a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialEventBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialEventBehaviour*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialEventBehaviour.SentTutorialEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialEventBehaviour::*)(::VROSC::TutorialEvent)>(&::VROSC::TutorialEventBehaviour::SentTutorialEvent)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x176f410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialEventBehaviour*>::get(),
                        "SentTutorialEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialEvent>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TutorialEventBehaviour._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TutorialEventBehaviour::*)()>(&::VROSC::TutorialEventBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x176f614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialEventBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::TutorialEvent& VROSC::TutorialEventBehaviour::__cordl_internal_get__startEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startEvent;
}
constexpr ::VROSC::TutorialEvent const& VROSC::TutorialEventBehaviour::__cordl_internal_get__startEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startEvent;
}
constexpr void VROSC::TutorialEventBehaviour::__cordl_internal_set__startEvent(::VROSC::TutorialEvent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startEvent = value;
}
constexpr ::VROSC::TutorialEvent& VROSC::TutorialEventBehaviour::__cordl_internal_get__endEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endEvent;
}
constexpr ::VROSC::TutorialEvent const& VROSC::TutorialEventBehaviour::__cordl_internal_get__endEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endEvent;
}
constexpr void VROSC::TutorialEventBehaviour::__cordl_internal_set__endEvent(::VROSC::TutorialEvent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____endEvent = value;
}
inline void VROSC::TutorialEventBehaviour::Setup(::VROSC::TutorialEvent  startEvent, ::VROSC::TutorialEvent  endEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialEventBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialEvent>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialEvent>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startEvent, endEvent);
}
inline void VROSC::TutorialEventBehaviour::OnBehaviourPlay(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialEventBehaviour*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info);
}
inline void VROSC::TutorialEventBehaviour::OnBehaviourPause(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialEventBehaviour*>::get(),
                    18
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info);
}
inline void VROSC::TutorialEventBehaviour::SentTutorialEvent(::VROSC::TutorialEvent  tutorialEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialEventBehaviour*>::get(),
                        "SentTutorialEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialEvent>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tutorialEvent);
}
inline void VROSC::TutorialEventBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TutorialEventBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TutorialEventBehaviour* VROSC::TutorialEventBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TutorialEventBehaviour*>());
}
// Ctor Parameters []
constexpr ::VROSC::TutorialEventBehaviour::TutorialEventBehaviour()   {
}
