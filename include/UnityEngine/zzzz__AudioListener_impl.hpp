#pragma once
// IWYU pragma private; include "UnityEngine/AudioListener.hpp"
#include "UnityEngine/zzzz__AudioBehaviour_impl.hpp"
#include "UnityEngine/zzzz__AudioListener_def.hpp"
#include "UnityEngine/zzzz__FFTWindow_def.hpp"
//  Writing Method size for method: ::UnityEngine::AudioListener.GetSpectrumDataHelper
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::ArrayW<float_t,::Array<float_t>*>>, int32_t, ::UnityEngine::FFTWindow)>(&::UnityEngine::AudioListener::GetSpectrumDataHelper)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f584bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioListener*>::get(),
                        "GetSpectrumDataHelper",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<float_t,::Array<float_t>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FFTWindow>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioListener.set_pause
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::AudioListener::set_pause)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f58510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioListener*>::get(),
                        "set_pause",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioListener.GetSpectrumData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<float_t,::Array<float_t>*>, int32_t, ::UnityEngine::FFTWindow)>(&::UnityEngine::AudioListener::GetSpectrumData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f5854c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioListener*>::get(),
                        "GetSpectrumData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FFTWindow>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::AudioListener::GetSpectrumDataHelper(::ByRef<::ArrayW<float_t,::Array<float_t>*>>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioListener*>::get(),
                        "GetSpectrumDataHelper",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<float_t,::Array<float_t>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FFTWindow>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, samples, channel, window);
}
inline void UnityEngine::AudioListener::set_pause(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioListener*>::get(),
                        "set_pause",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::AudioListener::GetSpectrumData(::ArrayW<float_t,::Array<float_t>*>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioListener*>::get(),
                        "GetSpectrumData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FFTWindow>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, samples, channel, window);
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioListener::AudioListener()   {
}
