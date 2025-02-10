#pragma once
// IWYU pragma private; include "VROSC/ControllerStick.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "VROSC/zzzz__ControllerStick_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::VROSC::ControllerStick.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ControllerStick::*)()>(&::VROSC::ControllerStick::OnEnable)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x1733b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerStick*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ControllerStick.OnDisable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ControllerStick::*)()>(&::VROSC::ControllerStick::OnDisable)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1733c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerStick*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ControllerStick.EvaluateThumbstickInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ControllerStick::*)(::VROSC::InputDevice*, ::UnityEngine::Vector2)>(&::VROSC::ControllerStick::EvaluateThumbstickInput)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1733d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerStick*>::get(),
                        "EvaluateThumbstickInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ControllerStick._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ControllerStick::*)()>(&::VROSC::ControllerStick::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1733eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerStick*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::ControllerStick::__cordl_internal_get__limits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____limits;
}
constexpr float_t const& VROSC::ControllerStick::__cordl_internal_get__limits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____limits;
}
constexpr void VROSC::ControllerStick::__cordl_internal_set__limits(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____limits = value;
}
constexpr ::UnityW<::VROSC::InputDevice>& VROSC::ControllerStick::__cordl_internal_get__device()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____device;
}
constexpr ::UnityW<::VROSC::InputDevice> const& VROSC::ControllerStick::__cordl_internal_get__device() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____device;
}
constexpr void VROSC::ControllerStick::__cordl_internal_set__device(::UnityW<::VROSC::InputDevice>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____device)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Quaternion& VROSC::ControllerStick::__cordl_internal_get__startRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startRotation;
}
constexpr ::UnityEngine::Quaternion const& VROSC::ControllerStick::__cordl_internal_get__startRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startRotation;
}
constexpr void VROSC::ControllerStick::__cordl_internal_set__startRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startRotation = value;
}
inline void VROSC::ControllerStick::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerStick*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ControllerStick::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerStick*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ControllerStick::EvaluateThumbstickInput(::VROSC::InputDevice*  device, ::UnityEngine::Vector2  vector)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerStick*>::get(),
                        "EvaluateThumbstickInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, device, vector);
}
inline void VROSC::ControllerStick::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerStick*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ControllerStick* VROSC::ControllerStick::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ControllerStick*>());
}
// Ctor Parameters []
constexpr ::VROSC::ControllerStick::ControllerStick()   {
}
