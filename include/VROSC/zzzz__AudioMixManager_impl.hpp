#pragma once
// IWYU pragma private; include "VROSC/AudioMixManager.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__AudioMixManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "VROSC/zzzz__AudioMixManager_def.hpp"
#include "VROSC/zzzz__CompressionManager_def.hpp"
#include "VROSC/zzzz__Error_def.hpp"
#include "VROSC/zzzz__ReverbManager_def.hpp"
#include "VROSC/zzzz__UserDataControllers_def.hpp"
//  Writing Method size for method: ::VROSC::VolumeParameter_AudioMixManager_FadeSource._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::VolumeParameter_AudioMixManager_FadeSource::*)(::System::Object*, float_t)>(&::VROSC::VolumeParameter_AudioMixManager_FadeSource::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x17cd8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VolumeParameter_AudioMixManager_FadeSource*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& VROSC::VolumeParameter_AudioMixManager_FadeSource::__cordl_internal_get_Source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Source;
}
constexpr ::System::Object* const& VROSC::VolumeParameter_AudioMixManager_FadeSource::__cordl_internal_get_Source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Source;
}
constexpr void VROSC::VolumeParameter_AudioMixManager_FadeSource::__cordl_internal_set_Source(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::VolumeParameter_AudioMixManager_FadeSource::__cordl_internal_get_Volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Volume;
}
constexpr float_t const& VROSC::VolumeParameter_AudioMixManager_FadeSource::__cordl_internal_get_Volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Volume;
}
constexpr void VROSC::VolumeParameter_AudioMixManager_FadeSource::__cordl_internal_set_Volume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Volume = value;
}
inline void VROSC::VolumeParameter_AudioMixManager_FadeSource::_ctor(::System::Object*  source, float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::VolumeParameter_AudioMixManager_FadeSource*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, volume);
}
inline ::VROSC::VolumeParameter_AudioMixManager_FadeSource* VROSC::VolumeParameter_AudioMixManager_FadeSource::New_ctor(::System::Object*  source, float_t  volume)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::VolumeParameter_AudioMixManager_FadeSource*>(source, volume));
}
// Ctor Parameters []
constexpr ::VROSC::VolumeParameter_AudioMixManager_FadeSource::VolumeParameter_AudioMixManager_FadeSource()   {
}
//  Writing Method size for method: ::VROSC::AudioMixManager_VolumeParameter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioMixManager_VolumeParameter::*)(::StringW, ::UnityEngine::Audio::AudioMixer*)>(&::VROSC::AudioMixManager_VolumeParameter::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x17cc8d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager_VolumeParameter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioMixer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager_VolumeParameter.RegisterFade
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioMixManager_VolumeParameter::*)(::System::Object*, float_t)>(&::VROSC::AudioMixManager_VolumeParameter::RegisterFade)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x17cd0c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager_VolumeParameter*>::get(),
                        "RegisterFade",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager_VolumeParameter.UnregisterFade
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioMixManager_VolumeParameter::*)(::System::Object*)>(&::VROSC::AudioMixManager_VolumeParameter::UnregisterFade)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x17ccffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager_VolumeParameter*>::get(),
                        "UnregisterFade",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager_VolumeParameter.GetFadeVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::VROSC::AudioMixManager_VolumeParameter::*)()>(&::VROSC::AudioMixManager_VolumeParameter::GetFadeVolume)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x17cd2dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager_VolumeParameter*>::get(),
                        "GetFadeVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::AudioMixManager_VolumeParameter::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& VROSC::AudioMixManager_VolumeParameter::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void VROSC::AudioMixManager_VolumeParameter::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::AudioMixManager_VolumeParameter::__cordl_internal_get_UnfadedVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnfadedVolume;
}
constexpr float_t const& VROSC::AudioMixManager_VolumeParameter::__cordl_internal_get_UnfadedVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnfadedVolume;
}
constexpr void VROSC::AudioMixManager_VolumeParameter::__cordl_internal_set_UnfadedVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UnfadedVolume = value;
}
constexpr ::UnityEngine::Coroutine*& VROSC::AudioMixManager_VolumeParameter::__cordl_internal_get_FadingCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FadingCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& VROSC::AudioMixManager_VolumeParameter::__cordl_internal_get_FadingCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FadingCoroutine;
}
constexpr void VROSC::AudioMixManager_VolumeParameter::__cordl_internal_set_FadingCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FadingCoroutine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::VROSC::VolumeParameter_AudioMixManager_FadeSource*>*& VROSC::AudioMixManager_VolumeParameter::__cordl_internal_get__fadeSources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeSources;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::VolumeParameter_AudioMixManager_FadeSource*>* const& VROSC::AudioMixManager_VolumeParameter::__cordl_internal_get__fadeSources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadeSources;
}
constexpr void VROSC::AudioMixManager_VolumeParameter::__cordl_internal_set__fadeSources(::System::Collections::Generic::List_1<::VROSC::VolumeParameter_AudioMixManager_FadeSource*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fadeSources)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::AudioMixManager_VolumeParameter::_ctor(::StringW  name, ::UnityEngine::Audio::AudioMixer*  audioMixer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager_VolumeParameter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioMixer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, audioMixer);
}
inline void VROSC::AudioMixManager_VolumeParameter::RegisterFade(::System::Object*  source, float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager_VolumeParameter*>::get(),
                        "RegisterFade",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, volume);
}
inline void VROSC::AudioMixManager_VolumeParameter::UnregisterFade(::System::Object*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager_VolumeParameter*>::get(),
                        "UnregisterFade",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
inline float_t VROSC::AudioMixManager_VolumeParameter::GetFadeVolume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager_VolumeParameter*>::get(),
                        "GetFadeVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::VROSC::AudioMixManager_VolumeParameter* VROSC::AudioMixManager_VolumeParameter::New_ctor(::StringW  name, ::UnityEngine::Audio::AudioMixer*  audioMixer)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioMixManager_VolumeParameter*>(name, audioMixer));
}
// Ctor Parameters []
constexpr ::VROSC::AudioMixManager_VolumeParameter::AudioMixManager_VolumeParameter()   {
}
//  Writing Method size for method: ::VROSC::AudioMixManager__FadeCoroutine_d__17._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioMixManager__FadeCoroutine_d__17::*)(int32_t)>(&::VROSC::AudioMixManager__FadeCoroutine_d__17::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x17cd4cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager__FadeCoroutine_d__17*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager__FadeCoroutine_d__17.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioMixManager__FadeCoroutine_d__17::*)()>(&::VROSC::AudioMixManager__FadeCoroutine_d__17::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17cd8f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager__FadeCoroutine_d__17*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager__FadeCoroutine_d__17.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::AudioMixManager__FadeCoroutine_d__17::*)()>(&::VROSC::AudioMixManager__FadeCoroutine_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x17cd8f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager__FadeCoroutine_d__17*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager__FadeCoroutine_d__17.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::AudioMixManager__FadeCoroutine_d__17::*)()>(&::VROSC::AudioMixManager__FadeCoroutine_d__17::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17cda48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager__FadeCoroutine_d__17*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager__FadeCoroutine_d__17.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioMixManager__FadeCoroutine_d__17::*)()>(&::VROSC::AudioMixManager__FadeCoroutine_d__17::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x17cda50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager__FadeCoroutine_d__17*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager__FadeCoroutine_d__17.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::VROSC::AudioMixManager__FadeCoroutine_d__17::*)()>(&::VROSC::AudioMixManager__FadeCoroutine_d__17::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17cda88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager__FadeCoroutine_d__17*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::AudioMixManager>& VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::VROSC::AudioMixManager> const& VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_set___4__this(::UnityW<::VROSC::AudioMixManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_get_parameterName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameterName;
}
constexpr ::StringW const& VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_get_parameterName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameterName;
}
constexpr void VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_set_parameterName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parameterName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_get_fadeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeTime;
}
constexpr float_t const& VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_get_fadeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeTime;
}
constexpr void VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_set_fadeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeTime = value;
}
constexpr float_t& VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_get_unfadedVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unfadedVolume;
}
constexpr float_t const& VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_get_unfadedVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unfadedVolume;
}
constexpr void VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_set_unfadedVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unfadedVolume = value;
}
constexpr float_t& VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_get_targetVolumeFractionDb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetVolumeFractionDb;
}
constexpr float_t const& VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_get_targetVolumeFractionDb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetVolumeFractionDb;
}
constexpr void VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_set_targetVolumeFractionDb(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetVolumeFractionDb = value;
}
constexpr float_t& VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_get__startVolume_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startVolume_5__2;
}
constexpr float_t const& VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_get__startVolume_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startVolume_5__2;
}
constexpr void VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_set__startVolume_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startVolume_5__2 = value;
}
constexpr float_t& VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_get__progress_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progress_5__3;
}
constexpr float_t const& VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_get__progress_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progress_5__3;
}
constexpr void VROSC::AudioMixManager__FadeCoroutine_d__17::__cordl_internal_set__progress_5__3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progress_5__3 = value;
}
inline void VROSC::AudioMixManager__FadeCoroutine_d__17::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager__FadeCoroutine_d__17*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void VROSC::AudioMixManager__FadeCoroutine_d__17::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager__FadeCoroutine_d__17*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VROSC::AudioMixManager__FadeCoroutine_d__17::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager__FadeCoroutine_d__17*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::AudioMixManager__FadeCoroutine_d__17::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager__FadeCoroutine_d__17*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void VROSC::AudioMixManager__FadeCoroutine_d__17::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager__FadeCoroutine_d__17*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* VROSC::AudioMixManager__FadeCoroutine_d__17::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager__FadeCoroutine_d__17*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::VROSC::AudioMixManager__FadeCoroutine_d__17* VROSC::AudioMixManager__FadeCoroutine_d__17::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioMixManager__FadeCoroutine_d__17*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  VROSC::AudioMixManager__FadeCoroutine_d__17::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* VROSC::AudioMixManager__FadeCoroutine_d__17::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  VROSC::AudioMixManager__FadeCoroutine_d__17::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* VROSC::AudioMixManager__FadeCoroutine_d__17::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  VROSC::AudioMixManager__FadeCoroutine_d__17::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* VROSC::AudioMixManager__FadeCoroutine_d__17::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VROSC::AudioMixManager__FadeCoroutine_d__17::AudioMixManager__FadeCoroutine_d__17()   {
}
//  Writing Method size for method: ::VROSC::AudioMixManager.get_AudioMixer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Audio::AudioMixer> (::VROSC::AudioMixManager::*)()>(&::VROSC::AudioMixManager::get_AudioMixer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17cc1d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "get_AudioMixer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioMixManager::*)()>(&::VROSC::AudioMixManager::Awake)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x17cc1e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioMixManager::*)()>(&::VROSC::AudioMixManager::OnDestroy)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x17cc97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager.Fade
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioMixManager::*)(::StringW, float_t, float_t, ::System::Object*)>(&::VROSC::AudioMixManager::Fade)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x17ccec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "Fade",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager.FadeCoroutine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::VROSC::AudioMixManager::*)(::StringW, float_t, float_t, float_t)>(&::VROSC::AudioMixManager::FadeCoroutine)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x17cd43c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "FadeCoroutine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager.SetVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioMixManager::*)(::StringW, float_t)>(&::VROSC::AudioMixManager::SetVolume)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17cd4f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "SetVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager.SetVolumeDb
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioMixManager::*)(::StringW, float_t)>(&::VROSC::AudioMixManager::SetVolumeDb)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17cd578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "SetVolumeDb",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager.PreferencesDataLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioMixManager::*)(::VROSC::UserDataControllers*)>(&::VROSC::AudioMixManager::PreferencesDataLoaded)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x17cd5fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "PreferencesDataLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserDataControllers*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager.SaveSucceeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioMixManager::*)(::StringW)>(&::VROSC::AudioMixManager::SaveSucceeded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17cd660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "SaveSucceeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager.SaveFailed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioMixManager::*)(::StringW, ::VROSC::Error)>(&::VROSC::AudioMixManager::SaveFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17cd6d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "SaveFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager.LoadSucceeded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioMixManager::*)(::StringW, bool)>(&::VROSC::AudioMixManager::LoadSucceeded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17cd6d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "LoadSucceeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager.LoadFailed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioMixManager::*)(::StringW, bool, ::VROSC::Error)>(&::VROSC::AudioMixManager::LoadFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x17cd6d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "LoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager.FadeOutForLoadSave
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioMixManager::*)()>(&::VROSC::AudioMixManager::FadeOutForLoadSave)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x17cd6dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "FadeOutForLoadSave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager.FadeInAfterLoadSave
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioMixManager::*)()>(&::VROSC::AudioMixManager::FadeInAfterLoadSave)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x17cd664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "FadeInAfterLoadSave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager.SetDrumsReverbAmount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioMixManager::*)(float_t)>(&::VROSC::AudioMixManager::SetDrumsReverbAmount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17cd74c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "SetDrumsReverbAmount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager.SetReverbLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioMixManager::*)(float_t)>(&::VROSC::AudioMixManager::SetReverbLength)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17cd768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "SetReverbLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager.SetDrumsDryVolume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioMixManager::*)(float_t)>(&::VROSC::AudioMixManager::SetDrumsDryVolume)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x17cd784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "SetDrumsDryVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager.SetDrumsCompression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioMixManager::*)(float_t)>(&::VROSC::AudioMixManager::SetDrumsCompression)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17cd820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "SetDrumsCompression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioMixManager._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioMixManager::*)()>(&::VROSC::AudioMixManager::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17cd83c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& VROSC::AudioMixManager::__cordl_internal_get__audioMixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioMixer;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& VROSC::AudioMixManager::__cordl_internal_get__audioMixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioMixer;
}
constexpr void VROSC::AudioMixManager::__cordl_internal_set__audioMixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioMixer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ReverbManager>& VROSC::AudioMixManager::__cordl_internal_get__reverbManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reverbManager;
}
constexpr ::UnityW<::VROSC::ReverbManager> const& VROSC::AudioMixManager::__cordl_internal_get__reverbManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reverbManager;
}
constexpr void VROSC::AudioMixManager::__cordl_internal_set__reverbManager(::UnityW<::VROSC::ReverbManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reverbManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::CompressionManager>& VROSC::AudioMixManager::__cordl_internal_get__compressionManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compressionManager;
}
constexpr ::UnityW<::VROSC::CompressionManager> const& VROSC::AudioMixManager::__cordl_internal_get__compressionManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compressionManager;
}
constexpr void VROSC::AudioMixManager::__cordl_internal_set__compressionManager(::UnityW<::VROSC::CompressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____compressionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::AudioMixManager_VolumeParameter*>*& VROSC::AudioMixManager::__cordl_internal_get__volumeParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeParameters;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::AudioMixManager_VolumeParameter*>* const& VROSC::AudioMixManager::__cordl_internal_get__volumeParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeParameters;
}
constexpr void VROSC::AudioMixManager::__cordl_internal_set__volumeParameters(::System::Collections::Generic::Dictionary_2<::StringW,::VROSC::AudioMixManager_VolumeParameter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____volumeParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VROSC::AudioMixManager::__cordl_internal_get__fadedOutMaster()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadedOutMaster;
}
constexpr bool const& VROSC::AudioMixManager::__cordl_internal_get__fadedOutMaster() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fadedOutMaster;
}
constexpr void VROSC::AudioMixManager::__cordl_internal_set__fadedOutMaster(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fadedOutMaster = value;
}
inline ::UnityW<::UnityEngine::Audio::AudioMixer> VROSC::AudioMixManager::get_AudioMixer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "get_AudioMixer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Audio::AudioMixer>, false>(this, ___internal_method);
}
inline void VROSC::AudioMixManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AudioMixManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AudioMixManager::Fade(::StringW  parameterName, float_t  fadeTime, float_t  targetVolumeFraction, ::System::Object*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "Fade",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameterName, fadeTime, targetVolumeFraction, source);
}
inline ::System::Collections::IEnumerator* VROSC::AudioMixManager::FadeCoroutine(::StringW  parameterName, float_t  fadeTime, float_t  unfadedVolume, float_t  targetVolumeFractionDb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "FadeCoroutine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, parameterName, fadeTime, unfadedVolume, targetVolumeFractionDb);
}
inline void VROSC::AudioMixManager::SetVolume(::StringW  parameterName, float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "SetVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameterName, volume);
}
inline void VROSC::AudioMixManager::SetVolumeDb(::StringW  parameterName, float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "SetVolumeDb",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameterName, volume);
}
inline void VROSC::AudioMixManager::PreferencesDataLoaded(::VROSC::UserDataControllers*  userDataControllers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "PreferencesDataLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::UserDataControllers*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userDataControllers);
}
inline void VROSC::AudioMixManager::SaveSucceeded(::StringW  sessionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "SaveSucceeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId);
}
inline void VROSC::AudioMixManager::SaveFailed(::StringW  sessionId, ::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "SaveFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, error);
}
inline void VROSC::AudioMixManager::LoadSucceeded(::StringW  sessionId, bool  isDefaultSession)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "LoadSucceeded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, isDefaultSession);
}
inline void VROSC::AudioMixManager::LoadFailed(::StringW  sessionId, bool  isDefaultSession, ::VROSC::Error  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "LoadFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::Error>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionId, isDefaultSession, error);
}
inline void VROSC::AudioMixManager::FadeOutForLoadSave()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "FadeOutForLoadSave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AudioMixManager::FadeInAfterLoadSave()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "FadeInAfterLoadSave",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AudioMixManager::SetDrumsReverbAmount(float_t  amount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "SetDrumsReverbAmount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, amount);
}
inline void VROSC::AudioMixManager::SetReverbLength(float_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "SetReverbLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, length);
}
inline void VROSC::AudioMixManager::SetDrumsDryVolume(float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "SetDrumsDryVolume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, volume);
}
inline void VROSC::AudioMixManager::SetDrumsCompression(float_t  compression)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        "SetDrumsCompression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, compression);
}
inline void VROSC::AudioMixManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioMixManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AudioMixManager* VROSC::AudioMixManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioMixManager*>());
}
// Ctor Parameters []
constexpr ::VROSC::AudioMixManager::AudioMixManager()   {
}
