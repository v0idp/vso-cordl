#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/TriggerRotationData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "VROSC/AudioReactive/zzzz__TriggerRotationData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "VROSC/AudioReactive/zzzz__RotateEffectData_def.hpp"
//  Writing Method size for method: ::VROSC::AudioReactive::TriggerRotationData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::TriggerRotationData::*)(::UnityEngine::Transform*, ::VROSC::AudioReactive::RotateEffectData*)>(&::VROSC::AudioReactive::TriggerRotationData::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x17d6970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TriggerRotationData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AudioReactive::RotateEffectData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioReactive::TriggerRotationData.Lerp
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioReactive::TriggerRotationData::*)(float_t)>(&::VROSC::AudioReactive::TriggerRotationData::Lerp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x17d6bb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TriggerRotationData*>::get(),
                        "Lerp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& VROSC::AudioReactive::TriggerRotationData::__cordl_internal_get__transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VROSC::AudioReactive::TriggerRotationData::__cordl_internal_get__transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform;
}
constexpr void VROSC::AudioReactive::TriggerRotationData::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Quaternion& VROSC::AudioReactive::TriggerRotationData::__cordl_internal_get__startRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startRotation;
}
constexpr ::UnityEngine::Quaternion const& VROSC::AudioReactive::TriggerRotationData::__cordl_internal_get__startRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startRotation;
}
constexpr void VROSC::AudioReactive::TriggerRotationData::__cordl_internal_set__startRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startRotation = value;
}
constexpr ::UnityEngine::Quaternion& VROSC::AudioReactive::TriggerRotationData::__cordl_internal_get__endRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endRotation;
}
constexpr ::UnityEngine::Quaternion const& VROSC::AudioReactive::TriggerRotationData::__cordl_internal_get__endRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endRotation;
}
constexpr void VROSC::AudioReactive::TriggerRotationData::__cordl_internal_set__endRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____endRotation = value;
}
constexpr bool& VROSC::AudioReactive::TriggerRotationData::__cordl_internal_get__local()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____local;
}
constexpr bool const& VROSC::AudioReactive::TriggerRotationData::__cordl_internal_get__local() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____local;
}
constexpr void VROSC::AudioReactive::TriggerRotationData::__cordl_internal_set__local(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____local = value;
}
inline void VROSC::AudioReactive::TriggerRotationData::_ctor(::UnityEngine::Transform*  transform, ::VROSC::AudioReactive::RotateEffectData*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TriggerRotationData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::AudioReactive::RotateEffectData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transform, data);
}
inline void VROSC::AudioReactive::TriggerRotationData::Lerp(float_t  amount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioReactive::TriggerRotationData*>::get(),
                        "Lerp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, amount);
}
inline ::VROSC::AudioReactive::TriggerRotationData* VROSC::AudioReactive::TriggerRotationData::New_ctor(::UnityEngine::Transform*  transform, ::VROSC::AudioReactive::RotateEffectData*  data)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioReactive::TriggerRotationData*>(transform, data));
}
// Ctor Parameters []
constexpr ::VROSC::AudioReactive::TriggerRotationData::TriggerRotationData()   {
}
