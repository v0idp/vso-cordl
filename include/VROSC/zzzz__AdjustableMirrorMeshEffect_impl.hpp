#pragma once
// IWYU pragma private; include "VROSC/AdjustableMirrorMeshEffect.hpp"
#include "VROSC/zzzz__AdjustableMeshEffect_impl.hpp"
#include "VROSC/zzzz__AdjustableMirrorMeshEffect_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::VROSC::AdjustableMirrorMeshEffect.OnMeshVisible
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMirrorMeshEffect::*)()>(&::VROSC::AdjustableMirrorMeshEffect::OnMeshVisible)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x17a7404;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMirrorMeshEffect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMirrorMeshEffect*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AdjustableMirrorMeshEffect.Flip
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMirrorMeshEffect::*)(::UnityEngine::Mesh*)>(&::VROSC::AdjustableMirrorMeshEffect::Flip)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x17a7440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMirrorMeshEffect*>::get(),
                        "Flip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AdjustableMirrorMeshEffect.FlipNormals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMirrorMeshEffect::*)(::UnityEngine::Mesh*)>(&::VROSC::AdjustableMirrorMeshEffect::FlipNormals)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x17a74dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMirrorMeshEffect*>::get(),
                        "FlipNormals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AdjustableMirrorMeshEffect._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMirrorMeshEffect::*)()>(&::VROSC::AdjustableMirrorMeshEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17a75dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMirrorMeshEffect*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& VROSC::AdjustableMirrorMeshEffect::__cordl_internal_get__flipped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flipped;
}
constexpr bool const& VROSC::AdjustableMirrorMeshEffect::__cordl_internal_get__flipped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flipped;
}
constexpr void VROSC::AdjustableMirrorMeshEffect::__cordl_internal_set__flipped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____flipped = value;
}
inline void VROSC::AdjustableMirrorMeshEffect::OnMeshVisible()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMirrorMeshEffect*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AdjustableMirrorMeshEffect::Flip(::UnityEngine::Mesh*  mesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMirrorMeshEffect*>::get(),
                        "Flip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh);
}
inline void VROSC::AdjustableMirrorMeshEffect::FlipNormals(::UnityEngine::Mesh*  mesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMirrorMeshEffect*>::get(),
                        "FlipNormals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Mesh*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh);
}
inline void VROSC::AdjustableMirrorMeshEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMirrorMeshEffect*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AdjustableMirrorMeshEffect* VROSC::AdjustableMirrorMeshEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AdjustableMirrorMeshEffect*>());
}
// Ctor Parameters []
constexpr ::VROSC::AdjustableMirrorMeshEffect::AdjustableMirrorMeshEffect()   {
}
