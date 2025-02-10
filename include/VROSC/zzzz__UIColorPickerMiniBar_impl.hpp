#pragma once
// IWYU pragma private; include "VROSC/UIColorPickerMiniBar.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__UIColorPickerMiniBar_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/UI/Meshes/zzzz__ColorPickerMesh_def.hpp"
#include "VROSC/zzzz__UIColorPickerMiniBar_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::UIColorPickerMiniBar_Type::UIColorPickerMiniBar_Type(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::UIColorPickerMiniBar_Type::UIColorPickerMiniBar_Type()   {
}
constexpr ::VROSC::UIColorPickerMiniBar_Type  VROSC::UIColorPickerMiniBar_Type::Hue{static_cast<int32_t>(0x0)};
constexpr ::VROSC::UIColorPickerMiniBar_Type  VROSC::UIColorPickerMiniBar_Type::Saturation{static_cast<int32_t>(0x1)};
constexpr ::VROSC::UIColorPickerMiniBar_Type  VROSC::UIColorPickerMiniBar_Type::Value{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::VROSC::UIColorPickerMiniBar.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIColorPickerMiniBar::*)()>(&::VROSC::UIColorPickerMiniBar::Awake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1779018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIColorPickerMiniBar*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIColorPickerMiniBar.Verify
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIColorPickerMiniBar::*)(bool)>(&::VROSC::UIColorPickerMiniBar::Verify)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x17780e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIColorPickerMiniBar*>::get(),
                        "Verify",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIColorPickerMiniBar.Set
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIColorPickerMiniBar::*)(float_t, float_t, float_t)>(&::VROSC::UIColorPickerMiniBar::Set)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x17782f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIColorPickerMiniBar*>::get(),
                        "Set",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIColorPickerMiniBar.SetMarker
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIColorPickerMiniBar::*)(float_t)>(&::VROSC::UIColorPickerMiniBar::SetMarker)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1779020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIColorPickerMiniBar*>::get(),
                        "SetMarker",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UIColorPickerMiniBar._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UIColorPickerMiniBar::*)()>(&::VROSC::UIColorPickerMiniBar::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1779060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIColorPickerMiniBar*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::UIColorPickerMiniBar_Type& VROSC::UIColorPickerMiniBar::__cordl_internal_get__type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr ::VROSC::UIColorPickerMiniBar_Type const& VROSC::UIColorPickerMiniBar::__cordl_internal_get__type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr void VROSC::UIColorPickerMiniBar::__cordl_internal_set__type(::VROSC::UIColorPickerMiniBar_Type  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____type = value;
}
constexpr ::UnityW<::VROSC::UI::Meshes::ColorPickerMesh>& VROSC::UIColorPickerMiniBar::__cordl_internal_get__mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr ::UnityW<::VROSC::UI::Meshes::ColorPickerMesh> const& VROSC::UIColorPickerMiniBar::__cordl_internal_get__mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr void VROSC::UIColorPickerMiniBar::__cordl_internal_set__mesh(::UnityW<::VROSC::UI::Meshes::ColorPickerMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::UIColorPickerMiniBar::__cordl_internal_get__marker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____marker;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::UIColorPickerMiniBar::__cordl_internal_get__marker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____marker;
}
constexpr void VROSC::UIColorPickerMiniBar::__cordl_internal_set__marker(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____marker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::UIColorPickerMiniBar::__cordl_internal_get__width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____width;
}
constexpr float_t const& VROSC::UIColorPickerMiniBar::__cordl_internal_get__width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____width;
}
constexpr void VROSC::UIColorPickerMiniBar::__cordl_internal_set__width(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____width = value;
}
inline void VROSC::UIColorPickerMiniBar::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIColorPickerMiniBar*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UIColorPickerMiniBar::Verify(bool  forceUpdate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIColorPickerMiniBar*>::get(),
                        "Verify",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forceUpdate);
}
inline void VROSC::UIColorPickerMiniBar::Set(float_t  hue, float_t  saturation, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIColorPickerMiniBar*>::get(),
                        "Set",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hue, saturation, value);
}
inline void VROSC::UIColorPickerMiniBar::SetMarker(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIColorPickerMiniBar*>::get(),
                        "SetMarker",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VROSC::UIColorPickerMiniBar::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UIColorPickerMiniBar*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UIColorPickerMiniBar* VROSC::UIColorPickerMiniBar::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UIColorPickerMiniBar*>());
}
// Ctor Parameters []
constexpr ::VROSC::UIColorPickerMiniBar::UIColorPickerMiniBar()   {
}
