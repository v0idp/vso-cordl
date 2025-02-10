#pragma once
// IWYU pragma private; include "AudioHelm/Utils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "AudioHelm/zzzz__Utils_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::AudioHelm::Utils.IsBlackKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::AudioHelm::Utils::IsBlackKey)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x18290bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Utils*>::get(),
                        "IsBlackKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Utils.IsC
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::AudioHelm::Utils::IsC)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1829158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Utils*>::get(),
                        "IsC",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Utils.GetOctave
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::AudioHelm::Utils::GetOctave)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1829184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Utils*>::get(),
                        "GetOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Utils.MidiChangeToRatio
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(int32_t)>(&::AudioHelm::Utils::MidiChangeToRatio)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Utils*>::get(),
                        "MidiChangeToRatio",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Utils.RangesOverlap
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float_t, float_t, float_t, float_t)>(&::AudioHelm::Utils::RangesOverlap)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1824988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Utils*>::get(),
                        "RangesOverlap",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Utils.InitAudioSource
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AudioSource*)>(&::AudioHelm::Utils::InitAudioSource)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x181e080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Utils*>::get(),
                        "InitAudioSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void AudioHelm::Utils::setStaticF_blackKeys(::ArrayW<bool,::Array<bool>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<bool,::Array<bool>*>, "blackKeys", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Utils*>::get>(std::forward<::ArrayW<bool,::Array<bool>*>>(value));
}
inline ::ArrayW<bool,::Array<bool>*> AudioHelm::Utils::getStaticF_blackKeys()  {
return ::cordl_internals::getStaticField<::ArrayW<bool,::Array<bool>*>, "blackKeys", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Utils*>::get>();
}
inline bool AudioHelm::Utils::IsBlackKey(int32_t  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Utils*>::get(),
                        "IsBlackKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, key);
}
inline bool AudioHelm::Utils::IsC(int32_t  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Utils*>::get(),
                        "IsC",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, key);
}
inline int32_t AudioHelm::Utils::GetOctave(int32_t  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Utils*>::get(),
                        "GetOctave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, key);
}
inline float_t AudioHelm::Utils::MidiChangeToRatio(int32_t  midi)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Utils*>::get(),
                        "MidiChangeToRatio",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, midi);
}
inline bool AudioHelm::Utils::RangesOverlap(float_t  start, float_t  end, float_t  rangeStart, float_t  rangeEnd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Utils*>::get(),
                        "RangesOverlap",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, start, end, rangeStart, rangeEnd);
}
inline void AudioHelm::Utils::InitAudioSource(::UnityEngine::AudioSource*  audio)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Utils*>::get(),
                        "InitAudioSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, audio);
}
template<typename T>
inline T AudioHelm::Utils::CopyComponent(T  original, ::UnityEngine::GameObject*  destination)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Utils*>::get(),
                    "CopyComponent",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, original, destination);
}
// Ctor Parameters []
constexpr ::AudioHelm::Utils::Utils()   {
}
