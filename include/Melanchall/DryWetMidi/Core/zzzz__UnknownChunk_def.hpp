#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/UnknownChunk.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Melanchall/DryWetMidi/Core/zzzz__MidiChunk_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnknownChunk)
namespace Melanchall::DryWetMidi::Core {
class MidiWriter;
}
namespace Melanchall::DryWetMidi::Core {
class WritingSettings;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
class UnknownChunk;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Core::UnknownChunk);
// Dependencies Melanchall.DryWetMidi.Core.MidiChunk
namespace Melanchall::DryWetMidi::Core {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Core.UnknownChunk
class CORDL_TYPE UnknownChunk : public ::Melanchall::DryWetMidi::Core::MidiChunk {
public:
// Declarations
 __declspec(property(get=get_Data)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Data;

/// @brief Field <Data>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Data_k__BackingField, put=__cordl_internal_set__Data_k__BackingField)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _Data_k__BackingField;

/// @brief Method GetContentSize, addr 0x25a0d74, size 0x18, virtual true, abstract: false, final false
inline uint32_t GetContentSize(::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

/// @brief Method WriteContent, addr 0x25a0cd8, size 0x2c, virtual true, abstract: false, final false
inline void WriteContent(::Melanchall::DryWetMidi::Core::MidiWriter*  writer, ::Melanchall::DryWetMidi::Core::WritingSettings*  settings) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__Data_k__BackingField() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__Data_k__BackingField() ;

constexpr void __cordl_internal_set__Data_k__BackingField(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method get_Data, addr 0x25a0cd0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_Data() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnknownChunk() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnknownChunk", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnknownChunk(UnknownChunk && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnknownChunk", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnknownChunk(UnknownChunk const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11621};

/// @brief Field <Data>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____Data_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::UnknownChunk, ____Data_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::UnknownChunk, 0x20>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
NEED_NO_BOX(::Melanchall::DryWetMidi::Core::UnknownChunk);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::UnknownChunk*, "Melanchall.DryWetMidi.Core", "UnknownChunk");
