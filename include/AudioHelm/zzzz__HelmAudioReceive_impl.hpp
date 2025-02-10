#pragma once
// IWYU pragma private; include "AudioHelm/HelmAudioReceive.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "AudioHelm/zzzz__HelmAudioReceive_def.hpp"
//  Writing Method size for method: ::AudioHelm::HelmAudioReceive.OnAudioFilterRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::HelmAudioReceive::*)(::ArrayW<float_t,::Array<float_t>*>, int32_t)>(&::AudioHelm::HelmAudioReceive::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x181e598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmAudioReceive*>::get(),
                        "OnAudioFilterRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::HelmAudioReceive._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::HelmAudioReceive::*)()>(&::AudioHelm::HelmAudioReceive::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x181e668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmAudioReceive*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& AudioHelm::HelmAudioReceive::__cordl_internal_get_channel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channel;
}
constexpr int32_t const& AudioHelm::HelmAudioReceive::__cordl_internal_get_channel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channel;
}
constexpr void AudioHelm::HelmAudioReceive::__cordl_internal_set_channel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channel = value;
}
inline void AudioHelm::HelmAudioReceive::OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  audioChannels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmAudioReceive*>::get(),
                        "OnAudioFilterRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, audioChannels);
}
inline void AudioHelm::HelmAudioReceive::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::HelmAudioReceive*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::HelmAudioReceive* AudioHelm::HelmAudioReceive::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::HelmAudioReceive*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::HelmAudioReceive::HelmAudioReceive()   {
}
