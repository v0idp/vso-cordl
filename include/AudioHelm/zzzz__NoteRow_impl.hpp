#pragma once
// IWYU pragma private; include "AudioHelm/NoteRow.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_impl.hpp"
#include "AudioHelm/zzzz__NoteRow_def.hpp"
#include "AudioHelm/zzzz__Note_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::AudioHelm::NoteRow.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::NoteRow::*)()>(&::AudioHelm::NoteRow::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1824b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::NoteRow*>::get(),
                        "OnBeforeSerialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::NoteRow.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::NoteRow::*)()>(&::AudioHelm::NoteRow::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1824bfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::NoteRow*>::get(),
                        "OnAfterDeserialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::AudioHelm::NoteRow._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::AudioHelm::NoteRow::*)()>(&::AudioHelm::NoteRow::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1824e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::NoteRow*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::AudioHelm::Note*>*& AudioHelm::NoteRow::__cordl_internal_get_notes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notes;
}
constexpr ::System::Collections::Generic::List_1<::AudioHelm::Note*>* const& AudioHelm::NoteRow::__cordl_internal_get_notes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notes;
}
constexpr void AudioHelm::NoteRow::__cordl_internal_set_notes(::System::Collections::Generic::List_1<::AudioHelm::Note*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___notes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::AudioHelm::Note*>*& AudioHelm::NoteRow::__cordl_internal_get_oldNotes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldNotes;
}
constexpr ::System::Collections::Generic::List_1<::AudioHelm::Note*>* const& AudioHelm::NoteRow::__cordl_internal_get_oldNotes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldNotes;
}
constexpr void AudioHelm::NoteRow::__cordl_internal_set_oldNotes(::System::Collections::Generic::List_1<::AudioHelm::Note*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___oldNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void AudioHelm::NoteRow::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::NoteRow*>::get(),
                        "OnBeforeSerialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::NoteRow::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::NoteRow*>::get(),
                        "OnAfterDeserialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void AudioHelm::NoteRow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AudioHelm::NoteRow*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::AudioHelm::NoteRow* AudioHelm::NoteRow::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::AudioHelm::NoteRow*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  AudioHelm::NoteRow::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* AudioHelm::NoteRow::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::AudioHelm::NoteRow::NoteRow()   {
}
