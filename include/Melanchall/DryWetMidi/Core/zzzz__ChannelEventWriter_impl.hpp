#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/ChannelEventWriter.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__IEventWriter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__ChannelEventWriter_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiEvent_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiWriter_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__WritingSettings_def.hpp"
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::ChannelEventWriter.Write
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::ChannelEventWriter::*)(::Melanchall::DryWetMidi::Core::MidiEvent*, ::Melanchall::DryWetMidi::Core::MidiWriter*, ::Melanchall::DryWetMidi::Core::WritingSettings*, bool)>(&::Melanchall::DryWetMidi::Core::ChannelEventWriter::Write)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25a3074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::ChannelEventWriter*>::get(),
                        "Write",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::ChannelEventWriter.CalculateSize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Melanchall::DryWetMidi::Core::ChannelEventWriter::*)(::Melanchall::DryWetMidi::Core::MidiEvent*, ::Melanchall::DryWetMidi::Core::WritingSettings*, bool)>(&::Melanchall::DryWetMidi::Core::ChannelEventWriter::CalculateSize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x25a3190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::ChannelEventWriter*>::get(),
                        "CalculateSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::ChannelEventWriter.GetStatusByte
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Melanchall::DryWetMidi::Core::ChannelEventWriter::*)(::Melanchall::DryWetMidi::Core::MidiEvent*)>(&::Melanchall::DryWetMidi::Core::ChannelEventWriter::GetStatusByte)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x25a30cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::ChannelEventWriter*>::get(),
                        "GetStatusByte",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::ChannelEventWriter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::ChannelEventWriter::*)()>(&::Melanchall::DryWetMidi::Core::ChannelEventWriter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a31d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::ChannelEventWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Melanchall::DryWetMidi::Core::ChannelEventWriter::Write(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, ::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings, bool  writeStatusByte)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::ChannelEventWriter*>::get(),
                        "Write",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, midiEvent, writer, settings, writeStatusByte);
}
inline int32_t Melanchall::DryWetMidi::Core::ChannelEventWriter::CalculateSize(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings, bool  writeStatusByte)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::ChannelEventWriter*>::get(),
                        "CalculateSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, midiEvent, settings, writeStatusByte);
}
inline uint8_t Melanchall::DryWetMidi::Core::ChannelEventWriter::GetStatusByte(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::ChannelEventWriter*>::get(),
                        "GetStatusByte",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method, midiEvent);
}
inline void Melanchall::DryWetMidi::Core::ChannelEventWriter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::ChannelEventWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Melanchall::DryWetMidi::Core::ChannelEventWriter* Melanchall::DryWetMidi::Core::ChannelEventWriter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::ChannelEventWriter*>());
}
/// @brief Convert operator to "::Melanchall::DryWetMidi::Core::IEventWriter"
constexpr  Melanchall::DryWetMidi::Core::ChannelEventWriter::operator ::Melanchall::DryWetMidi::Core::IEventWriter*() noexcept {
return static_cast<::Melanchall::DryWetMidi::Core::IEventWriter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Melanchall::DryWetMidi::Core::IEventWriter"
constexpr ::Melanchall::DryWetMidi::Core::IEventWriter* Melanchall::DryWetMidi::Core::ChannelEventWriter::i___Melanchall__DryWetMidi__Core__IEventWriter() noexcept {
return static_cast<::Melanchall::DryWetMidi::Core::IEventWriter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::ChannelEventWriter::ChannelEventWriter()   {
}
