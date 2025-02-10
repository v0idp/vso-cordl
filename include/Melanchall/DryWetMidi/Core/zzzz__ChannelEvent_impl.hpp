#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/ChannelEvent.hpp"
#include "Melanchall/DryWetMidi/Common/zzzz__FourBitNumber_impl.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiEvent_impl.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__ChannelEvent_def.hpp"
#include "Melanchall/DryWetMidi/Common/zzzz__FourBitNumber_def.hpp"
#include "Melanchall/DryWetMidi/Core/zzzz__MidiEventType_def.hpp"
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::ChannelEvent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::ChannelEvent::*)(::Melanchall::DryWetMidi::Core::MidiEventType)>(&::Melanchall::DryWetMidi::Core::ChannelEvent::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25a15b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::ChannelEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEventType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::ChannelEvent.get_Channel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Melanchall::DryWetMidi::Common::FourBitNumber (::Melanchall::DryWetMidi::Core::ChannelEvent::*)()>(&::Melanchall::DryWetMidi::Core::ChannelEvent::get_Channel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a1604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::ChannelEvent*>::get(),
                        "get_Channel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Melanchall::DryWetMidi::Core::ChannelEvent.set_Channel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Melanchall::DryWetMidi::Core::ChannelEvent::*)(::Melanchall::DryWetMidi::Common::FourBitNumber)>(&::Melanchall::DryWetMidi::Core::ChannelEvent::set_Channel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25a160c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::ChannelEvent*>::get(),
                        "set_Channel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Common::FourBitNumber>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr uint8_t& Melanchall::DryWetMidi::Core::ChannelEvent::__cordl_internal_get__dataByte1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataByte1;
}
constexpr uint8_t const& Melanchall::DryWetMidi::Core::ChannelEvent::__cordl_internal_get__dataByte1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataByte1;
}
constexpr void Melanchall::DryWetMidi::Core::ChannelEvent::__cordl_internal_set__dataByte1(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataByte1 = value;
}
constexpr uint8_t& Melanchall::DryWetMidi::Core::ChannelEvent::__cordl_internal_get__dataByte2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataByte2;
}
constexpr uint8_t const& Melanchall::DryWetMidi::Core::ChannelEvent::__cordl_internal_get__dataByte2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataByte2;
}
constexpr void Melanchall::DryWetMidi::Core::ChannelEvent::__cordl_internal_set__dataByte2(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataByte2 = value;
}
constexpr ::Melanchall::DryWetMidi::Common::FourBitNumber& Melanchall::DryWetMidi::Core::ChannelEvent::__cordl_internal_get__Channel_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Channel_k__BackingField;
}
constexpr ::Melanchall::DryWetMidi::Common::FourBitNumber const& Melanchall::DryWetMidi::Core::ChannelEvent::__cordl_internal_get__Channel_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Channel_k__BackingField;
}
constexpr void Melanchall::DryWetMidi::Core::ChannelEvent::__cordl_internal_set__Channel_k__BackingField(::Melanchall::DryWetMidi::Common::FourBitNumber  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Channel_k__BackingField = value;
}
inline void Melanchall::DryWetMidi::Core::ChannelEvent::_ctor(::Melanchall::DryWetMidi::Core::MidiEventType  eventType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::ChannelEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Core::MidiEventType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventType);
}
inline ::Melanchall::DryWetMidi::Common::FourBitNumber Melanchall::DryWetMidi::Core::ChannelEvent::get_Channel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::ChannelEvent*>::get(),
                        "get_Channel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Melanchall::DryWetMidi::Common::FourBitNumber, false>(this, ___internal_method);
}
inline void Melanchall::DryWetMidi::Core::ChannelEvent::set_Channel(::Melanchall::DryWetMidi::Common::FourBitNumber  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Melanchall::DryWetMidi::Core::ChannelEvent*>::get(),
                        "set_Channel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Melanchall::DryWetMidi::Common::FourBitNumber>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Melanchall::DryWetMidi::Core::ChannelEvent* Melanchall::DryWetMidi::Core::ChannelEvent::New_ctor(::Melanchall::DryWetMidi::Core::MidiEventType  eventType)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Melanchall::DryWetMidi::Core::ChannelEvent*>(eventType));
}
// Ctor Parameters []
constexpr ::Melanchall::DryWetMidi::Core::ChannelEvent::ChannelEvent()   {
}
