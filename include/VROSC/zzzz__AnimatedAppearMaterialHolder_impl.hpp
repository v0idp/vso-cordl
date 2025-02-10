#pragma once
// IWYU pragma private; include "VROSC/AnimatedAppearMaterialHolder.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__AnimatedAppearMaterialHolder_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::VROSC::AnimatedAppearMaterialHolder.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppearMaterialHolder::*)(::TMPro::TextMeshPro*, ::UnityEngine::Material*)>(&::VROSC::AnimatedAppearMaterialHolder::Setup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17a9c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearMaterialHolder*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextMeshPro*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppearMaterialHolder.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppearMaterialHolder::*)(::UnityEngine::Renderer*, ::UnityEngine::Material*)>(&::VROSC::AnimatedAppearMaterialHolder::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17a9c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearMaterialHolder*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppearMaterialHolder.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppearMaterialHolder::*)()>(&::VROSC::AnimatedAppearMaterialHolder::Reset)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x17a9c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearMaterialHolder*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimatedAppearMaterialHolder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimatedAppearMaterialHolder::*)()>(&::VROSC::AnimatedAppearMaterialHolder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17a9d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearMaterialHolder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::AnimatedAppearMaterialHolder::__cordl_internal_get__textMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textMesh;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::AnimatedAppearMaterialHolder::__cordl_internal_get__textMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textMesh;
}
constexpr void VROSC::AnimatedAppearMaterialHolder::__cordl_internal_set__textMesh(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Renderer>& VROSC::AnimatedAppearMaterialHolder::__cordl_internal_get__renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& VROSC::AnimatedAppearMaterialHolder::__cordl_internal_get__renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr void VROSC::AnimatedAppearMaterialHolder::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& VROSC::AnimatedAppearMaterialHolder::__cordl_internal_get__material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material;
}
constexpr ::UnityW<::UnityEngine::Material> const& VROSC::AnimatedAppearMaterialHolder::__cordl_internal_get__material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material;
}
constexpr void VROSC::AnimatedAppearMaterialHolder::__cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::AnimatedAppearMaterialHolder::Setup(::TMPro::TextMeshPro*  textMesh, ::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearMaterialHolder*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextMeshPro*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textMesh, material);
}
inline void VROSC::AnimatedAppearMaterialHolder::Setup(::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  material)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearMaterialHolder*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderer, material);
}
inline void VROSC::AnimatedAppearMaterialHolder::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearMaterialHolder*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AnimatedAppearMaterialHolder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimatedAppearMaterialHolder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AnimatedAppearMaterialHolder* VROSC::AnimatedAppearMaterialHolder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AnimatedAppearMaterialHolder*>());
}
// Ctor Parameters []
constexpr ::VROSC::AnimatedAppearMaterialHolder::AnimatedAppearMaterialHolder()   {
}
