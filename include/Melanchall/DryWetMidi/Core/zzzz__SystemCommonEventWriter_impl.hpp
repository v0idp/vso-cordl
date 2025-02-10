#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/SystemCommonEventWriter.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__IEventWriter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__SystemCommonEventWriter_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiEvent_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiWriter_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__WritingSettings_def.hpp"
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::SystemCommonEventWriter.Write
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::SystemCommonEventWriter::*)(::Melanchall::DryWetMidi::Core::MidiEvent*, ::Melanchall::DryWetMidi::Core::MidiWriter*, ::Melanchall::DryWetMidi::Core::WritingSettings*, bool)>(&::Melanchall::DryWetMidi::Core::SystemCommonEventWriter::Write)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x25a3720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SystemCommonEventWriter*>::get(),
                        "Write",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::SystemCommonEventWriter.CalculateSize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Melanchall::DryWetMidi::Core::SystemCommonEventWriter::*)(::Melanchall::DryWetMidi::Core::MidiEvent*, ::Melanchall::DryWetMidi::Core::WritingSettings*, bool)>(&::Melanchall::DryWetMidi::Core::SystemCommonEventWriter::CalculateSize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x25a37dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SystemCommonEventWriter*>::get(),
                        "CalculateSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::SystemCommonEventWriter.GetStatusByte
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Melanchall::DryWetMidi::Core::SystemCommonEventWriter::*)(::Melanchall::DryWetMidi::Core::MidiEvent*)>(&::Melanchall::DryWetMidi::Core::SystemCommonEventWriter::GetStatusByte)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x25a379c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SystemCommonEventWriter*>::get(),
                        "GetStatusByte",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::SystemCommonEventWriter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::SystemCommonEventWriter::*)()>(&::Melanchall::DryWetMidi::Core::SystemCommonEventWriter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a3340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SystemCommonEventWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void Melanchall::DryWetMidi::Core::SystemCommonEventWriter::Write(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, ::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings, bool  writeStatusByte)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SystemCommonEventWriter*>::get(),
                        "Write",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, midiEvent, writer, settings, writeStatusByte);
}
inline int32_t Melanchall::DryWetMidi::Core::SystemCommonEventWriter::CalculateSize(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings, bool  writeStatusByte)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SystemCommonEventWriter*>::get(),
                        "CalculateSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, midiEvent, settings, writeStatusByte);
}
inline uint8_t Melanchall::DryWetMidi::Core::SystemCommonEventWriter::GetStatusByte(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SystemCommonEventWriter*>::get(),
                        "GetStatusByte",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method, midiEvent);
}
inline void Melanchall::DryWetMidi::Core::SystemCommonEventWriter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SystemCommonEventWriter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Melanchall::DryWetMidi::Core::SystemCommonEventWriter* Melanchall::DryWetMidi::Core::SystemCommonEventWriter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::SystemCommonEventWriter*>());
}
/// @brief Convert operator to "::Melanchall::DryWetMidi::Core::IEventWriter"
constexpr  Melanchall::DryWetMidi::Core::SystemCommonEventWriter::operator ::Melanchall::DryWetMidi::Core::IEventWriter*() noexcept {
return static_cast<::Melanchall::DryWetMidi::Core::IEventWriter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Melanchall::DryWetMidi::Core::IEventWriter"
constexpr ::Melanchall::DryWetMidi::Core::IEventWriter* Melanchall::DryWetMidi::Core::SystemCommonEventWriter::i___Melanchall__DryWetMidi__Core__IEventWriter() noexcept {
return static_cast<::Melanchall::DryWetMidi::Core::IEventWriter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::SystemCommonEventWriter::SystemCommonEventWriter()   {
}
