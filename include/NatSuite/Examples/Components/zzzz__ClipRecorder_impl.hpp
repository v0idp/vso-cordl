#pragma once
// IWYU pragma private; include "NatSuite/Examples/Components/ClipRecorder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "NatSuite/Examples/Components/zzzz__ClipRecorder_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::NatSuite::Examples::Components::ClipRecorder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Examples::Components::ClipRecorder::*)(int32_t, int32_t)>(&::NatSuite::Examples::Components::ClipRecorder::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1800974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::Components::ClipRecorder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Examples::Components::ClipRecorder.CommitSamples
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::NatSuite::Examples::Components::ClipRecorder::*)(::ArrayW<float_t,::Array<float_t>*>, int64_t)>(&::NatSuite::Examples::Components::ClipRecorder::CommitSamples)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18024b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::Components::ClipRecorder*>::get(),
                        "CommitSamples",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NatSuite::Examples::Components::ClipRecorder.FinishWriting
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioClip> (::NatSuite::Examples::Components::ClipRecorder::*)()>(&::NatSuite::Examples::Components::ClipRecorder::FinishWriting)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1800ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::Components::ClipRecorder*>::get(),
                        "FinishWriting",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& NatSuite::Examples::Components::ClipRecorder::__cordl_internal_get_sampleRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleRate;
}
constexpr int32_t const& NatSuite::Examples::Components::ClipRecorder::__cordl_internal_get_sampleRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleRate;
}
constexpr void NatSuite::Examples::Components::ClipRecorder::__cordl_internal_set_sampleRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sampleRate = value;
}
constexpr int32_t& NatSuite::Examples::Components::ClipRecorder::__cordl_internal_get_channelCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channelCount;
}
constexpr int32_t const& NatSuite::Examples::Components::ClipRecorder::__cordl_internal_get_channelCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channelCount;
}
constexpr void NatSuite::Examples::Components::ClipRecorder::__cordl_internal_set_channelCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channelCount = value;
}
constexpr ::System::IO::MemoryStream*& NatSuite::Examples::Components::ClipRecorder::__cordl_internal_get_audioBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioBuffer;
}
constexpr ::System::IO::MemoryStream* const& NatSuite::Examples::Components::ClipRecorder::__cordl_internal_get_audioBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioBuffer;
}
constexpr void NatSuite::Examples::Components::ClipRecorder::__cordl_internal_set_audioBuffer(::System::IO::MemoryStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void NatSuite::Examples::Components::ClipRecorder::_ctor(int32_t  sampleRate, int32_t  channelCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::Components::ClipRecorder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sampleRate, channelCount);
}
inline void NatSuite::Examples::Components::ClipRecorder::CommitSamples(::ArrayW<float_t,::Array<float_t>*>  sampleBuffer, int64_t  timestamp)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::Components::ClipRecorder*>::get(),
                        "CommitSamples",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sampleBuffer, timestamp);
}
inline ::UnityW<::UnityEngine::AudioClip> NatSuite::Examples::Components::ClipRecorder::FinishWriting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::NatSuite::Examples::Components::ClipRecorder*>::get(),
                        "FinishWriting",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>, false>(this, ___internal_method);
}
inline ::NatSuite::Examples::Components::ClipRecorder* NatSuite::Examples::Components::ClipRecorder::New_ctor(int32_t  sampleRate, int32_t  channelCount)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::NatSuite::Examples::Components::ClipRecorder*>(sampleRate, channelCount));
}
// Ctor Parameters []
constexpr ::NatSuite::Examples::Components::ClipRecorder::ClipRecorder()   {
}
