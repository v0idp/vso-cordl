#pragma once
// IWYU pragma private; include "Melanchall/DryWetMidi/Common/DataTypesUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataTypesUtilities)
namespace Melanchall::DryWetMidi::Common {
struct SevenBitNumber;
}
// Forward declare root types
namespace Melanchall::DryWetMidi::Common {
class DataTypesUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Melanchall::DryWetMidi::Common::DataTypesUtilities);
// Dependencies System.Object
namespace Melanchall::DryWetMidi::Common {
// Is value type: false
// CS Name: Melanchall.DryWetMidi.Common.DataTypesUtilities
class CORDL_TYPE DataTypesUtilities : public ::System::Object {
public:
// Declarations
/// @brief Method CombineAsFourBitNumbers, addr 0x25a31c8, size 0x8, virtual false, abstract: false, final false
static inline uint8_t CombineAsFourBitNumbers(uint8_t  head, uint8_t  tail) ;

/// @brief Method CombineAsSevenBitNumbers, addr 0x25a2100, size 0x10, virtual false, abstract: false, final false
static inline uint16_t CombineAsSevenBitNumbers(uint8_t  head, uint8_t  tail) ;

/// @brief Method GetHead, addr 0x25a2210, size 0x6c, virtual false, abstract: false, final false
static inline ::Melanchall::DryWetMidi::Common::SevenBitNumber GetHead(uint16_t  number) ;

/// @brief Method GetTail, addr 0x25a2198, size 0x78, virtual false, abstract: false, final false
static inline ::Melanchall::DryWetMidi::Common::SevenBitNumber GetTail(uint16_t  number) ;

/// @brief Method GetVlqBytes, addr 0x25a4aac, size 0x7c, virtual false, abstract: false, final false
static inline int32_t GetVlqBytes(int64_t  number, ::ArrayW<uint8_t,::Array<uint8_t>*>  buffer) ;

/// @brief Method GetVlqLength, addr 0x25a3594, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetVlqLength(int32_t  number) ;

/// @brief Method GetVlqLength, addr 0x25a0b28, size 0x94, virtual false, abstract: false, final false
static inline int32_t GetVlqLength(int64_t  number) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DataTypesUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DataTypesUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DataTypesUtilities(DataTypesUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DataTypesUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DataTypesUtilities(DataTypesUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11661};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Melanchall::DryWetMidi::Common::DataTypesUtilities, 0x10>, "Size mismatch!");

} // namespace end def Melanchall::DryWetMidi::Common
NEED_NO_BOX(::Melanchall::DryWetMidi::Common::DataTypesUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Melanchall::DryWetMidi::Common::DataTypesUtilities*, "Melanchall.DryWetMidi.Common", "DataTypesUtilities");
