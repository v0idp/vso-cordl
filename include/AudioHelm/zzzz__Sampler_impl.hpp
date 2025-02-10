#pragma once
// IWYU pragma private; include "AudioHelm/Sampler.hpp"
#include "AudioHelm/zzzz__NoteHandler_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "AudioHelm/zzzz__Sampler_def.hpp"
#include "AudioHelm/zzzz__Keyzone_def.hpp"
#include "AudioHelm/zzzz__Sampler_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::AudioHelm::Sampler_KeyzonePlayMode::Sampler_KeyzonePlayMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::AudioHelm::Sampler_KeyzonePlayMode::Sampler_KeyzonePlayMode()   {
}
constexpr ::AudioHelm::Sampler_KeyzonePlayMode  AudioHelm::Sampler_KeyzonePlayMode::kAll{static_cast<int32_t>(0x0)};
constexpr ::AudioHelm::Sampler_KeyzonePlayMode  AudioHelm::Sampler_KeyzonePlayMode::kRoundRobin{static_cast<int32_t>(0x1)};
constexpr ::AudioHelm::Sampler_KeyzonePlayMode  AudioHelm::Sampler_KeyzonePlayMode::kRandom{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::AudioHelm::Sampler_ActiveNote._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sampler_ActiveNote::*)(int32_t, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*, double_t)>(&::AudioHelm::Sampler_ActiveNote::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182633c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler_ActiveNote*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& AudioHelm::Sampler_ActiveNote::__cordl_internal_get_note()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___note;
}
constexpr int32_t const& AudioHelm::Sampler_ActiveNote::__cordl_internal_get_note() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___note;
}
constexpr void AudioHelm::Sampler_ActiveNote::__cordl_internal_set_note(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___note = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*& AudioHelm::Sampler_ActiveNote::__cordl_internal_get_audioSources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSources;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>* const& AudioHelm::Sampler_ActiveNote::__cordl_internal_get_audioSources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSources;
}
constexpr void AudioHelm::Sampler_ActiveNote::__cordl_internal_set_audioSources(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioSources)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr double_t& AudioHelm::Sampler_ActiveNote::__cordl_internal_get_startTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr double_t const& AudioHelm::Sampler_ActiveNote::__cordl_internal_get_startTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr void AudioHelm::Sampler_ActiveNote::__cordl_internal_set_startTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startTime = value;
}
inline void AudioHelm::Sampler_ActiveNote::_ctor(int32_t  n, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*  sources, double_t  start)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler_ActiveNote*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, n, sources, start);
}
inline ::AudioHelm::Sampler_ActiveNote* AudioHelm::Sampler_ActiveNote::New_ctor(int32_t  n, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*  sources, double_t  start)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::Sampler_ActiveNote*>(n, sources, start));
}
// Ctor Parameters []
constexpr ::AudioHelm::Sampler_ActiveNote::Sampler_ActiveNote()   {
}
//  Writing Method size for method: ::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::*)(int32_t)>(&::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1826040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::*)()>(&::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1826b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::*)()>(&::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::MoveNext)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1826b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::*)()>(&::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1826bfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::*)()>(&::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1826c04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::*)()>(&::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1826c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::__cordl_internal_get_seconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seconds;
}
constexpr float_t const& AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::__cordl_internal_get_seconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seconds;
}
constexpr void AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::__cordl_internal_set_seconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seconds = value;
}
constexpr ::UnityW<::AudioHelm::Sampler>& AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::AudioHelm::Sampler> const& AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::__cordl_internal_set___4__this(::UnityW<::AudioHelm::Sampler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::__cordl_internal_get_note()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___note;
}
constexpr int32_t const& AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::__cordl_internal_get_note() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___note;
}
constexpr void AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::__cordl_internal_set_note(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___note = value;
}
inline void AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27* AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::AudioHelm::Sampler__TurnVoiceOffInSeconds_d__27::Sampler__TurnVoiceOffInSeconds_d__27()   {
}
//  Writing Method size for method: ::AudioHelm::Sampler.get_useNoteOff
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::AudioHelm::Sampler::*)()>(&::AudioHelm::Sampler::get_useNoteOff)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1824ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "get_useNoteOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler.set_useNoteOff
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sampler::*)(bool)>(&::AudioHelm::Sampler::set_useNoteOff)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1824ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "set_useNoteOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sampler::*)()>(&::AudioHelm::Sampler::Awake)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1824fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sampler::*)()>(&::AudioHelm::Sampler::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18250ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler.OnDisable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sampler::*)()>(&::AudioHelm::Sampler::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18250f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler.AddKeyzone
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AudioHelm::Keyzone* (::AudioHelm::Sampler::*)()>(&::AudioHelm::Sampler::AddKeyzone)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18250f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "AddKeyzone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler.RemoveKeyzone
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::AudioHelm::Sampler::*)(::AudioHelm::Keyzone*)>(&::AudioHelm::Sampler::RemoveKeyzone)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18251d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "RemoveKeyzone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Keyzone*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler.GetNextAudioSource
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioSource> (::AudioHelm::Sampler::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*)>(&::AudioHelm::Sampler::GetNextAudioSource)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1825264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "GetNextAudioSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler.PrepNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sampler::*)(::UnityEngine::AudioSource*, int32_t, float_t)>(&::AudioHelm::Sampler::PrepNote)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x182536c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "PrepNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler.PrepNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sampler::*)(::UnityEngine::AudioSource*, ::AudioHelm::Keyzone*, int32_t, float_t)>(&::AudioHelm::Sampler::PrepNote)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x1825440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "PrepNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Keyzone*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler.GetValidKeyzones
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::AudioHelm::Keyzone*>* (::AudioHelm::Sampler::*)(int32_t, float_t)>(&::AudioHelm::Sampler::GetValidKeyzones)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x182553c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "GetValidKeyzones",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler.GetKeyzonesToPlay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::AudioHelm::Keyzone*>* (::AudioHelm::Sampler::*)(::System::Collections::Generic::List_1<::AudioHelm::Keyzone*>*)>(&::AudioHelm::Sampler::GetKeyzonesToPlay)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x1825784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "GetKeyzonesToPlay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::AudioHelm::Keyzone*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler.GetPreppedAudioSources
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>* (::AudioHelm::Sampler::*)(int32_t, float_t)>(&::AudioHelm::Sampler::GetPreppedAudioSources)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1825a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "GetPreppedAudioSources",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler.GetMinKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::AudioHelm::Sampler::*)()>(&::AudioHelm::Sampler::GetMinKey)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1825ce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "GetMinKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler.GetMaxKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::AudioHelm::Sampler::*)()>(&::AudioHelm::Sampler::GetMaxKey)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1825e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "GetMaxKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler.AllNotesOff
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sampler::*)()>(&::AudioHelm::Sampler::AllNotesOff)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1824efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "AllNotesOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler.TurnVoiceOffInSeconds
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::AudioHelm::Sampler::*)(int32_t, float_t)>(&::AudioHelm::Sampler::TurnVoiceOffInSeconds)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1825fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "TurnVoiceOffInSeconds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler.NoteOn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sampler::*)(int32_t, float_t)>(&::AudioHelm::Sampler::NoteOn)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x1826068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "NoteOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler.NoteOnScheduled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sampler::*)(int32_t, float_t, double_t, double_t)>(&::AudioHelm::Sampler::NoteOnScheduled)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x182637c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "NoteOnScheduled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler.FindActiveNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AudioHelm::Sampler_ActiveNote* (::AudioHelm::Sampler::*)(int32_t)>(&::AudioHelm::Sampler::FindActiveNote)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x18266c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "FindActiveNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler.NoteOff
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sampler::*)(int32_t)>(&::AudioHelm::Sampler::NoteOff)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1826820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "NoteOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler.DoNoteOff
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sampler::*)(int32_t)>(&::AudioHelm::Sampler::DoNoteOff)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x1826830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "DoNoteOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::Sampler._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::Sampler::*)()>(&::AudioHelm::Sampler::_ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x18269d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::AudioHelm::Keyzone*>*& AudioHelm::Sampler::__cordl_internal_get_keyzones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyzones;
}
constexpr ::System::Collections::Generic::List_1<::AudioHelm::Keyzone*>* const& AudioHelm::Sampler::__cordl_internal_get_keyzones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyzones;
}
constexpr void AudioHelm::Sampler::__cordl_internal_set_keyzones(::System::Collections::Generic::List_1<::AudioHelm::Keyzone*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyzones)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::AudioHelm::Sampler_KeyzonePlayMode& AudioHelm::Sampler::__cordl_internal_get_keyzonePlayMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyzonePlayMode;
}
constexpr ::AudioHelm::Sampler_KeyzonePlayMode const& AudioHelm::Sampler::__cordl_internal_get_keyzonePlayMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyzonePlayMode;
}
constexpr void AudioHelm::Sampler::__cordl_internal_set_keyzonePlayMode(::AudioHelm::Sampler_KeyzonePlayMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyzonePlayMode = value;
}
constexpr float_t& AudioHelm::Sampler::__cordl_internal_get_velocityTracking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityTracking;
}
constexpr float_t const& AudioHelm::Sampler::__cordl_internal_get_velocityTracking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityTracking;
}
constexpr void AudioHelm::Sampler::__cordl_internal_set_velocityTracking(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityTracking = value;
}
constexpr int32_t& AudioHelm::Sampler::__cordl_internal_get_numVoices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numVoices;
}
constexpr int32_t const& AudioHelm::Sampler::__cordl_internal_get_numVoices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numVoices;
}
constexpr void AudioHelm::Sampler::__cordl_internal_set_numVoices(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numVoices = value;
}
constexpr bool& AudioHelm::Sampler::__cordl_internal_get_useNoteOff_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useNoteOff_;
}
constexpr bool const& AudioHelm::Sampler::__cordl_internal_get_useNoteOff_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useNoteOff_;
}
constexpr void AudioHelm::Sampler::__cordl_internal_set_useNoteOff_(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useNoteOff_ = value;
}
constexpr int32_t& AudioHelm::Sampler::__cordl_internal_get_audioIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioIndex;
}
constexpr int32_t const& AudioHelm::Sampler::__cordl_internal_get_audioIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioIndex;
}
constexpr void AudioHelm::Sampler::__cordl_internal_set_audioIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::AudioHelm::Sampler_ActiveNote*>*& AudioHelm::Sampler::__cordl_internal_get_activeNotes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeNotes;
}
constexpr ::System::Collections::Generic::List_1<::AudioHelm::Sampler_ActiveNote*>* const& AudioHelm::Sampler::__cordl_internal_get_activeNotes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeNotes;
}
constexpr void AudioHelm::Sampler::__cordl_internal_set_activeNotes(::System::Collections::Generic::List_1<::AudioHelm::Sampler_ActiveNote*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___activeNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool AudioHelm::Sampler::get_useNoteOff()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "get_useNoteOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void AudioHelm::Sampler::set_useNoteOff(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "set_useNoteOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void AudioHelm::Sampler::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::Sampler::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::Sampler::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::Keyzone* AudioHelm::Sampler::AddKeyzone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "AddKeyzone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::AudioHelm::Keyzone*, false>(this, ___internal_method);
}
inline int32_t AudioHelm::Sampler::RemoveKeyzone(::AudioHelm::Keyzone*  keyzone)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "RemoveKeyzone",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Keyzone*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, keyzone);
}
inline ::UnityW<::UnityEngine::AudioSource> AudioHelm::Sampler::GetNextAudioSource(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*  ignore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "GetNextAudioSource",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>, false>(this, ___internal_method, ignore);
}
inline void AudioHelm::Sampler::PrepNote(::UnityEngine::AudioSource*  audioSource, int32_t  note, float_t  velocity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "PrepNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioSource, note, velocity);
}
inline void AudioHelm::Sampler::PrepNote(::UnityEngine::AudioSource*  audioSource, ::AudioHelm::Keyzone*  keyzone, int32_t  note, float_t  velocity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "PrepNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Keyzone*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioSource, keyzone, note, velocity);
}
inline ::System::Collections::Generic::List_1<::AudioHelm::Keyzone*>* AudioHelm::Sampler::GetValidKeyzones(int32_t  note, float_t  velocity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "GetValidKeyzones",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::AudioHelm::Keyzone*>*, false>(this, ___internal_method, note, velocity);
}
inline ::System::Collections::Generic::List_1<::AudioHelm::Keyzone*>* AudioHelm::Sampler::GetKeyzonesToPlay(::System::Collections::Generic::List_1<::AudioHelm::Keyzone*>*  validKeyzones)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "GetKeyzonesToPlay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::AudioHelm::Keyzone*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::AudioHelm::Keyzone*>*, false>(this, ___internal_method, validKeyzones);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>* AudioHelm::Sampler::GetPreppedAudioSources(int32_t  note, float_t  velocity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "GetPreppedAudioSources",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioSource>>*, false>(this, ___internal_method, note, velocity);
}
inline int32_t AudioHelm::Sampler::GetMinKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "GetMinKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t AudioHelm::Sampler::GetMaxKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "GetMaxKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void AudioHelm::Sampler::AllNotesOff()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "AllNotesOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* AudioHelm::Sampler::TurnVoiceOffInSeconds(int32_t  note, float_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "TurnVoiceOffInSeconds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, note, seconds);
}
inline void AudioHelm::Sampler::NoteOn(int32_t  note, float_t  velocity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "NoteOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note, velocity);
}
inline void AudioHelm::Sampler::NoteOnScheduled(int32_t  note, float_t  velocity, double_t  timeToStart, double_t  timeToEnd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "NoteOnScheduled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note, velocity, timeToStart, timeToEnd);
}
inline ::AudioHelm::Sampler_ActiveNote* AudioHelm::Sampler::FindActiveNote(int32_t  note)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "FindActiveNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::AudioHelm::Sampler_ActiveNote*, false>(this, ___internal_method, note);
}
inline void AudioHelm::Sampler::NoteOff(int32_t  note)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "NoteOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note);
}
inline void AudioHelm::Sampler::DoNoteOff(int32_t  note)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        "DoNoteOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note);
}
inline void AudioHelm::Sampler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::Sampler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::Sampler* AudioHelm::Sampler::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::Sampler*>());
}
/// @brief Convert operator to "::AudioHelm::NoteHandler"
constexpr  AudioHelm::Sampler::operator ::AudioHelm::NoteHandler*() noexcept {
return static_cast<::AudioHelm::NoteHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::AudioHelm::NoteHandler"
constexpr ::AudioHelm::NoteHandler* AudioHelm::Sampler::i___AudioHelm__NoteHandler() noexcept {
return static_cast<::AudioHelm::NoteHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::AudioHelm::Sampler::Sampler()   {
}
