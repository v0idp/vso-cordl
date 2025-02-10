#pragma once
// IWYU pragma private; include "VROSC/UI/UISchemeColors.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "VROSC/UI/zzzz__UISchemeColors_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::VROSC::UI::UISchemeColors._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UISchemeColors::*)(::VROSC::UI::UISchemeColors)>(&::VROSC::UI::UISchemeColors::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x17e8140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeColors>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UISchemeColors>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UISchemeColors._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UISchemeColors::*)(::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color)>(&::VROSC::UI::UISchemeColors::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17e8190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeColors>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::UI::UISchemeColors::_ctor(::VROSC::UI::UISchemeColors  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeColors>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UISchemeColors>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline void VROSC::UI::UISchemeColors::_ctor(::UnityEngine::Color  primaryColor, ::UnityEngine::Color  activeColor, ::UnityEngine::Color  accentColor, ::UnityEngine::Color  instrumentColor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UISchemeColors>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, primaryColor, activeColor, accentColor, instrumentColor);
}
// Ctor Parameters [CppParam { name: "PrimaryColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "ActiveColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "AccentColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstrumentColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::UI::UISchemeColors::UISchemeColors(::UnityEngine::Color  PrimaryColor, ::UnityEngine::Color  ActiveColor, ::UnityEngine::Color  AccentColor, ::UnityEngine::Color  InstrumentColor) noexcept  {
this->PrimaryColor = PrimaryColor;
this->ActiveColor = ActiveColor;
this->AccentColor = AccentColor;
this->InstrumentColor = InstrumentColor;
}
// Ctor Parameters []
constexpr ::VROSC::UI::UISchemeColors::UISchemeColors()   {
}
