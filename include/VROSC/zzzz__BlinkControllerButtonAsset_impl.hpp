#pragma once
// IWYU pragma private; include "VROSC/BlinkControllerButtonAsset.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "VROSC/zzzz__BlinkControllerButtonBehaviour_impl.hpp"
#include "VROSC/zzzz__HandType_impl.hpp"
#include "VROSC/zzzz__TriggerButton_impl.hpp"
#include "VROSC/zzzz__BlinkControllerButtonAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "VROSC/zzzz__BlinkControllerButtonBehaviour_def.hpp"
//  Writing Method size for method: ::VROSC::BlinkControllerButtonAsset.CreatePlayable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::VROSC::BlinkControllerButtonAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::VROSC::BlinkControllerButtonAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x176eb04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonAsset*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonAsset*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BlinkControllerButtonAsset._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BlinkControllerButtonAsset::*)()>(&::VROSC::BlinkControllerButtonAsset::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x176ed70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::BlinkControllerButtonBehaviour*& VROSC::BlinkControllerButtonAsset::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::VROSC::BlinkControllerButtonBehaviour* const& VROSC::BlinkControllerButtonAsset::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void VROSC::BlinkControllerButtonAsset::__cordl_internal_set_settings(::VROSC::BlinkControllerButtonBehaviour*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::HandType& VROSC::BlinkControllerButtonAsset::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::VROSC::HandType const& VROSC::BlinkControllerButtonAsset::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void VROSC::BlinkControllerButtonAsset::__cordl_internal_set__hand(::VROSC::HandType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::VROSC::TriggerButton& VROSC::BlinkControllerButtonAsset::__cordl_internal_get__button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr ::VROSC::TriggerButton const& VROSC::BlinkControllerButtonAsset::__cordl_internal_get__button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr void VROSC::BlinkControllerButtonAsset::__cordl_internal_set__button(::VROSC::TriggerButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____button = value;
}
constexpr ::UnityEngine::Color& VROSC::BlinkControllerButtonAsset::__cordl_internal_get__color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____color;
}
constexpr ::UnityEngine::Color const& VROSC::BlinkControllerButtonAsset::__cordl_internal_get__color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____color;
}
constexpr void VROSC::BlinkControllerButtonAsset::__cordl_internal_set__color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____color = value;
}
constexpr float_t& VROSC::BlinkControllerButtonAsset::__cordl_internal_get__fadeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeTime;
}
constexpr float_t const& VROSC::BlinkControllerButtonAsset::__cordl_internal_get__fadeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeTime;
}
constexpr void VROSC::BlinkControllerButtonAsset::__cordl_internal_set__fadeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadeTime = value;
}
constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction& VROSC::BlinkControllerButtonAsset::__cordl_internal_get__onAssetStartAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAssetStartAction;
}
constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction const& VROSC::BlinkControllerButtonAsset::__cordl_internal_get__onAssetStartAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAssetStartAction;
}
constexpr void VROSC::BlinkControllerButtonAsset::__cordl_internal_set__onAssetStartAction(::VROSC::BlinkControllerButtonBehaviour_EventAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onAssetStartAction = value;
}
constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction& VROSC::BlinkControllerButtonAsset::__cordl_internal_get__onAssetStopAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAssetStopAction;
}
constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction const& VROSC::BlinkControllerButtonAsset::__cordl_internal_get__onAssetStopAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAssetStopAction;
}
constexpr void VROSC::BlinkControllerButtonAsset::__cordl_internal_set__onAssetStopAction(::VROSC::BlinkControllerButtonBehaviour_EventAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onAssetStopAction = value;
}
constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction& VROSC::BlinkControllerButtonAsset::__cordl_internal_get__onTimelineStartAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onTimelineStartAction;
}
constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction const& VROSC::BlinkControllerButtonAsset::__cordl_internal_get__onTimelineStartAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onTimelineStartAction;
}
constexpr void VROSC::BlinkControllerButtonAsset::__cordl_internal_set__onTimelineStartAction(::VROSC::BlinkControllerButtonBehaviour_EventAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onTimelineStartAction = value;
}
constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction& VROSC::BlinkControllerButtonAsset::__cordl_internal_get__onTimelineStopAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onTimelineStopAction;
}
constexpr ::VROSC::BlinkControllerButtonBehaviour_EventAction const& VROSC::BlinkControllerButtonAsset::__cordl_internal_get__onTimelineStopAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onTimelineStopAction;
}
constexpr void VROSC::BlinkControllerButtonAsset::__cordl_internal_set__onTimelineStopAction(::VROSC::BlinkControllerButtonBehaviour_EventAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onTimelineStopAction = value;
}
inline ::UnityEngine::Playables::Playable VROSC::BlinkControllerButtonAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonAsset*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, owner);
}
inline void VROSC::BlinkControllerButtonAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BlinkControllerButtonAsset*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::BlinkControllerButtonAsset* VROSC::BlinkControllerButtonAsset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::BlinkControllerButtonAsset*>());
}
// Ctor Parameters []
constexpr ::VROSC::BlinkControllerButtonAsset::BlinkControllerButtonAsset()   {
}
