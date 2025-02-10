#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/ConstantRotationData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "VROSC/AudioReactive/zzzz__ConstantRotationData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/AudioReactive/zzzz__RotateEffectData_def.hpp"
//  Writing Method size for method: ::VROSC::AudioReactive::ConstantRotationData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::ConstantRotationData::*)(::UnityEngine::Transform*, ::VROSC::AudioReactive::RotateEffectData*)>(&::VROSC::AudioReactive::ConstantRotationData::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x17d65b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ConstantRotationData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AudioReactive::RotateEffectData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::ConstantRotationData.Rotate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::ConstantRotationData::*)()>(&::VROSC::AudioReactive::ConstantRotationData::Rotate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x17d6678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ConstantRotationData*>::get(),
                        "Rotate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::AudioReactive::ConstantRotationData::__cordl_internal_get__transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::AudioReactive::ConstantRotationData::__cordl_internal_get__transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform;
}
constexpr void VROSC::AudioReactive::ConstantRotationData::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector3& VROSC::AudioReactive::ConstantRotationData::__cordl_internal_get__rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotation;
}
constexpr ::UnityEngine::Vector3 const& VROSC::AudioReactive::ConstantRotationData::__cordl_internal_get__rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotation;
}
constexpr void VROSC::AudioReactive::ConstantRotationData::__cordl_internal_set__rotation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotation = value;
}
constexpr bool& VROSC::AudioReactive::ConstantRotationData::__cordl_internal_get__local()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____local;
}
constexpr bool const& VROSC::AudioReactive::ConstantRotationData::__cordl_internal_get__local() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____local;
}
constexpr void VROSC::AudioReactive::ConstantRotationData::__cordl_internal_set__local(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____local = value;
}
inline void VROSC::AudioReactive::ConstantRotationData::_ctor(::UnityEngine::Transform*  transform, ::VROSC::AudioReactive::RotateEffectData*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ConstantRotationData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AudioReactive::RotateEffectData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transform, data);
}
inline void VROSC::AudioReactive::ConstantRotationData::Rotate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::ConstantRotationData*>::get(),
                        "Rotate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AudioReactive::ConstantRotationData* VROSC::AudioReactive::ConstantRotationData::New_ctor(::UnityEngine::Transform*  transform, ::VROSC::AudioReactive::RotateEffectData*  data)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioReactive::ConstantRotationData*>(transform, data));
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::ConstantRotationData::ConstantRotationData()   {
}
