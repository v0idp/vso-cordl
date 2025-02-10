#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/SystemRealTimeEvent.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiEvent_impl.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__SystemRealTimeEvent_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiWriter_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__WritingSettings_def.hpp"
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::SystemRealTimeEvent.Write
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::SystemRealTimeEvent::*)(::Melanchall::DryWetMidi::Core::MidiWriter*, ::Melanchall::DryWetMidi::Core::WritingSettings*)>(&::Melanchall::DryWetMidi::Core::SystemRealTimeEvent::Write)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25a1674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SystemRealTimeEvent*>::get(),
                        "Write",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::SystemRealTimeEvent.GetSize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Melanchall::DryWetMidi::Core::SystemRealTimeEvent::*)(::Melanchall::DryWetMidi::Core::WritingSettings*)>(&::Melanchall::DryWetMidi::Core::SystemRealTimeEvent::GetSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a1678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SystemRealTimeEvent*>::get(),
                        "GetSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Melanchall::DryWetMidi::Core::SystemRealTimeEvent::Write(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SystemRealTimeEvent*>::get(),
                        "Write",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, settings);
}
inline int32_t Melanchall::DryWetMidi::Core::SystemRealTimeEvent::GetSize(::Melanchall::DryWetMidi::Core::WritingSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SystemRealTimeEvent*>::get(),
                        "GetSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, settings);
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::SystemRealTimeEvent::SystemRealTimeEvent()   {
}
