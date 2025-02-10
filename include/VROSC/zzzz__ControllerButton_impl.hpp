#pragma once
// IWYU pragma private; include "VROSC/ControllerButton.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__ControllerComponent_impl.hpp"
#include "VROSC/zzzz__ControllerButton_def.hpp"
#include "VROSC/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::VROSC::ControllerButton.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ControllerButton::*)()>(&::VROSC::ControllerButton::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x17321d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerButton*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ControllerButton.LateUpdate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ControllerButton::*)()>(&::VROSC::ControllerButton::LateUpdate)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x1732224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerButton*>::get(),
                        "LateUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ControllerButton._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ControllerButton::*)()>(&::VROSC::ControllerButton::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x173242c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerButton*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& VROSC::ControllerButton::__cordl_internal_get__pressedPostionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressedPostionOffset;
}
constexpr ::UnityEngine::Vector3 const& VROSC::ControllerButton::__cordl_internal_get__pressedPostionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressedPostionOffset;
}
constexpr void VROSC::ControllerButton::__cordl_internal_set__pressedPostionOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pressedPostionOffset = value;
}
constexpr ::UnityEngine::Vector3& VROSC::ControllerButton::__cordl_internal_get__pressedRotaionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressedRotaionOffset;
}
constexpr ::UnityEngine::Vector3 const& VROSC::ControllerButton::__cordl_internal_get__pressedRotaionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressedRotaionOffset;
}
constexpr void VROSC::ControllerButton::__cordl_internal_set__pressedRotaionOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pressedRotaionOffset = value;
}
constexpr ::UnityW<::VROSC::InputDevice>& VROSC::ControllerButton::__cordl_internal_get__inputDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputDevice;
}
constexpr ::UnityW<::VROSC::InputDevice> const& VROSC::ControllerButton::__cordl_internal_get__inputDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputDevice;
}
constexpr void VROSC::ControllerButton::__cordl_internal_set__inputDevice(::UnityW<::VROSC::InputDevice>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputDevice)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::ControllerButton::__cordl_internal_get__trigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trigger;
}
constexpr bool const& VROSC::ControllerButton::__cordl_internal_get__trigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trigger;
}
constexpr void VROSC::ControllerButton::__cordl_internal_set__trigger(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trigger = value;
}
constexpr bool& VROSC::ControllerButton::__cordl_internal_get__grip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grip;
}
constexpr bool const& VROSC::ControllerButton::__cordl_internal_get__grip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grip;
}
constexpr void VROSC::ControllerButton::__cordl_internal_set__grip(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grip = value;
}
constexpr ::UnityEngine::Vector3& VROSC::ControllerButton::__cordl_internal_get__startPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startPosition;
}
constexpr ::UnityEngine::Vector3 const& VROSC::ControllerButton::__cordl_internal_get__startPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startPosition;
}
constexpr void VROSC::ControllerButton::__cordl_internal_set__startPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startPosition = value;
}
constexpr ::UnityEngine::Quaternion& VROSC::ControllerButton::__cordl_internal_get__startRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startRotation;
}
constexpr ::UnityEngine::Quaternion const& VROSC::ControllerButton::__cordl_internal_get__startRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startRotation;
}
constexpr void VROSC::ControllerButton::__cordl_internal_set__startRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startRotation = value;
}
inline void VROSC::ControllerButton::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerButton*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ControllerButton::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerButton*>::get(),
                        "LateUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ControllerButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerButton*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ControllerButton* VROSC::ControllerButton::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ControllerButton*>());
}
// Ctor Parameters []
constexpr ::VROSC::ControllerButton::ControllerButton()   {
}
