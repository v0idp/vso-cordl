#pragma once
// IWYU pragma private; include "VROSC/ButtonVisual.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__ButtonVisual_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::VROSC::ButtonVisual.SetText
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ButtonVisual::*)(::StringW)>(&::VROSC::ButtonVisual::SetText)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1749958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ButtonVisual*>::get(),
                        "SetText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ButtonVisual.SetHovering
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ButtonVisual::*)(bool)>(&::VROSC::ButtonVisual::SetHovering)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1749970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ButtonVisual*>::get(),
                        "SetHovering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ButtonVisual.SetActive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ButtonVisual::*)(bool)>(&::VROSC::ButtonVisual::SetActive)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1749a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ButtonVisual*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ButtonVisual.AutoFind
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ButtonVisual::*)()>(&::VROSC::ButtonVisual::AutoFind)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1749b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ButtonVisual*>::get(),
                        "AutoFind",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ButtonVisual._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ButtonVisual::*)()>(&::VROSC::ButtonVisual::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1749c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ButtonVisual*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshFilter>& VROSC::ButtonVisual::__cordl_internal_get__meshFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshFilter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& VROSC::ButtonVisual::__cordl_internal_get__meshFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshFilter;
}
constexpr void VROSC::ButtonVisual::__cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Mesh>& VROSC::ButtonVisual::__cordl_internal_get__activeMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& VROSC::ButtonVisual::__cordl_internal_get__activeMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeMesh;
}
constexpr void VROSC::ButtonVisual::__cordl_internal_set__activeMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Mesh>& VROSC::ButtonVisual::__cordl_internal_get__inactiveMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inactiveMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& VROSC::ButtonVisual::__cordl_internal_get__inactiveMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inactiveMesh;
}
constexpr void VROSC::ButtonVisual::__cordl_internal_set__inactiveMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inactiveMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::ButtonVisual::__cordl_internal_get__text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::ButtonVisual::__cordl_internal_get__text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr void VROSC::ButtonVisual::__cordl_internal_set__text(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& VROSC::ButtonVisual::__cordl_internal_get__activeTextColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeTextColor;
}
constexpr ::UnityEngine::Color const& VROSC::ButtonVisual::__cordl_internal_get__activeTextColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeTextColor;
}
constexpr void VROSC::ButtonVisual::__cordl_internal_set__activeTextColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeTextColor = value;
}
constexpr ::UnityEngine::Color& VROSC::ButtonVisual::__cordl_internal_get__inActiveTextColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inActiveTextColor;
}
constexpr ::UnityEngine::Color const& VROSC::ButtonVisual::__cordl_internal_get__inActiveTextColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inActiveTextColor;
}
constexpr void VROSC::ButtonVisual::__cordl_internal_set__inActiveTextColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inActiveTextColor = value;
}
constexpr ::UnityEngine::Color& VROSC::ButtonVisual::__cordl_internal_get__hoverColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverColor;
}
constexpr ::UnityEngine::Color const& VROSC::ButtonVisual::__cordl_internal_get__hoverColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverColor;
}
constexpr void VROSC::ButtonVisual::__cordl_internal_set__hoverColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hoverColor = value;
}
constexpr bool& VROSC::ButtonVisual::__cordl_internal_get__active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____active;
}
constexpr bool const& VROSC::ButtonVisual::__cordl_internal_get__active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____active;
}
constexpr void VROSC::ButtonVisual::__cordl_internal_set__active(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____active = value;
}
inline void VROSC::ButtonVisual::SetText(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ButtonVisual*>::get(),
                        "SetText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void VROSC::ButtonVisual::SetHovering(bool  hovering)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ButtonVisual*>::get(),
                        "SetHovering",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hovering);
}
inline void VROSC::ButtonVisual::SetActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ButtonVisual*>::get(),
                        "SetActive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, active);
}
inline void VROSC::ButtonVisual::AutoFind()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ButtonVisual*>::get(),
                        "AutoFind",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ButtonVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ButtonVisual*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ButtonVisual* VROSC::ButtonVisual::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ButtonVisual*>());
}
// Ctor Parameters []
constexpr ::VROSC::ButtonVisual::ButtonVisual()   {
}
