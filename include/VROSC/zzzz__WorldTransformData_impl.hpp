#pragma once
// IWYU pragma private; include "VROSC/WorldTransformData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__WorldTransformData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::VROSC::WorldTransformData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WorldTransformData::*)(::UnityEngine::Transform*)>(&::VROSC::WorldTransformData::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x17380dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WorldTransformData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WorldTransformData.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WorldTransformData::*)()>(&::VROSC::WorldTransformData::Update)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1738470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WorldTransformData*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::WorldTransformData.ResetTransform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::WorldTransformData::*)()>(&::VROSC::WorldTransformData::ResetTransform)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x173855c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WorldTransformData*>::get(),
                        "ResetTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::WorldTransformData::__cordl_internal_get_Transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::WorldTransformData::__cordl_internal_get_Transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Transform;
}
constexpr void VROSC::WorldTransformData::__cordl_internal_set_Transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& VROSC::WorldTransformData::__cordl_internal_get_Position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Position;
}
constexpr ::UnityEngine::Vector3 const& VROSC::WorldTransformData::__cordl_internal_get_Position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Position;
}
constexpr void VROSC::WorldTransformData::__cordl_internal_set_Position(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Position = value;
}
constexpr ::UnityEngine::Quaternion& VROSC::WorldTransformData::__cordl_internal_get_Rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Rotation;
}
constexpr ::UnityEngine::Quaternion const& VROSC::WorldTransformData::__cordl_internal_get_Rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Rotation;
}
constexpr void VROSC::WorldTransformData::__cordl_internal_set_Rotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Rotation = value;
}
constexpr ::UnityEngine::Vector3& VROSC::WorldTransformData::__cordl_internal_get_LocalScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalScale;
}
constexpr ::UnityEngine::Vector3 const& VROSC::WorldTransformData::__cordl_internal_get_LocalScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalScale;
}
constexpr void VROSC::WorldTransformData::__cordl_internal_set_LocalScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LocalScale = value;
}
inline void VROSC::WorldTransformData::_ctor(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WorldTransformData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transform);
}
inline void VROSC::WorldTransformData::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WorldTransformData*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::WorldTransformData::ResetTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::WorldTransformData*>::get(),
                        "ResetTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::WorldTransformData* VROSC::WorldTransformData::New_ctor(::UnityEngine::Transform*  transform)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::WorldTransformData*>(transform));
}
// Ctor Parameters []
constexpr ::VROSC::WorldTransformData::WorldTransformData()   {
}
