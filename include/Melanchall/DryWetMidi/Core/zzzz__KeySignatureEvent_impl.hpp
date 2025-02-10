#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/KeySignatureEvent.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MetaEvent_impl.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__KeySignatureEvent_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiEvent_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiWriter_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__WritingSettings_def.hpp"
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::KeySignatureEvent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::KeySignatureEvent::*)()>(&::Melanchall::DryWetMidi::Core::KeySignatureEvent::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25a2688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::KeySignatureEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::KeySignatureEvent.get_Key
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (::Melanchall::DryWetMidi::Core::KeySignatureEvent::*)()>(&::Melanchall::DryWetMidi::Core::KeySignatureEvent::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a26a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::KeySignatureEvent*>::get(),
                        "get_Key",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::KeySignatureEvent.get_Scale
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Melanchall::DryWetMidi::Core::KeySignatureEvent::*)()>(&::Melanchall::DryWetMidi::Core::KeySignatureEvent::get_Scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a26b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::KeySignatureEvent*>::get(),
                        "get_Scale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::KeySignatureEvent.WriteContent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::KeySignatureEvent::*)(::Melanchall::DryWetMidi::Core::MidiWriter*, ::Melanchall::DryWetMidi::Core::WritingSettings*)>(&::Melanchall::DryWetMidi::Core::KeySignatureEvent::WriteContent)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x25a26b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::KeySignatureEvent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::KeySignatureEvent*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::KeySignatureEvent.GetContentSize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Melanchall::DryWetMidi::Core::KeySignatureEvent::*)(::Melanchall::DryWetMidi::Core::WritingSettings*)>(&::Melanchall::DryWetMidi::Core::KeySignatureEvent::GetContentSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a26f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::KeySignatureEvent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::KeySignatureEvent*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::KeySignatureEvent.CloneEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Melanchall::DryWetMidi::Core::MidiEvent* (::Melanchall::DryWetMidi::Core::KeySignatureEvent::*)()>(&::Melanchall::DryWetMidi::Core::KeySignatureEvent::CloneEvent)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25a26fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::KeySignatureEvent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::KeySignatureEvent*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::KeySignatureEvent.ToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Melanchall::DryWetMidi::Core::KeySignatureEvent::*)()>(&::Melanchall::DryWetMidi::Core::KeySignatureEvent::ToString)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x25a276c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::KeySignatureEvent*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::KeySignatureEvent*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr int8_t& Melanchall::DryWetMidi::Core::KeySignatureEvent::__cordl_internal_get__key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____key;
}
constexpr int8_t const& Melanchall::DryWetMidi::Core::KeySignatureEvent::__cordl_internal_get__key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____key;
}
constexpr void Melanchall::DryWetMidi::Core::KeySignatureEvent::__cordl_internal_set__key(int8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____key = value;
}
constexpr uint8_t& Melanchall::DryWetMidi::Core::KeySignatureEvent::__cordl_internal_get__scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scale;
}
constexpr uint8_t const& Melanchall::DryWetMidi::Core::KeySignatureEvent::__cordl_internal_get__scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scale;
}
constexpr void Melanchall::DryWetMidi::Core::KeySignatureEvent::__cordl_internal_set__scale(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scale = value;
}
inline void Melanchall::DryWetMidi::Core::KeySignatureEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::KeySignatureEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int8_t Melanchall::DryWetMidi::Core::KeySignatureEvent::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::KeySignatureEvent*>::get(),
                        "get_Key",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(this, ___internal_method);
}
inline uint8_t Melanchall::DryWetMidi::Core::KeySignatureEvent::get_Scale()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::KeySignatureEvent*>::get(),
                        "get_Scale",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline void Melanchall::DryWetMidi::Core::KeySignatureEvent::WriteContent(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::KeySignatureEvent*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, settings);
}
inline int32_t Melanchall::DryWetMidi::Core::KeySignatureEvent::GetContentSize(::Melanchall::DryWetMidi::Core::WritingSettings*  settings)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::KeySignatureEvent*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, settings);
}
inline ::Melanchall::DryWetMidi::Core::MidiEvent* Melanchall::DryWetMidi::Core::KeySignatureEvent::CloneEvent()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::KeySignatureEvent*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::Melanchall::DryWetMidi::Core::MidiEvent*, false>(this, ___internal_method);
}
inline ::StringW Melanchall::DryWetMidi::Core::KeySignatureEvent::ToString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::KeySignatureEvent*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Melanchall::DryWetMidi::Core::KeySignatureEvent* Melanchall::DryWetMidi::Core::KeySignatureEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::KeySignatureEvent*>());
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::KeySignatureEvent::KeySignatureEvent()   {
}
