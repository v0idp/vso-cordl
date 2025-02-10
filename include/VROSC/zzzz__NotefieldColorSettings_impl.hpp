#pragma once
// IWYU pragma private; include "VROSC/NotefieldColorSettings.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__NotefieldColorSettings_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__NotefieldColorSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::NotefieldColorSettings_Coloring::NotefieldColorSettings_Coloring(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::NotefieldColorSettings_Coloring::NotefieldColorSettings_Coloring()   {
}
constexpr ::VROSC::NotefieldColorSettings_Coloring  VROSC::NotefieldColorSettings_Coloring::AsPlayed{static_cast<int32_t>(0x0)};
constexpr ::VROSC::NotefieldColorSettings_Coloring  VROSC::NotefieldColorSettings_Coloring::AlwaysX{static_cast<int32_t>(0x1)};
constexpr ::VROSC::NotefieldColorSettings_Coloring  VROSC::NotefieldColorSettings_Coloring::AlwaysY{static_cast<int32_t>(0x2)};
constexpr ::VROSC::NotefieldColorSettings_Coloring  VROSC::NotefieldColorSettings_Coloring::AlwaysZ{static_cast<int32_t>(0x3)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::NotefieldColorSettings_SpreadType::NotefieldColorSettings_SpreadType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::NotefieldColorSettings_SpreadType::NotefieldColorSettings_SpreadType()   {
}
constexpr ::VROSC::NotefieldColorSettings_SpreadType  VROSC::NotefieldColorSettings_SpreadType::AllAxises{static_cast<int32_t>(0x0)};
constexpr ::VROSC::NotefieldColorSettings_SpreadType  VROSC::NotefieldColorSettings_SpreadType::Same{static_cast<int32_t>(0x1)};
constexpr ::VROSC::NotefieldColorSettings_SpreadType  VROSC::NotefieldColorSettings_SpreadType::Inverted{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::VROSC::NotefieldColorSettings.get_RestingEvenColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::VROSC::NotefieldColorSettings::*)()>(&::VROSC::NotefieldColorSettings::get_RestingEvenColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1710f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "get_RestingEvenColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotefieldColorSettings.get_RestingOddColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::VROSC::NotefieldColorSettings::*)()>(&::VROSC::NotefieldColorSettings::get_RestingOddColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1710f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "get_RestingOddColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotefieldColorSettings.get_OctaveColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::VROSC::NotefieldColorSettings::*)()>(&::VROSC::NotefieldColorSettings::get_OctaveColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1710fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "get_OctaveColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotefieldColorSettings.get_TransmitLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::NotefieldColorSettings::*)()>(&::VROSC::NotefieldColorSettings::get_TransmitLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1710fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "get_TransmitLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotefieldColorSettings.get_TransmitFadeCurve
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (::VROSC::NotefieldColorSettings::*)()>(&::VROSC::NotefieldColorSettings::get_TransmitFadeCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1710fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "get_TransmitFadeCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotefieldColorSettings.get_NoteColoring
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NotefieldColorSettings_Coloring (::VROSC::NotefieldColorSettings::*)()>(&::VROSC::NotefieldColorSettings::get_NoteColoring)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1710fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "get_NoteColoring",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotefieldColorSettings.get_FallSpeed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::NotefieldColorSettings::*)()>(&::VROSC::NotefieldColorSettings::get_FallSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1710fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "get_FallSpeed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotefieldColorSettings.get_Spread
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::NotefieldColorSettings_SpreadType (::VROSC::NotefieldColorSettings::*)()>(&::VROSC::NotefieldColorSettings::get_Spread)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1710fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "get_Spread",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotefieldColorSettings.get_HoverTransmitCurve
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (::VROSC::NotefieldColorSettings::*)()>(&::VROSC::NotefieldColorSettings::get_HoverTransmitCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1710fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "get_HoverTransmitCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotefieldColorSettings.get_HoverFallSpeed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::NotefieldColorSettings::*)()>(&::VROSC::NotefieldColorSettings::get_HoverFallSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1710fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "get_HoverFallSpeed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotefieldColorSettings.get_HoverScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::NotefieldColorSettings::*)()>(&::VROSC::NotefieldColorSettings::get_HoverScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1710fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "get_HoverScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotefieldColorSettings.GetScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::NotefieldColorSettings::*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3)>(&::VROSC::NotefieldColorSettings::GetScale)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x1710ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "GetScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotefieldColorSettings.GetBaseScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::NotefieldColorSettings::*)(::UnityEngine::Vector3)>(&::VROSC::NotefieldColorSettings::GetBaseScale)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x171114c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "GetBaseScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::NotefieldColorSettings._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::NotefieldColorSettings::*)()>(&::VROSC::NotefieldColorSettings::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x171118c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& VROSC::NotefieldColorSettings::__cordl_internal_get__restingEvenColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____restingEvenColor;
}
constexpr ::UnityEngine::Color const& VROSC::NotefieldColorSettings::__cordl_internal_get__restingEvenColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____restingEvenColor;
}
constexpr void VROSC::NotefieldColorSettings::__cordl_internal_set__restingEvenColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____restingEvenColor = value;
}
constexpr ::UnityEngine::Color& VROSC::NotefieldColorSettings::__cordl_internal_get__restingOddColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____restingOddColor;
}
constexpr ::UnityEngine::Color const& VROSC::NotefieldColorSettings::__cordl_internal_get__restingOddColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____restingOddColor;
}
constexpr void VROSC::NotefieldColorSettings::__cordl_internal_set__restingOddColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____restingOddColor = value;
}
constexpr ::UnityEngine::Color& VROSC::NotefieldColorSettings::__cordl_internal_get__octaveColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____octaveColor;
}
constexpr ::UnityEngine::Color const& VROSC::NotefieldColorSettings::__cordl_internal_get__octaveColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____octaveColor;
}
constexpr void VROSC::NotefieldColorSettings::__cordl_internal_set__octaveColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____octaveColor = value;
}
constexpr int32_t& VROSC::NotefieldColorSettings::__cordl_internal_get__transmitLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transmitLength;
}
constexpr int32_t const& VROSC::NotefieldColorSettings::__cordl_internal_get__transmitLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transmitLength;
}
constexpr void VROSC::NotefieldColorSettings::__cordl_internal_set__transmitLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transmitLength = value;
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::NotefieldColorSettings::__cordl_internal_get__transmitFadeCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transmitFadeCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::NotefieldColorSettings::__cordl_internal_get__transmitFadeCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transmitFadeCurve;
}
constexpr void VROSC::NotefieldColorSettings::__cordl_internal_set__transmitFadeCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transmitFadeCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::NotefieldColorSettings_Coloring& VROSC::NotefieldColorSettings::__cordl_internal_get__coloring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coloring;
}
constexpr ::VROSC::NotefieldColorSettings_Coloring const& VROSC::NotefieldColorSettings::__cordl_internal_get__coloring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coloring;
}
constexpr void VROSC::NotefieldColorSettings::__cordl_internal_set__coloring(::VROSC::NotefieldColorSettings_Coloring  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____coloring = value;
}
constexpr float_t& VROSC::NotefieldColorSettings::__cordl_internal_get__fallSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fallSpeed;
}
constexpr float_t const& VROSC::NotefieldColorSettings::__cordl_internal_get__fallSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fallSpeed;
}
constexpr void VROSC::NotefieldColorSettings::__cordl_internal_set__fallSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fallSpeed = value;
}
constexpr ::VROSC::NotefieldColorSettings_SpreadType& VROSC::NotefieldColorSettings::__cordl_internal_get__spread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spread;
}
constexpr ::VROSC::NotefieldColorSettings_SpreadType const& VROSC::NotefieldColorSettings::__cordl_internal_get__spread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spread;
}
constexpr void VROSC::NotefieldColorSettings::__cordl_internal_set__spread(::VROSC::NotefieldColorSettings_SpreadType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spread = value;
}
constexpr float_t& VROSC::NotefieldColorSettings::__cordl_internal_get__hoverScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverScale;
}
constexpr float_t const& VROSC::NotefieldColorSettings::__cordl_internal_get__hoverScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverScale;
}
constexpr void VROSC::NotefieldColorSettings::__cordl_internal_set__hoverScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hoverScale = value;
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::NotefieldColorSettings::__cordl_internal_get__hoverTransmitCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverTransmitCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::NotefieldColorSettings::__cordl_internal_get__hoverTransmitCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverTransmitCurve;
}
constexpr void VROSC::NotefieldColorSettings::__cordl_internal_set__hoverTransmitCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hoverTransmitCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::NotefieldColorSettings::__cordl_internal_get__hoverFallSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverFallSpeed;
}
constexpr float_t const& VROSC::NotefieldColorSettings::__cordl_internal_get__hoverFallSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverFallSpeed;
}
constexpr void VROSC::NotefieldColorSettings::__cordl_internal_set__hoverFallSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hoverFallSpeed = value;
}
constexpr float_t& VROSC::NotefieldColorSettings::__cordl_internal_get__noteScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteScale;
}
constexpr float_t const& VROSC::NotefieldColorSettings::__cordl_internal_get__noteScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noteScale;
}
constexpr void VROSC::NotefieldColorSettings::__cordl_internal_set__noteScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____noteScale = value;
}
constexpr ::UnityEngine::Vector3& VROSC::NotefieldColorSettings::__cordl_internal_get__playPower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playPower;
}
constexpr ::UnityEngine::Vector3 const& VROSC::NotefieldColorSettings::__cordl_internal_get__playPower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playPower;
}
constexpr void VROSC::NotefieldColorSettings::__cordl_internal_set__playPower(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playPower = value;
}
constexpr bool& VROSC::NotefieldColorSettings::__cordl_internal_get__uniformScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uniformScale;
}
constexpr bool const& VROSC::NotefieldColorSettings::__cordl_internal_get__uniformScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uniformScale;
}
constexpr void VROSC::NotefieldColorSettings::__cordl_internal_set__uniformScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uniformScale = value;
}
constexpr bool& VROSC::NotefieldColorSettings::__cordl_internal_get__smallestUniformScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smallestUniformScale;
}
constexpr bool const& VROSC::NotefieldColorSettings::__cordl_internal_get__smallestUniformScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smallestUniformScale;
}
constexpr void VROSC::NotefieldColorSettings::__cordl_internal_set__smallestUniformScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smallestUniformScale = value;
}
constexpr bool& VROSC::NotefieldColorSettings::__cordl_internal_get__additiveScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____additiveScale;
}
constexpr bool const& VROSC::NotefieldColorSettings::__cordl_internal_get__additiveScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____additiveScale;
}
constexpr void VROSC::NotefieldColorSettings::__cordl_internal_set__additiveScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____additiveScale = value;
}
inline ::UnityEngine::Color VROSC::NotefieldColorSettings::get_RestingEvenColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "get_RestingEvenColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline ::UnityEngine::Color VROSC::NotefieldColorSettings::get_RestingOddColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "get_RestingOddColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline ::UnityEngine::Color VROSC::NotefieldColorSettings::get_OctaveColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "get_OctaveColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline int32_t VROSC::NotefieldColorSettings::get_TransmitLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "get_TransmitLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::AnimationCurve* VROSC::NotefieldColorSettings::get_TransmitFadeCurve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "get_TransmitFadeCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*, false>(this, ___internal_method);
}
inline ::VROSC::NotefieldColorSettings_Coloring VROSC::NotefieldColorSettings::get_NoteColoring()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "get_NoteColoring",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::NotefieldColorSettings_Coloring, false>(this, ___internal_method);
}
inline float_t VROSC::NotefieldColorSettings::get_FallSpeed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "get_FallSpeed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::VROSC::NotefieldColorSettings_SpreadType VROSC::NotefieldColorSettings::get_Spread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "get_Spread",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::NotefieldColorSettings_SpreadType, false>(this, ___internal_method);
}
inline ::UnityEngine::AnimationCurve* VROSC::NotefieldColorSettings::get_HoverTransmitCurve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "get_HoverTransmitCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*, false>(this, ___internal_method);
}
inline float_t VROSC::NotefieldColorSettings::get_HoverFallSpeed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "get_HoverFallSpeed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t VROSC::NotefieldColorSettings::get_HoverScale()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "get_HoverScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 VROSC::NotefieldColorSettings::GetScale(::UnityEngine::Vector3  baseScale, float_t  hoveringAmount, ::UnityEngine::Vector3  playPower)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "GetScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, baseScale, hoveringAmount, playPower);
}
inline ::UnityEngine::Vector3 VROSC::NotefieldColorSettings::GetBaseScale(::UnityEngine::Vector3  baseScale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        "GetBaseScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, baseScale);
}
inline void VROSC::NotefieldColorSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::NotefieldColorSettings*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::NotefieldColorSettings* VROSC::NotefieldColorSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::NotefieldColorSettings*>());
}
// Ctor Parameters []
constexpr ::VROSC::NotefieldColorSettings::NotefieldColorSettings()   {
}
