#pragma once
// IWYU pragma private; include "VROSC/MidiUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__MidiUtils_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiEvent_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiFile_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "VROSC/zzzz__InstrumentEvent_def.hpp"
#include "VROSC/zzzz__MidiUtils_def.hpp"
//  Writing Method size for method: ::VROSC::MidiUtils___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::MidiUtils___c::*)()>(&::VROSC::MidiUtils___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17a55f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MidiUtils___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MidiUtils___c._ConvertToMidi_b__1_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::VROSC::MidiUtils___c::*)(::VROSC::InstrumentEvent*)>(&::VROSC::MidiUtils___c::_ConvertToMidi_b__1_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x17a55f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MidiUtils___c*>::get(),
                        "<ConvertToMidi>b__1_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InstrumentEvent*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::MidiUtils___c::setStaticF___9(::VROSC::MidiUtils___c*  value)  {
::cordl_internals::setStaticField<::VROSC::MidiUtils___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MidiUtils___c*>::get>(std::forward<::VROSC::MidiUtils___c*>(value));
}
inline ::VROSC::MidiUtils___c* VROSC::MidiUtils___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::VROSC::MidiUtils___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MidiUtils___c*>::get>();
}
inline void VROSC::MidiUtils___c::setStaticF___9__1_0(::System::Func_2<::VROSC::InstrumentEvent*,double_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::VROSC::InstrumentEvent*,double_t>*, "<>9__1_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MidiUtils___c*>::get>(std::forward<::System::Func_2<::VROSC::InstrumentEvent*,double_t>*>(value));
}
inline ::System::Func_2<::VROSC::InstrumentEvent*,double_t>* VROSC::MidiUtils___c::getStaticF___9__1_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::VROSC::InstrumentEvent*,double_t>*, "<>9__1_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MidiUtils___c*>::get>();
}
inline void VROSC::MidiUtils___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MidiUtils___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline double_t VROSC::MidiUtils___c::_ConvertToMidi_b__1_0(::VROSC::InstrumentEvent*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MidiUtils___c*>::get(),
                        "<ConvertToMidi>b__1_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InstrumentEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method, e);
}
inline ::VROSC::MidiUtils___c* VROSC::MidiUtils___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::MidiUtils___c*>());
}
// Ctor Parameters []
constexpr ::VROSC::MidiUtils___c::MidiUtils___c()   {
}
//  Writing Method size for method: ::VROSC::MidiUtils.ConvertToMidi
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Melanchall::DryWetMidi::Core::MidiFile* (*)(::ArrayW<::VROSC::InstrumentEvent*,::Array<::VROSC::InstrumentEvent*>*>, double_t, double_t)>(&::VROSC::MidiUtils::ConvertToMidi)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x179da00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MidiUtils*>::get(),
                        "ConvertToMidi",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::VROSC::InstrumentEvent*,::Array<::VROSC::InstrumentEvent*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MidiUtils.ConvertToMidiEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Melanchall::DryWetMidi::Core::MidiEvent* (*)(::VROSC::InstrumentEvent*, double_t, int64_t)>(&::VROSC::MidiUtils::ConvertToMidiEvent)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x17a4ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MidiUtils*>::get(),
                        "ConvertToMidiEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InstrumentEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MidiUtils.ConvertDspTimeToMidiTicks
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(double_t, double_t)>(&::VROSC::MidiUtils::ConvertDspTimeToMidiTicks)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x17a4e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MidiUtils*>::get(),
                        "ConvertDspTimeToMidiTicks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::MidiUtils.ConvertParameterIdToMidiCC
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::VROSC::MidiUtils::ConvertParameterIdToMidiCC)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x17a533c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MidiUtils*>::get(),
                        "ConvertParameterIdToMidiCC",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::MidiUtils::setStaticF_ParameterIdToMidiCCMap(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, "ParameterIdToMidiCCMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MidiUtils*>::get>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* VROSC::MidiUtils::getStaticF_ParameterIdToMidiCCMap()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, "ParameterIdToMidiCCMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MidiUtils*>::get>();
}
inline ::Melanchall::DryWetMidi::Core::MidiFile* VROSC::MidiUtils::ConvertToMidi(::ArrayW<::VROSC::InstrumentEvent*,::Array<::VROSC::InstrumentEvent*>*>  instrumentEvents, double_t  bpm, double_t  leadingSilence)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MidiUtils*>::get(),
                        "ConvertToMidi",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::VROSC::InstrumentEvent*,::Array<::VROSC::InstrumentEvent*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Melanchall::DryWetMidi::Core::MidiFile*, false>(nullptr, ___internal_method, instrumentEvents, bpm, leadingSilence);
}
inline ::Melanchall::DryWetMidi::Core::MidiEvent* VROSC::MidiUtils::ConvertToMidiEvent(::VROSC::InstrumentEvent*  instrumentEvent, double_t  bpm, int64_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MidiUtils*>::get(),
                        "ConvertToMidiEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InstrumentEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Melanchall::DryWetMidi::Core::MidiEvent*, false>(nullptr, ___internal_method, instrumentEvent, bpm, deltaTime);
}
inline int64_t VROSC::MidiUtils::ConvertDspTimeToMidiTicks(double_t  dspTime, double_t  bpm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MidiUtils*>::get(),
                        "ConvertDspTimeToMidiTicks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, dspTime, bpm);
}
inline int32_t VROSC::MidiUtils::ConvertParameterIdToMidiCC(int32_t  parameterId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::MidiUtils*>::get(),
                        "ConvertParameterIdToMidiCC",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, parameterId);
}
// Ctor Parameters []
constexpr ::VROSC::MidiUtils::MidiUtils()   {
}
