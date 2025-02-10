#pragma once
// IWYU pragma private; include "AudioHelm/MidiFile.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "AudioHelm/zzzz__MidiFile_def.hpp"
#include "AudioHelm/zzzz__MidiFile_def.hpp"
#include "AudioHelm/zzzz__Note_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::AudioHelm::MidiFile_MidiData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::MidiFile_MidiData::*)()>(&::AudioHelm::MidiFile_MidiData::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1823b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MidiFile_MidiData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& AudioHelm::MidiFile_MidiData::__cordl_internal_get_length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___length;
}
constexpr int32_t const& AudioHelm::MidiFile_MidiData::__cordl_internal_get_length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___length;
}
constexpr void AudioHelm::MidiFile_MidiData::__cordl_internal_set_length(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___length = value;
}
constexpr ::System::Collections::Generic::List_1<::AudioHelm::Note*>*& AudioHelm::MidiFile_MidiData::__cordl_internal_get_notes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notes;
}
constexpr ::System::Collections::Generic::List_1<::AudioHelm::Note*>* const& AudioHelm::MidiFile_MidiData::__cordl_internal_get_notes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notes;
}
constexpr void AudioHelm::MidiFile_MidiData::__cordl_internal_set_notes(::System::Collections::Generic::List_1<::AudioHelm::Note*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___notes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void AudioHelm::MidiFile_MidiData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MidiFile_MidiData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::MidiFile_MidiData* AudioHelm::MidiFile_MidiData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::MidiFile_MidiData*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::MidiFile_MidiData::MidiFile_MidiData()   {
}
//  Writing Method size for method: ::AudioHelm::MidiFile.LoadMidiData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::MidiFile::*)(::StringW)>(&::AudioHelm::MidiFile::LoadMidiData)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1823a8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MidiFile*>::get(),
                        "LoadMidiData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::MidiFile.LoadMidiData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::AudioHelm::MidiFile_MidiData* (*)(::System::IO::Stream*)>(&::AudioHelm::MidiFile::LoadMidiData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1823afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MidiFile*>::get(),
                        "LoadMidiData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::MidiFile._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::MidiFile::*)()>(&::AudioHelm::MidiFile::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1823bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MidiFile*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& AudioHelm::MidiFile::__cordl_internal_get_midiObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___midiObject;
}
constexpr ::UnityW<::UnityEngine::Object> const& AudioHelm::MidiFile::__cordl_internal_get_midiObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___midiObject;
}
constexpr void AudioHelm::MidiFile::__cordl_internal_set_midiObject(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___midiObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::AudioHelm::MidiFile_MidiData*& AudioHelm::MidiFile::__cordl_internal_get_midiData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___midiData;
}
constexpr ::AudioHelm::MidiFile_MidiData* const& AudioHelm::MidiFile::__cordl_internal_get_midiData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___midiData;
}
constexpr void AudioHelm::MidiFile::__cordl_internal_set_midiData(::AudioHelm::MidiFile_MidiData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___midiData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void AudioHelm::MidiFile::LoadMidiData(::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MidiFile*>::get(),
                        "LoadMidiData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filePath);
}
inline ::AudioHelm::MidiFile_MidiData* AudioHelm::MidiFile::LoadMidiData(::System::IO::Stream*  midiStream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MidiFile*>::get(),
                        "LoadMidiData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::AudioHelm::MidiFile_MidiData*, false>(nullptr, ___internal_method, midiStream);
}
inline void AudioHelm::MidiFile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::MidiFile*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::MidiFile* AudioHelm::MidiFile::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::MidiFile*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::MidiFile::MidiFile()   {
}
