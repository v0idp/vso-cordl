#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/HeaderChunk.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Core/zzzz__MidiChunk_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HeaderChunk)
namespace Melanchall::DryWetMidi::Core {
class MidiWriter;
}
namespace Melanchall::DryWetMidi::Core {
class TimeDivision;
}
namespace Melanchall::DryWetMidi::Core {
class WritingSettings;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class HeaderChunk;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::HeaderChunk);
// Dependencies Melanchall.DryWetMidi.Core.MidiChunk
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.HeaderChunk
class CORDL_TYPE HeaderChunk : public ::Melanchall::DryWetMidi::Core::MidiChunk {
public:
// Declarations
 __declspec(property(get=get_FileFormat, put=set_FileFormat)) uint16_t  FileFormat;

 __declspec(property(get=get_TimeDivision, put=set_TimeDivision)) ::Melanchall::DryWetMidi::Core::TimeDivision*  TimeDivision;

 __declspec(property(get=get_TracksNumber, put=set_TracksNumber)) uint16_t  TracksNumber;

/// @brief Field <FileFormat>k__BackingField, offset 0x18, size 0x2 
 __declspec(property(get=__cordl_internal_get__FileFormat_k__BackingField, put=__cordl_internal_set__FileFormat_k__BackingField)) uint16_t  _FileFormat_k__BackingField;

/// @brief Field <TimeDivision>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__TimeDivision_k__BackingField, put=__cordl_internal_set__TimeDivision_k__BackingField)) ::Melanchall::DryWetMidi::Core::TimeDivision*  _TimeDivision_k__BackingField;

/// @brief Field <TracksNumber>k__BackingField, offset 0x28, size 0x2 
 __declspec(property(get=__cordl_internal_get__TracksNumber_k__BackingField, put=__cordl_internal_set__TracksNumber_k__BackingField)) uint16_t  _TracksNumber_k__BackingField;

/// @brief Method GetContentSize, addr 0x259f88c, size 0x8, virtual true, abstract: false, final false
inline uint32_t GetContentSize(::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

static inline ::Melanchall::DryWetMidi::Core::HeaderChunk* New_ctor() ;

/// @brief Method ToString, addr 0x259f6e4, size 0xb0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method WriteContent, addr 0x259f794, size 0x58, virtual true, abstract: false, final false
inline void WriteContent(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

constexpr uint16_t const& __cordl_internal_get__FileFormat_k__BackingField() const;

constexpr uint16_t& __cordl_internal_get__FileFormat_k__BackingField() ;

constexpr ::Melanchall::DryWetMidi::Core::TimeDivision* const& __cordl_internal_get__TimeDivision_k__BackingField() const;

constexpr ::Melanchall::DryWetMidi::Core::TimeDivision*& __cordl_internal_get__TimeDivision_k__BackingField() ;

constexpr uint16_t const& __cordl_internal_get__TracksNumber_k__BackingField() const;

constexpr uint16_t& __cordl_internal_get__TracksNumber_k__BackingField() ;

constexpr void __cordl_internal_set__FileFormat_k__BackingField(uint16_t  value) ;

constexpr void __cordl_internal_set__TimeDivision_k__BackingField(::Melanchall::DryWetMidi::Core::TimeDivision*  value) ;

constexpr void __cordl_internal_set__TracksNumber_k__BackingField(uint16_t  value) ;

/// @brief Method .ctor, addr 0x259f4fc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FileFormat, addr 0x259f6b4, size 0x8, virtual false, abstract: false, final false
inline uint16_t get_FileFormat() ;

/// @brief Method get_TimeDivision, addr 0x259f6c4, size 0x8, virtual false, abstract: false, final false
inline ::Melanchall::DryWetMidi::Core::TimeDivision* get_TimeDivision() ;

/// @brief Method get_TracksNumber, addr 0x259f6d4, size 0x8, virtual false, abstract: false, final false
inline uint16_t get_TracksNumber() ;

/// @brief Method set_FileFormat, addr 0x259f6bc, size 0x8, virtual false, abstract: false, final false
inline void set_FileFormat(uint16_t  value) ;

/// @brief Method set_TimeDivision, addr 0x259f6cc, size 0x8, virtual false, abstract: false, final false
inline void set_TimeDivision(::Melanchall::DryWetMidi::Core::TimeDivision*  value) ;

/// @brief Method set_TracksNumber, addr 0x259f6dc, size 0x8, virtual false, abstract: false, final false
inline void set_TracksNumber(uint16_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HeaderChunk() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HeaderChunk", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HeaderChunk(HeaderChunk && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HeaderChunk", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HeaderChunk(HeaderChunk const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11616};

/// @brief Field <FileFormat>k__BackingField, offset: 0x18, size: 0x2, def value: None
 uint16_t  ____FileFormat_k__BackingField;

/// @brief Field <TimeDivision>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Melanchall::DryWetMidi::Core::TimeDivision*  ____TimeDivision_k__BackingField;

/// @brief Field <TracksNumber>k__BackingField, offset: 0x28, size: 0x2, def value: None
 uint16_t  ____TracksNumber_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::HeaderChunk, ____FileFormat_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::HeaderChunk, ____TimeDivision_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Melanchall::DryWetMidi::Core::HeaderChunk, ____TracksNumber_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::HeaderChunk, 0x30>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::HeaderChunk);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::HeaderChunk*, "Melanchall.DryWetMidi.Core", "HeaderChunk");
