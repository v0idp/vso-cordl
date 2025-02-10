#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/WritingSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WritingSettings)
namespace Melanchall::DryWetMidi::Core {
class EventTypesCollection;
}
namespace Melanchall::DryWetMidi::Core {
class WriterSettings;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class WritingSettings;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::WritingSettings);
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.WritingSettings
class CORDL_TYPE WritingSettings : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CustomMetaEventTypes)) ::Melanchall::DryWetMidi::Core::EventTypesCollection*  CustomMetaEventTypes;

 __declspec(property(get=get_DeleteDefaultKeySignature)) bool  DeleteDefaultKeySignature;

 __declspec(property(get=get_DeleteDefaultSetTempo)) bool  DeleteDefaultSetTempo;

 __declspec(property(get=get_DeleteDefaultTimeSignature)) bool  DeleteDefaultTimeSignature;

 __declspec(property(get=get_DeleteUnknownChunks)) bool  DeleteUnknownChunks;

 __declspec(property(get=get_DeleteUnknownMetaEvents)) bool  DeleteUnknownMetaEvents;

 __declspec(property(get=get_NoteOffAsSilentNoteOn)) bool  NoteOffAsSilentNoteOn;

 __declspec(property(get=get_UseRunningStatus)) bool  UseRunningStatus;

 __declspec(property(get=get_WriteHeaderChunk)) bool  WriteHeaderChunk;

 __declspec(property(get=get_WriterSettings, put=set_WriterSettings)) ::Melanchall::DryWetMidi::Core::WriterSettings*  WriterSettings;

/// @brief Field <CustomMetaEventTypes>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__CustomMetaEventTypes_k__BackingField, put=__cordl_internal_set__CustomMetaEventTypes_k__BackingField)) ::Melanchall::DryWetMidi::Core::EventTypesCollection*  _CustomMetaEventTypes_k__BackingField;

/// @brief Field <DeleteDefaultKeySignature>k__BackingField, offset 0x13, size 0x1 
 __declspec(property(get=__cordl_internal_get__DeleteDefaultKeySignature_k__BackingField, put=__cordl_internal_set__DeleteDefaultKeySignature_k__BackingField)) bool  _DeleteDefaultKeySignature_k__BackingField;

/// @brief Field <DeleteDefaultSetTempo>k__BackingField, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get__DeleteDefaultSetTempo_k__BackingField, put=__cordl_internal_set__DeleteDefaultSetTempo_k__BackingField)) bool  _DeleteDefaultSetTempo_k__BackingField;

/// @brief Field <DeleteDefaultTimeSignature>k__BackingField, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get__DeleteDefaultTimeSignature_k__BackingField, put=__cordl_internal_set__DeleteDefaultTimeSignature_k__BackingField)) bool  _DeleteDefaultTimeSignature_k__BackingField;

/// @brief Field <DeleteUnknownChunks>k__BackingField, offset 0x16, size 0x1 
 __declspec(property(get=__cordl_internal_get__DeleteUnknownChunks_k__BackingField, put=__cordl_internal_set__DeleteUnknownChunks_k__BackingField)) bool  _DeleteUnknownChunks_k__BackingField;

/// @brief Field <DeleteUnknownMetaEvents>k__BackingField, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get__DeleteUnknownMetaEvents_k__BackingField, put=__cordl_internal_set__DeleteUnknownMetaEvents_k__BackingField)) bool  _DeleteUnknownMetaEvents_k__BackingField;

/// @brief Field <NoteOffAsSilentNoteOn>k__BackingField, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get__NoteOffAsSilentNoteOn_k__BackingField, put=__cordl_internal_set__NoteOffAsSilentNoteOn_k__BackingField)) bool  _NoteOffAsSilentNoteOn_k__BackingField;

/// @brief Field <TextEncoding>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__TextEncoding_k__BackingField, put=__cordl_internal_set__TextEncoding_k__BackingField)) ::System::Text::Encoding*  _TextEncoding_k__BackingField;

/// @brief Field <UseRunningStatus>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__UseRunningStatus_k__BackingField, put=__cordl_internal_set__UseRunningStatus_k__BackingField)) bool  _UseRunningStatus_k__BackingField;

/// @brief Field <WriteHeaderChunk>k__BackingField, offset 0x17, size 0x1 
 __declspec(property(get=__cordl_internal_get__WriteHeaderChunk_k__BackingField, put=__cordl_internal_set__WriteHeaderChunk_k__BackingField)) bool  _WriteHeaderChunk_k__BackingField;

