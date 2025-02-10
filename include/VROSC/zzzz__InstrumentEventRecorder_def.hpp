#pragma once
// IWYU pragma private; include "VROSC/InstrumentEventRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InstrumentEventRecorder)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace VROSC {
class InstrumentEventRecorder___c__DisplayClass7_0;
}
namespace VROSC {
class InstrumentEventRecorder___c__DisplayClass8_0;
}
namespace VROSC {
class InstrumentEvent;
}
namespace VROSC {
struct WidgetSettings_Identifier;
}
// Forward declare root types
namespace VROSC {
class InstrumentEventRecorder;
}
namespace VROSC {
class InstrumentEventRecorder___c__DisplayClass7_0;
}
namespace VROSC {
class InstrumentEventRecorder___c__DisplayClass8_0;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InstrumentEventRecorder);
MARK_REF_PTR_T(::VROSC::InstrumentEventRecorder___c__DisplayClass7_0);
MARK_REF_PTR_T(::VROSC::InstrumentEventRecorder___c__DisplayClass8_0);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InstrumentEventRecorder/<>c__DisplayClass7_0
class CORDL_TYPE InstrumentEventRecorder___c__DisplayClass7_0 : public ::System::Object {
public:
// Declarations
/// @brief Field instrumentEvent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_instrumentEvent, put=__cordl_internal_set_instrumentEvent)) ::VROSC::InstrumentEvent*  instrumentEvent;

static inline ::VROSC::InstrumentEventRecorder___c__DisplayClass7_0* New_ctor() ;

/// @brief Method <RecordInstrumentEvent>b__0, addr 0x17cf200, size 0x2c, virtual false, abstract: false, final false
inline bool _RecordInstrumentEvent_b__0(::VROSC::InstrumentEvent*  e) ;

constexpr ::VROSC::InstrumentEvent* const& __cordl_internal_get_instrumentEvent() const;

constexpr ::VROSC::InstrumentEvent*& __cordl_internal_get_instrumentEvent() ;

constexpr void __cordl_internal_set_instrumentEvent(::VROSC::InstrumentEvent*  value) ;

/// @brief Method .ctor, addr 0x17cef2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstrumentEventRecorder___c__DisplayClass7_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstrumentEventRecorder___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstrumentEventRecorder___c__DisplayClass7_0(InstrumentEventRecorder___c__DisplayClass7_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstrumentEventRecorder___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstrumentEventRecorder___c__DisplayClass7_0(InstrumentEventRecorder___c__DisplayClass7_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{296};

/// @brief Field instrumentEvent, offset: 0x10, size: 0x8, def value: None
 ::VROSC::InstrumentEvent*  ___instrumentEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InstrumentEventRecorder___c__DisplayClass7_0, ___instrumentEvent) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InstrumentEventRecorder___c__DisplayClass7_0, 0x18>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InstrumentEventRecorder/<>c__DisplayClass8_0
class CORDL_TYPE InstrumentEventRecorder___c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief Field sampleGroupNames, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sampleGroupNames, put=__cordl_internal_set_sampleGroupNames)) ::System::Collections::Generic::HashSet_1<::StringW>*  sampleGroupNames;

/// @brief Field sampleNames, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sampleNames, put=__cordl_internal_set_sampleNames)) ::System::Collections::Generic::HashSet_1<::StringW>*  sampleNames;

static inline ::VROSC::InstrumentEventRecorder___c__DisplayClass8_0* New_ctor() ;

/// @brief Method <GetSpecifiedSampleOrGroupName>b__0, addr 0x17cf22c, size 0xb4, virtual false, abstract: false, final false
inline void _GetSpecifiedSampleOrGroupName_b__0(::VROSC::InstrumentEvent*  instrumentEvent) ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get_sampleGroupNames() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get_sampleGroupNames() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get_sampleNames() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get_sampleNames() ;

