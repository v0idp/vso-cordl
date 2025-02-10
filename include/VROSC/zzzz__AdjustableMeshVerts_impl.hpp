#pragma once
// IWYU pragma private; include "VROSC/AdjustableMeshVerts.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__AdjustableMeshVerts_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__AdjustableMesh_def.hpp"
//  Writing Method size for method: ::VROSC::AdjustableMeshVerts._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshVerts::*)(::VROSC::AdjustableMesh*)>(&::VROSC::AdjustableMeshVerts::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x17ac30c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshVerts*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AdjustableMesh*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AdjustableMeshVerts.SetScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshVerts::*)(::UnityEngine::Vector3)>(&::VROSC::AdjustableMeshVerts::SetScale)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x17ac334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshVerts*>::get(),
                        "SetScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::AdjustableMesh>& VROSC::AdjustableMeshVerts::__cordl_internal_get__adjustableMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____adjustableMesh;
}
constexpr ::UnityW<::VROSC::AdjustableMesh> const& VROSC::AdjustableMeshVerts::__cordl_internal_get__adjustableMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____adjustableMesh;
}
constexpr void VROSC::AdjustableMeshVerts::__cordl_internal_set__adjustableMesh(::UnityW<::VROSC::AdjustableMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____adjustableMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::AdjustableMeshVerts::_ctor(::VROSC::AdjustableMesh*  adjustableMesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshVerts*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AdjustableMesh*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, adjustableMesh);
}
inline void VROSC::AdjustableMeshVerts::SetScale(::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshVerts*>::get(),
                        "SetScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scale);
}
inline ::VROSC::AdjustableMeshVerts* VROSC::AdjustableMeshVerts::New_ctor(::VROSC::AdjustableMesh*  adjustableMesh)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AdjustableMeshVerts*>(adjustableMesh));
}
// Ctor Parameters []
constexpr ::VROSC::AdjustableMeshVerts::AdjustableMeshVerts()   {
}
