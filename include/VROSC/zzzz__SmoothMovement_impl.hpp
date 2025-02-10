#pragma once
// IWYU pragma private; include "VROSC/SmoothMovement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__SmoothMovement_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::VROSC::SmoothMovement.set_SmoothPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SmoothMovement::*)(::UnityEngine::Vector3)>(&::VROSC::SmoothMovement::set_SmoothPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1714f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SmoothMovement*>::get(),
                        "set_SmoothPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SmoothMovement.get_SmoothPosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::VROSC::SmoothMovement::*)()>(&::VROSC::SmoothMovement::get_SmoothPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1714f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SmoothMovement*>::get(),
                        "get_SmoothPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SmoothMovement._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SmoothMovement::*)(::UnityEngine::Vector3)>(&::VROSC::SmoothMovement::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1714f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SmoothMovement*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SmoothMovement.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SmoothMovement::*)(::UnityEngine::Vector3, float_t)>(&::VROSC::SmoothMovement::Update)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1714fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SmoothMovement*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::SmoothMovement.ResetSmoothing
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::SmoothMovement::*)()>(&::VROSC::SmoothMovement::ResetSmoothing)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1715068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SmoothMovement*>::get(),
                        "ResetSmoothing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& VROSC::SmoothMovement::__cordl_internal_get__SmoothPosition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SmoothPosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& VROSC::SmoothMovement::__cordl_internal_get__SmoothPosition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SmoothPosition_k__BackingField;
}
constexpr void VROSC::SmoothMovement::__cordl_internal_set__SmoothPosition_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SmoothPosition_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& VROSC::SmoothMovement::__cordl_internal_get__smoothingVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothingVelocity;
}
constexpr ::UnityEngine::Vector3 const& VROSC::SmoothMovement::__cordl_internal_get__smoothingVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothingVelocity;
}
constexpr void VROSC::SmoothMovement::__cordl_internal_set__smoothingVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smoothingVelocity = value;
}
constexpr bool& VROSC::SmoothMovement::__cordl_internal_get__needsReset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____needsReset;
}
constexpr bool const& VROSC::SmoothMovement::__cordl_internal_get__needsReset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____needsReset;
}
constexpr void VROSC::SmoothMovement::__cordl_internal_set__needsReset(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____needsReset = value;
}
inline void VROSC::SmoothMovement::set_SmoothPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SmoothMovement*>::get(),
                        "set_SmoothPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 VROSC::SmoothMovement::get_SmoothPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SmoothMovement*>::get(),
                        "get_SmoothPosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void VROSC::SmoothMovement::_ctor(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SmoothMovement*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position);
}
inline void VROSC::SmoothMovement::Update(::UnityEngine::Vector3  position, float_t  smoothing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SmoothMovement*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, smoothing);
}
inline void VROSC::SmoothMovement::ResetSmoothing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::SmoothMovement*>::get(),
                        "ResetSmoothing",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::SmoothMovement* VROSC::SmoothMovement::New_ctor(::UnityEngine::Vector3  position)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::SmoothMovement*>(position));
}
// Ctor Parameters []
constexpr ::VROSC::SmoothMovement::SmoothMovement()   {
}
