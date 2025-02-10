#pragma once
// IWYU pragma private; include "AudioHelm/TriggerVisibleNotes.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "AudioHelm/zzzz__TriggerVisibleNotes_def.hpp"
#include "AudioHelm/zzzz__MaterialOnOff_def.hpp"
#include "AudioHelm/zzzz__Note_def.hpp"
//  Writing Method size for method: ::AudioHelm::TriggerVisibleNotes.GetIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::AudioHelm::TriggerVisibleNotes::*)(::AudioHelm::Note*)>(&::AudioHelm::TriggerVisibleNotes::GetIndex)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x181d2fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::TriggerVisibleNotes*>::get(),
                        "GetIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::TriggerVisibleNotes.NoteOn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::TriggerVisibleNotes::*)(::AudioHelm::Note*)>(&::AudioHelm::TriggerVisibleNotes::NoteOn)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x181d330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::TriggerVisibleNotes*>::get(),
                        "NoteOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::TriggerVisibleNotes.NoteOff
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::TriggerVisibleNotes::*)(::AudioHelm::Note*)>(&::AudioHelm::TriggerVisibleNotes::NoteOff)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x181d37c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::TriggerVisibleNotes*>::get(),
                        "NoteOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::TriggerVisibleNotes.Clear
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::TriggerVisibleNotes::*)()>(&::AudioHelm::TriggerVisibleNotes::Clear)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181d3c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::TriggerVisibleNotes*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::TriggerVisibleNotes._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::TriggerVisibleNotes::*)()>(&::AudioHelm::TriggerVisibleNotes::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181d414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::TriggerVisibleNotes*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::AudioHelm::MaterialOnOff>,::Array<::UnityW<::AudioHelm::MaterialOnOff>>*>& AudioHelm::TriggerVisibleNotes::__cordl_internal_get_images()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___images;
}
constexpr ::ArrayW<::UnityW<::AudioHelm::MaterialOnOff>,::Array<::UnityW<::AudioHelm::MaterialOnOff>>*> const& AudioHelm::TriggerVisibleNotes::__cordl_internal_get_images() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___images;
}
constexpr void AudioHelm::TriggerVisibleNotes::__cordl_internal_set_images(::ArrayW<::UnityW<::AudioHelm::MaterialOnOff>,::Array<::UnityW<::AudioHelm::MaterialOnOff>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___images)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& AudioHelm::TriggerVisibleNotes::__cordl_internal_get_startingNote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingNote;
}
constexpr int32_t const& AudioHelm::TriggerVisibleNotes::__cordl_internal_get_startingNote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingNote;
}
constexpr void AudioHelm::TriggerVisibleNotes::__cordl_internal_set_startingNote(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingNote = value;
}
inline int32_t AudioHelm::TriggerVisibleNotes::GetIndex(::AudioHelm::Note*  note)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::TriggerVisibleNotes*>::get(),
                        "GetIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, note);
}
inline void AudioHelm::TriggerVisibleNotes::NoteOn(::AudioHelm::Note*  note)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::TriggerVisibleNotes*>::get(),
                        "NoteOn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note);
}
inline void AudioHelm::TriggerVisibleNotes::NoteOff(::AudioHelm::Note*  note)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::TriggerVisibleNotes*>::get(),
                        "NoteOff",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::AudioHelm::Note*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, note);
}
inline void AudioHelm::TriggerVisibleNotes::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::TriggerVisibleNotes*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::TriggerVisibleNotes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::TriggerVisibleNotes*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::TriggerVisibleNotes* AudioHelm::TriggerVisibleNotes::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::TriggerVisibleNotes*>());
}
// Ctor Parameters []
constexpr ::AudioHelm::TriggerVisibleNotes::TriggerVisibleNotes()   {
}
