#pragma once
// IWYU pragma private; include "VROSC/UI/ControllerColorScheme.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "VROSC/UI/zzzz__IMappedColor_impl.hpp"
#include "VROSC/UI/zzzz__ControllerColorScheme_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::VROSC::UI::ControllerColorScheme._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::ControllerColorScheme::*)(::VROSC::UI::ControllerColorScheme*)>(&::VROSC::UI::ControllerColorScheme::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x17e6a8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::ControllerColorScheme*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::ControllerColorScheme*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::ControllerColorScheme.Set
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::ControllerColorScheme::*)(::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color)>(&::VROSC::UI::ControllerColorScheme::Set)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17e6adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::ControllerColorScheme*>::get(),
                        "Set",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::ControllerColorScheme.ReadFromLUT
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::ControllerColorScheme::*)(::UnityEngine::Texture2D*, int32_t)>(&::VROSC::UI::ControllerColorScheme::ReadFromLUT)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x17e6af8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::ControllerColorScheme*>::get(),
                        "ReadFromLUT",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::ControllerColorScheme.WriteToLUT
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::ControllerColorScheme::*)(::UnityEngine::Texture2D*, int32_t)>(&::VROSC::UI::ControllerColorScheme::WriteToLUT)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x17e6df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::ControllerColorScheme*>::get(),
                        "WriteToLUT",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::ControllerColorScheme.GetControllerButtonColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::VROSC::UI::ControllerColorScheme::*)(bool, bool)>(&::VROSC::UI::ControllerColorScheme::GetControllerButtonColor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x17e6fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::ControllerColorScheme*>::get(),
                        "GetControllerButtonColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& VROSC::UI::ControllerColorScheme::__cordl_internal_get__normal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normal;
}
constexpr ::UnityEngine::Color const& VROSC::UI::ControllerColorScheme::__cordl_internal_get__normal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normal;
}
constexpr void VROSC::UI::ControllerColorScheme::__cordl_internal_set__normal(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normal = value;
}
constexpr ::UnityEngine::Color& VROSC::UI::ControllerColorScheme::__cordl_internal_get__highlight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlight;
}
constexpr ::UnityEngine::Color const& VROSC::UI::ControllerColorScheme::__cordl_internal_get__highlight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlight;
}
constexpr void VROSC::UI::ControllerColorScheme::__cordl_internal_set__highlight(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____highlight = value;
}
constexpr ::UnityEngine::Color& VROSC::UI::ControllerColorScheme::__cordl_internal_get__pressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressed;
}
constexpr ::UnityEngine::Color const& VROSC::UI::ControllerColorScheme::__cordl_internal_get__pressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressed;
}
constexpr void VROSC::UI::ControllerColorScheme::__cordl_internal_set__pressed(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pressed = value;
}
inline void VROSC::UI::ControllerColorScheme::_ctor(::VROSC::UI::ControllerColorScheme*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::ControllerColorScheme*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::ControllerColorScheme*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline void VROSC::UI::ControllerColorScheme::Set(::UnityEngine::Color  normal, ::UnityEngine::Color  highlight, ::UnityEngine::Color  pressed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::ControllerColorScheme*>::get(),
                        "Set",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, normal, highlight, pressed);
}
inline void VROSC::UI::ControllerColorScheme::ReadFromLUT(::UnityEngine::Texture2D*  texture, int32_t  row)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::ControllerColorScheme*>::get(),
                        "ReadFromLUT",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, texture, row);
}
inline void VROSC::UI::ControllerColorScheme::WriteToLUT(::UnityEngine::Texture2D*  texture, int32_t  row)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::ControllerColorScheme*>::get(),
                        "WriteToLUT",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, texture, row);
}
inline ::UnityEngine::Color VROSC::UI::ControllerColorScheme::GetControllerButtonColor(bool  highlight, bool  pressed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::ControllerColorScheme*>::get(),
                        "GetControllerButtonColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, highlight, pressed);
}
inline ::VROSC::UI::ControllerColorScheme* VROSC::UI::ControllerColorScheme::New_ctor(::VROSC::UI::ControllerColorScheme*  other)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::ControllerColorScheme*>(other));
}
/// @brief Convert operator to "::VROSC::UI::IMappedColor"
constexpr  VROSC::UI::ControllerColorScheme::operator ::VROSC::UI::IMappedColor*() noexcept {
return static_cast<::VROSC::UI::IMappedColor*>(static_cast<void*>(this));
}
/// @brief Convert to "::VROSC::UI::IMappedColor"
constexpr ::VROSC::UI::IMappedColor* VROSC::UI::ControllerColorScheme::i___VROSC__UI__IMappedColor() noexcept {
return static_cast<::VROSC::UI::IMappedColor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::UI::ControllerColorScheme::ControllerColorScheme()   {
}
