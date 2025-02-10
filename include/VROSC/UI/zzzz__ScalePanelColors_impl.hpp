#pragma once
// IWYU pragma private; include "VROSC/UI/ScalePanelColors.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "VROSC/UI/zzzz__ScalePanelColors_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/UI/zzzz__IMappedColor_def.hpp"
#include "VROSC/UI/zzzz__UIExplicitColor_def.hpp"
//  Writing Method size for method: ::VROSC::UI::ScalePanelColors.GetMappedColors
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::VROSC::UI::IMappedColor*>* (::VROSC::UI::ScalePanelColors::*)()>(&::VROSC::UI::ScalePanelColors::GetMappedColors)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x17e7250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::ScalePanelColors*>::get(),
                        "GetMappedColors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::ScalePanelColors.GetScalePanelColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::VROSC::UI::ScalePanelColors::*)(int32_t, bool, bool, bool)>(&::VROSC::UI::ScalePanelColors::GetScalePanelColor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x17e7424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::ScalePanelColors*>::get(),
                        "GetScalePanelColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::ScalePanelColors.GetColorByAxis
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VROSC::UI::UIExplicitColor* (::VROSC::UI::ScalePanelColors::*)(int32_t)>(&::VROSC::UI::ScalePanelColors::GetColorByAxis)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x17e74c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::ScalePanelColors*>::get(),
                        "GetColorByAxis",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::ScalePanelColors._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::ScalePanelColors::*)()>(&::VROSC::UI::ScalePanelColors::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e74ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::ScalePanelColors*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::UI::UIExplicitColor*& VROSC::UI::ScalePanelColors::__cordl_internal_get__xAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xAxis;
}
constexpr ::VROSC::UI::UIExplicitColor* const& VROSC::UI::ScalePanelColors::__cordl_internal_get__xAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xAxis;
}
constexpr void VROSC::UI::ScalePanelColors::__cordl_internal_set__xAxis(::VROSC::UI::UIExplicitColor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____xAxis)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::UI::UIExplicitColor*& VROSC::UI::ScalePanelColors::__cordl_internal_get__yAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yAxis;
}
constexpr ::VROSC::UI::UIExplicitColor* const& VROSC::UI::ScalePanelColors::__cordl_internal_get__yAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____yAxis;
}
constexpr void VROSC::UI::ScalePanelColors::__cordl_internal_set__yAxis(::VROSC::UI::UIExplicitColor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____yAxis)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::UI::UIExplicitColor*& VROSC::UI::ScalePanelColors::__cordl_internal_get__zAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zAxis;
}
constexpr ::VROSC::UI::UIExplicitColor* const& VROSC::UI::ScalePanelColors::__cordl_internal_get__zAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zAxis;
}
constexpr void VROSC::UI::ScalePanelColors::__cordl_internal_set__zAxis(::VROSC::UI::UIExplicitColor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____zAxis)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::UI::UIExplicitColor*& VROSC::UI::ScalePanelColors::__cordl_internal_get__off()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____off;
}
constexpr ::VROSC::UI::UIExplicitColor* const& VROSC::UI::ScalePanelColors::__cordl_internal_get__off() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____off;
}
constexpr void VROSC::UI::ScalePanelColors::__cordl_internal_set__off(::VROSC::UI::UIExplicitColor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____off)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::VROSC::UI::IMappedColor*>* VROSC::UI::ScalePanelColors::GetMappedColors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::ScalePanelColors*>::get(),
                        "GetMappedColors",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::VROSC::UI::IMappedColor*>*, false>(this, ___internal_method);
}
inline ::UnityEngine::Color VROSC::UI::ScalePanelColors::GetScalePanelColor(int32_t  axis, bool  active, bool  hovering, bool  disabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::ScalePanelColors*>::get(),
                        "GetScalePanelColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, axis, active, hovering, disabled);
}
inline ::VROSC::UI::UIExplicitColor* VROSC::UI::ScalePanelColors::GetColorByAxis(int32_t  axis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::ScalePanelColors*>::get(),
                        "GetColorByAxis",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::VROSC::UI::UIExplicitColor*, false>(this, ___internal_method, axis);
}
inline void VROSC::UI::ScalePanelColors::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::ScalePanelColors*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UI::ScalePanelColors* VROSC::UI::ScalePanelColors::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::ScalePanelColors*>());
}
// Ctor Parameters []
constexpr ::VROSC::UI::ScalePanelColors::ScalePanelColors()   {
}
