#pragma once
// IWYU pragma private; include "VROSC/UI/Meshes/RescalableMeshData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/UI/Meshes/zzzz__RescalableMeshData_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/UI/Meshes/zzzz__RescalableMeshData_def.hpp"
//  Writing Method size for method: ::VROSC::UI::Meshes::RescalableMeshData_VertexData.get_OriginalPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::UI::Meshes::RescalableMeshData_VertexData::*)()>(&::VROSC::UI::Meshes::RescalableMeshData_VertexData::get_OriginalPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17e98bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData_VertexData*>::get(),
                        "get_OriginalPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::RescalableMeshData_VertexData.get_Scaling
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::VROSC::UI::Meshes::RescalableMeshData_VertexData::*)()>(&::VROSC::UI::Meshes::RescalableMeshData_VertexData::get_Scaling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e98c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData_VertexData*>::get(),
                        "get_Scaling",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::RescalableMeshData_VertexData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::Meshes::RescalableMeshData_VertexData::*)(::UnityEngine::Vector3, ::UnityEngine::Vector2)>(&::VROSC::UI::Meshes::RescalableMeshData_VertexData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x17e985c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData_VertexData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& VROSC::UI::Meshes::RescalableMeshData_VertexData::__cordl_internal_get__originalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalPosition;
}
constexpr ::UnityEngine::Vector3 const& VROSC::UI::Meshes::RescalableMeshData_VertexData::__cordl_internal_get__originalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalPosition;
}
constexpr void VROSC::UI::Meshes::RescalableMeshData_VertexData::__cordl_internal_set__originalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____originalPosition = value;
}
constexpr ::UnityEngine::Vector2& VROSC::UI::Meshes::RescalableMeshData_VertexData::__cordl_internal_get__scaling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaling;
}
constexpr ::UnityEngine::Vector2 const& VROSC::UI::Meshes::RescalableMeshData_VertexData::__cordl_internal_get__scaling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaling;
}
constexpr void VROSC::UI::Meshes::RescalableMeshData_VertexData::__cordl_internal_set__scaling(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scaling = value;
}
inline ::UnityEngine::Vector3 VROSC::UI::Meshes::RescalableMeshData_VertexData::get_OriginalPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData_VertexData*>::get(),
                        "get_OriginalPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 VROSC::UI::Meshes::RescalableMeshData_VertexData::get_Scaling()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData_VertexData*>::get(),
                        "get_Scaling",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void VROSC::UI::Meshes::RescalableMeshData_VertexData::_ctor(::UnityEngine::Vector3  position, ::UnityEngine::Vector2  scaling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData_VertexData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, scaling);
}
inline ::VROSC::UI::Meshes::RescalableMeshData_VertexData* VROSC::UI::Meshes::RescalableMeshData_VertexData::New_ctor(::UnityEngine::Vector3  position, ::UnityEngine::Vector2  scaling)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::Meshes::RescalableMeshData_VertexData*>(position, scaling));
}
// Ctor Parameters []
constexpr ::VROSC::UI::Meshes::RescalableMeshData_VertexData::RescalableMeshData_VertexData()   {
}
//  Writing Method size for method: ::VROSC::UI::Meshes::RescalableMeshData___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::Meshes::RescalableMeshData___c::*)()>(&::VROSC::UI::Meshes::RescalableMeshData___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e992c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::RescalableMeshData___c._Analyze_b__14_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::UI::Meshes::RescalableMeshData___c::*)(::VROSC::UI::Meshes::RescalableMeshData_VertexData*)>(&::VROSC::UI::Meshes::RescalableMeshData___c::_Analyze_b__14_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x17e9934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData___c*>::get(),
                        "<Analyze>b__14_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::Meshes::RescalableMeshData_VertexData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::RescalableMeshData___c._Analyze_b__14_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::UI::Meshes::RescalableMeshData___c::*)(::VROSC::UI::Meshes::RescalableMeshData_VertexData*)>(&::VROSC::UI::Meshes::RescalableMeshData___c::_Analyze_b__14_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x17e994c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData___c*>::get(),
                        "<Analyze>b__14_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::Meshes::RescalableMeshData_VertexData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::RescalableMeshData___c._Analyze_b__14_2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::UI::Meshes::RescalableMeshData___c::*)(::VROSC::UI::Meshes::RescalableMeshData_VertexData*)>(&::VROSC::UI::Meshes::RescalableMeshData___c::_Analyze_b__14_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x17e9964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData___c*>::get(),
                        "<Analyze>b__14_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::Meshes::RescalableMeshData_VertexData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::RescalableMeshData___c._Analyze_b__14_3
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::UI::Meshes::RescalableMeshData___c::*)(::VROSC::UI::Meshes::RescalableMeshData_VertexData*)>(&::VROSC::UI::Meshes::RescalableMeshData___c::_Analyze_b__14_3)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x17e997c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData___c*>::get(),
                        "<Analyze>b__14_3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::Meshes::RescalableMeshData_VertexData*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::UI::Meshes::RescalableMeshData___c::setStaticF___9(::VROSC::UI::Meshes::RescalableMeshData___c*  value)  {