/// @brief Field <WriterSettings>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__WriterSettings_k__BackingField, put=__cordl_internal_set__WriterSettings_k__BackingField)) ::Melanchall::DryWetMidi::Core::WriterSettings*  _WriterSettings_k__BackingField;

static inline ::Melanchall::DryWetMidi::Core::WritingSettings* New_ctor() ;

constexpr ::Melanchall::DryWetMidi::Core::EventTypesCollection* const& __cordl_internal_get__CustomMetaEventTypes_k__BackingField() const;

constexpr ::Melanchall::DryWetMidi::Core::EventTypesCollection*& __cordl_internal_get__CustomMetaEventTypes_k__BackingField() ;

constexpr bool const& __cordl_internal_get__DeleteDefaultKeySignature_k__BackingField() const;

constexpr bool& __cordl_internal_get__DeleteDefaultKeySignature_k__BackingField() ;

constexpr bool const& __cordl_internal_get__DeleteDefaultSetTempo_k__BackingField() const;

constexpr bool& __cordl_internal_get__DeleteDefaultSetTempo_k__BackingField() ;

constexpr bool const& __cordl_internal_get__DeleteDefaultTimeSignature_k__BackingField() const;

constexpr bool& __cordl_internal_get__DeleteDefaultTimeSignature_k__BackingField() ;

constexpr bool const& __cordl_internal_get__DeleteUnknownChunks_k__BackingField() const;

constexpr bool& __cordl_internal_get__DeleteUnknownChunks_k__BackingField() ;

constexpr bool const& __cordl_internal_get__DeleteUnknownMetaEvents_k__BackingField() const;

constexpr bool& __cordl_internal_get__DeleteUnknownMetaEvents_k__BackingField() ;

constexpr bool const& __cordl_internal_get__NoteOffAsSilentNoteOn_k__BackingField() const;

constexpr bool& __cordl_internal_get__NoteOffAsSilentNoteOn_k__BackingField() ;

constexpr ::System::Text::Encoding* const& __cordl_internal_get__TextEncoding_k__BackingField() const;

constexpr ::System::Text::Encoding*& __cordl_internal_get__TextEncoding_k__BackingField() ;

constexpr bool const& __cordl_internal_get__UseRunningStatus_k__BackingField() const;

constexpr bool& __cordl_internal_get__UseRunningStatus_k__BackingField() ;

constexpr bool const& __cordl_internal_get__WriteHeaderChunk_k__BackingField() const;

constexpr bool& __cordl_internal_get__WriteHeaderChunk_k__BackingField() ;

constexpr ::Melanchall::DryWetMidi::Core::WriterSettings* const& __cordl_internal_get__WriterSettings_k__BackingField() const;

constexpr ::Melanchall::DryWetMidi::Core::WriterSettings*& __cordl_internal_get__WriterSettings_k__BackingField() ;

constexpr void __cordl_internal_set__CustomMetaEventTypes_k__BackingField(::Melanchall::DryWetMidi::Core::EventTypesCollection*  value) ;

constexpr void __cordl_internal_set__DeleteDefaultKeySignature_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__DeleteDefaultSetTempo_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__DeleteDefaultTimeSignature_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__DeleteUnknownChunks_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__DeleteUnknownMetaEvents_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__NoteOffAsSilentNoteOn_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__TextEncoding_k__BackingField(::System::Text::Encoding*  value) ;

constexpr void __cordl_internal_set__UseRunningStatus_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__WriteHeaderChunk_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__WriterSettings_k__BackingField(::Melanchall::DryWetMidi::Core::WriterSettings*  value) ;

/// @brief Method .ctor, addr 0x25a4768, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CustomMetaEventTypes, addr 0x25a5190, size 0x8, virtual false, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::EventTypesCollection* get_CustomMetaEventTypes() ;

/// @brief Method get_DeleteDefaultKeySignature, addr 0x25a5168, size 0x8, virtual false, abstract: false, final false
inline bool get_DeleteDefaultKeySignature() ;

/// @brief Method get_DeleteDefaultSetTempo, addr 0x25a5170, size 0x8, virtual false, abstract: false, final false
inline bool get_DeleteDefaultSetTempo() ;

