#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/MidiChunk.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MidiChunk)
namespace Melanchall::DryWetMidi::Core {
class MidiWriter;
}
namespace Melanchall::DryWetMidi::Core {
class WritingSettings;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class MidiChunk;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::MidiChunk);
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.MidiChunk
class CORDL_TYPE MidiChunk : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ChunkId)) ::StringW  ChunkId;

/// @brief Field <ChunkId>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ChunkId_k__BackingField, put=__cordl_internal_set__ChunkId_k__BackingField)) ::StringW  _ChunkId_k__BackingField;

/// @brief Method GetContentSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline uint32_t GetContentSize(::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

static inline ::Melanchall::DryWetMidi::Core::MidiChunk* New_ctor(::StringW  id) ;

/// @brief Method Write, addr 0x259f89c, size 0x58, virtual false, abstract: false, final false
inline void Write(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

/// @brief Method WriteContent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void WriteContent(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

/// @brief Method WriteHeader, addr 0x259f8f4, size 0x38, virtual false, abstract: false, final false
static inline void WriteHeader(::StringW  chunkId, uint32_t  size, ::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

constexpr ::StringW const& __cordl_internal_get__ChunkId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ChunkId_k__BackingField() ;

constexpr void __cordl_internal_set__ChunkId_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x259f544, size 0x170, virtual false, abstract: false, final false
inline void _ctor(::StringW  id) ;

/// @brief Method get_ChunkId, addr 0x259f894, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ChunkId() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MidiChunk() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MidiChunk", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MidiChunk(MidiChunk && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MidiChunk", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MidiChunk(MidiChunk const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11617};

/// @brief Field <ChunkId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____ChunkId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::MidiChunk, ____ChunkId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::MidiChunk, 0x18>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::MidiChunk);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::MidiChunk*, "Melanchall.DryWetMidi.Core", "MidiChunk");
