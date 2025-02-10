#pragma once
// IWYU pragma private; include "VROSC/RotationalTicker.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__SignalFilter_impl.hpp"
#include "VROSC/zzzz__RotationalTicker_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/zzzz__RotationalTicker_def.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::RotationalTicker_TrackedDirection::RotationalTicker_TrackedDirection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::RotationalTicker_TrackedDirection::RotationalTicker_TrackedDirection()   {
}
constexpr ::VROSC::RotationalTicker_TrackedDirection  VROSC::RotationalTicker_TrackedDirection::Clockwise{static_cast<int32_t>(0x0)};
constexpr ::VROSC::RotationalTicker_TrackedDirection  VROSC::RotationalTicker_TrackedDirection::CounterClockwise{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::VROSC::RotationalTicker.FilterSignal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::RotationalTicker::*)(::VROSC::Signal*)>(&::VROSC::RotationalTicker::FilterSignal)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1725304;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RotationalTicker*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RotationalTicker*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::RotationalTicker.TickCounterClockwise
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::RotationalTicker::*)()>(&::VROSC::RotationalTicker::TickCounterClockwise)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1725534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RotationalTicker*>::get(),
                        "TickCounterClockwise",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::RotationalTicker.TickClockwise
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::RotationalTicker::*)()>(&::VROSC::RotationalTicker::TickClockwise)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1725550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RotationalTicker*>::get(),
                        "TickClockwise",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::RotationalTicker._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::RotationalTicker::*)()>(&::VROSC::RotationalTicker::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x172556c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RotationalTicker*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::RotationalTicker_TrackedDirection& VROSC::RotationalTicker::__cordl_internal_get__trackedDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackedDirection;
}
constexpr ::VROSC::RotationalTicker_TrackedDirection const& VROSC::RotationalTicker::__cordl_internal_get__trackedDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackedDirection;
}
constexpr void VROSC::RotationalTicker::__cordl_internal_set__trackedDirection(::VROSC::RotationalTicker_TrackedDirection  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trackedDirection = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::RotationalTicker::__cordl_internal_get__transformToTrack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformToTrack;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::RotationalTicker::__cordl_internal_get__transformToTrack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformToTrack;
}
constexpr void VROSC::RotationalTicker::__cordl_internal_set__transformToTrack(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transformToTrack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::RotationalTicker::__cordl_internal_get__lastTrackedTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastTrackedTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::RotationalTicker::__cordl_internal_get__lastTrackedTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastTrackedTransform;
}
constexpr void VROSC::RotationalTicker::__cordl_internal_set__lastTrackedTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastTrackedTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::RotationalTicker::__cordl_internal_get__tickDegrees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tickDegrees;
}
constexpr float_t const& VROSC::RotationalTicker::__cordl_internal_get__tickDegrees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tickDegrees;
}
constexpr void VROSC::RotationalTicker::__cordl_internal_set__tickDegrees(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tickDegrees = value;
}
constexpr ::UnityEngine::Vector3& VROSC::RotationalTicker::__cordl_internal_get__rotationalAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationalAxis;
}
constexpr ::UnityEngine::Vector3 const& VROSC::RotationalTicker::__cordl_internal_get__rotationalAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationalAxis;
}
constexpr void VROSC::RotationalTicker::__cordl_internal_set__rotationalAxis(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationalAxis = value;
}
constexpr ::UnityEngine::Vector3& VROSC::RotationalTicker::__cordl_internal_get__lastFrameLookDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFrameLookDirection;
}
constexpr ::UnityEngine::Vector3 const& VROSC::RotationalTicker::__cordl_internal_get__lastFrameLookDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFrameLookDirection;
}
constexpr void VROSC::RotationalTicker::__cordl_internal_set__lastFrameLookDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastFrameLookDirection = value;
}
constexpr ::UnityEngine::Vector3& VROSC::RotationalTicker::__cordl_internal_get__currentFrameLookDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentFrameLookDirection;
}
constexpr ::UnityEngine::Vector3 const& VROSC::RotationalTicker::__cordl_internal_get__currentFrameLookDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentFrameLookDirection;
}
constexpr void VROSC::RotationalTicker::__cordl_internal_set__currentFrameLookDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentFrameLookDirection = value;
}
constexpr float_t& VROSC::RotationalTicker::__cordl_internal_get__angleDifference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____angleDifference;
}
constexpr float_t const& VROSC::RotationalTicker::__cordl_internal_get__angleDifference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____angleDifference;
}
constexpr void VROSC::RotationalTicker::__cordl_internal_set__angleDifference(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____angleDifference = value;
}
constexpr bool& VROSC::RotationalTicker::__cordl_internal_get__tickedLastFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tickedLastFrame;
}
constexpr bool const& VROSC::RotationalTicker::__cordl_internal_get__tickedLastFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tickedLastFrame;
}
constexpr void VROSC::RotationalTicker::__cordl_internal_set__tickedLastFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tickedLastFrame = value;
}
inline void VROSC::RotationalTicker::FilterSignal(::VROSC::Signal*  signal)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RotationalTicker*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signal);
}
inline void VROSC::RotationalTicker::TickCounterClockwise()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RotationalTicker*>::get(),
                        "TickCounterClockwise",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::RotationalTicker::TickClockwise()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RotationalTicker*>::get(),
                        "TickClockwise",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::RotationalTicker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::RotationalTicker*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::RotationalTicker* VROSC::RotationalTicker::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::RotationalTicker*>());
}
// Ctor Parameters []
constexpr ::VROSC::RotationalTicker::RotationalTicker()   {
}
