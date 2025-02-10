#pragma once
// IWYU pragma private; include "VROSC/AudioRecorder.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__AudioRecorder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "VROSC/zzzz__HelmRecorder_def.hpp"
#include "VROSC/zzzz__MasterRecorder_def.hpp"
#include "VROSC/zzzz__MicrophoneRecorder_def.hpp"
#include "VROSC/zzzz__MixerGroupRecorder_def.hpp"
#include "VROSC/zzzz__SoundSource_def.hpp"
//  Writing Method size for method: ::VROSC::AudioRecorder.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioRecorder::*)()>(&::VROSC::AudioRecorder::Setup)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x17c6bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioRecorder.ResetAudioBufferSize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioRecorder::*)()>(&::VROSC::AudioRecorder::ResetAudioBufferSize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x17cda90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "ResetAudioBufferSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioRecorder.StartRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioRecorder::*)(::VROSC::SoundSource, ::System::Action_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>*, int32_t)>(&::VROSC::AudioRecorder::StartRecording)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x17cdc50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "StartRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SoundSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioRecorder.StartOverdubRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioRecorder::*)(::VROSC::SoundSource, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>)>(&::VROSC::AudioRecorder::StartOverdubRecording)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17cdd68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "StartOverdubRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SoundSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioRecorder.StartTapeRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioRecorder::*)(::System::Action_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>*, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>)>(&::VROSC::AudioRecorder::StartTapeRecording)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17cddec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "StartTapeRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioRecorder.StartRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioRecorder::*)(::VROSC::SoundSource, ::System::Action_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>*, int32_t, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, bool)>(&::VROSC::AudioRecorder::StartRecording)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x17cdc5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "StartRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SoundSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioRecorder.StealRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> (::VROSC::AudioRecorder::*)(::VROSC::SoundSource, bool, bool)>(&::VROSC::AudioRecorder::StealRecording)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x17cde70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "StealRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SoundSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioRecorder.StopRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioRecorder::*)(::VROSC::SoundSource)>(&::VROSC::AudioRecorder::StopRecording)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x17cdeec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "StopRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SoundSource>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioRecorder.StopAndGetRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> (::VROSC::AudioRecorder::*)(::VROSC::SoundSource)>(&::VROSC::AudioRecorder::StopAndGetRecording)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x17cdf5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "StopAndGetRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SoundSource>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioRecorder.SetMicrophoneSamples
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioRecorder::*)(::ArrayW<float_t,::Array<float_t>*>)>(&::VROSC::AudioRecorder::SetMicrophoneSamples)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x17ce020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "SetMicrophoneSamples",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioRecorder.ClearMicrophoneBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioRecorder::*)()>(&::VROSC::AudioRecorder::ClearMicrophoneBuffer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x17ce064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "ClearMicrophoneBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioRecorder.GetRawMicrophoneRecordingData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t,::Array<float_t>*> (::VROSC::AudioRecorder::*)()>(&::VROSC::AudioRecorder::GetRawMicrophoneRecordingData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x17ce0a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "GetRawMicrophoneRecordingData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioRecorder.IsRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::AudioRecorder::*)(::VROSC::SoundSource)>(&::VROSC::AudioRecorder::IsRecording)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x17ce0bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "IsRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SoundSource>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioRecorder.IsRecording
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VROSC::AudioRecorder::*)()>(&::VROSC::AudioRecorder::IsRecording)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x17ce194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "IsRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::AudioRecorder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::AudioRecorder::*)()>(&::VROSC::AudioRecorder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17ce1f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::HelmRecorder>& VROSC::AudioRecorder::__cordl_internal_get__helmRecorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____helmRecorder;
}
constexpr ::UnityW<::VROSC::HelmRecorder> const& VROSC::AudioRecorder::__cordl_internal_get__helmRecorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____helmRecorder;
}
constexpr void VROSC::AudioRecorder::__cordl_internal_set__helmRecorder(::UnityW<::VROSC::HelmRecorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____helmRecorder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::MicrophoneRecorder>& VROSC::AudioRecorder::__cordl_internal_get__microphoneRecorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneRecorder;
}
constexpr ::UnityW<::VROSC::MicrophoneRecorder> const& VROSC::AudioRecorder::__cordl_internal_get__microphoneRecorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneRecorder;
}
constexpr void VROSC::AudioRecorder::__cordl_internal_set__microphoneRecorder(::UnityW<::VROSC::MicrophoneRecorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____microphoneRecorder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::MixerGroupRecorder>& VROSC::AudioRecorder::__cordl_internal_get__samplerRecorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____samplerRecorder;
}
constexpr ::UnityW<::VROSC::MixerGroupRecorder> const& VROSC::AudioRecorder::__cordl_internal_get__samplerRecorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____samplerRecorder;
}
constexpr void VROSC::AudioRecorder::__cordl_internal_set__samplerRecorder(::UnityW<::VROSC::MixerGroupRecorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____samplerRecorder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::MasterRecorder>& VROSC::AudioRecorder::__cordl_internal_get__masterRecorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____masterRecorder;
}
constexpr ::UnityW<::VROSC::MasterRecorder> const& VROSC::AudioRecorder::__cordl_internal_get__masterRecorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____masterRecorder;
}
constexpr void VROSC::AudioRecorder::__cordl_internal_set__masterRecorder(::UnityW<::VROSC::MasterRecorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____masterRecorder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::AudioRecorder::setStaticF_SampleRate(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "SampleRate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get>(std::forward<int32_t>(value));
}
inline int32_t VROSC::AudioRecorder::getStaticF_SampleRate()  {
return ::cordl_internals::getStaticField<int32_t, "SampleRate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get>();
}
inline void VROSC::AudioRecorder::setStaticF_RecordingMaxLength(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "RecordingMaxLength", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get>(std::forward<int32_t>(value));
}
inline int32_t VROSC::AudioRecorder::getStaticF_RecordingMaxLength()  {
return ::cordl_internals::getStaticField<int32_t, "RecordingMaxLength", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get>();
}
inline void VROSC::AudioRecorder::Setup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AudioRecorder::ResetAudioBufferSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "ResetAudioBufferSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::AudioRecorder::StartRecording(::VROSC::SoundSource  soundSource, ::System::Action_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>*  recordingFilledCallback, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "StartRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SoundSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, soundSource, recordingFilledCallback, length);
}
inline void VROSC::AudioRecorder::StartOverdubRecording(::VROSC::SoundSource  soundSource, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  fillArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "StartOverdubRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SoundSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, soundSource, fillArray);
}
inline void VROSC::AudioRecorder::StartTapeRecording(::System::Action_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>*  recordingFilledCallback, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  fillArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "StartTapeRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recordingFilledCallback, fillArray);
}
inline void VROSC::AudioRecorder::StartRecording(::VROSC::SoundSource  soundSource, ::System::Action_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>*  recordingFilledCallback, int32_t  length, ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  fillArray, bool  overdub)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "StartRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SoundSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, soundSource, recordingFilledCallback, length, fillArray, overdub);
}
inline ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> VROSC::AudioRecorder::StealRecording(::VROSC::SoundSource  soundSource, bool  clear, bool  stealEvenIfNotRecording)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "StealRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SoundSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, false>(this, ___internal_method, soundSource, clear, stealEvenIfNotRecording);
}
inline void VROSC::AudioRecorder::StopRecording(::VROSC::SoundSource  soundSource)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "StopRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SoundSource>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, soundSource);
}
inline ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> VROSC::AudioRecorder::StopAndGetRecording(::VROSC::SoundSource  soundSource)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "StopAndGetRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SoundSource>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>, false>(this, ___internal_method, soundSource);
}
inline void VROSC::AudioRecorder::SetMicrophoneSamples(::ArrayW<float_t,::Array<float_t>*>  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "SetMicrophoneSamples",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer);
}
inline void VROSC::AudioRecorder::ClearMicrophoneBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "ClearMicrophoneBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<float_t,::Array<float_t>*> VROSC::AudioRecorder::GetRawMicrophoneRecordingData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "GetRawMicrophoneRecordingData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t,::Array<float_t>*>, false>(this, ___internal_method);
}
inline bool VROSC::AudioRecorder::IsRecording(::VROSC::SoundSource  soundSource)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "IsRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SoundSource>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, soundSource);
}
inline bool VROSC::AudioRecorder::IsRecording()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        "IsRecording",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VROSC::AudioRecorder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::AudioRecorder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::AudioRecorder* VROSC::AudioRecorder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::AudioRecorder*>());
}
// Ctor Parameters []
constexpr ::VROSC::AudioRecorder::AudioRecorder()   {
}
