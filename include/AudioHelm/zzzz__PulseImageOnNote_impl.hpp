#pragma once
// IWYU pragma private; include "AudioHelm/PulseImageOnNote.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "AudioHelm/zzzz__PulseImageOnNote_def.hpp"
#include "AudioHelm/zzzz__MaterialPulse_def.hpp"
#include "AudioHelm/zzzz__Note_def.hpp"
//  Writing Method size for method: ::AudioHelm::PulseImageOnNote.GetNoteIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::AudioHelm::PulseImageOnNote::*)(int32_t)>(&::AudioHelm::PulseImageOnNote::GetNoteIndex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181c200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::PulseImageOnNote*>::get(),
                        "GetNoteIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::PulseImageOnNote.NoteOn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::PulseImageOnNote::*)(::AudioHelm::Note*)>(&::AudioHelm::PulseImageOnNote::NoteOn)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181c2a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::PulseImageOnNote*>::get(),
                        "NoteOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::PulseImageOnNote._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::PulseImageOnNote::*)()>(&::AudioHelm::PulseImageOnNote::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x181c2f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::PulseImageOnNote*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::AudioHelm::MaterialPulse>,::Array<::UnityW<::AudioHelm::MaterialPulse>>*>& AudioHelm::PulseImageOnNote::__cordl_internal_get_images()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___images;
}
constexpr ::ArrayW<::UnityW<::AudioHelm::MaterialPulse>,::Array<::UnityW<::AudioHelm::MaterialPulse>>*> const& AudioHelm::PulseImageOnNote::__cordl_internal_get_images() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___images;
}
constexpr void AudioHelm::PulseImageOnNote::__cordl_internal_set_images(::ArrayW<::UnityW<::AudioHelm::MaterialPulse>,::Array<::UnityW<::AudioHelm::MaterialPulse>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___images)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& AudioHelm::PulseImageOnNote::__cordl_internal_get_startingNote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingNote;
}
constexpr int32_t const& AudioHelm::PulseImageOnNote::__cordl_internal_get_startingNote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingNote;
}
constexpr void AudioHelm::PulseImageOnNote::__cordl_internal_set_startingNote(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingNote = value;
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& AudioHelm::PulseImageOnNote::__cordl_internal_get_scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& AudioHelm::PulseImageOnNote::__cordl_internal_get_scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr void AudioHelm::PulseImageOnNote::__cordl_internal_set_scale(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scale)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t AudioHelm::PulseImageOnNote::GetNoteIndex(int32_t  note)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::PulseImageOnNote*>::get(),
                        "GetNoteIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, note);
}
inline void AudioHelm::PulseImageOnNote::NoteOn(::AudioHelm::Note*  note)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::PulseImageOnNote*>::get(),
                        "NoteOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note);
}
inline void AudioHelm::PulseImageOnNote::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::PulseImageOnNote*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::PulseImageOnNote* AudioHelm::PulseImageOnNote::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::PulseImageOnNote*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::PulseImageOnNote::PulseImageOnNote()   {
}
