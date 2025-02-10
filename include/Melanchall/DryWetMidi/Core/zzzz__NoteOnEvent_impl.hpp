#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/NoteOnEvent.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__NoteEvent_impl.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__NoteOnEvent_def.hpp"
#include "Melanchall/DryWetMidi/Common/zzzz__SevenBitNumber_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiEvent_def.hpp"
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::NoteOnEvent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::NoteOnEvent::*)()>(&::Melanchall::DryWetMidi::Core::NoteOnEvent::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25a0484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteOnEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::NoteOnEvent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::NoteOnEvent::*)(::Melanchall::DryWetMidi::Common::SevenBitNumber, ::Melanchall::DryWetMidi::Common::SevenBitNumber)>(&::Melanchall::DryWetMidi::Core::NoteOnEvent::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x25a1e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteOnEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Common::SevenBitNumber>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Common::SevenBitNumber>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::NoteOnEvent.CloneEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Melanchall::DryWetMidi::Core::MidiEvent* (::Melanchall::DryWetMidi::Core::NoteOnEvent::*)()>(&::Melanchall::DryWetMidi::Core::NoteOnEvent::CloneEvent)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x25a1e14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteOnEvent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteOnEvent*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::NoteOnEvent.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Melanchall::DryWetMidi::Core::NoteOnEvent::*)()>(&::Melanchall::DryWetMidi::Core::NoteOnEvent::ToString)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x25a1e8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteOnEvent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteOnEvent*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
inline void Melanchall::DryWetMidi::Core::NoteOnEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteOnEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Melanchall::DryWetMidi::Core::NoteOnEvent::_ctor(::Melanchall::DryWetMidi::Common::SevenBitNumber  noteNumber, ::Melanchall::DryWetMidi::Common::SevenBitNumber  velocity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteOnEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Common::SevenBitNumber>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Common::SevenBitNumber>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteNumber, velocity);
}
inline ::Melanchall::DryWetMidi::Core::MidiEvent* Melanchall::DryWetMidi::Core::NoteOnEvent::CloneEvent()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteOnEvent*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::Melanchall::DryWetMidi::Core::MidiEvent*, false>(this, ___internal_method);
}
inline ::StringW Melanchall::DryWetMidi::Core::NoteOnEvent::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteOnEvent*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Melanchall::DryWetMidi::Core::NoteOnEvent* Melanchall::DryWetMidi::Core::NoteOnEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::NoteOnEvent*>());
}
inline ::Melanchall::DryWetMidi::Core::NoteOnEvent* Melanchall::DryWetMidi::Core::NoteOnEvent::New_ctor(::Melanchall::DryWetMidi::Common::SevenBitNumber  noteNumber, ::Melanchall::DryWetMidi::Common::SevenBitNumber  velocity)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::NoteOnEvent*>(noteNumber, velocity));
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::NoteOnEvent::NoteOnEvent()   {
}
