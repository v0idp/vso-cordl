#pragma once
// IWYU pragma private; include "VROSC/CompressionManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__CompressionManager_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::VROSC::CompressionManager.SetDrumsCompression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CompressionManager::*)(float_t)>(&::VROSC::CompressionManager::SetDrumsCompression)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x183c17c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CompressionManager*>::get(),
                        "SetDrumsCompression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CompressionManager.SetCompressionParameter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CompressionManager::*)(::StringW, float_t, ::UnityEngine::AnimationCurve*, float_t, float_t)>(&::VROSC::CompressionManager::SetCompressionParameter)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x183c208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CompressionManager*>::get(),
                        "SetCompressionParameter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::CompressionManager._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::CompressionManager::*)()>(&::VROSC::CompressionManager::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x183c2b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CompressionManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::CompressionManager::__cordl_internal_get__thresholdMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thresholdMin;
}
constexpr float_t const& VROSC::CompressionManager::__cordl_internal_get__thresholdMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thresholdMin;
}
constexpr void VROSC::CompressionManager::__cordl_internal_set__thresholdMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thresholdMin = value;
}
constexpr float_t& VROSC::CompressionManager::__cordl_internal_get__thresholdMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thresholdMax;
}
constexpr float_t const& VROSC::CompressionManager::__cordl_internal_get__thresholdMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thresholdMax;
}
constexpr void VROSC::CompressionManager::__cordl_internal_set__thresholdMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thresholdMax = value;
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::CompressionManager::__cordl_internal_get__thresholdCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thresholdCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::CompressionManager::__cordl_internal_get__thresholdCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thresholdCurve;
}
constexpr void VROSC::CompressionManager::__cordl_internal_set__thresholdCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____thresholdCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::CompressionManager::__cordl_internal_get__makeupMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____makeupMin;
}
constexpr float_t const& VROSC::CompressionManager::__cordl_internal_get__makeupMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____makeupMin;
}
constexpr void VROSC::CompressionManager::__cordl_internal_set__makeupMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____makeupMin = value;
}
constexpr float_t& VROSC::CompressionManager::__cordl_internal_get__makeupMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____makeupMax;
}
constexpr float_t const& VROSC::CompressionManager::__cordl_internal_get__makeupMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____makeupMax;
}
constexpr void VROSC::CompressionManager::__cordl_internal_set__makeupMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____makeupMax = value;
}
constexpr ::UnityEngine::AnimationCurve*& VROSC::CompressionManager::__cordl_internal_get__makeupCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____makeupCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& VROSC::CompressionManager::__cordl_internal_get__makeupCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____makeupCurve;
}
constexpr void VROSC::CompressionManager::__cordl_internal_set__makeupCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____makeupCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::CompressionManager::SetDrumsCompression(float_t  compression)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CompressionManager*>::get(),
                        "SetDrumsCompression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, compression);
}
inline void VROSC::CompressionManager::SetCompressionParameter(::StringW  name, float_t  amount, ::UnityEngine::AnimationCurve*  curve, float_t  min, float_t  max)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CompressionManager*>::get(),
                        "SetCompressionParameter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationCurve*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, amount, curve, min, max);
}
inline void VROSC::CompressionManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::CompressionManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::CompressionManager* VROSC::CompressionManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::CompressionManager*>());
}
// Ctor Parameters []
constexpr ::VROSC::CompressionManager::CompressionManager()   {
}
