#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputTracking.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__InputTracking_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/XR/zzzz__InputTracking_def.hpp"
#include "UnityEngine/XR/zzzz__XRNodeState_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::InputTracking_TrackingStateEventType::InputTracking_TrackingStateEventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::InputTracking_TrackingStateEventType::InputTracking_TrackingStateEventType()   {
}
constexpr ::UnityEngine::XR::InputTracking_TrackingStateEventType  UnityEngine::XR::InputTracking_TrackingStateEventType::NodeAdded{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::XR::InputTracking_TrackingStateEventType  UnityEngine::XR::InputTracking_TrackingStateEventType::NodeRemoved{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::XR::InputTracking_TrackingStateEventType  UnityEngine::XR::InputTracking_TrackingStateEventType::TrackingAcquired{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::XR::InputTracking_TrackingStateEventType  UnityEngine::XR::InputTracking_TrackingStateEventType::TrackingLost{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::UnityEngine::XR::InputTracking.InvokeTrackingEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::XR::InputTracking_TrackingStateEventType, ::UnityEngine::XR::XRNode, int64_t, bool)>(&::UnityEngine::XR::InputTracking::InvokeTrackingEvent)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x319a3ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputTracking*>::get(),
                        "InvokeTrackingEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::InputTracking_TrackingStateEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputTracking.GetNodeStates
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*)>(&::UnityEngine::XR::InputTracking::GetNodeStates)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x319a570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputTracking*>::get(),
                        "GetNodeStates",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputTracking.GetNodeStates_Internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*)>(&::UnityEngine::XR::InputTracking::GetNodeStates_Internal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x319a624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputTracking*>::get(),
                        "GetNodeStates_Internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::InputTracking::setStaticF_trackingAcquired(::System::Action_1<::UnityEngine::XR::XRNodeState>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "trackingAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputTracking*>::get>(std::forward<::System::Action_1<::UnityEngine::XR::XRNodeState>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::XRNodeState>* UnityEngine::XR::InputTracking::getStaticF_trackingAcquired()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "trackingAcquired", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputTracking*>::get>();
}
inline void UnityEngine::XR::InputTracking::setStaticF_trackingLost(::System::Action_1<::UnityEngine::XR::XRNodeState>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "trackingLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputTracking*>::get>(std::forward<::System::Action_1<::UnityEngine::XR::XRNodeState>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::XRNodeState>* UnityEngine::XR::InputTracking::getStaticF_trackingLost()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "trackingLost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputTracking*>::get>();
}
inline void UnityEngine::XR::InputTracking::setStaticF_nodeAdded(::System::Action_1<::UnityEngine::XR::XRNodeState>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "nodeAdded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputTracking*>::get>(std::forward<::System::Action_1<::UnityEngine::XR::XRNodeState>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::XRNodeState>* UnityEngine::XR::InputTracking::getStaticF_nodeAdded()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "nodeAdded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputTracking*>::get>();
}
inline void UnityEngine::XR::InputTracking::setStaticF_nodeRemoved(::System::Action_1<::UnityEngine::XR::XRNodeState>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "nodeRemoved", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputTracking*>::get>(std::forward<::System::Action_1<::UnityEngine::XR::XRNodeState>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::XRNodeState>* UnityEngine::XR::InputTracking::getStaticF_nodeRemoved()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "nodeRemoved", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputTracking*>::get>();
}
inline void UnityEngine::XR::InputTracking::InvokeTrackingEvent(::UnityEngine::XR::InputTracking_TrackingStateEventType  eventType, ::UnityEngine::XR::XRNode  nodeType, int64_t  uniqueID, bool  tracked)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputTracking*>::get(),
                        "InvokeTrackingEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::InputTracking_TrackingStateEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, eventType, nodeType, uniqueID, tracked);
}
inline void UnityEngine::XR::InputTracking::GetNodeStates(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*  nodeStates)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputTracking*>::get(),
                        "GetNodeStates",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nodeStates);
}
inline void UnityEngine::XR::InputTracking::GetNodeStates_Internal(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*  nodeStates)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputTracking*>::get(),
                        "GetNodeStates_Internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, nodeStates);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::InputTracking::InputTracking()   {
}
