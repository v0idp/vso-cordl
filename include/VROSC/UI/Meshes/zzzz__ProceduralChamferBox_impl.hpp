#pragma once
// IWYU pragma private; include "VROSC/UI/Meshes/ProceduralChamferBox.hpp"
#include "VROSC/UI/Meshes/zzzz__ProceduralMeshData_impl.hpp"
#include "VROSC/UI/Meshes/zzzz__ProceduralChamferBox_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "VROSC/UI/Meshes/zzzz__ProceduralChamferBox_def.hpp"
#include "VROSC/zzzz__AnimatedAppear_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::UI::Meshes::ProceduralChamferBox_Type::ProceduralChamferBox_Type(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::UI::Meshes::ProceduralChamferBox_Type::ProceduralChamferBox_Type()   {
}
constexpr ::VROSC::UI::Meshes::ProceduralChamferBox_Type  VROSC::UI::Meshes::ProceduralChamferBox_Type::Full{static_cast<int32_t>(0x0)};
constexpr ::VROSC::UI::Meshes::ProceduralChamferBox_Type  VROSC::UI::Meshes::ProceduralChamferBox_Type::TopOnly{static_cast<int32_t>(0x1)};
constexpr ::VROSC::UI::Meshes::ProceduralChamferBox_Type  VROSC::UI::Meshes::ProceduralChamferBox_Type::BottomOnly{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::VROSC::UI::Meshes::ProceduralChamferBox.get_VertCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::UI::Meshes::ProceduralChamferBox::*)()>(&::VROSC::UI::Meshes::ProceduralChamferBox::get_VertCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x17eb2d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralChamferBox*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralChamferBox*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::ProceduralChamferBox.GetVertCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::UI::Meshes::ProceduralChamferBox::*)()>(&::VROSC::UI::Meshes::ProceduralChamferBox::GetVertCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x17eb2f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralChamferBox*>::get(),
                        "GetVertCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::ProceduralChamferBox.OnValidate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::Meshes::ProceduralChamferBox::*)()>(&::VROSC::UI::Meshes::ProceduralChamferBox::OnValidate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17eb310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralChamferBox*>::get(),
                        "OnValidate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::ProceduralChamferBox.GetSharedMeshData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::Meshes::ProceduralChamferBox::*)(::UnityEngine::Mesh*)>(&::VROSC::UI::Meshes::ProceduralChamferBox::GetSharedMeshData)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x17eb32c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralChamferBox*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralChamferBox*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::ProceduralChamferBox.AddCornerVerts
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::Meshes::ProceduralChamferBox::*)(::System::Collections::Generic::List_1<int32_t>*, ::System::Object*, int32_t)>(&::VROSC::UI::Meshes::ProceduralChamferBox::AddCornerVerts)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x17eb77c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralChamferBox*>::get(),
                        "AddCornerVerts",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::ProceduralChamferBox.SetMeshSize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::Meshes::ProceduralChamferBox::*)(::UnityEngine::Mesh*, ::UnityEngine::Rect, float_t, float_t, float_t, ::VROSC::AnimatedAppear_Mode)>(&::VROSC::UI::Meshes::ProceduralChamferBox::SetMeshSize)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x17eb948;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralChamferBox*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralChamferBox*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::ProceduralChamferBox.GetChamferPos
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::VROSC::UI::Meshes::ProceduralChamferBox::*)(float_t, float_t, float_t)>(&::VROSC::UI::Meshes::ProceduralChamferBox::GetChamferPos)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x17ebe9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralChamferBox*>::get(),
                        "GetChamferPos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::ProceduralChamferBox._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::Meshes::ProceduralChamferBox::*)()>(&::VROSC::UI::Meshes::ProceduralChamferBox::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x17ebf0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralChamferBox*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::UI::Meshes::ProceduralChamferBox::__cordl_internal_get__chamferEdges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chamferEdges;
}
constexpr int32_t const& VROSC::UI::Meshes::ProceduralChamferBox::__cordl_internal_get__chamferEdges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chamferEdges;
}
constexpr void VROSC::UI::Meshes::ProceduralChamferBox::__cordl_internal_set__chamferEdges(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____chamferEdges = value;
}
constexpr ::VROSC::UI::Meshes::ProceduralChamferBox_Type& VROSC::UI::Meshes::ProceduralChamferBox::__cordl_internal_get__type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr ::VROSC::UI::Meshes::ProceduralChamferBox_Type const& VROSC::UI::Meshes::ProceduralChamferBox::__cordl_internal_get__type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____type;
}
constexpr void VROSC::UI::Meshes::ProceduralChamferBox::__cordl_internal_set__type(::VROSC::UI::Meshes::ProceduralChamferBox_Type  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____type = value;
}
constexpr bool& VROSC::UI::Meshes::ProceduralChamferBox::__cordl_internal_get__fillcenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fillcenter;
}
constexpr bool const& VROSC::UI::Meshes::ProceduralChamferBox::__cordl_internal_get__fillcenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fillcenter;
}
constexpr void VROSC::UI::Meshes::ProceduralChamferBox::__cordl_internal_set__fillcenter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fillcenter = value;
}
inline int32_t VROSC::UI::Meshes::ProceduralChamferBox::get_VertCount()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralChamferBox*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t VROSC::UI::Meshes::ProceduralChamferBox::GetVertCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralChamferBox*>::get(),
                        "GetVertCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::UI::Meshes::ProceduralChamferBox::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralChamferBox*>::get(),
                        "OnValidate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UI::Meshes::ProceduralChamferBox::GetSharedMeshData(::UnityEngine::Mesh*  mesh)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralChamferBox*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh);
}
inline void VROSC::UI::Meshes::ProceduralChamferBox::AddCornerVerts(::System::Collections::Generic::List_1<int32_t>*  triangleList, ::System::Object*  corners, int32_t  vertStart)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralChamferBox*>::get(),
                        "AddCornerVerts",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, triangleList, corners, vertStart);
}
inline void VROSC::UI::Meshes::ProceduralChamferBox::SetMeshSize(::UnityEngine::Mesh*  mesh, ::UnityEngine::Rect  rect, float_t  depth, float_t  border, float_t  appear, ::VROSC::AnimatedAppear_Mode  mode)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralChamferBox*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mesh, rect, depth, border, appear, mode);
}
inline ::UnityEngine::Vector2 VROSC::UI::Meshes::ProceduralChamferBox::GetChamferPos(float_t  count, float_t  corner, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralChamferBox*>::get(),
                        "GetChamferPos",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, count, corner, radius);
}
inline void VROSC::UI::Meshes::ProceduralChamferBox::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::ProceduralChamferBox*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UI::Meshes::ProceduralChamferBox* VROSC::UI::Meshes::ProceduralChamferBox::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::Meshes::ProceduralChamferBox*>());
}
// Ctor Parameters []
constexpr ::VROSC::UI::Meshes::ProceduralChamferBox::ProceduralChamferBox()   {
}
