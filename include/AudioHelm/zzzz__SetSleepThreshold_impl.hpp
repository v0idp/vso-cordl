#pragma once
// IWYU pragma private; include "AudioHelm/SetSleepThreshold.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "AudioHelm/zzzz__SetSleepThreshold_def.hpp"
//  Writing Method size for method: ::AudioHelm::SetSleepThreshold.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::SetSleepThreshold::*)()>(&::AudioHelm::SetSleepThreshold::Start)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x181cf98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::SetSleepThreshold*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::SetSleepThreshold._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::SetSleepThreshold::*)()>(&::AudioHelm::SetSleepThreshold::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x181cff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::SetSleepThreshold*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& AudioHelm::SetSleepThreshold::__cordl_internal_get_threshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threshold;
}
constexpr float_t const& AudioHelm::SetSleepThreshold::__cordl_internal_get_threshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threshold;
}
constexpr void AudioHelm::SetSleepThreshold::__cordl_internal_set_threshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___threshold = value;
}
inline void AudioHelm::SetSleepThreshold::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::SetSleepThreshold*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::SetSleepThreshold::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::SetSleepThreshold*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::SetSleepThreshold* AudioHelm::SetSleepThreshold::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::SetSleepThreshold*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::SetSleepThreshold::SetSleepThreshold()   {
}
