#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioMixerGroup.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerGroup_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixerGroup._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioMixerGroup::*)()>(&::UnityEngine::Audio::AudioMixerGroup::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2f5a040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioMixerGroup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Audio::AudioMixerGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioMixerGroup*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Audio::AudioMixerGroup* UnityEngine::Audio::AudioMixerGroup::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Audio::AudioMixerGroup*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AudioMixerGroup::AudioMixerGroup()   {
}
