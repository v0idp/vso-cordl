#pragma once
// IWYU pragma private; include "VROSC/ControllerHintUI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__ControllerHintUI_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "VROSC/zzzz__IconMesh_def.hpp"
#include "VROSC/zzzz__TooltipData_def.hpp"
//  Writing Method size for method: ::VROSC::ControllerHintUI.SetTooltipActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ControllerHintUI::*)(bool, ::VROSC::TooltipData*)>(&::VROSC::ControllerHintUI::SetTooltipActive)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x1732970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerHintUI*>::get(),
                        "SetTooltipActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TooltipData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ControllerHintUI.SetIcon
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::ControllerHintUI::*)(::VROSC::TooltipData*)>(&::VROSC::ControllerHintUI::SetIcon)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x1732b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerHintUI*>::get(),
                        "SetIcon",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TooltipData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ControllerHintUI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ControllerHintUI::*)()>(&::VROSC::ControllerHintUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1732c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerHintUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::ControllerHintUI::__cordl_internal_get__hintLabelText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hintLabelText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::ControllerHintUI::__cordl_internal_get__hintLabelText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hintLabelText;
}
constexpr void VROSC::ControllerHintUI::__cordl_internal_set__hintLabelText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hintLabelText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RectTransform>& VROSC::ControllerHintUI::__cordl_internal_get__hintBackground()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hintBackground;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& VROSC::ControllerHintUI::__cordl_internal_get__hintBackground() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hintBackground;
}
constexpr void VROSC::ControllerHintUI::__cordl_internal_set__hintBackground(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hintBackground)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::ControllerHintUI::__cordl_internal_get__hintLabelIfIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hintLabelIfIcon;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::ControllerHintUI::__cordl_internal_get__hintLabelIfIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hintLabelIfIcon;
}
constexpr void VROSC::ControllerHintUI::__cordl_internal_set__hintLabelIfIcon(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hintLabelIfIcon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::IconMesh>& VROSC::ControllerHintUI::__cordl_internal_get__iconMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iconMesh;
}
constexpr ::UnityW<::VROSC::IconMesh> const& VROSC::ControllerHintUI::__cordl_internal_get__iconMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iconMesh;
}
constexpr void VROSC::ControllerHintUI::__cordl_internal_set__iconMesh(::UnityW<::VROSC::IconMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____iconMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RectTransform>& VROSC::ControllerHintUI::__cordl_internal_get__iconHolder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iconHolder;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& VROSC::ControllerHintUI::__cordl_internal_get__iconHolder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iconHolder;
}
constexpr void VROSC::ControllerHintUI::__cordl_internal_set__iconHolder(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____iconHolder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::ControllerHintUI::__cordl_internal_get__textpaddingX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textpaddingX;
}
constexpr float_t const& VROSC::ControllerHintUI::__cordl_internal_get__textpaddingX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textpaddingX;
}
constexpr void VROSC::ControllerHintUI::__cordl_internal_set__textpaddingX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____textpaddingX = value;
}
constexpr float_t& VROSC::ControllerHintUI::__cordl_internal_get__textpaddingY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textpaddingY;
}
constexpr float_t const& VROSC::ControllerHintUI::__cordl_internal_get__textpaddingY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textpaddingY;
}
constexpr void VROSC::ControllerHintUI::__cordl_internal_set__textpaddingY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____textpaddingY = value;
}
constexpr ::VROSC::TooltipData*& VROSC::ControllerHintUI::__cordl_internal_get__currentTooltip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTooltip;
}
constexpr ::VROSC::TooltipData* const& VROSC::ControllerHintUI::__cordl_internal_get__currentTooltip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTooltip;
}
constexpr void VROSC::ControllerHintUI::__cordl_internal_set__currentTooltip(::VROSC::TooltipData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentTooltip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ControllerHintUI::SetTooltipActive(bool  active, ::VROSC::TooltipData*  tooltip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerHintUI*>::get(),
                        "SetTooltipActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TooltipData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, active, tooltip);
}
inline bool VROSC::ControllerHintUI::SetIcon(::VROSC::TooltipData*  tooltip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerHintUI*>::get(),
                        "SetIcon",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TooltipData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, tooltip);
}
inline void VROSC::ControllerHintUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ControllerHintUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ControllerHintUI* VROSC::ControllerHintUI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ControllerHintUI*>());
}
// Ctor Parameters []
constexpr ::VROSC::ControllerHintUI::ControllerHintUI()   {
}