::cordl_internals::setStaticField<::VROSC::UI::Meshes::RescalableMeshData___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData___c*>::get>(std::forward<::VROSC::UI::Meshes::RescalableMeshData___c*>(value));
}
inline ::VROSC::UI::Meshes::RescalableMeshData___c* VROSC::UI::Meshes::RescalableMeshData___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::VROSC::UI::Meshes::RescalableMeshData___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData___c*>::get>();
}
inline void VROSC::UI::Meshes::RescalableMeshData___c::setStaticF___9__14_0(::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData___c*>::get>(std::forward<::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*>(value));
}
inline ::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>* VROSC::UI::Meshes::RescalableMeshData___c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData___c*>::get>();
}
inline void VROSC::UI::Meshes::RescalableMeshData___c::setStaticF___9__14_1(::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*, "<>9__14_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData___c*>::get>(std::forward<::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*>(value));
}
inline ::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>* VROSC::UI::Meshes::RescalableMeshData___c::getStaticF___9__14_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*, "<>9__14_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData___c*>::get>();
}
inline void VROSC::UI::Meshes::RescalableMeshData___c::setStaticF___9__14_2(::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*, "<>9__14_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData___c*>::get>(std::forward<::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*>(value));
}
inline ::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>* VROSC::UI::Meshes::RescalableMeshData___c::getStaticF___9__14_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*, "<>9__14_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData___c*>::get>();
}
inline void VROSC::UI::Meshes::RescalableMeshData___c::setStaticF___9__14_3(::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*, "<>9__14_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData___c*>::get>(std::forward<::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*>(value));
}
inline ::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>* VROSC::UI::Meshes::RescalableMeshData___c::getStaticF___9__14_3()  {
return ::cordl_internals::getStaticField<::System::Func_2<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,float_t>*, "<>9__14_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData___c*>::get>();
}
inline void VROSC::UI::Meshes::RescalableMeshData___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t VROSC::UI::Meshes::RescalableMeshData___c::_Analyze_b__14_0(::VROSC::UI::Meshes::RescalableMeshData_VertexData*  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData___c*>::get(),
                        "<Analyze>b__14_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::Meshes::RescalableMeshData_VertexData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, o);
}
inline float_t VROSC::UI::Meshes::RescalableMeshData___c::_Analyze_b__14_1(::VROSC::UI::Meshes::RescalableMeshData_VertexData*  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData___c*>::get(),
                        "<Analyze>b__14_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::Meshes::RescalableMeshData_VertexData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, o);
}
inline float_t VROSC::UI::Meshes::RescalableMeshData___c::_Analyze_b__14_2(::VROSC::UI::Meshes::RescalableMeshData_VertexData*  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData___c*>::get(),
                        "<Analyze>b__14_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::Meshes::RescalableMeshData_VertexData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, o);
}
inline float_t VROSC::UI::Meshes::RescalableMeshData___c::_Analyze_b__14_3(::VROSC::UI::Meshes::RescalableMeshData_VertexData*  o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData___c*>::get(),
                        "<Analyze>b__14_3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UI::Meshes::RescalableMeshData_VertexData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, o);
}
inline ::VROSC::UI::Meshes::RescalableMeshData___c* VROSC::UI::Meshes::RescalableMeshData___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::Meshes::RescalableMeshData___c*>());
}
// Ctor Parameters []
constexpr ::VROSC::UI::Meshes::RescalableMeshData___c::RescalableMeshData___c()   {
}
//  Writing Method size for method: ::VROSC::UI::Meshes::RescalableMeshData.get_Mesh
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (::VROSC::UI::Meshes::RescalableMeshData::*)()>(&::VROSC::UI::Meshes::RescalableMeshData::get_Mesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e9374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData*>::get(),
                        "get_Mesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::RescalableMeshData.get_Width
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::UI::Meshes::RescalableMeshData::*)()>(&::VROSC::UI::Meshes::RescalableMeshData::get_Width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e937c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData*>::get(),
                        "get_Width",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::RescalableMeshData.get_Height
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::UI::Meshes::RescalableMeshData::*)()>(&::VROSC::UI::Meshes::RescalableMeshData::get_Height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17e9384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData*>::get(),
                        "get_Height",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::RescalableMeshData.GetScaledMesh
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::Meshes::RescalableMeshData::*)(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, float_t, float_t)>(&::VROSC::UI::Meshes::RescalableMeshData::GetScaledMesh)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x17e9244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData*>::get(),
                        "GetScaledMesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::RescalableMeshData.Analyze
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::Meshes::RescalableMeshData::*)()>(&::VROSC::UI::Meshes::RescalableMeshData::Analyze)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x17e938c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData*>::get(),
                        "Analyze",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::Meshes::RescalableMeshData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::UI::Meshes::RescalableMeshData::*)()>(&::VROSC::UI::Meshes::RescalableMeshData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x17e98ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Mesh>& VROSC::UI::Meshes::RescalableMeshData::__cordl_internal_get__mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& VROSC::UI::Meshes::RescalableMeshData::__cordl_internal_get__mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr void VROSC::UI::Meshes::RescalableMeshData::__cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::UI::Meshes::RescalableMeshData::__cordl_internal_get__height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____height;
}
constexpr float_t const& VROSC::UI::Meshes::RescalableMeshData::__cordl_internal_get__height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____height;
}
constexpr void VROSC::UI::Meshes::RescalableMeshData::__cordl_internal_set__height(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____height = value;
}
constexpr float_t& VROSC::UI::Meshes::RescalableMeshData::__cordl_internal_get__width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____width;
}
constexpr float_t const& VROSC::UI::Meshes::RescalableMeshData::__cordl_internal_get__width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____width;
}
constexpr void VROSC::UI::Meshes::RescalableMeshData::__cordl_internal_set__width(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____width = value;
}
constexpr bool& VROSC::UI::Meshes::RescalableMeshData::__cordl_internal_get__flipX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flipX;
}
constexpr bool const& VROSC::UI::Meshes::RescalableMeshData::__cordl_internal_get__flipX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flipX;
}
constexpr void VROSC::UI::Meshes::RescalableMeshData::__cordl_internal_set__flipX(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____flipX = value;
}
constexpr bool& VROSC::UI::Meshes::RescalableMeshData::__cordl_internal_get__flipY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flipY;
}
constexpr bool const& VROSC::UI::Meshes::RescalableMeshData::__cordl_internal_get__flipY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flipY;
}
constexpr void VROSC::UI::Meshes::RescalableMeshData::__cordl_internal_set__flipY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____flipY = value;
}
constexpr ::ArrayW<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,::Array<::VROSC::UI::Meshes::RescalableMeshData_VertexData*>*>& VROSC::UI::Meshes::RescalableMeshData::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::ArrayW<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,::Array<::VROSC::UI::Meshes::RescalableMeshData_VertexData*>*> const& VROSC::UI::Meshes::RescalableMeshData::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void VROSC::UI::Meshes::RescalableMeshData::__cordl_internal_set__data(::ArrayW<::VROSC::UI::Meshes::RescalableMeshData_VertexData*,::Array<::VROSC::UI::Meshes::RescalableMeshData_VertexData*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::UnityEngine::Mesh> VROSC::UI::Meshes::RescalableMeshData::get_Mesh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData*>::get(),
                        "get_Mesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(this, ___internal_method);
}
inline float_t VROSC::UI::Meshes::RescalableMeshData::get_Width()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData*>::get(),
                        "get_Width",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t VROSC::UI::Meshes::RescalableMeshData::get_Height()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData*>::get(),
                        "get_Height",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void VROSC::UI::Meshes::RescalableMeshData::GetScaledMesh(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  positions, float_t  targetWidth, float_t  targetHeight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData*>::get(),
                        "GetScaledMesh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, positions, targetWidth, targetHeight);
}
inline void VROSC::UI::Meshes::RescalableMeshData::Analyze()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData*>::get(),
                        "Analyze",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::UI::Meshes::RescalableMeshData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::Meshes::RescalableMeshData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::UI::Meshes::RescalableMeshData* VROSC::UI::Meshes::RescalableMeshData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::UI::Meshes::RescalableMeshData*>());
}
// Ctor Parameters []
constexpr ::VROSC::UI::Meshes::RescalableMeshData::RescalableMeshData()   {
}
