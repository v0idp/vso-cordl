#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/NoteOffEvent.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__NoteEvent_impl.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__NoteOffEvent_def.hpp"
#include "Melanchall/DryWetMidi/Common/zzzz__SevenBitNumber_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiEvent_def.hpp"
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::NoteOffEvent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::NoteOffEvent::*)()>(&::Melanchall::DryWetMidi::Core::NoteOffEvent::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25a1c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteOffEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::NoteOffEvent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::NoteOffEvent::*)(::Melanchall::DryWetMidi::Common::SevenBitNumber, ::Melanchall::DryWetMidi::Common::SevenBitNumber)>(&::Melanchall::DryWetMidi::Core::NoteOffEvent::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x25a1c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteOffEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Common::SevenBitNumber>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Common::SevenBitNumber>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::NoteOffEvent.CloneEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Melanchall::DryWetMidi::Core::MidiEvent* (::Melanchall::DryWetMidi::Core::NoteOffEvent::*)()>(&::Melanchall::DryWetMidi::Core::NoteOffEvent::CloneEvent)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x25a1ca0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteOffEvent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteOffEvent*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::NoteOffEvent.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Melanchall::DryWetMidi::Core::NoteOffEvent::*)()>(&::Melanchall::DryWetMidi::Core::NoteOffEvent::ToString)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x25a1d18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteOffEvent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteOffEvent*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
inline void Melanchall::DryWetMidi::Core::NoteOffEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteOffEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Melanchall::DryWetMidi::Core::NoteOffEvent::_ctor(::Melanchall::DryWetMidi::Common::SevenBitNumber  noteNumber, ::Melanchall::DryWetMidi::Common::SevenBitNumber  velocity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteOffEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Common::SevenBitNumber>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Common::SevenBitNumber>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteNumber, velocity);
}
inline ::Melanchall::DryWetMidi::Core::MidiEvent* Melanchall::DryWetMidi::Core::NoteOffEvent::CloneEvent()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteOffEvent*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::Melanchall::DryWetMidi::Core::MidiEvent*, false>(this, ___internal_method);
}
inline ::StringW Melanchall::DryWetMidi::Core::NoteOffEvent::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::NoteOffEvent*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Melanchall::DryWetMidi::Core::NoteOffEvent* Melanchall::DryWetMidi::Core::NoteOffEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::NoteOffEvent*>());
}
inline ::Melanchall::DryWetMidi::Core::NoteOffEvent* Melanchall::DryWetMidi::Core::NoteOffEvent::New_ctor(::Melanchall::DryWetMidi::Common::SevenBitNumber  noteNumber, ::Melanchall::DryWetMidi::Common::SevenBitNumber  velocity)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::NoteOffEvent*>(noteNumber, velocity));
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::NoteOffEvent::NoteOffEvent()   {
}
