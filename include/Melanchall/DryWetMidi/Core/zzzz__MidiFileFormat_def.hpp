#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Core/MidiFileFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MidiFileFormat)
// Forward declare root types
namespace Melanchall::DryWetMidi::Core {
struct MidiFileFormat;
}
// Write type traits
MARK_VAL_T(::Melanchall::DryWetMidi::Core::MidiFileFormat);
// Dependencies 
namespace Melanchall::DryWetMidi::Core {
// Is value type: true
// CS Name: Melanchall.DryWetMidi.Core.MidiFileFormat
struct CORDL_TYPE MidiFileFormat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint16_t;

/// @brief Nested struct __MidiFileFormat_Unwrapped
enum struct __MidiFileFormat_Unwrapped : uint16_t {
__E_SingleTrack = static_cast<uint16_t>(0x0u),
__E_MultiTrack = static_cast<uint16_t>(0x1u),
__E_MultiSequence = static_cast<uint16_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MidiFileFormat_Unwrapped () const noexcept {
return static_cast<__MidiFileFormat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint16_t () const noexcept {
return static_cast<uint16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MidiFileFormat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr MidiFileFormat(uint16_t  value__) noexcept;

/// @brief Field MultiSequence value: U16(2)
static ::Melanchall::DryWetMidi::Core::MidiFileFormat const MultiSequence;

/// @brief Field MultiTrack value: U16(1)
static ::Melanchall::DryWetMidi::Core::MidiFileFormat const MultiTrack;

/// @brief Field SingleTrack value: U16(0)
static ::Melanchall::DryWetMidi::Core::MidiFileFormat const SingleTrack;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11653};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x0, size: 0x2, def value: None
 uint16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Melanchall::DryWetMidi::Core::MidiFileFormat, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Core::MidiFileFormat, 0x2>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Core
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Core::MidiFileFormat, "Melanchall.DryWetMidi.Core", "MidiFileFormat");