/// @brief Method get_DeleteDefaultTimeSignature, addr 0x25a5160, size 0x8, virtual false, abstract: false, final false
inline bool get_DeleteDefaultTimeSignature() ;

/// @brief Method get_DeleteUnknownChunks, addr 0x25a5180, size 0x8, virtual false, abstract: false, final false
inline bool get_DeleteUnknownChunks() ;

/// @brief Method get_DeleteUnknownMetaEvents, addr 0x25a5178, size 0x8, virtual false, abstract: false, final false
inline bool get_DeleteUnknownMetaEvents() ;

/// @brief Method get_NoteOffAsSilentNoteOn, addr 0x25a5158, size 0x8, virtual false, abstract: false, final false
inline bool get_NoteOffAsSilentNoteOn() ;

/// @brief Method get_UseRunningStatus, addr 0x25a5150, size 0x8, virtual false, abstract: false, final false
inline bool get_UseRunningStatus() ;

/// @brief Method get_WriteHeaderChunk, addr 0x25a5188, size 0x8, virtual false, abstract: false, final false
inline bool get_WriteHeaderChunk() ;

/// @brief Method get_WriterSettings, addr 0x25a5198, size 0x8, virtual false, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::WriterSettings* get_WriterSettings() ;

/// @brief Method set_WriterSettings, addr 0x25a51a0, size 0x8, virtual false, abstract: false, final false
inline void set_WriterSettings(::Melanchall::DryWetMidi::Core::WriterSettings*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WritingSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WritingSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WritingSettings(WritingSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WritingSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WritingSettings(WritingSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11660};

/// @brief Field <UseRunningStatus>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____UseRunningStatus_k__BackingField;

/// @brief Field <NoteOffAsSilentNoteOn>k__BackingField, offset: 0x11, size: 0x1, def value: None
 bool  ____NoteOffAsSilentNoteOn_k__BackingField;

/// @brief Field <DeleteDefaultTimeSignature>k__BackingField, offset: 0x12, size: 0x1, def value: None
 bool  ____DeleteDefaultTimeSignature_k__BackingField;

/// @brief Field <DeleteDefaultKeySignature>k__BackingField, offset: 0x13, size: 0x1, def value: None
 bool  ____DeleteDefaultKeySignature_k__BackingField;

/// @brief Field <DeleteDefaultSetTempo>k__BackingField, offset: 0x14, size: 0x1, def value: None
 bool  ____DeleteDefaultSetTempo_k__BackingField;

/// @brief Field <DeleteUnknownMetaEvents>k__BackingField, offset: 0x15, size: 0x1, def value: None
 bool  ____DeleteUnknownMetaEvents_k__BackingField;

/// @brief Field <DeleteUnknownChunks>k__BackingField, offset: 0x16, size: 0x1, def value: None
 bool  ____DeleteUnknownChunks_k__BackingField;

/// @brief Field <WriteHeaderChunk>k__BackingField, offset: 0x17, size: 0x1, def value: None
 bool  ____WriteHeaderChunk_k__BackingField;

/// @brief Field <CustomMetaEventTypes>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Melanchall::DryWetMidi::Core::EventTypesCollection*  ____CustomMetaEventTypes_k__BackingField;

/// @brief Field <TextEncoding>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Text::Encoding*  ____TextEncoding_k__BackingField;

/// @brief Field <WriterSettings>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Melanchall::DryWetMidi::Core::WriterSettings*  ____WriterSettings_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::WritingSettings, ____UseRunningStatus_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::WritingSettings, ____NoteOffAsSilentNoteOn_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::WritingSettings, ____DeleteDefaultTimeSignature_k__BackingField) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::WritingSettings, ____DeleteDefaultKeySignature_k__BackingField) == 0x13, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::WritingSettings, ____DeleteDefaultSetTempo_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::WritingSettings, ____DeleteUnknownMetaEvents_k__BackingField) == 0x15, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::WritingSettings, ____DeleteUnknownChunks_k__BackingField) == 0x16, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::WritingSettings, ____WriteHeaderChunk_k__BackingField) == 0x17, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::WritingSettings, ____CustomMetaEventTypes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::WritingSettings, ____TextEncoding_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::WritingSettings, ____WriterSettings_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::WritingSettings, 0x30>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::WritingSettings);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::WritingSettings*, "Melanchall.DryWetMidi.Core", "WritingSettings");
