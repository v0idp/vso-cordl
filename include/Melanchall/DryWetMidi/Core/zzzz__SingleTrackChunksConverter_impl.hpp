#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/SingleTrackChunksConverter.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__IChunksConverter_impl.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__SingleTrackChunksConverter_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiChunk_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiEvent_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__SingleTrackChunksConverter_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__TrackChunk_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor::*)(::Melanchall::DryWetMidi::Core::MidiEvent*, int64_t)>(&::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x259f178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor.get_Event
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Melanchall::DryWetMidi::Core::MidiEvent* (::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor::*)()>(&::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor::get_Event)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f1a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>::get(),
                        "get_Event",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor.get_AbsoluteTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor::*)()>(&::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor::get_AbsoluteTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f1ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>::get(),
                        "get_AbsoluteTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Melanchall::DryWetMidi::Core::MidiEvent*& Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor::__cordl_internal_get__Event_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Event_k__BackingField;
}
constexpr ::Melanchall::DryWetMidi::Core::MidiEvent* const& Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor::__cordl_internal_get__Event_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Event_k__BackingField;
}
constexpr void Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor::__cordl_internal_set__Event_k__BackingField(::Melanchall::DryWetMidi::Core::MidiEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Event_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor::__cordl_internal_get__AbsoluteTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AbsoluteTime_k__BackingField;
}
constexpr int64_t const& Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor::__cordl_internal_get__AbsoluteTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AbsoluteTime_k__BackingField;
}
constexpr void Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor::__cordl_internal_set__AbsoluteTime_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AbsoluteTime_k__BackingField = value;
}
inline void Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor::_ctor(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, int64_t  absoluteTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, midiEvent, absoluteTime);
}
inline ::Melanchall::DryWetMidi::Core::MidiEvent* Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor::get_Event()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>::get(),
                        "get_Event",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Melanchall::DryWetMidi::Core::MidiEvent*, false>(this, ___internal_method);
}
inline int64_t Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor::get_AbsoluteTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>::get(),
                        "get_AbsoluteTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor* Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor::New_ctor(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent, int64_t  absoluteTime)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>(midiEvent, absoluteTime));
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor::SingleTrackChunksConverter_EventDescriptor()   {
}
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer.Compare
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer::*)(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*, ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*)>(&::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer::Compare)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x259f1b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer*>::get(),
                        "Compare",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer::*)()>(&::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline int32_t Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer::Compare(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*  x, ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*  y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer*>::get(),
                        "Compare",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
inline void Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer* Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>"
constexpr  Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer::operator ::System::Collections::Generic::IComparer_1<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>"
constexpr ::System::Collections::Generic::IComparer_1<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>* Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer::i___System__Collections__Generic__IComparer_1___Melanchall__DryWetMidi__Core__SingleTrackChunksConverter_EventDescriptor__() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptorComparer::SingleTrackChunksConverter_EventDescriptorComparer()   {
}
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c::*)()>(&::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f33c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c._Convert_b__2_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>* (::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c::*)(::Melanchall::DryWetMidi::Core::TrackChunk*)>(&::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c::_Convert_b__2_0)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x259f344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*>::get(),
                        "<Convert>b__2_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::TrackChunk*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c._Convert_b__2_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor* (::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c::*)(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*)>(&::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c::_Convert_b__2_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*>::get(),
                        "<Convert>b__2_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c._Convert_b__2_2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c::*)(::Melanchall::DryWetMidi::Core::MidiChunk*)>(&::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c::_Convert_b__2_2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x259f428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*>::get(),
                        "<Convert>b__2_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiChunk*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c::setStaticF___9(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*  value)  {
::cordl_internals::setStaticField<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*>::get>(std::forward<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*>(value));
}
inline ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c* Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*>::get>();
}
inline void Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c::setStaticF___9__2_0(::System::Func_2<::Melanchall::DryWetMidi::Core::TrackChunk*,::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Melanchall::DryWetMidi::Core::TrackChunk*,::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>*>*, "<>9__2_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*>::get>(std::forward<::System::Func_2<::Melanchall::DryWetMidi::Core::TrackChunk*,::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>*>*>(value));
}
inline ::System::Func_2<::Melanchall::DryWetMidi::Core::TrackChunk*,::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>*>* Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c::getStaticF___9__2_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Melanchall::DryWetMidi::Core::TrackChunk*,::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>*>*, "<>9__2_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*>::get>();
}
inline void Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c::setStaticF___9__2_1(::System::Func_2<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*,::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*,::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>*, "<>9__2_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*>::get>(std::forward<::System::Func_2<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*,::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>*>(value));
}
inline ::System::Func_2<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*,::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>* Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c::getStaticF___9__2_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*,::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>*, "<>9__2_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*>::get>();
}
inline void Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c::setStaticF___9__2_2(::System::Func_2<::Melanchall::DryWetMidi::Core::MidiChunk*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Melanchall::DryWetMidi::Core::MidiChunk*,bool>*, "<>9__2_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*>::get>(std::forward<::System::Func_2<::Melanchall::DryWetMidi::Core::MidiChunk*,bool>*>(value));
}
inline ::System::Func_2<::Melanchall::DryWetMidi::Core::MidiChunk*,bool>* Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c::getStaticF___9__2_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Melanchall::DryWetMidi::Core::MidiChunk*,bool>*, "<>9__2_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*>::get>();
}
inline void Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>* Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c::_Convert_b__2_0(::Melanchall::DryWetMidi::Core::TrackChunk*  trackChunk)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*>::get(),
                        "<Convert>b__2_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::TrackChunk*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>*, false>(this, ___internal_method, trackChunk);
}
inline ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor* Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c::_Convert_b__2_1(::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*  d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*>::get(),
                        "<Convert>b__2_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*, false>(this, ___internal_method, d);
}
inline bool Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c::_Convert_b__2_2(::Melanchall::DryWetMidi::Core::MidiChunk*  c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*>::get(),
                        "<Convert>b__2_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiChunk*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
inline ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c* Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c*>());
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c::SingleTrackChunksConverter___c()   {
}
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0::*)()>(&::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259f418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0._Convert_b__3
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor* (::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0::*)(::Melanchall::DryWetMidi::Core::MidiEvent*)>(&::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0::_Convert_b__3)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x259f484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0*>::get(),
                        "<Convert>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0::__cordl_internal_get_absoluteTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___absoluteTime;
}
constexpr int64_t const& Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0::__cordl_internal_get_absoluteTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___absoluteTime;
}
constexpr void Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0::__cordl_internal_set_absoluteTime(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___absoluteTime = value;
}
inline void Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor* Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0::_Convert_b__3(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0*>::get(),
                        "<Convert>b__3",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter_EventDescriptor*, false>(this, ___internal_method, midiEvent);
}
inline ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0* Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter___c__DisplayClass2_0::SingleTrackChunksConverter___c__DisplayClass2_0()   {
}
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter.Convert
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>* (::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter::*)(::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>*)>(&::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter::Convert)> {
  constexpr static std::size_t size = 0x754;
  constexpr static std::size_t addrs = 0x259ea1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter*>::get(),
                        "Convert",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter::*)()>(&::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259d164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>* Melanchall::DryWetMidi::Core::SingleTrackChunksConverter::Convert(::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>*  chunks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter*>::get(),
                        "Convert",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiChunk*>*, false>(this, ___internal_method, chunks);
}
inline void Melanchall::DryWetMidi::Core::SingleTrackChunksConverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter* Melanchall::DryWetMidi::Core::SingleTrackChunksConverter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter*>());
}
/// @brief Convert operator to "::Melanchall::DryWetMidi::Core::IChunksConverter"
constexpr  Melanchall::DryWetMidi::Core::SingleTrackChunksConverter::operator ::Melanchall::DryWetMidi::Core::IChunksConverter*() noexcept {
return static_cast<::Melanchall::DryWetMidi::Core::IChunksConverter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Melanchall::DryWetMidi::Core::IChunksConverter"
constexpr ::Melanchall::DryWetMidi::Core::IChunksConverter* Melanchall::DryWetMidi::Core::SingleTrackChunksConverter::i___Melanchall__DryWetMidi__Core__IChunksConverter() noexcept {
return static_cast<::Melanchall::DryWetMidi::Core::IChunksConverter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::SingleTrackChunksConverter::SingleTrackChunksConverter()   {
}
