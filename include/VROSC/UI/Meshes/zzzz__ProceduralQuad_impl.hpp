#pragma once
// IWYU pragma private; include "VROSC/UI/Meshes/ProceduralQuad.hpp"
#include "VROSC/UI/Meshes/zzzz__ProceduralMeshData_impl.hpp"
#include "VROSC/UI/Meshes/zzzz__ProceduralQuad_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "VROSC/zzzz__AnimatedAppear_def.hpp"
//  Writing Method size for method: ::VROSC::UI::Meshes::ProceduralQuad.get_VertCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::UI::Meshes::ProceduralQuad::*)()>(&::VROSC::UI::Meshes::ProceduralQuad::get_VertCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17efc94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralQuad*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralQuad*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::ProceduralQuad.GetSharedMeshData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::Meshes::ProceduralQuad::*)(::UnityEngine::Mesh*)>(&::VROSC::UI::Meshes::ProceduralQuad::GetSharedMeshData)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x17efc9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralQuad*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralQuad*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::ProceduralQuad.SetMeshSize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::Meshes::ProceduralQuad::*)(::UnityEngine::Mesh*, ::UnityEngine::Rect, float_t, float_t, float_t, ::VROSC::AnimatedAppear_Mode)>(&::VROSC::UI::Meshes::ProceduralQuad::SetMeshSize)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x17efe94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralQuad*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralQuad*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::ProceduralQuad._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::Meshes::ProceduralQuad::*)()>(&::VROSC::UI::Meshes::ProceduralQuad::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17effb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralQuad*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline int32_t VROSC::UI::Meshes::ProceduralQuad::get_VertCount()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralQuad*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::UI::Meshes::ProceduralQuad::GetSharedMeshData(::UnityEngine::Mesh*  mesh)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralQuad*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh);
}
inline void VROSC::UI::Meshes::ProceduralQuad::SetMeshSize(::UnityEngine::Mesh*  mesh, ::UnityEngine::Rect  rect, float_t  depth, float_t  border, float_t  appear, ::VROSC::AnimatedAppear_Mode  mode)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralQuad*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, rect, depth, border, appear, mode);
}
inline void VROSC::UI::Meshes::ProceduralQuad::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralQuad*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UI::Meshes::ProceduralQuad* VROSC::UI::Meshes::ProceduralQuad::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::Meshes::ProceduralQuad*>());
}
// Ctor Parameters []
constexpr ::VROSC::UI::Meshes::ProceduralQuad::ProceduralQuad()   {
}
