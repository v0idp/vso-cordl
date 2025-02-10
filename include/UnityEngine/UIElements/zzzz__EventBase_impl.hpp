#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventBase.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCategory_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PropagationPhase_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCategory_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__PropagationPaths_def.hpp"
#include "UnityEngine/UIElements/zzzz__PropagationPhase_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::EventBase_EventPropagation::EventBase_EventPropagation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventBase_EventPropagation::EventBase_EventPropagation()   {
}
constexpr ::UnityEngine::UIElements::EventBase_EventPropagation  UnityEngine::UIElements::EventBase_EventPropagation::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::EventBase_EventPropagation  UnityEngine::UIElements::EventBase_EventPropagation::Bubbles{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::EventBase_EventPropagation  UnityEngine::UIElements::EventBase_EventPropagation::TricklesDown{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::EventBase_EventPropagation  UnityEngine::UIElements::EventBase_EventPropagation::Cancellable{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UIElements::EventBase_EventPropagation  UnityEngine::UIElements::EventBase_EventPropagation::SkipDisabledElements{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::UIElements::EventBase_EventPropagation  UnityEngine::UIElements::EventBase_EventPropagation::IgnoreCompositeRoots{static_cast<int32_t>(0x10)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::EventBase_LifeCycleStatus::EventBase_LifeCycleStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventBase_LifeCycleStatus::EventBase_LifeCycleStatus()   {
}
constexpr ::UnityEngine::UIElements::EventBase_LifeCycleStatus  UnityEngine::UIElements::EventBase_LifeCycleStatus::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::EventBase_LifeCycleStatus  UnityEngine::UIElements::EventBase_LifeCycleStatus::PropagationStopped{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::EventBase_LifeCycleStatus  UnityEngine::UIElements::EventBase_LifeCycleStatus::ImmediatePropagationStopped{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::EventBase_LifeCycleStatus  UnityEngine::UIElements::EventBase_LifeCycleStatus::DefaultPrevented{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UIElements::EventBase_LifeCycleStatus  UnityEngine::UIElements::EventBase_LifeCycleStatus::Dispatching{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::UIElements::EventBase_LifeCycleStatus  UnityEngine::UIElements::EventBase_LifeCycleStatus::Pooled{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::UIElements::EventBase_LifeCycleStatus  UnityEngine::UIElements::EventBase_LifeCycleStatus::IMGUIEventIsValid{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::UIElements::EventBase_LifeCycleStatus  UnityEngine::UIElements::EventBase_LifeCycleStatus::StopDispatch{static_cast<int32_t>(0x40)};
constexpr ::UnityEngine::UIElements::EventBase_LifeCycleStatus  UnityEngine::UIElements::EventBase_LifeCycleStatus::PropagateToIMGUI{static_cast<int32_t>(0x80)};
constexpr ::UnityEngine::UIElements::EventBase_LifeCycleStatus  UnityEngine::UIElements::EventBase_LifeCycleStatus::Dispatched{static_cast<int32_t>(0x200)};
constexpr ::UnityEngine::UIElements::EventBase_LifeCycleStatus  UnityEngine::UIElements::EventBase_LifeCycleStatus::Processed{static_cast<int32_t>(0x400)};
constexpr ::UnityEngine::UIElements::EventBase_LifeCycleStatus  UnityEngine::UIElements::EventBase_LifeCycleStatus::ProcessedByFocusController{static_cast<int32_t>(0x800)};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.RegisterEventType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&::UnityEngine::UIElements::EventBase::RegisterEventType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x30e9244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "RegisterEventType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_eventTypeId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_eventTypeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30e9294;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_eventCategory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventCategory (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_eventCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30e929c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_eventCategory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_timestamp
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30e92a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_timestamp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_timestamp
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(int64_t)>(&::UnityEngine::UIElements::EventBase::set_timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30e92ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_timestamp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_eventId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_eventId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30e92b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_eventId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_eventId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(uint64_t)>(&::UnityEngine::UIElements::EventBase::set_eventId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30e92bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_eventId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_triggerEventId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(uint64_t)>(&::UnityEngine::UIElements::EventBase::set_triggerEventId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30e92c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_triggerEventId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.SetTriggerEventId
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(uint64_t)>(&::UnityEngine::UIElements::EventBase::SetTriggerEventId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30e92cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "SetTriggerEventId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_propagation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase_EventPropagation (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_propagation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30e92d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_propagation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_propagation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(::UnityEngine::UIElements::EventBase_EventPropagation)>(&::UnityEngine::UIElements::EventBase::set_propagation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30e92dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_propagation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase_EventPropagation>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_path
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::PropagationPaths* (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_path)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30e92e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_path",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_path
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(::UnityEngine::UIElements::PropagationPaths*)>(&::UnityEngine::UIElements::EventBase::set_path)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30e92ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_path",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PropagationPaths*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_lifeCycleStatus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase_LifeCycleStatus (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_lifeCycleStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30e92f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_lifeCycleStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_lifeCycleStatus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(::UnityEngine::UIElements::EventBase_LifeCycleStatus)>(&::UnityEngine::UIElements::EventBase::set_lifeCycleStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30e92fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_lifeCycleStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase_LifeCycleStatus>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.PreDispatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::PreDispatch)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x30e9304;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.PreDispatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(::UnityEngine::UIElements::IPanel*)>(&::UnityEngine::UIElements::EventBase::PreDispatch)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x30e9308;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.PostDispatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::PostDispatch)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x30e9314;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.PostDispatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(::UnityEngine::UIElements::IPanel*)>(&::UnityEngine::UIElements::EventBase::PostDispatch)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x30e9318;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_bubbles
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_bubbles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x30e9360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_bubbles",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_tricklesDown
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_tricklesDown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x30e936c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_tricklesDown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_bubblesOrTricklesDown
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_bubblesOrTricklesDown)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x30e5ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_bubblesOrTricklesDown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_skipDisabledElements
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_skipDisabledElements)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x30e9378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_skipDisabledElements",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_skipDisabledElements
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(bool)>(&::UnityEngine::UIElements::EventBase::set_skipDisabledElements)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x30e9384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_skipDisabledElements",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_ignoreCompositeRoots
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_ignoreCompositeRoots)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x30e93a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_ignoreCompositeRoots",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_ignoreCompositeRoots
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(bool)>(&::UnityEngine::UIElements::EventBase::set_ignoreCompositeRoots)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x30e93b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_ignoreCompositeRoots",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_leafTarget
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IEventHandler* (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_leafTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30e93d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_leafTarget",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_leafTarget
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(::UnityEngine::UIElements::IEventHandler*)>(&::UnityEngine::UIElements::EventBase::set_leafTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30e93d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_leafTarget",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_target
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IEventHandler* (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30e6190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_target",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_target
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(::UnityEngine::UIElements::IEventHandler*)>(&::UnityEngine::UIElements::EventBase::set_target)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x30e6010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_target",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_skipElements
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventHandler*>* (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_skipElements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30e93e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_skipElements",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.Skip
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventBase::*)(::UnityEngine::UIElements::IEventHandler*)>(&::UnityEngine::UIElements::EventBase::Skip)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x30e7188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "Skip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_isPropagationStopped
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_isPropagationStopped)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x30e5cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_isPropagationStopped",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_isPropagationStopped
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(bool)>(&::UnityEngine::UIElements::EventBase::set_isPropagationStopped)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x30e93e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_isPropagationStopped",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.StopPropagation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::StopPropagation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x30dc2d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "StopPropagation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_isImmediatePropagationStopped
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_isImmediatePropagationStopped)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x30e93f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_isImmediatePropagationStopped",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_isImmediatePropagationStopped
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(bool)>(&::UnityEngine::UIElements::EventBase::set_isImmediatePropagationStopped)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x30e9404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_isImmediatePropagationStopped",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.StopImmediatePropagation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::StopImmediatePropagation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x30e9424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "StopImmediatePropagation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_isDefaultPrevented
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_isDefaultPrevented)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x30e9434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_isDefaultPrevented",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_isDefaultPrevented
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(bool)>(&::UnityEngine::UIElements::EventBase::set_isDefaultPrevented)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x30e9440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_isDefaultPrevented",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.PreventDefault
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::PreventDefault)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x30e71e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "PreventDefault",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_propagationPhase
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::PropagationPhase (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_propagationPhase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30e9460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_propagationPhase",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_propagationPhase
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(::UnityEngine::UIElements::PropagationPhase)>(&::UnityEngine::UIElements::EventBase::set_propagationPhase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30e9468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_propagationPhase",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PropagationPhase>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_currentTarget
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IEventHandler* (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_currentTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30e9470;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_currentTarget
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(::UnityEngine::UIElements::IEventHandler*)>(&::UnityEngine::UIElements::EventBase::set_currentTarget)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x30e9478;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_dispatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_dispatch)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x30e9564;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_dispatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_dispatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(bool)>(&::UnityEngine::UIElements::EventBase::set_dispatch)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x30e9570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_dispatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.MarkReceivedByDispatcher
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::MarkReceivedByDispatcher)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x30e4eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "MarkReceivedByDispatcher",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_dispatched
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_dispatched)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x30e95b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_dispatched",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_dispatched
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(bool)>(&::UnityEngine::UIElements::EventBase::set_dispatched)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x30e9590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_dispatched",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_processed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_processed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x30e95bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_processed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_processed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(bool)>(&::UnityEngine::UIElements::EventBase::set_processed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x30e9340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_processed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_processedByFocusController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_processedByFocusController)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x30e95c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_processedByFocusController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_processedByFocusController
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(bool)>(&::UnityEngine::UIElements::EventBase::set_processedByFocusController)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x30e95d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_processedByFocusController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_stopDispatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_stopDispatch)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x30e5cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_stopDispatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_stopDispatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(bool)>(&::UnityEngine::UIElements::EventBase::set_stopDispatch)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x30e77a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_stopDispatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_propagateToIMGUI
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_propagateToIMGUI)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x30e71f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_propagateToIMGUI",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_propagateToIMGUI
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(bool)>(&::UnityEngine::UIElements::EventBase::set_propagateToIMGUI)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x30e7788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_propagateToIMGUI",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_imguiEventIsValid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_imguiEventIsValid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x30e95f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_imguiEventIsValid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_imguiEventIsValid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(bool)>(&::UnityEngine::UIElements::EventBase::set_imguiEventIsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x30e9600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_imguiEventIsValid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_imguiEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Event* (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_imguiEvent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x30e4f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_imguiEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_imguiEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(::UnityEngine::Event*)>(&::UnityEngine::UIElements::EventBase::set_imguiEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x30e9620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_imguiEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_originalMousePosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_originalMousePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30e96d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_originalMousePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_originalMousePosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::EventBase::set_originalMousePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30e96d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_originalMousePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::Init)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x30e96e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.LocalInit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::LocalInit)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x30e96e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "LocalInit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(::UnityEngine::UIElements::EventCategory)>(&::UnityEngine::UIElements::EventBase::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x30e9848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCategory>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.get_pooled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::get_pooled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x30e98d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_pooled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.set_pooled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)(bool)>(&::UnityEngine::UIElements::EventBase::set_pooled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x30e9828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_pooled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.Acquire
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::Acquire)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventBase.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventBase::*)()>(&::UnityEngine::UIElements::EventBase::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::EventCategory& UnityEngine::UIElements::EventBase::__cordl_internal_get__eventCategory_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventCategory_k__BackingField;
}
constexpr ::UnityEngine::UIElements::EventCategory const& UnityEngine::UIElements::EventBase::__cordl_internal_get__eventCategory_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventCategory_k__BackingField;
}
constexpr void UnityEngine::UIElements::EventBase::__cordl_internal_set__eventCategory_k__BackingField(::UnityEngine::UIElements::EventCategory  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventCategory_k__BackingField = value;
}
constexpr int64_t& UnityEngine::UIElements::EventBase::__cordl_internal_get__timestamp_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timestamp_k__BackingField;
}
constexpr int64_t const& UnityEngine::UIElements::EventBase::__cordl_internal_get__timestamp_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timestamp_k__BackingField;
}
constexpr void UnityEngine::UIElements::EventBase::__cordl_internal_set__timestamp_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timestamp_k__BackingField = value;
}
constexpr uint64_t& UnityEngine::UIElements::EventBase::__cordl_internal_get__eventId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventId_k__BackingField;
}
constexpr uint64_t const& UnityEngine::UIElements::EventBase::__cordl_internal_get__eventId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventId_k__BackingField;
}
constexpr void UnityEngine::UIElements::EventBase::__cordl_internal_set__eventId_k__BackingField(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventId_k__BackingField = value;
}
constexpr uint64_t& UnityEngine::UIElements::EventBase::__cordl_internal_get__triggerEventId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerEventId_k__BackingField;
}
constexpr uint64_t const& UnityEngine::UIElements::EventBase::__cordl_internal_get__triggerEventId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerEventId_k__BackingField;
}
constexpr void UnityEngine::UIElements::EventBase::__cordl_internal_set__triggerEventId_k__BackingField(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triggerEventId_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::EventBase_EventPropagation& UnityEngine::UIElements::EventBase::__cordl_internal_get__propagation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propagation_k__BackingField;
}
constexpr ::UnityEngine::UIElements::EventBase_EventPropagation const& UnityEngine::UIElements::EventBase::__cordl_internal_get__propagation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propagation_k__BackingField;
}
constexpr void UnityEngine::UIElements::EventBase::__cordl_internal_set__propagation_k__BackingField(::UnityEngine::UIElements::EventBase_EventPropagation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____propagation_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::PropagationPaths*& UnityEngine::UIElements::EventBase::__cordl_internal_get__path_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____path_k__BackingField;
}
constexpr ::UnityEngine::UIElements::PropagationPaths* const& UnityEngine::UIElements::EventBase::__cordl_internal_get__path_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____path_k__BackingField;
}
constexpr void UnityEngine::UIElements::EventBase::__cordl_internal_set__path_k__BackingField(::UnityEngine::UIElements::PropagationPaths*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____path_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::EventBase_LifeCycleStatus& UnityEngine::UIElements::EventBase::__cordl_internal_get__lifeCycleStatus_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lifeCycleStatus_k__BackingField;
}
constexpr ::UnityEngine::UIElements::EventBase_LifeCycleStatus const& UnityEngine::UIElements::EventBase::__cordl_internal_get__lifeCycleStatus_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lifeCycleStatus_k__BackingField;
}
constexpr void UnityEngine::UIElements::EventBase::__cordl_internal_set__lifeCycleStatus_k__BackingField(::UnityEngine::UIElements::EventBase_LifeCycleStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lifeCycleStatus_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::IEventHandler*& UnityEngine::UIElements::EventBase::__cordl_internal_get__leafTarget_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leafTarget_k__BackingField;
}
constexpr ::UnityEngine::UIElements::IEventHandler* const& UnityEngine::UIElements::EventBase::__cordl_internal_get__leafTarget_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leafTarget_k__BackingField;
}
constexpr void UnityEngine::UIElements::EventBase::__cordl_internal_set__leafTarget_k__BackingField(::UnityEngine::UIElements::IEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leafTarget_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::IEventHandler*& UnityEngine::UIElements::EventBase::__cordl_internal_get_m_Target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Target;
}
constexpr ::UnityEngine::UIElements::IEventHandler* const& UnityEngine::UIElements::EventBase::__cordl_internal_get_m_Target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Target;
}
constexpr void UnityEngine::UIElements::EventBase::__cordl_internal_set_m_Target(::UnityEngine::UIElements::IEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventHandler*>*& UnityEngine::UIElements::EventBase::__cordl_internal_get__skipElements_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skipElements_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventHandler*>* const& UnityEngine::UIElements::EventBase::__cordl_internal_get__skipElements_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skipElements_k__BackingField;
}
constexpr void UnityEngine::UIElements::EventBase::__cordl_internal_set__skipElements_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventHandler*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____skipElements_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::PropagationPhase& UnityEngine::UIElements::EventBase::__cordl_internal_get__propagationPhase_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propagationPhase_k__BackingField;
}
constexpr ::UnityEngine::UIElements::PropagationPhase const& UnityEngine::UIElements::EventBase::__cordl_internal_get__propagationPhase_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propagationPhase_k__BackingField;
}
constexpr void UnityEngine::UIElements::EventBase::__cordl_internal_set__propagationPhase_k__BackingField(::UnityEngine::UIElements::PropagationPhase  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____propagationPhase_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::IEventHandler*& UnityEngine::UIElements::EventBase::__cordl_internal_get_m_CurrentTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentTarget;
}
constexpr ::UnityEngine::UIElements::IEventHandler* const& UnityEngine::UIElements::EventBase::__cordl_internal_get_m_CurrentTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentTarget;
}
constexpr void UnityEngine::UIElements::EventBase::__cordl_internal_set_m_CurrentTarget(::UnityEngine::UIElements::IEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CurrentTarget)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Event*& UnityEngine::UIElements::EventBase::__cordl_internal_get_m_ImguiEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ImguiEvent;
}
constexpr ::UnityEngine::Event* const& UnityEngine::UIElements::EventBase::__cordl_internal_get_m_ImguiEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ImguiEvent;
}
constexpr void UnityEngine::UIElements::EventBase::__cordl_internal_set_m_ImguiEvent(::UnityEngine::Event*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ImguiEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::EventBase::__cordl_internal_get__originalMousePosition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalMousePosition_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::EventBase::__cordl_internal_get__originalMousePosition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalMousePosition_k__BackingField;
}
constexpr void UnityEngine::UIElements::EventBase::__cordl_internal_set__originalMousePosition_k__BackingField(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____originalMousePosition_k__BackingField = value;
}
inline void UnityEngine::UIElements::EventBase::setStaticF_s_LastTypeId(int64_t  value)  {
::cordl_internals::setStaticField<int64_t, "s_LastTypeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get>(std::forward<int64_t>(value));
}
inline int64_t UnityEngine::UIElements::EventBase::getStaticF_s_LastTypeId()  {
return ::cordl_internals::getStaticField<int64_t, "s_LastTypeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get>();
}
inline void UnityEngine::UIElements::EventBase::setStaticF_s_NextEventId(uint64_t  value)  {
::cordl_internals::setStaticField<uint64_t, "s_NextEventId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get>(std::forward<uint64_t>(value));
}
inline uint64_t UnityEngine::UIElements::EventBase::getStaticF_s_NextEventId()  {
return ::cordl_internals::getStaticField<uint64_t, "s_NextEventId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get>();
}
inline int64_t UnityEngine::UIElements::EventBase::RegisterEventType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "RegisterEventType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
inline int64_t UnityEngine::UIElements::EventBase::get_eventTypeId()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventCategory UnityEngine::UIElements::EventBase::get_eventCategory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_eventCategory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventCategory, false>(this, ___internal_method);
}
inline int64_t UnityEngine::UIElements::EventBase::get_timestamp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_timestamp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_timestamp(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_timestamp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint64_t UnityEngine::UIElements::EventBase::get_eventId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_eventId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_eventId(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_eventId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::EventBase::set_triggerEventId(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_triggerEventId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::EventBase::SetTriggerEventId(uint64_t  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "SetTriggerEventId",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline ::UnityEngine::UIElements::EventBase_EventPropagation UnityEngine::UIElements::EventBase::get_propagation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_propagation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase_EventPropagation, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_propagation(::UnityEngine::UIElements::EventBase_EventPropagation  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_propagation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase_EventPropagation>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::PropagationPaths* UnityEngine::UIElements::EventBase::get_path()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_path",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PropagationPaths*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_path(::UnityEngine::UIElements::PropagationPaths*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_path",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PropagationPaths*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::EventBase_LifeCycleStatus UnityEngine::UIElements::EventBase::get_lifeCycleStatus()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_lifeCycleStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase_LifeCycleStatus, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_lifeCycleStatus(::UnityEngine::UIElements::EventBase_LifeCycleStatus  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_lifeCycleStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase_LifeCycleStatus>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::EventBase::PreDispatch()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::PreDispatch(::UnityEngine::UIElements::IPanel*  panel)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::EventBase::PostDispatch()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::PostDispatch(::UnityEngine::UIElements::IPanel*  panel)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, panel);
}
inline bool UnityEngine::UIElements::EventBase::get_bubbles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_bubbles",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::EventBase::get_tricklesDown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_tricklesDown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::EventBase::get_bubblesOrTricklesDown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_bubblesOrTricklesDown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::EventBase::get_skipDisabledElements()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_skipDisabledElements",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_skipDisabledElements(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_skipDisabledElements",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::EventBase::get_ignoreCompositeRoots()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_ignoreCompositeRoots",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_ignoreCompositeRoots(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_ignoreCompositeRoots",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::IEventHandler* UnityEngine::UIElements::EventBase::get_leafTarget()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_leafTarget",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IEventHandler*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_leafTarget(::UnityEngine::UIElements::IEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_leafTarget",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::IEventHandler* UnityEngine::UIElements::EventBase::get_target()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_target",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IEventHandler*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_target(::UnityEngine::UIElements::IEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_target",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventHandler*>* UnityEngine::UIElements::EventBase::get_skipElements()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_skipElements",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventHandler*>*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::EventBase::Skip(::UnityEngine::UIElements::IEventHandler*  h)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "Skip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, h);
}
inline bool UnityEngine::UIElements::EventBase::get_isPropagationStopped()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_isPropagationStopped",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_isPropagationStopped(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_isPropagationStopped",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::EventBase::StopPropagation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "StopPropagation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::EventBase::get_isImmediatePropagationStopped()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_isImmediatePropagationStopped",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_isImmediatePropagationStopped(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_isImmediatePropagationStopped",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::EventBase::StopImmediatePropagation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "StopImmediatePropagation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::EventBase::get_isDefaultPrevented()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_isDefaultPrevented",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_isDefaultPrevented(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_isDefaultPrevented",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::EventBase::PreventDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "PreventDefault",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PropagationPhase UnityEngine::UIElements::EventBase::get_propagationPhase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_propagationPhase",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PropagationPhase, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_propagationPhase(::UnityEngine::UIElements::PropagationPhase  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_propagationPhase",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PropagationPhase>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::IEventHandler* UnityEngine::UIElements::EventBase::get_currentTarget()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IEventHandler*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_currentTarget(::UnityEngine::UIElements::IEventHandler*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::EventBase::get_dispatch()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_dispatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_dispatch(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_dispatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::EventBase::MarkReceivedByDispatcher()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "MarkReceivedByDispatcher",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::EventBase::get_dispatched()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_dispatched",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_dispatched(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_dispatched",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::EventBase::get_processed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_processed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_processed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_processed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::EventBase::get_processedByFocusController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_processedByFocusController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_processedByFocusController(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_processedByFocusController",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::EventBase::get_stopDispatch()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_stopDispatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_stopDispatch(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_stopDispatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::EventBase::get_propagateToIMGUI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_propagateToIMGUI",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_propagateToIMGUI(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_propagateToIMGUI",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::EventBase::get_imguiEventIsValid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_imguiEventIsValid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_imguiEventIsValid(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_imguiEventIsValid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Event* UnityEngine::UIElements::EventBase::get_imguiEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_imguiEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Event*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_imguiEvent(::UnityEngine::Event*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_imguiEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::EventBase::get_originalMousePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_originalMousePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_originalMousePosition(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_originalMousePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::EventBase::Init()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::LocalInit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "LocalInit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::_ctor(::UnityEngine::UIElements::EventCategory  category)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCategory>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, category);
}
inline bool UnityEngine::UIElements::EventBase::get_pooled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "get_pooled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::set_pooled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                        "set_pooled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::EventBase::Acquire()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventBase::Dispose()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::EventBase::New_ctor(::UnityEngine::UIElements::EventCategory  category)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::EventBase*>(category));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::UIElements::EventBase::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::EventBase::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventBase::EventBase()   {
}
