#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/TrackChunk.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiChunk_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__TrackChunk_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__EventsCollection_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__IEventWriter_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiEvent_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiWriter_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__TrackChunk_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__WritingSettings_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0::*)()>(&::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259ff8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0._GetContentSize_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0::*)(::Melanchall::DryWetMidi::Core::IEventWriter*, ::Melanchall::DryWetMidi::Core::MidiEvent*, bool)>(&::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0::_GetContentSize_b__0)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x25a09b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0*>::get(),
                        "<GetContentSize>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::IEventWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr uint32_t const& Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0::__cordl_internal_set_result(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
constexpr ::Melanchall::DryWetMidi::Core::WritingSettings*& Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::Melanchall::DryWetMidi::Core::WritingSettings* const& Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0::__cordl_internal_set_settings(::Melanchall::DryWetMidi::Core::WritingSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0::_GetContentSize_b__0(::Melanchall::DryWetMidi::Core::IEventWriter*  eventWriter, ::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, bool  writeStatusByte)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0*>::get(),
                        "<GetContentSize>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::IEventWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventWriter, midiEvent, writeStatusByte);
}
inline ::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0* Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass10_0::TrackChunk___c__DisplayClass10_0()   {
}
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0::*)()>(&::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259fb78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0._WriteContent_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0::*)(::Melanchall::DryWetMidi::Core::IEventWriter*, ::Melanchall::DryWetMidi::Core::MidiEvent*, bool)>(&::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0::_WriteContent_b__0)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x25a0bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0*>::get(),
                        "<WriteContent>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::IEventWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Melanchall::DryWetMidi::Core::MidiWriter*& Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0::__cordl_internal_get_writer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writer;
}
constexpr ::Melanchall::DryWetMidi::Core::MidiWriter* const& Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0::__cordl_internal_get_writer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writer;
}
constexpr void Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0::__cordl_internal_set_writer(::Melanchall::DryWetMidi::Core::MidiWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___writer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Melanchall::DryWetMidi::Core::WritingSettings*& Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::Melanchall::DryWetMidi::Core::WritingSettings* const& Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0::__cordl_internal_set_settings(::Melanchall::DryWetMidi::Core::WritingSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0::_WriteContent_b__0(::Melanchall::DryWetMidi::Core::IEventWriter*  eventWriter, ::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, bool  writeStatusByte)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0*>::get(),
                        "<WriteContent>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::IEventWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventWriter, midiEvent, writeStatusByte);
}
inline ::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0* Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::TrackChunk___c__DisplayClass9_0::TrackChunk___c__DisplayClass9_0()   {
}
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::TrackChunk._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::TrackChunk::*)()>(&::Melanchall::DryWetMidi::Core::TrackChunk::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x259e7cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::TrackChunk.get_Events
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Melanchall::DryWetMidi::Core::EventsCollection* (::Melanchall::DryWetMidi::Core::TrackChunk::*)()>(&::Melanchall::DryWetMidi::Core::TrackChunk::get_Events)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259fab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk*>::get(),
                        "get_Events",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::TrackChunk.WriteContent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::TrackChunk::*)(::Melanchall::DryWetMidi::Core::MidiWriter*, ::Melanchall::DryWetMidi::Core::WritingSettings*)>(&::Melanchall::DryWetMidi::Core::TrackChunk::WriteContent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x259fab8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::TrackChunk.GetContentSize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Melanchall::DryWetMidi::Core::TrackChunk::*)(::Melanchall::DryWetMidi::Core::WritingSettings*)>(&::Melanchall::DryWetMidi::Core::TrackChunk::GetContentSize)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x259fec4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::TrackChunk.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Melanchall::DryWetMidi::Core::TrackChunk::*)()>(&::Melanchall::DryWetMidi::Core::TrackChunk::ToString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x259ff94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::TrackChunk.ProcessEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Melanchall::DryWetMidi::Core::MidiEvent*, ::Melanchall::DryWetMidi::Core::WritingSettings*, ::System::Action_3<::Melanchall::DryWetMidi::Core::IEventWriter*,::Melanchall::DryWetMidi::Core::MidiEvent*,bool>*, ::ByRef<bool>, ::ByRef<int64_t>, ::ByRef<::System::Nullable_1<uint8_t>>, ::ByRef<bool>, ::ByRef<bool>, ::ByRef<bool>)>(&::Melanchall::DryWetMidi::Core::TrackChunk::ProcessEvent)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x25a0068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk*>::get(),
                        "ProcessEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 9>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::Melanchall::DryWetMidi::Core::IEventWriter*,::Melanchall::DryWetMidi::Core::MidiEvent*,bool>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Nullable_1<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::TrackChunk.ProcessEvents
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::TrackChunk::*)(::Melanchall::DryWetMidi::Core::WritingSettings*, ::System::Action_3<::Melanchall::DryWetMidi::Core::IEventWriter*,::Melanchall::DryWetMidi::Core::MidiEvent*,bool>*)>(&::Melanchall::DryWetMidi::Core::TrackChunk::ProcessEvents)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x259fb80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk*>::get(),
                        "ProcessEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::Melanchall::DryWetMidi::Core::IEventWriter*,::Melanchall::DryWetMidi::Core::MidiEvent*,bool>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::TrackChunk.TrySkipDefaultSetTempo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Melanchall::DryWetMidi::Core::MidiEvent*, ::ByRef<bool>)>(&::Melanchall::DryWetMidi::Core::TrackChunk::TrySkipDefaultSetTempo)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x25a0574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk*>::get(),
                        "TrySkipDefaultSetTempo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::TrackChunk.TrySkipDefaultKeySignature
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Melanchall::DryWetMidi::Core::MidiEvent*, ::ByRef<bool>)>(&::Melanchall::DryWetMidi::Core::TrackChunk::TrySkipDefaultKeySignature)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x25a0604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk*>::get(),
                        "TrySkipDefaultKeySignature",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::TrackChunk.TrySkipDefaultTimeSignature
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Melanchall::DryWetMidi::Core::MidiEvent*, ::ByRef<bool>)>(&::Melanchall::DryWetMidi::Core::TrackChunk::TrySkipDefaultTimeSignature)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x25a0694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk*>::get(),
                        "TrySkipDefaultTimeSignature",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Melanchall::DryWetMidi::Core::EventsCollection*& Melanchall::DryWetMidi::Core::TrackChunk::__cordl_internal_get__Events_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Events_k__BackingField;
}
constexpr ::Melanchall::DryWetMidi::Core::EventsCollection* const& Melanchall::DryWetMidi::Core::TrackChunk::__cordl_internal_get__Events_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Events_k__BackingField;
}
constexpr void Melanchall::DryWetMidi::Core::TrackChunk::__cordl_internal_set__Events_k__BackingField(::Melanchall::DryWetMidi::Core::EventsCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Events_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Melanchall::DryWetMidi::Core::TrackChunk::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Melanchall::DryWetMidi::Core::EventsCollection* Melanchall::DryWetMidi::Core::TrackChunk::get_Events()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk*>::get(),
                        "get_Events",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Melanchall::DryWetMidi::Core::EventsCollection*, false>(this, ___internal_method);
}
inline void Melanchall::DryWetMidi::Core::TrackChunk::WriteContent(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, settings);
}
inline uint32_t Melanchall::DryWetMidi::Core::TrackChunk::GetContentSize(::Melanchall::DryWetMidi::Core::WritingSettings*  settings)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, settings);
}
inline ::StringW Melanchall::DryWetMidi::Core::TrackChunk::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Melanchall::DryWetMidi::Core::TrackChunk::ProcessEvent(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings, ::System::Action_3<::Melanchall::DryWetMidi::Core::IEventWriter*,::Melanchall::DryWetMidi::Core::MidiEvent*,bool>*  eventHandler, ::ByRef<bool>  lastEventIsEndOfTrack, ::ByRef<int64_t>  additionalDeltaTime, ::ByRef<::System::Nullable_1<uint8_t>>  runningStatus, ::ByRef<bool>  skipSetTempo, ::ByRef<bool>  skipKeySignature, ::ByRef<bool>  skipTimeSignature)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk*>::get(),
                        "ProcessEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 9>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::Melanchall::DryWetMidi::Core::IEventWriter*,::Melanchall::DryWetMidi::Core::MidiEvent*,bool>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Nullable_1<uint8_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, midiEvent, settings, eventHandler, lastEventIsEndOfTrack, additionalDeltaTime, runningStatus, skipSetTempo, skipKeySignature, skipTimeSignature);
}
inline void Melanchall::DryWetMidi::Core::TrackChunk::ProcessEvents(::Melanchall::DryWetMidi::Core::WritingSettings*  settings, ::System::Action_3<::Melanchall::DryWetMidi::Core::IEventWriter*,::Melanchall::DryWetMidi::Core::MidiEvent*,bool>*  eventHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk*>::get(),
                        "ProcessEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::WritingSettings*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::Melanchall::DryWetMidi::Core::IEventWriter*,::Melanchall::DryWetMidi::Core::MidiEvent*,bool>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings, eventHandler);
}
inline bool Melanchall::DryWetMidi::Core::TrackChunk::TrySkipDefaultSetTempo(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, ::ByRef<bool>  skip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk*>::get(),
                        "TrySkipDefaultSetTempo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, midiEvent, skip);
}
inline bool Melanchall::DryWetMidi::Core::TrackChunk::TrySkipDefaultKeySignature(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, ::ByRef<bool>  skip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk*>::get(),
                        "TrySkipDefaultKeySignature",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, midiEvent, skip);
}
inline bool Melanchall::DryWetMidi::Core::TrackChunk::TrySkipDefaultTimeSignature(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, ::ByRef<bool>  skip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::TrackChunk*>::get(),
                        "TrySkipDefaultTimeSignature",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, midiEvent, skip);
}
inline ::Melanchall::DryWetMidi::Core::TrackChunk* Melanchall::DryWetMidi::Core::TrackChunk::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::TrackChunk*>());
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::TrackChunk::TrackChunk()   {
}
