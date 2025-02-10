#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/NoteEvent.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__ChannelEvent_impl.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__NoteEvent_def.hpp"
#include "Melanchall/DryWetMidi/Common/zzzz__SevenBitNumber_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiEventType_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiWriter_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__WritingSettings_def.hpp"
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::NoteEvent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::NoteEvent::*)(::Melanchall::DryWetMidi::Core::MidiEventType)>(&::Melanchall::DryWetMidi::Core::NoteEvent::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25a1ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEventType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::NoteEvent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::NoteEvent::*)(::Melanchall::DryWetMidi::Core::MidiEventType, ::Melanchall::DryWetMidi::Common::SevenBitNumber, ::Melanchall::DryWetMidi::Common::SevenBitNumber)>(&::Melanchall::DryWetMidi::Core::NoteEvent::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x25a1b10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Common::SevenBitNumber>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Common::SevenBitNumber>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::NoteEvent.get_NoteNumber
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Melanchall::DryWetMidi::Common::SevenBitNumber (::Melanchall::DryWetMidi::Core::NoteEvent::*)()>(&::Melanchall::DryWetMidi::Core::NoteEvent::get_NoteNumber)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25a04a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteEvent*>::get(),
                        "get_NoteNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::NoteEvent.set_NoteNumber
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::NoteEvent::*)(::Melanchall::DryWetMidi::Common::SevenBitNumber)>(&::Melanchall::DryWetMidi::Core::NoteEvent::set_NoteNumber)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x25a0514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteEvent*>::get(),
                        "set_NoteNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Common::SevenBitNumber>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::NoteEvent.get_Velocity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Melanchall::DryWetMidi::Common::SevenBitNumber (::Melanchall::DryWetMidi::Core::NoteEvent::*)()>(&::Melanchall::DryWetMidi::Core::NoteEvent::get_Velocity)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25a1bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteEvent*>::get(),
                        "get_Velocity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::NoteEvent.set_Velocity
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::NoteEvent::*)(::Melanchall::DryWetMidi::Common::SevenBitNumber)>(&::Melanchall::DryWetMidi::Core::NoteEvent::set_Velocity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x25a1b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteEvent*>::get(),
                        "set_Velocity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Common::SevenBitNumber>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::NoteEvent.Write
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::NoteEvent::*)(::Melanchall::DryWetMidi::Core::MidiWriter*, ::Melanchall::DryWetMidi::Core::WritingSettings*)>(&::Melanchall::DryWetMidi::Core::NoteEvent::Write)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x25a1c2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteEvent*>::get(),
                        "Write",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::NoteEvent.GetSize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Melanchall::DryWetMidi::Core::NoteEvent::*)(::Melanchall::DryWetMidi::Core::WritingSettings*)>(&::Melanchall::DryWetMidi::Core::NoteEvent::GetSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a1c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteEvent*>::get(),
                        "GetSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Melanchall::DryWetMidi::Core::NoteEvent::_ctor(::Melanchall::DryWetMidi::Core::MidiEventType  eventType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEventType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventType);
}
inline void Melanchall::DryWetMidi::Core::NoteEvent::_ctor(::Melanchall::DryWetMidi::Core::MidiEventType  eventType, ::Melanchall::DryWetMidi::Common::SevenBitNumber  noteNumber, ::Melanchall::DryWetMidi::Common::SevenBitNumber  velocity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Common::SevenBitNumber>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Common::SevenBitNumber>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventType, noteNumber, velocity);
}
inline ::Melanchall::DryWetMidi::Common::SevenBitNumber Melanchall::DryWetMidi::Core::NoteEvent::get_NoteNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteEvent*>::get(),
                        "get_NoteNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Melanchall::DryWetMidi::Common::SevenBitNumber, false>(this, ___internal_method);
}
inline void Melanchall::DryWetMidi::Core::NoteEvent::set_NoteNumber(::Melanchall::DryWetMidi::Common::SevenBitNumber  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteEvent*>::get(),
                        "set_NoteNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Common::SevenBitNumber>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Melanchall::DryWetMidi::Common::SevenBitNumber Melanchall::DryWetMidi::Core::NoteEvent::get_Velocity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteEvent*>::get(),
                        "get_Velocity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Melanchall::DryWetMidi::Common::SevenBitNumber, false>(this, ___internal_method);
}
inline void Melanchall::DryWetMidi::Core::NoteEvent::set_Velocity(::Melanchall::DryWetMidi::Common::SevenBitNumber  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteEvent*>::get(),
                        "set_Velocity",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Common::SevenBitNumber>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Melanchall::DryWetMidi::Core::NoteEvent::Write(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteEvent*>::get(),
                        "Write",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, settings);
}
inline int32_t Melanchall::DryWetMidi::Core::NoteEvent::GetSize(::Melanchall::DryWetMidi::Core::WritingSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteEvent*>::get(),
                        "GetSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, settings);
}
inline ::Melanchall::DryWetMidi::Core::NoteEvent* Melanchall::DryWetMidi::Core::NoteEvent::New_ctor(::Melanchall::DryWetMidi::Core::MidiEventType  eventType)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::NoteEvent*>(eventType));
}
inline ::Melanchall::DryWetMidi::Core::NoteEvent* Melanchall::DryWetMidi::Core::NoteEvent::New_ctor(::Melanchall::DryWetMidi::Core::MidiEventType  eventType, ::Melanchall::DryWetMidi::Common::SevenBitNumber  noteNumber, ::Melanchall::DryWetMidi::Common::SevenBitNumber  velocity)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::NoteEvent*>(eventType, noteNumber, velocity));
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::NoteEvent::NoteEvent()   {
}
