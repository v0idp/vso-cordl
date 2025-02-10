#pragma once
// IWYU pragma private; include "VROSC/TextSpinnerItem.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__TextSpinnerItem_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "VROSC/zzzz__AdjustableMesh_def.hpp"
//  Writing Method size for method: ::VROSC::TextSpinnerItem.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TextSpinnerItem::*)()>(&::VROSC::TextSpinnerItem::Awake)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1777ce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextSpinnerItem*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TextSpinnerItem.AddHook
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TextSpinnerItem::*)()>(&::VROSC::TextSpinnerItem::AddHook)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1777da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextSpinnerItem*>::get(),
                        "AddHook",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TextSpinnerItem.SetMaterial
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TextSpinnerItem::*)(::UnityEngine::Color)>(&::VROSC::TextSpinnerItem::SetMaterial)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1777e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextSpinnerItem*>::get(),
                        "SetMaterial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TextSpinnerItem.Set
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TextSpinnerItem::*)(::StringW, bool, float_t)>(&::VROSC::TextSpinnerItem::Set)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x17774f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextSpinnerItem*>::get(),
                        "Set",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TextSpinnerItem._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TextSpinnerItem::*)()>(&::VROSC::TextSpinnerItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1777ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextSpinnerItem*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::TextSpinnerItem::__cordl_internal_get__valueText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::TextSpinnerItem::__cordl_internal_get__valueText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueText;
}
constexpr void VROSC::TextSpinnerItem::__cordl_internal_set__valueText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____valueText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::AdjustableMesh>& VROSC::TextSpinnerItem::__cordl_internal_get__background()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____background;
}
constexpr ::UnityW<::VROSC::AdjustableMesh> const& VROSC::TextSpinnerItem::__cordl_internal_get__background() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____background;
}
constexpr void VROSC::TextSpinnerItem::__cordl_internal_set__background(::UnityW<::VROSC::AdjustableMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____background)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& VROSC::TextSpinnerItem::__cordl_internal_get__selectedColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedColor;
}
constexpr ::UnityEngine::Color const& VROSC::TextSpinnerItem::__cordl_internal_get__selectedColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedColor;
}
constexpr void VROSC::TextSpinnerItem::__cordl_internal_set__selectedColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectedColor = value;
}
constexpr ::UnityEngine::Color& VROSC::TextSpinnerItem::__cordl_internal_get__inactiveColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inactiveColor;
}
constexpr ::UnityEngine::Color const& VROSC::TextSpinnerItem::__cordl_internal_get__inactiveColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inactiveColor;
}
constexpr void VROSC::TextSpinnerItem::__cordl_internal_set__inactiveColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inactiveColor = value;
}
constexpr ::UnityEngine::Color& VROSC::TextSpinnerItem::__cordl_internal_get__backgroundColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backgroundColor;
}
constexpr ::UnityEngine::Color const& VROSC::TextSpinnerItem::__cordl_internal_get__backgroundColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backgroundColor;
}
constexpr void VROSC::TextSpinnerItem::__cordl_internal_set__backgroundColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____backgroundColor = value;
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::TextSpinnerItem::__cordl_internal_get__alphaCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alphaCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::TextSpinnerItem::__cordl_internal_get__alphaCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alphaCurve;
}
constexpr void VROSC::TextSpinnerItem::__cordl_internal_set__alphaCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____alphaCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& VROSC::TextSpinnerItem::__cordl_internal_get__currentTextColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTextColor;
}
constexpr ::UnityEngine::Color const& VROSC::TextSpinnerItem::__cordl_internal_get__currentTextColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTextColor;
}
constexpr void VROSC::TextSpinnerItem::__cordl_internal_set__currentTextColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentTextColor = value;
}
constexpr ::UnityEngine::Color& VROSC::TextSpinnerItem::__cordl_internal_get__currentBackgroundColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentBackgroundColor;
}
constexpr ::UnityEngine::Color const& VROSC::TextSpinnerItem::__cordl_internal_get__currentBackgroundColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentBackgroundColor;
}
constexpr void VROSC::TextSpinnerItem::__cordl_internal_set__currentBackgroundColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentBackgroundColor = value;
}
constexpr float_t& VROSC::TextSpinnerItem::__cordl_internal_get__currentAlpha()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentAlpha;
}
constexpr float_t const& VROSC::TextSpinnerItem::__cordl_internal_get__currentAlpha() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentAlpha;
}
constexpr void VROSC::TextSpinnerItem::__cordl_internal_set__currentAlpha(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentAlpha = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& VROSC::TextSpinnerItem::__cordl_internal_get__adjustableMeshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____adjustableMeshRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& VROSC::TextSpinnerItem::__cordl_internal_get__adjustableMeshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____adjustableMeshRenderer;
}
constexpr void VROSC::TextSpinnerItem::__cordl_internal_set__adjustableMeshRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____adjustableMeshRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& VROSC::TextSpinnerItem::__cordl_internal_get__transparentMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transparentMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& VROSC::TextSpinnerItem::__cordl_internal_get__transparentMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transparentMaterial;
}
constexpr void VROSC::TextSpinnerItem::__cordl_internal_set__transparentMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transparentMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& VROSC::TextSpinnerItem::__cordl_internal_get__normalMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& VROSC::TextSpinnerItem::__cordl_internal_get__normalMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalMaterial;
}
constexpr void VROSC::TextSpinnerItem::__cordl_internal_set__normalMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____normalMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::TextSpinnerItem::__cordl_internal_get__isTransparent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTransparent;
}
constexpr bool const& VROSC::TextSpinnerItem::__cordl_internal_get__isTransparent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTransparent;
}
constexpr void VROSC::TextSpinnerItem::__cordl_internal_set__isTransparent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isTransparent = value;
}
inline void VROSC::TextSpinnerItem::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextSpinnerItem*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TextSpinnerItem::AddHook()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextSpinnerItem*>::get(),
                        "AddHook",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TextSpinnerItem::SetMaterial(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextSpinnerItem*>::get(),
                        "SetMaterial",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void VROSC::TextSpinnerItem::Set(::StringW  text, bool  selected, float_t  valueOffCenter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextSpinnerItem*>::get(),
                        "Set",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text, selected, valueOffCenter);
}
inline void VROSC::TextSpinnerItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextSpinnerItem*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TextSpinnerItem* VROSC::TextSpinnerItem::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TextSpinnerItem*>());
}
// Ctor Parameters []
constexpr ::VROSC::TextSpinnerItem::TextSpinnerItem()   {
}
