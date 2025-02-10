#pragma once
// IWYU pragma private; include "VROSC/UI/UIExplicitColor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "VROSC/UI/zzzz__IMappedColor_impl.hpp"
#include "VROSC/UI/zzzz__UIExplicitColor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::VROSC::UI::UIExplicitColor._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UIExplicitColor::*)(::VROSC::UI::UIExplicitColor*)>(&::VROSC::UI::UIExplicitColor::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x17e7574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIExplicitColor*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIExplicitColor*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UIExplicitColor.Set
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UIExplicitColor::*)(::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color)>(&::VROSC::UI::UIExplicitColor::Set)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17e75c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIExplicitColor*>::get(),
                        "Set",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UIExplicitColor.get_BaseColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::VROSC::UI::UIExplicitColor::*)()>(&::VROSC::UI::UIExplicitColor::get_BaseColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17e75e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIExplicitColor*>::get(),
                        "get_BaseColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UIExplicitColor.ReadFromLUT
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UIExplicitColor::*)(::UnityEngine::Texture2D*, int32_t)>(&::VROSC::UI::UIExplicitColor::ReadFromLUT)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x17e75ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIExplicitColor*>::get(),
                        "ReadFromLUT",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UIExplicitColor.WriteToLUT
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UIExplicitColor::*)(::UnityEngine::Texture2D*, int32_t)>(&::VROSC::UI::UIExplicitColor::WriteToLUT)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x17e7694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIExplicitColor*>::get(),
                        "WriteToLUT",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UIExplicitColor.GetColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::VROSC::UI::UIExplicitColor::*)(bool, bool)>(&::VROSC::UI::UIExplicitColor::GetColor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x17e5374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIExplicitColor*>::get(),
                        "GetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UIExplicitColor.SetColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UIExplicitColor::*)(::VROSC::UI::UIExplicitColor*)>(&::VROSC::UI::UIExplicitColor::SetColor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x17e5568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIExplicitColor*>::get(),
                        "SetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIExplicitColor*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& VROSC::UI::UIExplicitColor::__cordl_internal_get__baseColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseColor;
}
constexpr ::UnityEngine::Color const& VROSC::UI::UIExplicitColor::__cordl_internal_get__baseColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseColor;
}
constexpr void VROSC::UI::UIExplicitColor::__cordl_internal_set__baseColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseColor = value;
}
constexpr ::UnityEngine::Color& VROSC::UI::UIExplicitColor::__cordl_internal_get__hoverColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverColor;
}
constexpr ::UnityEngine::Color const& VROSC::UI::UIExplicitColor::__cordl_internal_get__hoverColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverColor;
}
constexpr void VROSC::UI::UIExplicitColor::__cordl_internal_set__hoverColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hoverColor = value;
}
constexpr ::UnityEngine::Color& VROSC::UI::UIExplicitColor::__cordl_internal_get__disabledColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledColor;
}
constexpr ::UnityEngine::Color const& VROSC::UI::UIExplicitColor::__cordl_internal_get__disabledColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledColor;
}
constexpr void VROSC::UI::UIExplicitColor::__cordl_internal_set__disabledColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disabledColor = value;
}
inline void VROSC::UI::UIExplicitColor::_ctor(::VROSC::UI::UIExplicitColor*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIExplicitColor*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIExplicitColor*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline void VROSC::UI::UIExplicitColor::Set(::UnityEngine::Color  baseColor, ::UnityEngine::Color  hoverColor, ::UnityEngine::Color  disabledColor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIExplicitColor*>::get(),
                        "Set",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseColor, hoverColor, disabledColor);
}
inline ::UnityEngine::Color VROSC::UI::UIExplicitColor::get_BaseColor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIExplicitColor*>::get(),
                        "get_BaseColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void VROSC::UI::UIExplicitColor::ReadFromLUT(::UnityEngine::Texture2D*  texture, int32_t  row)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIExplicitColor*>::get(),
                        "ReadFromLUT",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, texture, row);
}
inline void VROSC::UI::UIExplicitColor::WriteToLUT(::UnityEngine::Texture2D*  texture, int32_t  row)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIExplicitColor*>::get(),
                        "WriteToLUT",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, texture, row);
}
inline ::UnityEngine::Color VROSC::UI::UIExplicitColor::GetColor(bool  disabled, bool  hovering)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIExplicitColor*>::get(),
                        "GetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, disabled, hovering);
}
inline void VROSC::UI::UIExplicitColor::SetColor(::VROSC::UI::UIExplicitColor*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIExplicitColor*>::get(),
                        "SetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIExplicitColor*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline ::VROSC::UI::UIExplicitColor* VROSC::UI::UIExplicitColor::New_ctor(::VROSC::UI::UIExplicitColor*  other)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::UIExplicitColor*>(other));
}
/// @brief Convert operator to "::VROSC::UI::IMappedColor"
constexpr  VROSC::UI::UIExplicitColor::operator ::VROSC::UI::IMappedColor*() noexcept {
return static_cast<::VROSC::UI::IMappedColor*>(static_cast<void*>(this));
}
/// @brief Convert to "::VROSC::UI::IMappedColor"
constexpr ::VROSC::UI::IMappedColor* VROSC::UI::UIExplicitColor::i___VROSC__UI__IMappedColor() noexcept {
return static_cast<::VROSC::UI::IMappedColor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::UI::UIExplicitColor::UIExplicitColor()   {
}
