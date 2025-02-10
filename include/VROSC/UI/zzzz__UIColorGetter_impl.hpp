#pragma once
// IWYU pragma private; include "VROSC/UI/UIColorGetter.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "VROSC/UI/zzzz__UIColorGetter_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/UI/zzzz__UIExplicitColor_def.hpp"
#include "VROSC/zzzz__Interactable_def.hpp"
//  Writing Method size for method: ::VROSC::UI::UIColorGetter.GetDefaultColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::VROSC::UI::UIColorGetter::*)(bool)>(&::VROSC::UI::UIColorGetter::GetDefaultColor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x17e4df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorGetter*>::get(),
                        "GetDefaultColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UIColorGetter.GetColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::VROSC::UI::UIColorGetter::*)(::VROSC::Interactable*)>(&::VROSC::UI::UIColorGetter::GetColor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x17e53c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorGetter*>::get(),
                        "GetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Interactable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UIColorGetter.GetColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::VROSC::UI::UIColorGetter::*)(bool, bool)>(&::VROSC::UI::UIColorGetter::GetColor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x17e54b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorGetter*>::get(),
                        "GetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UIColorGetter.SetColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UIColorGetter::*)(::VROSC::UI::UIExplicitColor*)>(&::VROSC::UI::UIColorGetter::SetColor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x17e5518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorGetter*>::get(),
                        "SetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIExplicitColor*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::UIColorGetter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::UIColorGetter::*)()>(&::VROSC::UI::UIColorGetter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e5594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorGetter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::UI::UIExplicitColor*& VROSC::UI::UIColorGetter::__cordl_internal_get__color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____color;
}
constexpr ::VROSC::UI::UIExplicitColor* const& VROSC::UI::UIColorGetter::__cordl_internal_get__color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____color;
}
constexpr void VROSC::UI::UIColorGetter::__cordl_internal_set__color(::VROSC::UI::UIExplicitColor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____color)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& VROSC::UI::UIColorGetter::__cordl_internal_get_OnColorChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnColorChange;
}
constexpr ::System::Action* const& VROSC::UI::UIColorGetter::__cordl_internal_get_OnColorChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnColorChange;
}
constexpr void VROSC::UI::UIColorGetter::__cordl_internal_set_OnColorChange(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnColorChange)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Color VROSC::UI::UIColorGetter::GetDefaultColor(bool  disabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorGetter*>::get(),
                        "GetDefaultColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, disabled);
}
inline ::UnityEngine::Color VROSC::UI::UIColorGetter::GetColor(::VROSC::Interactable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorGetter*>::get(),
                        "GetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Interactable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, interactable);
}
inline ::UnityEngine::Color VROSC::UI::UIColorGetter::GetColor(bool  disabled, bool  hovering)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorGetter*>::get(),
                        "GetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, disabled, hovering);
}
inline void VROSC::UI::UIColorGetter::SetColor(::VROSC::UI::UIExplicitColor*  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorGetter*>::get(),
                        "SetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::UIExplicitColor*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void VROSC::UI::UIColorGetter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::UIColorGetter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UI::UIColorGetter* VROSC::UI::UIColorGetter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::UIColorGetter*>());
}
// Ctor Parameters []
constexpr ::VROSC::UI::UIColorGetter::UIColorGetter()   {
}
