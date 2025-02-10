#pragma once
// IWYU pragma private; include "VROSC/GlobalDrumPadEffect.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__GlobalDrumPadEffect_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__AdjustableMesh_def.hpp"
//  Writing Method size for method: ::VROSC::GlobalDrumPadEffect.SetColor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GlobalDrumPadEffect::*)(::UnityEngine::Color, bool)>(&::VROSC::GlobalDrumPadEffect::SetColor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17276e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GlobalDrumPadEffect*>::get(),
                        "SetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::GlobalDrumPadEffect._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::GlobalDrumPadEffect::*)()>(&::VROSC::GlobalDrumPadEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17276e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GlobalDrumPadEffect*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::AdjustableMesh>& VROSC::GlobalDrumPadEffect::__cordl_internal_get__padRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____padRenderer;
}
constexpr ::UnityW<::VROSC::AdjustableMesh> const& VROSC::GlobalDrumPadEffect::__cordl_internal_get__padRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____padRenderer;
}
constexpr void VROSC::GlobalDrumPadEffect::__cordl_internal_set__padRenderer(::UnityW<::VROSC::AdjustableMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____padRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::GlobalDrumPadEffect::__cordl_internal_get__preview()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preview;
}
constexpr bool const& VROSC::GlobalDrumPadEffect::__cordl_internal_get__preview() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preview;
}
constexpr void VROSC::GlobalDrumPadEffect::__cordl_internal_set__preview(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____preview = value;
}
constexpr ::UnityEngine::Color& VROSC::GlobalDrumPadEffect::__cordl_internal_get__previewColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewColor;
}
constexpr ::UnityEngine::Color const& VROSC::GlobalDrumPadEffect::__cordl_internal_get__previewColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewColor;
}
constexpr void VROSC::GlobalDrumPadEffect::__cordl_internal_set__previewColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previewColor = value;
}
constexpr float_t& VROSC::GlobalDrumPadEffect::__cordl_internal_get__previewTiming()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewTiming;
}
constexpr float_t const& VROSC::GlobalDrumPadEffect::__cordl_internal_get__previewTiming() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewTiming;
}
constexpr void VROSC::GlobalDrumPadEffect::__cordl_internal_set__previewTiming(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previewTiming = value;
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::GlobalDrumPadEffect::__cordl_internal_get__powerCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____powerCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::GlobalDrumPadEffect::__cordl_internal_get__powerCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____powerCurve;
}
constexpr void VROSC::GlobalDrumPadEffect::__cordl_internal_set__powerCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____powerCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& VROSC::GlobalDrumPadEffect::__cordl_internal_get__color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____color;
}
constexpr ::UnityEngine::Color const& VROSC::GlobalDrumPadEffect::__cordl_internal_get__color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____color;
}
constexpr void VROSC::GlobalDrumPadEffect::__cordl_internal_set__color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____color = value;
}
constexpr bool& VROSC::GlobalDrumPadEffect::__cordl_internal_get__meshesVerified()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshesVerified;
}
constexpr bool const& VROSC::GlobalDrumPadEffect::__cordl_internal_get__meshesVerified() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshesVerified;
}
constexpr void VROSC::GlobalDrumPadEffect::__cordl_internal_set__meshesVerified(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshesVerified = value;
}
inline void VROSC::GlobalDrumPadEffect::SetColor(::UnityEngine::Color  color, bool  affectVisual)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GlobalDrumPadEffect*>::get(),
                        "SetColor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color, affectVisual);
}
inline void VROSC::GlobalDrumPadEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::GlobalDrumPadEffect*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::GlobalDrumPadEffect* VROSC::GlobalDrumPadEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::GlobalDrumPadEffect*>());
}
// Ctor Parameters []
constexpr ::VROSC::GlobalDrumPadEffect::GlobalDrumPadEffect()   {
}
