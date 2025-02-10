#pragma once
// IWYU pragma private; include "VROSC/AnimationCurveIcon.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__AnimationCurveIcon_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "VROSC/zzzz__ProceduralAdjustableMesh_def.hpp"
//  Writing Method size for method: ::VROSC::AnimationCurveIcon.OnEnable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimationCurveIcon::*)()>(&::VROSC::AnimationCurveIcon::OnEnable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x17aa598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimationCurveIcon*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimationCurveIcon.OnDisable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimationCurveIcon::*)()>(&::VROSC::AnimationCurveIcon::OnDisable)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x17aa9e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimationCurveIcon*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimationCurveIcon.SetAnimationCurve
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimationCurveIcon::*)(::UnityEngine::AnimationCurve*)>(&::VROSC::AnimationCurveIcon::SetAnimationCurve)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x17aaae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimationCurveIcon*>::get(),
                        "SetAnimationCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimationCurveIcon.MeshUpdated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimationCurveIcon::*)()>(&::VROSC::AnimationCurveIcon::MeshUpdated)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x17aa6bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimationCurveIcon*>::get(),
                        "MeshUpdated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AnimationCurveIcon._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AnimationCurveIcon::*)()>(&::VROSC::AnimationCurveIcon::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17aab10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimationCurveIcon*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::ProceduralAdjustableMesh>& VROSC::AnimationCurveIcon::__cordl_internal_get__mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr ::UnityW<::VROSC::ProceduralAdjustableMesh> const& VROSC::AnimationCurveIcon::__cordl_internal_get__mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr void VROSC::AnimationCurveIcon::__cordl_internal_set__mesh(::UnityW<::VROSC::ProceduralAdjustableMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::AnimationCurveIcon::__cordl_internal_get__animationCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::AnimationCurveIcon::__cordl_internal_get__animationCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationCurve;
}
constexpr void VROSC::AnimationCurveIcon::__cordl_internal_set__animationCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animationCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::AnimationCurveIcon::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimationCurveIcon*>::get(),
                        "OnEnable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AnimationCurveIcon::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimationCurveIcon*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AnimationCurveIcon::SetAnimationCurve(::UnityEngine::AnimationCurve*  animationCurve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimationCurveIcon*>::get(),
                        "SetAnimationCurve",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, animationCurve);
}
inline void VROSC::AnimationCurveIcon::MeshUpdated()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimationCurveIcon*>::get(),
                        "MeshUpdated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AnimationCurveIcon::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AnimationCurveIcon*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AnimationCurveIcon* VROSC::AnimationCurveIcon::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AnimationCurveIcon*>());
}
// Ctor Parameters []
constexpr ::VROSC::AnimationCurveIcon::AnimationCurveIcon()   {
}
