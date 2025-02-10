#pragma once
// IWYU pragma private; include "VROSC/UI/UISchemeGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "VROSC/UI/zzzz__UISchemeGenerator_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/UI/zzzz__UIColorGetter_def.hpp"
#include "VROSC/UI/zzzz__UISchemeColors_def.hpp"
#include "VROSC/UI/zzzz__UISchemeGenerator_def.hpp"
#include "VROSC/UI/zzzz__UIScheme_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::UI::ColorGeneration_UISchemeGenerator_Source::ColorGeneration_UISchemeGenerator_Source(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::UI::ColorGeneration_UISchemeGenerator_Source::ColorGeneration_UISchemeGenerator_Source()   {
}
constexpr ::VROSC::UI::ColorGeneration_UISchemeGenerator_Source  VROSC::UI::ColorGeneration_UISchemeGenerator_Source::Primary{static_cast<int32_t>(0x0)};
constexpr ::VROSC::UI::ColorGeneration_UISchemeGenerator_Source  VROSC::UI::ColorGeneration_UISchemeGenerator_Source::Active{static_cast<int32_t>(0x1)};
constexpr ::VROSC::UI::ColorGeneration_UISchemeGenerator_Source  VROSC::UI::ColorGeneration_UISchemeGenerator_Source::Accent{static_cast<int32_t>(0x2)};
constexpr ::VROSC::UI::ColorGeneration_UISchemeGenerator_Source  VROSC::UI::ColorGeneration_UISchemeGenerator_Source::Instrument{static_cast<int32_t>(0x3)};
constexpr ::VROSC::UI::ColorGeneration_UISchemeGenerator_Source  VROSC::UI::ColorGeneration_UISchemeGenerator_Source::White{static_cast<int32_t>(0x4)};
constexpr ::VROSC::UI::ColorGeneration_UISchemeGenerator_Source  VROSC::UI::ColorGeneration_UISchemeGenerator_Source::Black{static_cast<int32_t>(0x5)};
constexpr ::VROSC::UI::ColorGeneration_UISchemeGenerator_Source  VROSC::UI::ColorGeneration_UISchemeGenerator_Source::Grey{static_cast<int32_t>(0x6)};
//  Writing Method size for method: ::VROSC::UI::UISchemeGenerator_ColorGeneration.GetColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::VROSC::UI::UISchemeGenerator_ColorGeneration::*)(::VROSC::UI::UISchemeColors)>(&::VROSC::UI::UISchemeGenerator_ColorGeneration::GetColor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x17e84d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeGenerator_ColorGeneration*>::get(),
                        "GetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UISchemeColors>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UISchemeGenerator_ColorGeneration.GetColorBySource
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::VROSC::UI::UISchemeGenerator_ColorGeneration::*)(::VROSC::UI::UISchemeColors)>(&::VROSC::UI::UISchemeGenerator_ColorGeneration::GetColorBySource)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x17e873c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeGenerator_ColorGeneration*>::get(),
                        "GetColorBySource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UISchemeColors>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UISchemeGenerator_ColorGeneration._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UISchemeGenerator_ColorGeneration::*)()>(&::VROSC::UI::UISchemeGenerator_ColorGeneration::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e87ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeGenerator_ColorGeneration*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::UI::ColorGeneration_UISchemeGenerator_Source& VROSC::UI::UISchemeGenerator_ColorGeneration::__cordl_internal_get__source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr ::VROSC::UI::ColorGeneration_UISchemeGenerator_Source const& VROSC::UI::UISchemeGenerator_ColorGeneration::__cordl_internal_get__source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr void VROSC::UI::UISchemeGenerator_ColorGeneration::__cordl_internal_set__source(::VROSC::UI::ColorGeneration_UISchemeGenerator_Source  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____source = value;
}
constexpr float_t& VROSC::UI::UISchemeGenerator_ColorGeneration::__cordl_internal_get__hueShift()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hueShift;
}
constexpr float_t const& VROSC::UI::UISchemeGenerator_ColorGeneration::__cordl_internal_get__hueShift() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hueShift;
}
constexpr void VROSC::UI::UISchemeGenerator_ColorGeneration::__cordl_internal_set__hueShift(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hueShift = value;
}
constexpr float_t& VROSC::UI::UISchemeGenerator_ColorGeneration::__cordl_internal_get__saturationShift()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____saturationShift;
}
constexpr float_t const& VROSC::UI::UISchemeGenerator_ColorGeneration::__cordl_internal_get__saturationShift() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____saturationShift;
}
constexpr void VROSC::UI::UISchemeGenerator_ColorGeneration::__cordl_internal_set__saturationShift(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____saturationShift = value;
}
constexpr float_t& VROSC::UI::UISchemeGenerator_ColorGeneration::__cordl_internal_get__valueShift()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueShift;
}
constexpr float_t const& VROSC::UI::UISchemeGenerator_ColorGeneration::__cordl_internal_get__valueShift() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueShift;
}
constexpr void VROSC::UI::UISchemeGenerator_ColorGeneration::__cordl_internal_set__valueShift(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____valueShift = value;
}
inline ::UnityEngine::Color VROSC::UI::UISchemeGenerator_ColorGeneration::GetColor(::VROSC::UI::UISchemeColors  colors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeGenerator_ColorGeneration*>::get(),
                        "GetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UISchemeColors>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, colors);
}
inline ::UnityEngine::Color VROSC::UI::UISchemeGenerator_ColorGeneration::GetColorBySource(::VROSC::UI::UISchemeColors  colors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeGenerator_ColorGeneration*>::get(),
                        "GetColorBySource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UISchemeColors>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, colors);
}
inline void VROSC::UI::UISchemeGenerator_ColorGeneration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeGenerator_ColorGeneration*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UI::UISchemeGenerator_ColorGeneration* VROSC::UI::UISchemeGenerator_ColorGeneration::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::UISchemeGenerator_ColorGeneration*>());
}
// Ctor Parameters []
constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration::UISchemeGenerator_ColorGeneration()   {
}
//  Writing Method size for method: ::VROSC::UI::UISchemeGenerator_UIColorsGeneration.Generate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UISchemeGenerator_UIColorsGeneration::*)(::VROSC::UI::UIScheme*, ::VROSC::UI::UISchemeColors)>(&::VROSC::UI::UISchemeGenerator_UIColorsGeneration::Generate)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x17e85f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeGenerator_UIColorsGeneration*>::get(),
                        "Generate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UISchemeColors>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UISchemeGenerator_UIColorsGeneration._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UISchemeGenerator_UIColorsGeneration::*)()>(&::VROSC::UI::UISchemeGenerator_UIColorsGeneration::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e87b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeGenerator_UIColorsGeneration*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::UI::UIColorGetter>& VROSC::UI::UISchemeGenerator_UIColorsGeneration::__cordl_internal_get__colorGetter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorGetter;
}
constexpr ::UnityW<::VROSC::UI::UIColorGetter> const& VROSC::UI::UISchemeGenerator_UIColorsGeneration::__cordl_internal_get__colorGetter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorGetter;
}
constexpr void VROSC::UI::UISchemeGenerator_UIColorsGeneration::__cordl_internal_set__colorGetter(::UnityW<::VROSC::UI::UIColorGetter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorGetter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration*& VROSC::UI::UISchemeGenerator_UIColorsGeneration::__cordl_internal_get__default()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____default;
}
constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration* const& VROSC::UI::UISchemeGenerator_UIColorsGeneration::__cordl_internal_get__default() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____default;
}
constexpr void VROSC::UI::UISchemeGenerator_UIColorsGeneration::__cordl_internal_set__default(::VROSC::UI::UISchemeGenerator_ColorGeneration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____default)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration*& VROSC::UI::UISchemeGenerator_UIColorsGeneration::__cordl_internal_get__highlight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlight;
}
constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration* const& VROSC::UI::UISchemeGenerator_UIColorsGeneration::__cordl_internal_get__highlight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlight;
}
constexpr void VROSC::UI::UISchemeGenerator_UIColorsGeneration::__cordl_internal_set__highlight(::VROSC::UI::UISchemeGenerator_ColorGeneration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____highlight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration*& VROSC::UI::UISchemeGenerator_UIColorsGeneration::__cordl_internal_get__disabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabled;
}
constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration* const& VROSC::UI::UISchemeGenerator_UIColorsGeneration::__cordl_internal_get__disabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabled;
}
constexpr void VROSC::UI::UISchemeGenerator_UIColorsGeneration::__cordl_internal_set__disabled(::VROSC::UI::UISchemeGenerator_ColorGeneration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disabled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::UI::UISchemeGenerator_UIColorsGeneration::Generate(::VROSC::UI::UIScheme*  uIScheme, ::VROSC::UI::UISchemeColors  colors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeGenerator_UIColorsGeneration*>::get(),
                        "Generate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UISchemeColors>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uIScheme, colors);
}
inline void VROSC::UI::UISchemeGenerator_UIColorsGeneration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeGenerator_UIColorsGeneration*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UI::UISchemeGenerator_UIColorsGeneration* VROSC::UI::UISchemeGenerator_UIColorsGeneration::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::UISchemeGenerator_UIColorsGeneration*>());
}
// Ctor Parameters []
constexpr ::VROSC::UI::UISchemeGenerator_UIColorsGeneration::UISchemeGenerator_UIColorsGeneration()   {
}
//  Writing Method size for method: ::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration.Generate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration::*)(::VROSC::UI::UIScheme*, ::VROSC::UI::UISchemeColors)>(&::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration::Generate)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x17e828c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration*>::get(),
                        "Generate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UISchemeColors>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration::*)()>(&::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e87bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration*& VROSC::UI::UISchemeGenerator_NotefieldColorGeneration::__cordl_internal_get__restingEvenColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____restingEvenColor;
}
constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration* const& VROSC::UI::UISchemeGenerator_NotefieldColorGeneration::__cordl_internal_get__restingEvenColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____restingEvenColor;
}
constexpr void VROSC::UI::UISchemeGenerator_NotefieldColorGeneration::__cordl_internal_set__restingEvenColor(::VROSC::UI::UISchemeGenerator_ColorGeneration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____restingEvenColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration*& VROSC::UI::UISchemeGenerator_NotefieldColorGeneration::__cordl_internal_get__restingOddColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____restingOddColor;
}
constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration* const& VROSC::UI::UISchemeGenerator_NotefieldColorGeneration::__cordl_internal_get__restingOddColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____restingOddColor;
}
constexpr void VROSC::UI::UISchemeGenerator_NotefieldColorGeneration::__cordl_internal_set__restingOddColor(::VROSC::UI::UISchemeGenerator_ColorGeneration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____restingOddColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration*& VROSC::UI::UISchemeGenerator_NotefieldColorGeneration::__cordl_internal_get__octaveColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____octaveColor;
}
constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration* const& VROSC::UI::UISchemeGenerator_NotefieldColorGeneration::__cordl_internal_get__octaveColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____octaveColor;
}
constexpr void VROSC::UI::UISchemeGenerator_NotefieldColorGeneration::__cordl_internal_set__octaveColor(::VROSC::UI::UISchemeGenerator_ColorGeneration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____octaveColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::UI::UISchemeGenerator_NotefieldColorGeneration::Generate(::VROSC::UI::UIScheme*  uIScheme, ::VROSC::UI::UISchemeColors  colors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration*>::get(),
                        "Generate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UISchemeColors>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uIScheme, colors);
}
inline void VROSC::UI::UISchemeGenerator_NotefieldColorGeneration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration* VROSC::UI::UISchemeGenerator_NotefieldColorGeneration::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration*>());
}
// Ctor Parameters []
constexpr ::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration::UISchemeGenerator_NotefieldColorGeneration()   {
}
//  Writing Method size for method: ::VROSC::UI::UISchemeGenerator.Generate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UISchemeGenerator::*)(::VROSC::UI::UIScheme*, ::VROSC::UI::UISchemeColors)>(&::VROSC::UI::UISchemeGenerator::Generate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x17e81ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeGenerator*>::get(),
                        "Generate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UISchemeColors>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UISchemeGenerator.GenerateUIColors
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UISchemeGenerator::*)(::VROSC::UI::UIScheme*, ::VROSC::UI::UISchemeColors)>(&::VROSC::UI::UISchemeGenerator::GenerateUIColors)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x17e8438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeGenerator*>::get(),
                        "GenerateUIColors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UISchemeColors>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UISchemeGenerator.SetContollerColors
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UISchemeGenerator::*)(::VROSC::UI::UIScheme*, ::VROSC::UI::UISchemeColors)>(&::VROSC::UI::UISchemeGenerator::SetContollerColors)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17e83b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeGenerator*>::get(),
                        "SetContollerColors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UISchemeColors>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UISchemeGenerator._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UISchemeGenerator::*)()>(&::VROSC::UI::UISchemeGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e8734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeGenerator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration*& VROSC::UI::UISchemeGenerator::__cordl_internal_get__notefieldColorGeneration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notefieldColorGeneration;
}
constexpr ::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration* const& VROSC::UI::UISchemeGenerator::__cordl_internal_get__notefieldColorGeneration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notefieldColorGeneration;
}
constexpr void VROSC::UI::UISchemeGenerator::__cordl_internal_set__notefieldColorGeneration(::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____notefieldColorGeneration)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration*& VROSC::UI::UISchemeGenerator::__cordl_internal_get__appearAnimationColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____appearAnimationColor;
}
constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration* const& VROSC::UI::UISchemeGenerator::__cordl_internal_get__appearAnimationColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____appearAnimationColor;
}
constexpr void VROSC::UI::UISchemeGenerator::__cordl_internal_set__appearAnimationColor(::VROSC::UI::UISchemeGenerator_ColorGeneration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appearAnimationColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration*& VROSC::UI::UISchemeGenerator::__cordl_internal_get__controllerColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerColors;
}
constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration* const& VROSC::UI::UISchemeGenerator::__cordl_internal_get__controllerColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerColors;
}
constexpr void VROSC::UI::UISchemeGenerator::__cordl_internal_set__controllerColors(::VROSC::UI::UISchemeGenerator_ColorGeneration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____controllerColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::VROSC::UI::UISchemeGenerator_UIColorsGeneration*,::Array<::VROSC::UI::UISchemeGenerator_UIColorsGeneration*>*>& VROSC::UI::UISchemeGenerator::__cordl_internal_get__uiColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uiColors;
}
constexpr ::ArrayW<::VROSC::UI::UISchemeGenerator_UIColorsGeneration*,::Array<::VROSC::UI::UISchemeGenerator_UIColorsGeneration*>*> const& VROSC::UI::UISchemeGenerator::__cordl_internal_get__uiColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uiColors;
}
constexpr void VROSC::UI::UISchemeGenerator::__cordl_internal_set__uiColors(::ArrayW<::VROSC::UI::UISchemeGenerator_UIColorsGeneration*,::Array<::VROSC::UI::UISchemeGenerator_UIColorsGeneration*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uiColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::UI::UISchemeGenerator::Generate(::VROSC::UI::UIScheme*  uIScheme, ::VROSC::UI::UISchemeColors  colors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeGenerator*>::get(),
                        "Generate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UISchemeColors>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uIScheme, colors);
}
inline void VROSC::UI::UISchemeGenerator::GenerateUIColors(::VROSC::UI::UIScheme*  uIScheme, ::VROSC::UI::UISchemeColors  colors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeGenerator*>::get(),
                        "GenerateUIColors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UISchemeColors>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uIScheme, colors);
}
inline void VROSC::UI::UISchemeGenerator::SetContollerColors(::VROSC::UI::UIScheme*  uIScheme, ::VROSC::UI::UISchemeColors  colors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeGenerator*>::get(),
                        "SetContollerColors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIScheme*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UISchemeColors>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uIScheme, colors);
}
inline void VROSC::UI::UISchemeGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeGenerator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UI::UISchemeGenerator* VROSC::UI::UISchemeGenerator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::UISchemeGenerator*>());
}
// Ctor Parameters []
constexpr ::VROSC::UI::UISchemeGenerator::UISchemeGenerator()   {
}
