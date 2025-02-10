#pragma once
// IWYU pragma private; include "VROSC/ReverbManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__ReverbManager_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::VROSC::ReverbManager.SetDrumsReverbAmount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ReverbManager::*)(float_t)>(&::VROSC::ReverbManager::SetDrumsReverbAmount)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16f6b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ReverbManager*>::get(),
                        "SetDrumsReverbAmount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ReverbManager.SetReverbLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ReverbManager::*)(float_t)>(&::VROSC::ReverbManager::SetReverbLength)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x16f6cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ReverbManager*>::get(),
                        "SetReverbLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ReverbManager.SetReverbParameter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ReverbManager::*)(::StringW, float_t, ::UnityEngine::AnimationCurve*, float_t, float_t)>(&::VROSC::ReverbManager::SetReverbParameter)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x16f6c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ReverbManager*>::get(),
                        "SetReverbParameter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ReverbManager._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ReverbManager::*)()>(&::VROSC::ReverbManager::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x16f6d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ReverbManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::ReverbManager::__cordl_internal_get__drumsSendOff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drumsSendOff;
}
constexpr float_t const& VROSC::ReverbManager::__cordl_internal_get__drumsSendOff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drumsSendOff;
}
constexpr void VROSC::ReverbManager::__cordl_internal_set__drumsSendOff(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____drumsSendOff = value;
}
constexpr float_t& VROSC::ReverbManager::__cordl_internal_get__drumsSendMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drumsSendMin;
}
constexpr float_t const& VROSC::ReverbManager::__cordl_internal_get__drumsSendMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drumsSendMin;
}
constexpr void VROSC::ReverbManager::__cordl_internal_set__drumsSendMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____drumsSendMin = value;
}
constexpr float_t& VROSC::ReverbManager::__cordl_internal_get__drumsSendMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drumsSendMax;
}
constexpr float_t const& VROSC::ReverbManager::__cordl_internal_get__drumsSendMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drumsSendMax;
}
constexpr void VROSC::ReverbManager::__cordl_internal_set__drumsSendMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____drumsSendMax = value;
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::ReverbManager::__cordl_internal_get__drumsSendCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drumsSendCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::ReverbManager::__cordl_internal_get__drumsSendCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drumsSendCurve;
}
constexpr void VROSC::ReverbManager::__cordl_internal_set__drumsSendCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____drumsSendCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::ReverbManager::__cordl_internal_get__decayTimeMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decayTimeMin;
}
constexpr float_t const& VROSC::ReverbManager::__cordl_internal_get__decayTimeMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decayTimeMin;
}
constexpr void VROSC::ReverbManager::__cordl_internal_set__decayTimeMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____decayTimeMin = value;
}
constexpr float_t& VROSC::ReverbManager::__cordl_internal_get__decayTimeMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decayTimeMax;
}
constexpr float_t const& VROSC::ReverbManager::__cordl_internal_get__decayTimeMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decayTimeMax;
}
constexpr void VROSC::ReverbManager::__cordl_internal_set__decayTimeMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____decayTimeMax = value;
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::ReverbManager::__cordl_internal_get__decayTimeCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decayTimeCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::ReverbManager::__cordl_internal_get__decayTimeCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decayTimeCurve;
}
constexpr void VROSC::ReverbManager::__cordl_internal_set__decayTimeCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____decayTimeCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::ReverbManager::__cordl_internal_get__reflectionsMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reflectionsMin;
}
constexpr float_t const& VROSC::ReverbManager::__cordl_internal_get__reflectionsMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reflectionsMin;
}
constexpr void VROSC::ReverbManager::__cordl_internal_set__reflectionsMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reflectionsMin = value;
}
constexpr float_t& VROSC::ReverbManager::__cordl_internal_get__reflectionsMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reflectionsMax;
}
constexpr float_t const& VROSC::ReverbManager::__cordl_internal_get__reflectionsMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reflectionsMax;
}
constexpr void VROSC::ReverbManager::__cordl_internal_set__reflectionsMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reflectionsMax = value;
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::ReverbManager::__cordl_internal_get__reflectionsCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reflectionsCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::ReverbManager::__cordl_internal_get__reflectionsCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reflectionsCurve;
}
constexpr void VROSC::ReverbManager::__cordl_internal_set__reflectionsCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reflectionsCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ReverbManager::SetDrumsReverbAmount(float_t  amount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ReverbManager*>::get(),
                        "SetDrumsReverbAmount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, amount);
}
inline void VROSC::ReverbManager::SetReverbLength(float_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ReverbManager*>::get(),
                        "SetReverbLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, length);
}
inline void VROSC::ReverbManager::SetReverbParameter(::StringW  name, float_t  amount, ::UnityEngine::AnimationCurve*  curve, float_t  min, float_t  max)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ReverbManager*>::get(),
                        "SetReverbParameter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, amount, curve, min, max);
}
inline void VROSC::ReverbManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ReverbManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ReverbManager* VROSC::ReverbManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ReverbManager*>());
}
// Ctor Parameters []
constexpr ::VROSC::ReverbManager::ReverbManager()   {
}
