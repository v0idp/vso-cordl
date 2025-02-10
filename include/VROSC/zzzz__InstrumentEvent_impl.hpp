#pragma once
// IWYU pragma private; include "VROSC/InstrumentEvent.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__HandType_impl.hpp"
#include "VROSC/zzzz__WidgetSettings_impl.hpp"
#include "VROSC/zzzz__InstrumentEvent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__InstrumentEvent_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::InstrumentEvent_EventType::InstrumentEvent_EventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::InstrumentEvent_EventType::InstrumentEvent_EventType()   {
}
constexpr ::VROSC::InstrumentEvent_EventType  VROSC::InstrumentEvent_EventType::Note{static_cast<int32_t>(0x0)};
constexpr ::VROSC::InstrumentEvent_EventType  VROSC::InstrumentEvent_EventType::Parameter{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::VROSC::InstrumentEvent___c__DisplayClass17_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentEvent___c__DisplayClass17_0::*)()>(&::VROSC::InstrumentEvent___c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x183dc5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent___c__DisplayClass17_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentEvent___c__DisplayClass17_0._DeserializeInstrumentEvents_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentEvent___c__DisplayClass17_0::*)(::VROSC::InstrumentEvent*)>(&::VROSC::InstrumentEvent___c__DisplayClass17_0::_DeserializeInstrumentEvents_b__0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x183e0b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent___c__DisplayClass17_0*>::get(),
                        "<DeserializeInstrumentEvents>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InstrumentEvent*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::VROSC::InstrumentEvent*>*& VROSC::InstrumentEvent___c__DisplayClass17_0::__cordl_internal_get_events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
constexpr ::System::Collections::Generic::List_1<::VROSC::InstrumentEvent*>* const& VROSC::InstrumentEvent___c__DisplayClass17_0::__cordl_internal_get_events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
constexpr void VROSC::InstrumentEvent___c__DisplayClass17_0::__cordl_internal_set_events(::System::Collections::Generic::List_1<::VROSC::InstrumentEvent*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___events)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::InstrumentEvent___c__DisplayClass17_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent___c__DisplayClass17_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::InstrumentEvent___c__DisplayClass17_0::_DeserializeInstrumentEvents_b__0(::VROSC::InstrumentEvent*  instrumentEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent___c__DisplayClass17_0*>::get(),
                        "<DeserializeInstrumentEvents>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InstrumentEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instrumentEvent);
}
inline ::VROSC::InstrumentEvent___c__DisplayClass17_0* VROSC::InstrumentEvent___c__DisplayClass17_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::InstrumentEvent___c__DisplayClass17_0*>());
}
// Ctor Parameters []
constexpr ::VROSC::InstrumentEvent___c__DisplayClass17_0::InstrumentEvent___c__DisplayClass17_0()   {
}
//  Writing Method size for method: ::VROSC::InstrumentEvent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentEvent::*)()>(&::VROSC::InstrumentEvent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x183d604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentEvent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentEvent::*)(::VROSC::InstrumentEvent*)>(&::VROSC::InstrumentEvent::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x183d614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InstrumentEvent*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentEvent._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentEvent::*)(::VROSC::InstrumentEvent_EventType, ::VROSC::WidgetSettings_Identifier, int32_t, float_t, double_t, ::VROSC::HandType, float_t, float_t)>(&::VROSC::InstrumentEvent::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x183d678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InstrumentEvent_EventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentEvent.SetDspTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::InstrumentEvent::*)(double_t)>(&::VROSC::InstrumentEvent::SetDspTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x183d6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent*>::get(),
                        "SetDspTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentEvent.GetSampleDisplayName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::InstrumentEvent::*)()>(&::VROSC::InstrumentEvent::GetSampleDisplayName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x183d6f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent*>::get(),
                        "GetSampleDisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentEvent.GetSampleGroupDisplayName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::InstrumentEvent::*)()>(&::VROSC::InstrumentEvent::GetSampleGroupDisplayName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x183d720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent*>::get(),
                        "GetSampleGroupDisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentEvent.GetSampleGroupNoteNumber
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::InstrumentEvent::*)()>(&::VROSC::InstrumentEvent::GetSampleGroupNoteNumber)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x183d748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent*>::get(),
                        "GetSampleGroupNoteNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentEvent.SerializeInstrumentEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (*)(::VROSC::InstrumentEvent*)>(&::VROSC::InstrumentEvent::SerializeInstrumentEvent)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x183d770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent*>::get(),
                        "SerializeInstrumentEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InstrumentEvent*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentEvent.DeserializeInstrumentEvents
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::VROSC::InstrumentEvent*,::Array<::VROSC::InstrumentEvent*>*> (*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::VROSC::InstrumentEvent::DeserializeInstrumentEvents)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x183db48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent*>::get(),
                        "DeserializeInstrumentEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::InstrumentEvent.ProcessInstrumentEvents
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::System::Action_1<::VROSC::InstrumentEvent*>*)>(&::VROSC::InstrumentEvent::ProcessInstrumentEvents)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x183dc64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent*>::get(),
                        "ProcessInstrumentEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::InstrumentEvent*>*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::InstrumentEvent_EventType& VROSC::InstrumentEvent::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::VROSC::InstrumentEvent_EventType const& VROSC::InstrumentEvent::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void VROSC::InstrumentEvent::__cordl_internal_set_Type(::VROSC::InstrumentEvent_EventType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
