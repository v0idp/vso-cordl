#pragma once
// IWYU pragma private; include "AudioHelm/SyncAudioAndSequencers.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "AudioHelm/zzzz__SyncAudioAndSequencers_def.hpp"
#include "AudioHelm/zzzz__AudioHelmClock_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::AudioHelm::SyncAudioAndSequencers.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::SyncAudioAndSequencers::*)()>(&::AudioHelm::SyncAudioAndSequencers::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181cffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::SyncAudioAndSequencers*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::SyncAudioAndSequencers.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::SyncAudioAndSequencers::*)()>(&::AudioHelm::SyncAudioAndSequencers::Update)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x181d0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::SyncAudioAndSequencers*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::SyncAudioAndSequencers._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::SyncAudioAndSequencers::*)()>(&::AudioHelm::SyncAudioAndSequencers::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181d26c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::SyncAudioAndSequencers*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::AudioHelm::AudioHelmClock>& AudioHelm::SyncAudioAndSequencers::__cordl_internal_get_clock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clock;
}
constexpr ::UnityW<::AudioHelm::AudioHelmClock> const& AudioHelm::SyncAudioAndSequencers::__cordl_internal_get_clock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clock;
}
constexpr void AudioHelm::SyncAudioAndSequencers::__cordl_internal_set_clock(::UnityW<::AudioHelm::AudioHelmClock>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioSource>& AudioHelm::SyncAudioAndSequencers::__cordl_internal_get_loop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& AudioHelm::SyncAudioAndSequencers::__cordl_internal_get_loop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loop;
}
constexpr void AudioHelm::SyncAudioAndSequencers::__cordl_internal_set_loop(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___loop)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& AudioHelm::SyncAudioAndSequencers::__cordl_internal_get_waitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitTime;
}
constexpr float_t const& AudioHelm::SyncAudioAndSequencers::__cordl_internal_get_waitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitTime;
}
constexpr void AudioHelm::SyncAudioAndSequencers::__cordl_internal_set_waitTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitTime = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& AudioHelm::SyncAudioAndSequencers::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& AudioHelm::SyncAudioAndSequencers::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void AudioHelm::SyncAudioAndSequencers::__cordl_internal_set_text(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& AudioHelm::SyncAudioAndSequencers::__cordl_internal_get_lastSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSecond;
}
constexpr int32_t const& AudioHelm::SyncAudioAndSequencers::__cordl_internal_get_lastSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSecond;
}
constexpr void AudioHelm::SyncAudioAndSequencers::__cordl_internal_set_lastSecond(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSecond = value;
}
inline void AudioHelm::SyncAudioAndSequencers::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::SyncAudioAndSequencers*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::SyncAudioAndSequencers::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::SyncAudioAndSequencers*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::SyncAudioAndSequencers::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::SyncAudioAndSequencers*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::SyncAudioAndSequencers* AudioHelm::SyncAudioAndSequencers::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::SyncAudioAndSequencers*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::SyncAudioAndSequencers::SyncAudioAndSequencers()   {
}