constexpr void __cordl_internal_set_sampleGroupNames(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_sampleNames(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x17cf104, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstrumentEventRecorder___c__DisplayClass8_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstrumentEventRecorder___c__DisplayClass8_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstrumentEventRecorder___c__DisplayClass8_0(InstrumentEventRecorder___c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstrumentEventRecorder___c__DisplayClass8_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstrumentEventRecorder___c__DisplayClass8_0(InstrumentEventRecorder___c__DisplayClass8_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{297};

/// @brief Field sampleNames, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ___sampleNames;

/// @brief Field sampleGroupNames, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ___sampleGroupNames;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InstrumentEventRecorder___c__DisplayClass8_0, ___sampleNames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentEventRecorder___c__DisplayClass8_0, ___sampleGroupNames) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InstrumentEventRecorder___c__DisplayClass8_0, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies System.Object, VROSC.WidgetSettings::Identifier
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InstrumentEventRecorder
class CORDL_TYPE InstrumentEventRecorder : public ::System::Object {
public:
// Declarations
using __c__DisplayClass7_0 = ::VROSC::InstrumentEventRecorder___c__DisplayClass7_0;

using __c__DisplayClass8_0 = ::VROSC::InstrumentEventRecorder___c__DisplayClass8_0;

/// @brief Field _lastRecordedEventDspTime, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__lastRecordedEventDspTime, put=setStaticF__lastRecordedEventDspTime)) double_t  _lastRecordedEventDspTime;

/// @brief Field _openNoteEvents, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__openNoteEvents, put=setStaticF__openNoteEvents)) ::System::Collections::Generic::List_1<::VROSC::InstrumentEvent*>*  _openNoteEvents;

/// @brief Field _recordedInstrumentEventData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__recordedInstrumentEventData, put=setStaticF__recordedInstrumentEventData)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _recordedInstrumentEventData;

/// @brief Field _recordingInstrumentId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__recordingInstrumentId, put=setStaticF__recordingInstrumentId)) ::VROSC::WidgetSettings_Identifier  _recordingInstrumentId;

/// @brief Field _recordingStartTime, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__recordingStartTime, put=setStaticF__recordingStartTime)) double_t  _recordingStartTime;

/// @brief Method GetSpecifiedSampleOrGroupName, addr 0x17cef34, size 0x1d0, virtual false, abstract: false, final false
static inline ::StringW GetSpecifiedSampleOrGroupName() ;

/// @brief Method RecordInstrumentEvent, addr 0x17cebb4, size 0x378, virtual false, abstract: false, final false
static inline void RecordInstrumentEvent(::VROSC::InstrumentEvent*  instrumentEvent) ;

/// @brief Method StartInstrumentEventRecording, addr 0x17ce6f4, size 0x1ac, virtual false, abstract: false, final false
static inline void StartInstrumentEventRecording(::VROSC::WidgetSettings_Identifier  instrumentId) ;

/// @brief Method StopInstrumentEventRecording, addr 0x17ce8a0, size 0x314, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> StopInstrumentEventRecording() ;

static inline double_t getStaticF__lastRecordedEventDspTime() ;

static inline ::System::Collections::Generic::List_1<::VROSC::InstrumentEvent*>* getStaticF__openNoteEvents() ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF__recordedInstrumentEventData() ;

static inline ::VROSC::WidgetSettings_Identifier getStaticF__recordingInstrumentId() ;

static inline double_t getStaticF__recordingStartTime() ;

static inline void setStaticF__lastRecordedEventDspTime(double_t  value) ;

static inline void setStaticF__openNoteEvents(::System::Collections::Generic::List_1<::VROSC::InstrumentEvent*>*  value) ;

static inline void setStaticF__recordedInstrumentEventData(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline void setStaticF__recordingInstrumentId(::VROSC::WidgetSettings_Identifier  value) ;

static inline void setStaticF__recordingStartTime(double_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstrumentEventRecorder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstrumentEventRecorder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstrumentEventRecorder(InstrumentEventRecorder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstrumentEventRecorder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstrumentEventRecorder(InstrumentEventRecorder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{298};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::InstrumentEventRecorder, 0x10>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InstrumentEventRecorder);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentEventRecorder*, "VROSC", "InstrumentEventRecorder");
NEED_NO_BOX(::VROSC::InstrumentEventRecorder___c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentEventRecorder___c__DisplayClass7_0*, "VROSC", "InstrumentEventRecorder/<>c__DisplayClass7_0");
NEED_NO_BOX(::VROSC::InstrumentEventRecorder___c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentEventRecorder___c__DisplayClass8_0*, "VROSC", "InstrumentEventRecorder/<>c__DisplayClass8_0");
