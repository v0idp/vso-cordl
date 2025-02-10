#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/EventsCollection.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__EventsCollection_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiEvent_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::EventsCollection._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::EventsCollection::*)()>(&::Melanchall::DryWetMidi::Core::EventsCollection::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x259fa24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::EventsCollection.get_Count
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Melanchall::DryWetMidi::Core::EventsCollection::*)()>(&::Melanchall::DryWetMidi::Core::EventsCollection::get_Count)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x25a0020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "get_Count",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::EventsCollection.get_IsReadOnly
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Melanchall::DryWetMidi::Core::EventsCollection::*)()>(&::Melanchall::DryWetMidi::Core::EventsCollection::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a11f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "get_IsReadOnly",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::EventsCollection.set_IsInitialState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::EventsCollection::*)(bool)>(&::Melanchall::DryWetMidi::Core::EventsCollection::set_IsInitialState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25a1200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "set_IsInitialState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::EventsCollection.set_LastTempoMapEventIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::EventsCollection::*)(int32_t)>(&::Melanchall::DryWetMidi::Core::EventsCollection::set_LastTempoMapEventIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a120c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "set_LastTempoMapEventIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::EventsCollection.Add
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::EventsCollection::*)(::Melanchall::DryWetMidi::Core::MidiEvent*)>(&::Melanchall::DryWetMidi::Core::EventsCollection::Add)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x259e708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "Add",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::EventsCollection.Remove
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Melanchall::DryWetMidi::Core::EventsCollection::*)(::Melanchall::DryWetMidi::Core::MidiEvent*)>(&::Melanchall::DryWetMidi::Core::EventsCollection::Remove)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x25a12fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "Remove",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::EventsCollection.Clear
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::EventsCollection::*)()>(&::Melanchall::DryWetMidi::Core::EventsCollection::Clear)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25a13f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::EventsCollection.AddInternal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::EventsCollection::*)(::Melanchall::DryWetMidi::Core::MidiEvent*)>(&::Melanchall::DryWetMidi::Core::EventsCollection::AddInternal)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x25a1214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "AddInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::EventsCollection.IsTempoMapEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Melanchall::DryWetMidi::Core::MidiEvent*)>(&::Melanchall::DryWetMidi::Core::EventsCollection::IsTempoMapEvent)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25a13c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "IsTempoMapEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::EventsCollection.GetEnumerator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::Melanchall::DryWetMidi::Core::MidiEvent*>* (::Melanchall::DryWetMidi::Core::EventsCollection::*)()>(&::Melanchall::DryWetMidi::Core::EventsCollection::GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x25a0900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::EventsCollection.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Melanchall::DryWetMidi::Core::EventsCollection::*)()>(&::Melanchall::DryWetMidi::Core::EventsCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x25a1464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "System.Collections.IEnumerable.GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::EventsCollection.Contains
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Melanchall::DryWetMidi::Core::EventsCollection::*)(::Melanchall::DryWetMidi::Core::MidiEvent*)>(&::Melanchall::DryWetMidi::Core::EventsCollection::Contains)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25a14f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "Contains",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::EventsCollection.CopyTo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::EventsCollection::*)(::ArrayW<::Melanchall::DryWetMidi::Core::MidiEvent*,::Array<::Melanchall::DryWetMidi::Core::MidiEvent*>*>, int32_t)>(&::Melanchall::DryWetMidi::Core::EventsCollection::CopyTo)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25a154c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "CopyTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Melanchall::DryWetMidi::Core::MidiEvent*,::Array<::Melanchall::DryWetMidi::Core::MidiEvent*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Melanchall::DryWetMidi::Core::MidiEvent*>*& Melanchall::DryWetMidi::Core::EventsCollection::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::System::Collections::Generic::List_1<::Melanchall::DryWetMidi::Core::MidiEvent*>* const& Melanchall::DryWetMidi::Core::EventsCollection::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void Melanchall::DryWetMidi::Core::EventsCollection::__cordl_internal_set__events(::System::Collections::Generic::List_1<::Melanchall::DryWetMidi::Core::MidiEvent*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____events)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Melanchall::DryWetMidi::Core::EventsCollection::__cordl_internal_get__tempoMapEventsCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempoMapEventsCount;
}
constexpr int32_t const& Melanchall::DryWetMidi::Core::EventsCollection::__cordl_internal_get__tempoMapEventsCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempoMapEventsCount;
}
constexpr void Melanchall::DryWetMidi::Core::EventsCollection::__cordl_internal_set__tempoMapEventsCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tempoMapEventsCount = value;
}
constexpr bool& Melanchall::DryWetMidi::Core::EventsCollection::__cordl_internal_get__IsReadOnly_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsReadOnly_k__BackingField;
}
constexpr bool const& Melanchall::DryWetMidi::Core::EventsCollection::__cordl_internal_get__IsReadOnly_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsReadOnly_k__BackingField;
}
constexpr void Melanchall::DryWetMidi::Core::EventsCollection::__cordl_internal_set__IsReadOnly_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsReadOnly_k__BackingField = value;
}
constexpr bool& Melanchall::DryWetMidi::Core::EventsCollection::__cordl_internal_get__IsInitialState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInitialState_k__BackingField;
}
constexpr bool const& Melanchall::DryWetMidi::Core::EventsCollection::__cordl_internal_get__IsInitialState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInitialState_k__BackingField;
}
constexpr void Melanchall::DryWetMidi::Core::EventsCollection::__cordl_internal_set__IsInitialState_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsInitialState_k__BackingField = value;
}
constexpr int32_t& Melanchall::DryWetMidi::Core::EventsCollection::__cordl_internal_get__LastTempoMapEventIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastTempoMapEventIndex_k__BackingField;
}
constexpr int32_t const& Melanchall::DryWetMidi::Core::EventsCollection::__cordl_internal_get__LastTempoMapEventIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastTempoMapEventIndex_k__BackingField;
}
constexpr void Melanchall::DryWetMidi::Core::EventsCollection::__cordl_internal_set__LastTempoMapEventIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastTempoMapEventIndex_k__BackingField = value;
}
inline void Melanchall::DryWetMidi::Core::EventsCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Melanchall::DryWetMidi::Core::EventsCollection::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "get_Count",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Melanchall::DryWetMidi::Core::EventsCollection::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "get_IsReadOnly",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Melanchall::DryWetMidi::Core::EventsCollection::set_IsInitialState(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "set_IsInitialState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Melanchall::DryWetMidi::Core::EventsCollection::set_LastTempoMapEventIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "set_LastTempoMapEventIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Melanchall::DryWetMidi::Core::EventsCollection::Add(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "Add",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, midiEvent);
}
inline bool Melanchall::DryWetMidi::Core::EventsCollection::Remove(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "Remove",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, midiEvent);
}
inline void Melanchall::DryWetMidi::Core::EventsCollection::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Melanchall::DryWetMidi::Core::EventsCollection::AddInternal(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "AddInternal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, midiEvent);
}
inline bool Melanchall::DryWetMidi::Core::EventsCollection::IsTempoMapEvent(::Melanchall::DryWetMidi::Core::MidiEvent*  midiEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "IsTempoMapEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, midiEvent);
}
inline ::System::Collections::Generic::IEnumerator_1<::Melanchall::DryWetMidi::Core::MidiEvent*>* Melanchall::DryWetMidi::Core::EventsCollection::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Melanchall::DryWetMidi::Core::MidiEvent*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Melanchall::DryWetMidi::Core::EventsCollection::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "System.Collections.IEnumerable.GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline bool Melanchall::DryWetMidi::Core::EventsCollection::Contains(::Melanchall::DryWetMidi::Core::MidiEvent*  item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "Contains",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
inline void Melanchall::DryWetMidi::Core::EventsCollection::CopyTo(::ArrayW<::Melanchall::DryWetMidi::Core::MidiEvent*,::Array<::Melanchall::DryWetMidi::Core::MidiEvent*>*>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::EventsCollection*>::get(),
                        "CopyTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Melanchall::DryWetMidi::Core::MidiEvent*,::Array<::Melanchall::DryWetMidi::Core::MidiEvent*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, arrayIndex);
}
inline ::Melanchall::DryWetMidi::Core::EventsCollection* Melanchall::DryWetMidi::Core::EventsCollection::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::EventsCollection*>());
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::Melanchall::DryWetMidi::Core::MidiEvent*>"
constexpr  Melanchall::DryWetMidi::Core::EventsCollection::operator ::System::Collections::Generic::ICollection_1<::Melanchall::DryWetMidi::Core::MidiEvent*>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::Melanchall::DryWetMidi::Core::MidiEvent*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::Melanchall::DryWetMidi::Core::MidiEvent*>"
constexpr ::System::Collections::Generic::ICollection_1<::Melanchall::DryWetMidi::Core::MidiEvent*>* Melanchall::DryWetMidi::Core::EventsCollection::i___System__Collections__Generic__ICollection_1___Melanchall__DryWetMidi__Core__MidiEvent__() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::Melanchall::DryWetMidi::Core::MidiEvent*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiEvent*>"
constexpr  Melanchall::DryWetMidi::Core::EventsCollection::operator ::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiEvent*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiEvent*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiEvent*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiEvent*>* Melanchall::DryWetMidi::Core::EventsCollection::i___System__Collections__Generic__IEnumerable_1___Melanchall__DryWetMidi__Core__MidiEvent__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Melanchall::DryWetMidi::Core::MidiEvent*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Melanchall::DryWetMidi::Core::EventsCollection::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Melanchall::DryWetMidi::Core::EventsCollection::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::EventsCollection::EventsCollection()   {
}
