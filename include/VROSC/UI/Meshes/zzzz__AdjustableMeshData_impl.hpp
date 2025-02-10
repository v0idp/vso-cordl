#pragma once
// IWYU pragma private; include "VROSC/UI/Meshes/AdjustableMeshData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/UI/Meshes/zzzz__AdjustableMeshData_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/UI/Meshes/zzzz__AdjustableMeshData_def.hpp"
#include "VROSC/zzzz__MinMaxFloat_def.hpp"
//  Writing Method size for method: ::VROSC::UI::Meshes::AdjustableMeshData_VertexData.get_OriginalPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::UI::Meshes::AdjustableMeshData_VertexData::*)()>(&::VROSC::UI::Meshes::AdjustableMeshData_VertexData::get_OriginalPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17f1768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData_VertexData*>::get(),
                        "get_OriginalPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::AdjustableMeshData_VertexData.get_Scaling
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::VROSC::UI::Meshes::AdjustableMeshData_VertexData::*)()>(&::VROSC::UI::Meshes::AdjustableMeshData_VertexData::get_Scaling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f1774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData_VertexData*>::get(),
                        "get_Scaling",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::AdjustableMeshData_VertexData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::Meshes::AdjustableMeshData_VertexData::*)(::UnityEngine::Vector3, ::UnityEngine::Vector2)>(&::VROSC::UI::Meshes::AdjustableMeshData_VertexData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x17f1708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData_VertexData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& VROSC::UI::Meshes::AdjustableMeshData_VertexData::__cordl_internal_get__originalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalPosition;
}
constexpr ::UnityEngine::Vector3 const& VROSC::UI::Meshes::AdjustableMeshData_VertexData::__cordl_internal_get__originalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalPosition;
}
constexpr void VROSC::UI::Meshes::AdjustableMeshData_VertexData::__cordl_internal_set__originalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____originalPosition = value;
}
constexpr ::UnityEngine::Vector2& VROSC::UI::Meshes::AdjustableMeshData_VertexData::__cordl_internal_get__scaling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaling;
}
constexpr ::UnityEngine::Vector2 const& VROSC::UI::Meshes::AdjustableMeshData_VertexData::__cordl_internal_get__scaling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaling;
}
constexpr void VROSC::UI::Meshes::AdjustableMeshData_VertexData::__cordl_internal_set__scaling(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scaling = value;
}
inline ::UnityEngine::Vector3 VROSC::UI::Meshes::AdjustableMeshData_VertexData::get_OriginalPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData_VertexData*>::get(),
                        "get_OriginalPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 VROSC::UI::Meshes::AdjustableMeshData_VertexData::get_Scaling()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData_VertexData*>::get(),
                        "get_Scaling",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void VROSC::UI::Meshes::AdjustableMeshData_VertexData::_ctor(::UnityEngine::Vector3  position, ::UnityEngine::Vector2  scaling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData_VertexData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, scaling);
}
inline ::VROSC::UI::Meshes::AdjustableMeshData_VertexData* VROSC::UI::Meshes::AdjustableMeshData_VertexData::New_ctor(::UnityEngine::Vector3  position, ::UnityEngine::Vector2  scaling)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::Meshes::AdjustableMeshData_VertexData*>(position, scaling));
}
// Ctor Parameters []
constexpr ::VROSC::UI::Meshes::AdjustableMeshData_VertexData::AdjustableMeshData_VertexData()   {
}
//  Writing Method size for method: ::VROSC::UI::Meshes::AdjustableMeshData___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::Meshes::AdjustableMeshData___c::*)()>(&::VROSC::UI::Meshes::AdjustableMeshData___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f17d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::AdjustableMeshData___c._GetDimensions_b__24_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::UI::Meshes::AdjustableMeshData___c::*)(::UnityEngine::Vector3)>(&::VROSC::UI::Meshes::AdjustableMeshData___c::_GetDimensions_b__24_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17f17e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData___c*>::get(),
                        "<GetDimensions>b__24_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::AdjustableMeshData___c._GetDimensions_b__24_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::UI::Meshes::AdjustableMeshData___c::*)(::UnityEngine::Vector3)>(&::VROSC::UI::Meshes::AdjustableMeshData___c::_GetDimensions_b__24_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17f17e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData___c*>::get(),
                        "<GetDimensions>b__24_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::AdjustableMeshData___c._GetDimensions_b__24_2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::UI::Meshes::AdjustableMeshData___c::*)(::UnityEngine::Vector3)>(&::VROSC::UI::Meshes::AdjustableMeshData___c::_GetDimensions_b__24_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f17e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData___c*>::get(),
                        "<GetDimensions>b__24_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::AdjustableMeshData___c._GetDimensions_b__24_3
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::UI::Meshes::AdjustableMeshData___c::*)(::UnityEngine::Vector3)>(&::VROSC::UI::Meshes::AdjustableMeshData___c::_GetDimensions_b__24_3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f17f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData___c*>::get(),
                        "<GetDimensions>b__24_3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::UI::Meshes::AdjustableMeshData___c::setStaticF___9(::VROSC::UI::Meshes::AdjustableMeshData___c*  value)  {
::cordl_internals::setStaticField<::VROSC::UI::Meshes::AdjustableMeshData___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData___c*>::get>(std::forward<::VROSC::UI::Meshes::AdjustableMeshData___c*>(value));
}
inline ::VROSC::UI::Meshes::AdjustableMeshData___c* VROSC::UI::Meshes::AdjustableMeshData___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::VROSC::UI::Meshes::AdjustableMeshData___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData___c*>::get>();
}
inline void VROSC::UI::Meshes::AdjustableMeshData___c::setStaticF___9__24_0(::System::Func_2<::UnityEngine::Vector3,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector3,float_t>*, "<>9__24_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData___c*>::get>(std::forward<::System::Func_2<::UnityEngine::Vector3,float_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector3,float_t>* VROSC::UI::Meshes::AdjustableMeshData___c::getStaticF___9__24_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector3,float_t>*, "<>9__24_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData___c*>::get>();
}
inline void VROSC::UI::Meshes::AdjustableMeshData___c::setStaticF___9__24_1(::System::Func_2<::UnityEngine::Vector3,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector3,float_t>*, "<>9__24_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData___c*>::get>(std::forward<::System::Func_2<::UnityEngine::Vector3,float_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector3,float_t>* VROSC::UI::Meshes::AdjustableMeshData___c::getStaticF___9__24_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector3,float_t>*, "<>9__24_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData___c*>::get>();
}
inline void VROSC::UI::Meshes::AdjustableMeshData___c::setStaticF___9__24_2(::System::Func_2<::UnityEngine::Vector3,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector3,float_t>*, "<>9__24_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData___c*>::get>(std::forward<::System::Func_2<::UnityEngine::Vector3,float_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector3,float_t>* VROSC::UI::Meshes::AdjustableMeshData___c::getStaticF___9__24_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector3,float_t>*, "<>9__24_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData___c*>::get>();
}
inline void VROSC::UI::Meshes::AdjustableMeshData___c::setStaticF___9__24_3(::System::Func_2<::UnityEngine::Vector3,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector3,float_t>*, "<>9__24_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData___c*>::get>(std::forward<::System::Func_2<::UnityEngine::Vector3,float_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector3,float_t>* VROSC::UI::Meshes::AdjustableMeshData___c::getStaticF___9__24_3()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector3,float_t>*, "<>9__24_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData___c*>::get>();
}
inline void VROSC::UI::Meshes::AdjustableMeshData___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t VROSC::UI::Meshes::AdjustableMeshData___c::_GetDimensions_b__24_0(::UnityEngine::Vector3  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData___c*>::get(),
                        "<GetDimensions>b__24_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, o);
}
inline float_t VROSC::UI::Meshes::AdjustableMeshData___c::_GetDimensions_b__24_1(::UnityEngine::Vector3  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData___c*>::get(),
                        "<GetDimensions>b__24_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, o);
}
inline float_t VROSC::UI::Meshes::AdjustableMeshData___c::_GetDimensions_b__24_2(::UnityEngine::Vector3  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData___c*>::get(),
                        "<GetDimensions>b__24_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, o);
}
inline float_t VROSC::UI::Meshes::AdjustableMeshData___c::_GetDimensions_b__24_3(::UnityEngine::Vector3  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData___c*>::get(),
                        "<GetDimensions>b__24_3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, o);
}
inline ::VROSC::UI::Meshes::AdjustableMeshData___c* VROSC::UI::Meshes::AdjustableMeshData___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::Meshes::AdjustableMeshData___c*>());
}
// Ctor Parameters []
constexpr ::VROSC::UI::Meshes::AdjustableMeshData___c::AdjustableMeshData___c()   {
}
//  Writing Method size for method: ::VROSC::UI::Meshes::AdjustableMeshData.get_Analyzed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::UI::Meshes::AdjustableMeshData::*)()>(&::VROSC::UI::Meshes::AdjustableMeshData::get_Analyzed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f0dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData*>::get(),
                        "get_Analyzed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::AdjustableMeshData.get_Mesh
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (::VROSC::UI::Meshes::AdjustableMeshData::*)()>(&::VROSC::UI::Meshes::AdjustableMeshData::get_Mesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f0dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData*>::get(),
                        "get_Mesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::AdjustableMeshData.get_Width
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::UI::Meshes::AdjustableMeshData::*)()>(&::VROSC::UI::Meshes::AdjustableMeshData::get_Width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f0dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData*>::get(),
                        "get_Width",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::AdjustableMeshData.get_Height
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::UI::Meshes::AdjustableMeshData::*)()>(&::VROSC::UI::Meshes::AdjustableMeshData::get_Height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f0dd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData*>::get(),
                        "get_Height",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::AdjustableMeshData.GetScaledMesh
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::Meshes::AdjustableMeshData::*)(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, float_t, float_t)>(&::VROSC::UI::Meshes::AdjustableMeshData::GetScaledMesh)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x17f0de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData*>::get(),
                        "GetScaledMesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::AdjustableMeshData.GetScaledMesh
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::Meshes::AdjustableMeshData::*)(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, ::UnityEngine::Rect)>(&::VROSC::UI::Meshes::AdjustableMeshData::GetScaledMesh)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x17f0ec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData*>::get(),
                        "GetScaledMesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::AdjustableMeshData.Analyze
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::Meshes::AdjustableMeshData::*)()>(&::VROSC::UI::Meshes::AdjustableMeshData::Analyze)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x17f0fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData*>::get(),
                        "Analyze",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::AdjustableMeshData.GetDimensions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::Meshes::AdjustableMeshData::*)()>(&::VROSC::UI::Meshes::AdjustableMeshData::GetDimensions)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x17f1164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData*>::get(),
                        "GetDimensions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::AdjustableMeshData.GetScaling
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::VROSC::UI::Meshes::AdjustableMeshData::*)(int32_t, ::VROSC::MinMaxFloat*, ::VROSC::MinMaxFloat*)>(&::VROSC::UI::Meshes::AdjustableMeshData::GetScaling)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x17f15bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData*>::get(),
                        "GetScaling",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MinMaxFloat*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MinMaxFloat*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::AdjustableMeshData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::Meshes::AdjustableMeshData::*)()>(&::VROSC::UI::Meshes::AdjustableMeshData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x17f1758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Mesh>& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr void VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::UI::Meshes::AdjustableMeshData>& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__childOf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____childOf;
}
constexpr ::UnityW<::VROSC::UI::Meshes::AdjustableMeshData> const& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__childOf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____childOf;
}
constexpr void VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_set__childOf(::UnityW<::VROSC::UI::Meshes::AdjustableMeshData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____childOf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____height;
}
constexpr float_t const& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____height;
}
constexpr void VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_set__height(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____height = value;
}
constexpr float_t& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____width;
}
constexpr float_t const& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____width;
}
constexpr void VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_set__width(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____width = value;
}
constexpr ::UnityEngine::Vector2& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____center;
}
constexpr ::UnityEngine::Vector2 const& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____center;
}
constexpr void VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_set__center(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____center = value;
}
constexpr bool& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__flipX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flipX;
}
constexpr bool const& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__flipX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flipX;
}
constexpr void VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_set__flipX(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____flipX = value;
}
constexpr bool& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__flipY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flipY;
}
constexpr bool const& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__flipY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flipY;
}
constexpr void VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_set__flipY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____flipY = value;
}
constexpr bool& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__simple()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simple;
}
constexpr bool const& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__simple() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simple;
}
constexpr void VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_set__simple(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____simple = value;
}
constexpr ::ArrayW<::VROSC::UI::Meshes::AdjustableMeshData_VertexData*,::Array<::VROSC::UI::Meshes::AdjustableMeshData_VertexData*>*>& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::ArrayW<::VROSC::UI::Meshes::AdjustableMeshData_VertexData*,::Array<::VROSC::UI::Meshes::AdjustableMeshData_VertexData*>*> const& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_set__data(::ArrayW<::VROSC::UI::Meshes::AdjustableMeshData_VertexData*,::Array<::VROSC::UI::Meshes::AdjustableMeshData_VertexData*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::MinMaxFloat*& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__x()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____x;
}
constexpr ::VROSC::MinMaxFloat* const& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__x() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____x;
}
constexpr void VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_set__x(::VROSC::MinMaxFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____x)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::MinMaxFloat*& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__y()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____y;
}
constexpr ::VROSC::MinMaxFloat* const& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__y() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____y;
}
constexpr void VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_set__y(::VROSC::MinMaxFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____y)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__analyzed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____analyzed;
}
constexpr bool const& VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_get__analyzed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____analyzed;
}
constexpr void VROSC::UI::Meshes::AdjustableMeshData::__cordl_internal_set__analyzed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____analyzed = value;
}
inline bool VROSC::UI::Meshes::AdjustableMeshData::get_Analyzed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData*>::get(),
                        "get_Analyzed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> VROSC::UI::Meshes::AdjustableMeshData::get_Mesh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData*>::get(),
                        "get_Mesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(this, ___internal_method);
}
inline float_t VROSC::UI::Meshes::AdjustableMeshData::get_Width()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData*>::get(),
                        "get_Width",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t VROSC::UI::Meshes::AdjustableMeshData::get_Height()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData*>::get(),
                        "get_Height",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::UI::Meshes::AdjustableMeshData::GetScaledMesh(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  positions, float_t  targetWidth, float_t  targetHeight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData*>::get(),
                        "GetScaledMesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, positions, targetWidth, targetHeight);
}
inline void VROSC::UI::Meshes::AdjustableMeshData::GetScaledMesh(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  positions, ::UnityEngine::Rect  rect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData*>::get(),
                        "GetScaledMesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, positions, rect);
}
inline void VROSC::UI::Meshes::AdjustableMeshData::Analyze()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData*>::get(),
                        "Analyze",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UI::Meshes::AdjustableMeshData::GetDimensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData*>::get(),
                        "GetDimensions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 VROSC::UI::Meshes::AdjustableMeshData::GetScaling(int32_t  i, ::VROSC::MinMaxFloat*  x, ::VROSC::MinMaxFloat*  y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData*>::get(),
                        "GetScaling",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MinMaxFloat*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::MinMaxFloat*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, i, x, y);
}
inline void VROSC::UI::Meshes::AdjustableMeshData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::AdjustableMeshData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UI::Meshes::AdjustableMeshData* VROSC::UI::Meshes::AdjustableMeshData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::Meshes::AdjustableMeshData*>());
}
// Ctor Parameters []
constexpr ::VROSC::UI::Meshes::AdjustableMeshData::AdjustableMeshData()   {
}
