#pragma once
// IWYU pragma private; include "VROSC/InstrumentEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstrumentEvent)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace VROSC {
struct HandType;
}
namespace VROSC {
struct InstrumentEvent_EventType;
}
namespace VROSC {
class InstrumentEvent___c__DisplayClass17_0;
}
namespace VROSC {
struct WidgetSettings_Identifier;
}
// Forward declare root types
namespace VROSC {
struct InstrumentEvent_EventType;
}
namespace VROSC {
class InstrumentEvent;
}
namespace VROSC {
class InstrumentEvent___c__DisplayClass17_0;
}
// Write type traits
MARK_VAL_T(::VROSC::InstrumentEvent_EventType);
MARK_REF_PTR_T(::VROSC::InstrumentEvent);
MARK_REF_PTR_T(::VROSC::InstrumentEvent___c__DisplayClass17_0);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.InstrumentEvent/EventType
struct CORDL_TYPE InstrumentEvent_EventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InstrumentEvent_EventType_Unwrapped
enum struct __InstrumentEvent_EventType_Unwrapped : int32_t {
__E_Note = static_cast<int32_t>(0x0),
__E_Parameter = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InstrumentEvent_EventType_Unwrapped () const noexcept {
return static_cast<__InstrumentEvent_EventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InstrumentEvent_EventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InstrumentEvent_EventType(int32_t  value__) noexcept;

/// @brief Field Note value: I32(0)
static ::VROSC::InstrumentEvent_EventType const Note;

/// @brief Field Parameter value: I32(1)
static ::VROSC::InstrumentEvent_EventType const Parameter;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{386};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InstrumentEvent_EventType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InstrumentEvent_EventType, 0x4>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InstrumentEvent/<>c__DisplayClass17_0
class CORDL_TYPE InstrumentEvent___c__DisplayClass17_0 : public ::System::Object {
public:
// Declarations
/// @brief Field events, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_events, put=__cordl_internal_set_events)) ::System::Collections::Generic::List_1<::VROSC::InstrumentEvent*>*  events;

static inline ::VROSC::InstrumentEvent___c__DisplayClass17_0* New_ctor() ;

/// @brief Method <DeserializeInstrumentEvents>b__0, addr 0x183e0b8, size 0xa4, virtual false, abstract: false, final false
inline void _DeserializeInstrumentEvents_b__0(::VROSC::InstrumentEvent*  instrumentEvent) ;

constexpr ::System::Collections::Generic::List_1<::VROSC::InstrumentEvent*>* const& __cordl_internal_get_events() const;

constexpr ::System::Collections::Generic::List_1<::VROSC::InstrumentEvent*>*& __cordl_internal_get_events() ;

constexpr void __cordl_internal_set_events(::System::Collections::Generic::List_1<::VROSC::InstrumentEvent*>*  value) ;

/// @brief Method .ctor, addr 0x183dc5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstrumentEvent___c__DisplayClass17_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstrumentEvent___c__DisplayClass17_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstrumentEvent___c__DisplayClass17_0(InstrumentEvent___c__DisplayClass17_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstrumentEvent___c__DisplayClass17_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstrumentEvent___c__DisplayClass17_0(InstrumentEvent___c__DisplayClass17_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{387};

/// @brief Field events, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VROSC::InstrumentEvent*>*  ___events;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InstrumentEvent___c__DisplayClass17_0, ___events) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InstrumentEvent___c__DisplayClass17_0, 0x18>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object, VROSC.HandType, VROSC.InstrumentEvent::EventType, VROSC.WidgetSettings::Identifier
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InstrumentEvent
class CORDL_TYPE InstrumentEvent : public ::System::Object {
public:
// Declarations
using EventType = ::VROSC::InstrumentEvent_EventType;

using __c__DisplayClass17_0 = ::VROSC::InstrumentEvent___c__DisplayClass17_0;

/// @brief Field DspTime, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_DspTime, put=__cordl_internal_set_DspTime)) double_t  DspTime;

/// @brief Field HandType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_HandType, put=__cordl_internal_set_HandType)) ::VROSC::HandType  HandType;

/// @brief Field InstrumentID, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_InstrumentID, put=__cordl_internal_set_InstrumentID)) ::VROSC::WidgetSettings_Identifier  InstrumentID;

/// @brief Field NoteVelocityOrParameterValue, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_NoteVelocityOrParameterValue, put=__cordl_internal_set_NoteVelocityOrParameterValue)) float_t  NoteVelocityOrParameterValue;

/// @brief Field ParameterIdOrNote, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_ParameterIdOrNote, put=__cordl_internal_set_ParameterIdOrNote)) int32_t  ParameterIdOrNote;

/// @brief Field Pitch, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Pitch, put=__cordl_internal_set_Pitch)) float_t  Pitch;

/// @brief Field Type, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::VROSC::InstrumentEvent_EventType  Type;

/// @brief Field Volume, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_Volume, put=__cordl_internal_set_Volume)) float_t  Volume;

/// @brief Method DeserializeInstrumentEvents, addr 0x183db48, size 0x114, virtual false, abstract: false, final false
static inline ::ArrayW<::VROSC::InstrumentEvent*,::Array<::VROSC::InstrumentEvent*>*> DeserializeInstrumentEvents(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method GetSampleDisplayName, addr 0x183d6f8, size 0x28, virtual false, abstract: false, final false
inline ::StringW GetSampleDisplayName() ;

/// @brief Method GetSampleGroupDisplayName, addr 0x183d720, size 0x28, virtual false, abstract: false, final false
inline ::StringW GetSampleGroupDisplayName() ;

/// @brief Method GetSampleGroupNoteNumber, addr 0x183d748, size 0x28, virtual false, abstract: false, final false
inline int32_t GetSampleGroupNoteNumber() ;

static inline ::VROSC::InstrumentEvent* New_ctor() ;

static inline ::VROSC::InstrumentEvent* New_ctor(::VROSC::InstrumentEvent*  source) ;

static inline ::VROSC::InstrumentEvent* New_ctor(::VROSC::InstrumentEvent_EventType  type, ::VROSC::WidgetSettings_Identifier  instrumentID, int32_t  parameterIdOrNote, float_t  noteVelocityOrParameterValue, double_t  dspTime, ::VROSC::HandType  handType, float_t  pitch, float_t  volume) ;

/// @brief Method ProcessInstrumentEvents, addr 0x183dc64, size 0x454, virtual false, abstract: false, final false
static inline void ProcessInstrumentEvents(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ::System::Action_1<::VROSC::InstrumentEvent*>*  processEvent) ;

/// @brief Method SerializeInstrumentEvent, addr 0x183d770, size 0x3d8, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> SerializeInstrumentEvent(::VROSC::InstrumentEvent*  instrumentEvent) ;

/// @brief Method SetDspTime, addr 0x183d6f0, size 0x8, virtual false, abstract: false, final false
inline void SetDspTime(double_t  dspTime) ;

constexpr double_t const& __cordl_internal_get_DspTime() const;

constexpr double_t& __cordl_internal_get_DspTime() ;

constexpr ::VROSC::HandType const& __cordl_internal_get_HandType() const;

constexpr ::VROSC::HandType& __cordl_internal_get_HandType() ;

constexpr ::VROSC::WidgetSettings_Identifier const& __cordl_internal_get_InstrumentID() const;

constexpr ::VROSC::WidgetSettings_Identifier& __cordl_internal_get_InstrumentID() ;

constexpr float_t const& __cordl_internal_get_NoteVelocityOrParameterValue() const;

constexpr float_t& __cordl_internal_get_NoteVelocityOrParameterValue() ;

constexpr int32_t const& __cordl_internal_get_ParameterIdOrNote() const;

constexpr int32_t& __cordl_internal_get_ParameterIdOrNote() ;

constexpr float_t const& __cordl_internal_get_Pitch() const;

constexpr float_t& __cordl_internal_get_Pitch() ;

constexpr ::VROSC::InstrumentEvent_EventType const& __cordl_internal_get_Type() const;

constexpr ::VROSC::InstrumentEvent_EventType& __cordl_internal_get_Type() ;

constexpr float_t const& __cordl_internal_get_Volume() const;

constexpr float_t& __cordl_internal_get_Volume() ;

constexpr void __cordl_internal_set_DspTime(double_t  value) ;

constexpr void __cordl_internal_set_HandType(::VROSC::HandType  value) ;

constexpr void __cordl_internal_set_InstrumentID(::VROSC::WidgetSettings_Identifier  value) ;

constexpr void __cordl_internal_set_NoteVelocityOrParameterValue(float_t  value) ;

constexpr void __cordl_internal_set_ParameterIdOrNote(int32_t  value) ;

constexpr void __cordl_internal_set_Pitch(float_t  value) ;

constexpr void __cordl_internal_set_Type(::VROSC::InstrumentEvent_EventType  value) ;

constexpr void __cordl_internal_set_Volume(float_t  value) ;

/// @brief Method .ctor, addr 0x183d604, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x183d614, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::VROSC::InstrumentEvent*  source) ;

/// @brief Method .ctor, addr 0x183d678, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::VROSC::InstrumentEvent_EventType  type, ::VROSC::WidgetSettings_Identifier  instrumentID, int32_t  parameterIdOrNote, float_t  noteVelocityOrParameterValue, double_t  dspTime, ::VROSC::HandType  handType, float_t  pitch, float_t  volume) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstrumentEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstrumentEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstrumentEvent(InstrumentEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstrumentEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstrumentEvent(InstrumentEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{388};

/// @brief Field Type, offset: 0x10, size: 0x4, def value: None
 ::VROSC::InstrumentEvent_EventType  ___Type;

/// @brief Field InstrumentID, offset: 0x14, size: 0x4, def value: None
 ::VROSC::WidgetSettings_Identifier  ___InstrumentID;

/// @brief Field ParameterIdOrNote, offset: 0x18, size: 0x4, def value: None
 int32_t  ___ParameterIdOrNote;

/// @brief Field NoteVelocityOrParameterValue, offset: 0x1c, size: 0x4, def value: None
 float_t  ___NoteVelocityOrParameterValue;

/// @brief Field DspTime, offset: 0x20, size: 0x8, def value: None
 double_t  ___DspTime;

/// @brief Field HandType, offset: 0x28, size: 0x4, def value: None
 ::VROSC::HandType  ___HandType;

/// @brief Field Pitch, offset: 0x2c, size: 0x4, def value: None
 float_t  ___Pitch;

/// @brief Field Volume, offset: 0x30, size: 0x4, def value: None
 float_t  ___Volume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InstrumentEvent, ___Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentEvent, ___InstrumentID) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentEvent, ___ParameterIdOrNote) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentEvent, ___NoteVelocityOrParameterValue) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentEvent, ___DspTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentEvent, ___HandType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentEvent, ___Pitch) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentEvent, ___Volume) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InstrumentEvent, 0x38>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentEvent_EventType, "VROSC", "InstrumentEvent/EventType");
NEED_NO_BOX(::VROSC::InstrumentEvent);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentEvent*, "VROSC", "InstrumentEvent");
NEED_NO_BOX(::VROSC::InstrumentEvent___c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentEvent___c__DisplayClass17_0*, "VROSC", "InstrumentEvent/<>c__DisplayClass17_0");
