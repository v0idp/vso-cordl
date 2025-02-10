#pragma once
// IWYU pragma private; include "VROSC/ToneGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__ToneGenerator_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "VROSC/zzzz__ToneGenerator_def.hpp"
//  Writing Method size for method: ::VROSC::ToneGenerator_GeneratedTone._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ToneGenerator_GeneratedTone::*)(int32_t)>(&::VROSC::ToneGenerator_GeneratedTone::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x16fe9c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ToneGenerator_GeneratedTone*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& VROSC::ToneGenerator_GeneratedTone::__cordl_internal_get_Frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Frequency;
}
constexpr double_t const& VROSC::ToneGenerator_GeneratedTone::__cordl_internal_get_Frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Frequency;
}
constexpr void VROSC::ToneGenerator_GeneratedTone::__cordl_internal_set_Frequency(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Frequency = value;
}
constexpr double_t& VROSC::ToneGenerator_GeneratedTone::__cordl_internal_get_Increment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Increment;
}
constexpr double_t const& VROSC::ToneGenerator_GeneratedTone::__cordl_internal_get_Increment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Increment;
}
constexpr void VROSC::ToneGenerator_GeneratedTone::__cordl_internal_set_Increment(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Increment = value;
}
constexpr double_t& VROSC::ToneGenerator_GeneratedTone::__cordl_internal_get_Phase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Phase;
}
constexpr double_t const& VROSC::ToneGenerator_GeneratedTone::__cordl_internal_get_Phase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Phase;
}
constexpr void VROSC::ToneGenerator_GeneratedTone::__cordl_internal_set_Phase(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Phase = value;
}
inline void VROSC::ToneGenerator_GeneratedTone::_ctor(int32_t  noteNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ToneGenerator_GeneratedTone*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteNumber);
}
inline ::VROSC::ToneGenerator_GeneratedTone* VROSC::ToneGenerator_GeneratedTone::New_ctor(int32_t  noteNumber)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ToneGenerator_GeneratedTone*>(noteNumber));
}
// Ctor Parameters []
constexpr ::VROSC::ToneGenerator_GeneratedTone::ToneGenerator_GeneratedTone()   {
}
//  Writing Method size for method: ::VROSC::ToneGenerator.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ToneGenerator::*)()>(&::VROSC::ToneGenerator::Update)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16fe588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ToneGenerator*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ToneGenerator.OnAudioFilterRead
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ToneGenerator::*)(::ArrayW<float_t,::Array<float_t>*>, int32_t)>(&::VROSC::ToneGenerator::OnAudioFilterRead)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x16fe5a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ToneGenerator*>::get(),
                        "OnAudioFilterRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ToneGenerator.PlayNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ToneGenerator::*)(int32_t)>(&::VROSC::ToneGenerator::PlayNote)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x16fe8cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ToneGenerator*>::get(),
                        "PlayNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ToneGenerator.StopNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ToneGenerator::*)(int32_t)>(&::VROSC::ToneGenerator::StopNote)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x16fea28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ToneGenerator*>::get(),
                        "StopNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ToneGenerator.GetFrequencyFromNoteNumber
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(int32_t)>(&::VROSC::ToneGenerator::GetFrequencyFromNoteNumber)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x16feab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ToneGenerator*>::get(),
                        "GetFrequencyFromNoteNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ToneGenerator._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ToneGenerator::*)()>(&::VROSC::ToneGenerator::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x16feaf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ToneGenerator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr double_t& VROSC::ToneGenerator::__cordl_internal_get__gain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gain;
}
constexpr double_t const& VROSC::ToneGenerator::__cordl_internal_get__gain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gain;
}
constexpr void VROSC::ToneGenerator::__cordl_internal_set__gain(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gain = value;
}
constexpr int32_t& VROSC::ToneGenerator::__cordl_internal_get__sampleRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleRate;
}
constexpr int32_t const& VROSC::ToneGenerator::__cordl_internal_get__sampleRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleRate;
}
constexpr void VROSC::ToneGenerator::__cordl_internal_set__sampleRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleRate = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::VROSC::ToneGenerator_GeneratedTone*>*& VROSC::ToneGenerator::__cordl_internal_get__tones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tones;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::VROSC::ToneGenerator_GeneratedTone*>* const& VROSC::ToneGenerator::__cordl_internal_get__tones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tones;
}
constexpr void VROSC::ToneGenerator::__cordl_internal_set__tones(::System::Collections::Generic::Dictionary_2<int32_t,::VROSC::ToneGenerator_GeneratedTone*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tones)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::ToneGenerator::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ToneGenerator*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::ToneGenerator::OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ToneGenerator*>::get(),
                        "OnAudioFilterRead",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, channels);
}
inline void VROSC::ToneGenerator::PlayNote(int32_t  noteNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ToneGenerator*>::get(),
                        "PlayNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteNumber);
}
inline void VROSC::ToneGenerator::StopNote(int32_t  noteNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ToneGenerator*>::get(),
                        "StopNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteNumber);
}
inline double_t VROSC::ToneGenerator::GetFrequencyFromNoteNumber(int32_t  noteNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ToneGenerator*>::get(),
                        "GetFrequencyFromNoteNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, noteNumber);
}
inline void VROSC::ToneGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ToneGenerator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ToneGenerator* VROSC::ToneGenerator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ToneGenerator*>());
}
// Ctor Parameters []
constexpr ::VROSC::ToneGenerator::ToneGenerator()   {
}
