#pragma once
// IWYU pragma private; include "VROSC/AdjustableMeshVertexEffect.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/zzzz__AdjustableMeshEffect_impl.hpp"
#include "VROSC/zzzz__AdjustableMeshVertexEffect_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::VROSC::AdjustableMeshVertexEffect.SetScale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshVertexEffect::*)(::UnityEngine::Vector3)>(&::VROSC::AdjustableMeshVertexEffect::SetScale)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17a7398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshVertexEffect*>::get(),
                        "SetScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AdjustableMeshVertexEffect._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AdjustableMeshVertexEffect::*)()>(&::VROSC::AdjustableMeshVertexEffect::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x17a73a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshVertexEffect*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& VROSC::AdjustableMeshVertexEffect::__cordl_internal_get__scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scale;
}
constexpr ::UnityEngine::Vector3 const& VROSC::AdjustableMeshVertexEffect::__cordl_internal_get__scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scale;
}
constexpr void VROSC::AdjustableMeshVertexEffect::__cordl_internal_set__scale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scale = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& VROSC::AdjustableMeshVertexEffect::__cordl_internal_get__originalPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& VROSC::AdjustableMeshVertexEffect::__cordl_internal_get__originalPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalPositions;
}
constexpr void VROSC::AdjustableMeshVertexEffect::__cordl_internal_set__originalPositions(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____originalPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::AdjustableMeshVertexEffect::SetScale(::UnityEngine::Vector3  scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshVertexEffect*>::get(),
                        "SetScale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scale);
}
inline void VROSC::AdjustableMeshVertexEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AdjustableMeshVertexEffect*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AdjustableMeshVertexEffect* VROSC::AdjustableMeshVertexEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AdjustableMeshVertexEffect*>());
}
// Ctor Parameters []
constexpr ::VROSC::AdjustableMeshVertexEffect::AdjustableMeshVertexEffect()   {
}