constexpr ::VROSC::WidgetSettings_Identifier& VROSC::InstrumentEvent::__cordl_internal_get_InstrumentID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstrumentID;
}
constexpr ::VROSC::WidgetSettings_Identifier const& VROSC::InstrumentEvent::__cordl_internal_get_InstrumentID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstrumentID;
}
constexpr void VROSC::InstrumentEvent::__cordl_internal_set_InstrumentID(::VROSC::WidgetSettings_Identifier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InstrumentID = value;
}
constexpr int32_t& VROSC::InstrumentEvent::__cordl_internal_get_ParameterIdOrNote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ParameterIdOrNote;
}
constexpr int32_t const& VROSC::InstrumentEvent::__cordl_internal_get_ParameterIdOrNote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ParameterIdOrNote;
}
constexpr void VROSC::InstrumentEvent::__cordl_internal_set_ParameterIdOrNote(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ParameterIdOrNote = value;
}
constexpr float_t& VROSC::InstrumentEvent::__cordl_internal_get_NoteVelocityOrParameterValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoteVelocityOrParameterValue;
}
constexpr float_t const& VROSC::InstrumentEvent::__cordl_internal_get_NoteVelocityOrParameterValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoteVelocityOrParameterValue;
}
constexpr void VROSC::InstrumentEvent::__cordl_internal_set_NoteVelocityOrParameterValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NoteVelocityOrParameterValue = value;
}
constexpr double_t& VROSC::InstrumentEvent::__cordl_internal_get_DspTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DspTime;
}
constexpr double_t const& VROSC::InstrumentEvent::__cordl_internal_get_DspTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DspTime;
}
constexpr void VROSC::InstrumentEvent::__cordl_internal_set_DspTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DspTime = value;
}
constexpr ::VROSC::HandType& VROSC::InstrumentEvent::__cordl_internal_get_HandType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandType;
}
constexpr ::VROSC::HandType const& VROSC::InstrumentEvent::__cordl_internal_get_HandType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandType;
}
constexpr void VROSC::InstrumentEvent::__cordl_internal_set_HandType(::VROSC::HandType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HandType = value;
}
constexpr float_t& VROSC::InstrumentEvent::__cordl_internal_get_Pitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pitch;
}
constexpr float_t const& VROSC::InstrumentEvent::__cordl_internal_get_Pitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pitch;
}
constexpr void VROSC::InstrumentEvent::__cordl_internal_set_Pitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Pitch = value;
}
constexpr float_t& VROSC::InstrumentEvent::__cordl_internal_get_Volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Volume;
}
constexpr float_t const& VROSC::InstrumentEvent::__cordl_internal_get_Volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Volume;
}
constexpr void VROSC::InstrumentEvent::__cordl_internal_set_Volume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Volume = value;
}
inline void VROSC::InstrumentEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::InstrumentEvent::_ctor(::VROSC::InstrumentEvent*  source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InstrumentEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
inline void VROSC::InstrumentEvent::_ctor(::VROSC::InstrumentEvent_EventType  type, ::VROSC::WidgetSettings_Identifier  instrumentID, int32_t  parameterIdOrNote, float_t  noteVelocityOrParameterValue, double_t  dspTime, ::VROSC::HandType  handType, float_t  pitch, float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InstrumentEvent_EventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::WidgetSettings_Identifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::HandType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, instrumentID, parameterIdOrNote, noteVelocityOrParameterValue, dspTime, handType, pitch, volume);
}
inline void VROSC::InstrumentEvent::SetDspTime(double_t  dspTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent*>::get(),
                        "SetDspTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dspTime);
}
inline ::StringW VROSC::InstrumentEvent::GetSampleDisplayName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent*>::get(),
                        "GetSampleDisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW VROSC::InstrumentEvent::GetSampleGroupDisplayName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent*>::get(),
                        "GetSampleGroupDisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t VROSC::InstrumentEvent::GetSampleGroupNoteNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent*>::get(),
                        "GetSampleGroupNoteNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> VROSC::InstrumentEvent::SerializeInstrumentEvent(::VROSC::InstrumentEvent*  instrumentEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent*>::get(),
                        "SerializeInstrumentEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::InstrumentEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(nullptr, ___internal_method, instrumentEvent);
}
inline ::ArrayW<::VROSC::InstrumentEvent*,::Array<::VROSC::InstrumentEvent*>*> VROSC::InstrumentEvent::DeserializeInstrumentEvents(::ArrayW<uint8_t,::Array<uint8_t>*>  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent*>::get(),
                        "DeserializeInstrumentEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::VROSC::InstrumentEvent*,::Array<::VROSC::InstrumentEvent*>*>, false>(nullptr, ___internal_method, data);
}
inline void VROSC::InstrumentEvent::ProcessInstrumentEvents(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ::System::Action_1<::VROSC::InstrumentEvent*>*  processEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::InstrumentEvent*>::get(),
                        "ProcessInstrumentEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::VROSC::InstrumentEvent*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, processEvent);
}
inline ::VROSC::InstrumentEvent* VROSC::InstrumentEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::InstrumentEvent*>());
}
inline ::VROSC::InstrumentEvent* VROSC::InstrumentEvent::New_ctor(::VROSC::InstrumentEvent*  source)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::InstrumentEvent*>(source));
}
inline ::VROSC::InstrumentEvent* VROSC::InstrumentEvent::New_ctor(::VROSC::InstrumentEvent_EventType  type, ::VROSC::WidgetSettings_Identifier  instrumentID, int32_t  parameterIdOrNote, float_t  noteVelocityOrParameterValue, double_t  dspTime, ::VROSC::HandType  handType, float_t  pitch, float_t  volume)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::InstrumentEvent*>(type, instrumentID, parameterIdOrNote, noteVelocityOrParameterValue, dspTime, handType, pitch, volume));
}
// Ctor Parameters []
constexpr ::VROSC::InstrumentEvent::InstrumentEvent()   {
}
