#pragma once
// IWYU pragma private; include "VROSC/UISliderKnob.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__UISliderKnob_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::VROSC::UISliderKnob.SetValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UISliderKnob::*)(float_t)>(&::VROSC::UISliderKnob::SetValue)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1773cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UISliderKnob*>::get(),
                        "SetValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UISliderKnob.UpdatePosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UISliderKnob::*)(float_t)>(&::VROSC::UISliderKnob::UpdatePosition)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x17748d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UISliderKnob*>::get(),
                        "UpdatePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UISliderKnob.UpdateRotation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UISliderKnob::*)(float_t)>(&::VROSC::UISliderKnob::UpdateRotation)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17749fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UISliderKnob*>::get(),
                        "UpdateRotation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UISliderKnob._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UISliderKnob::*)()>(&::VROSC::UISliderKnob::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1774a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UISliderKnob*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& VROSC::UISliderKnob::__cordl_internal_get__sliderKnob()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sliderKnob;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& VROSC::UISliderKnob::__cordl_internal_get__sliderKnob() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sliderKnob;
}
constexpr void VROSC::UISliderKnob::__cordl_internal_set__sliderKnob(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderKnob)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RectTransform>& VROSC::UISliderKnob::__cordl_internal_get__sliderRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sliderRect;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& VROSC::UISliderKnob::__cordl_internal_get__sliderRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sliderRect;
}
constexpr void VROSC::UISliderKnob::__cordl_internal_set__sliderRect(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderRect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::UISliderKnob::__cordl_internal_get__position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____position;
}
constexpr bool const& VROSC::UISliderKnob::__cordl_internal_get__position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____position;
}
constexpr void VROSC::UISliderKnob::__cordl_internal_set__position(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____position = value;
}
constexpr bool& VROSC::UISliderKnob::__cordl_internal_get__rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotation;
}
constexpr bool const& VROSC::UISliderKnob::__cordl_internal_get__rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotation;
}
constexpr void VROSC::UISliderKnob::__cordl_internal_set__rotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotation = value;
}
constexpr float_t& VROSC::UISliderKnob::__cordl_internal_get__rotateFrom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotateFrom;
}
constexpr float_t const& VROSC::UISliderKnob::__cordl_internal_get__rotateFrom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotateFrom;
}
constexpr void VROSC::UISliderKnob::__cordl_internal_set__rotateFrom(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotateFrom = value;
}
constexpr float_t& VROSC::UISliderKnob::__cordl_internal_get__rotateTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotateTo;
}
constexpr float_t const& VROSC::UISliderKnob::__cordl_internal_get__rotateTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotateTo;
}
constexpr void VROSC::UISliderKnob::__cordl_internal_set__rotateTo(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotateTo = value;
}
inline void VROSC::UISliderKnob::SetValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UISliderKnob*>::get(),
                        "SetValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::UISliderKnob::UpdatePosition(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UISliderKnob*>::get(),
                        "UpdatePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::UISliderKnob::UpdateRotation(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UISliderKnob*>::get(),
                        "UpdateRotation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::UISliderKnob::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UISliderKnob*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UISliderKnob* VROSC::UISliderKnob::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UISliderKnob*>());
}
// Ctor Parameters []
constexpr ::VROSC::UISliderKnob::UISliderKnob()   {
}
