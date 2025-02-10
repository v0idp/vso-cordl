#pragma once
// IWYU pragma private; include "VROSC/UIWristBand.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__UIWristBand_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__UISlider_def.hpp"
//  Writing Method size for method: ::VROSC::UIWristBand.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIWristBand::*)()>(&::VROSC::UIWristBand::Update)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1776c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIWristBand*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIWristBand.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIWristBand::*)(float_t)>(&::VROSC::UIWristBand::Setup)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1776cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIWristBand*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIWristBand.SetValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIWristBand::*)(float_t, ::VROSC::HandType)>(&::VROSC::UIWristBand::SetValue)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x1776ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIWristBand*>::get(),
                        "SetValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIWristBand.SetBarTransform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIWristBand::*)(::VROSC::HandType)>(&::VROSC::UIWristBand::SetBarTransform)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x1776e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIWristBand*>::get(),
                        "SetBarTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIWristBand.CalculateValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::UIWristBand::*)(float_t)>(&::VROSC::UIWristBand::CalculateValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1776e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIWristBand*>::get(),
                        "CalculateValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIWristBand._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIWristBand::*)()>(&::VROSC::UIWristBand::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1776fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIWristBand*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::UISlider>& VROSC::UIWristBand::__cordl_internal_get__leftSlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftSlider;
}
constexpr ::UnityW<::VROSC::UISlider> const& VROSC::UIWristBand::__cordl_internal_get__leftSlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftSlider;
}
constexpr void VROSC::UIWristBand::__cordl_internal_set__leftSlider(::UnityW<::VROSC::UISlider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftSlider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UISlider>& VROSC::UIWristBand::__cordl_internal_get__rightSlider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightSlider;
}
constexpr ::UnityW<::VROSC::UISlider> const& VROSC::UIWristBand::__cordl_internal_get__rightSlider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightSlider;
}
constexpr void VROSC::UIWristBand::__cordl_internal_set__rightSlider(::UnityW<::VROSC::UISlider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightSlider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::UIWristBand::__cordl_internal_get__tiltAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tiltAngle;
}
constexpr float_t const& VROSC::UIWristBand::__cordl_internal_get__tiltAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tiltAngle;
}
constexpr void VROSC::UIWristBand::__cordl_internal_set__tiltAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tiltAngle = value;
}
constexpr bool& VROSC::UIWristBand::__cordl_internal_get__shouldResetActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldResetActive;
}
constexpr bool const& VROSC::UIWristBand::__cordl_internal_get__shouldResetActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldResetActive;
}
constexpr void VROSC::UIWristBand::__cordl_internal_set__shouldResetActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shouldResetActive = value;
}
inline void VROSC::UIWristBand::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIWristBand*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UIWristBand::Setup(float_t  tiltAngle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIWristBand*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tiltAngle);
}
inline void VROSC::UIWristBand::SetValue(float_t  value, ::VROSC::HandType  handType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIWristBand*>::get(),
                        "SetValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, handType);
}
inline void VROSC::UIWristBand::SetBarTransform(::VROSC::HandType  handType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIWristBand*>::get(),
                        "SetBarTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handType);
}
inline float_t VROSC::UIWristBand::CalculateValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIWristBand*>::get(),
                        "CalculateValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, value);
}
inline void VROSC::UIWristBand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIWristBand*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UIWristBand* VROSC::UIWristBand::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UIWristBand*>());
}
// Ctor Parameters []
constexpr ::VROSC::UIWristBand::UIWristBand()   {
}
