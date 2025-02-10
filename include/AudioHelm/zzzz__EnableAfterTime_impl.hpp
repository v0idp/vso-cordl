#pragma once
// IWYU pragma private; include "AudioHelm/EnableAfterTime.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "AudioHelm/zzzz__EnableAfterTime_def.hpp"
#include "AudioHelm/zzzz__Sequencer_def.hpp"
//  Writing Method size for method: ::AudioHelm::EnableAfterTime.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::EnableAfterTime::*)()>(&::AudioHelm::EnableAfterTime::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181a524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::EnableAfterTime*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::EnableAfterTime.Enable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::EnableAfterTime::*)()>(&::AudioHelm::EnableAfterTime::Enable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181a574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::EnableAfterTime*>::get(),
                        "Enable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::EnableAfterTime._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::EnableAfterTime::*)()>(&::AudioHelm::EnableAfterTime::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181a594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::EnableAfterTime*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& AudioHelm::EnableAfterTime::__cordl_internal_get_time()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___time;
}
constexpr float_t const& AudioHelm::EnableAfterTime::__cordl_internal_get_time() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___time;
}
constexpr void AudioHelm::EnableAfterTime::__cordl_internal_set_time(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___time = value;
}
constexpr ::UnityW<::AudioHelm::Sequencer>& AudioHelm::EnableAfterTime::__cordl_internal_get_sequencer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequencer;
}
constexpr ::UnityW<::AudioHelm::Sequencer> const& AudioHelm::EnableAfterTime::__cordl_internal_get_sequencer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequencer;
}
constexpr void AudioHelm::EnableAfterTime::__cordl_internal_set_sequencer(::UnityW<::AudioHelm::Sequencer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sequencer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void AudioHelm::EnableAfterTime::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::EnableAfterTime*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::EnableAfterTime::Enable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::EnableAfterTime*>::get(),
                        "Enable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::EnableAfterTime::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::EnableAfterTime*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::EnableAfterTime* AudioHelm::EnableAfterTime::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::EnableAfterTime*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::EnableAfterTime::EnableAfterTime()   {
}
