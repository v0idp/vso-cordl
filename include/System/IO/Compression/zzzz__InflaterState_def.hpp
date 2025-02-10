#pragma once
// IWYU pragma private; include "System/IO/Compression/InflaterState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InflaterState)
// Forward declare root types
namespace System::IO::Compression {
struct InflaterState;
}
// Write type traits
MARK_VAL_T(::System::IO::Compression::InflaterState);
// Dependencies 
namespace System::IO::Compression {
// Is value type: true
// CS Name: System.IO.Compression.InflaterState
struct CORDL_TYPE InflaterState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InflaterState_Unwrapped
enum struct __InflaterState_Unwrapped : int32_t {
__E_ReadingHeader = static_cast<int32_t>(0x0),
__E_ReadingBFinal = static_cast<int32_t>(0x2),
__E_ReadingBType = static_cast<int32_t>(0x3),
__E_ReadingNumLitCodes = static_cast<int32_t>(0x4),
__E_ReadingNumDistCodes = static_cast<int32_t>(0x5),
__E_ReadingNumCodeLengthCodes = static_cast<int32_t>(0x6),
__E_ReadingCodeLengthCodes = static_cast<int32_t>(0x7),
__E_ReadingTreeCodesBefore = static_cast<int32_t>(0x8),
__E_ReadingTreeCodesAfter = static_cast<int32_t>(0x9),
__E_DecodeTop = static_cast<int32_t>(0xa),
__E_HaveInitialLength = static_cast<int32_t>(0xb),
__E_HaveFullLength = static_cast<int32_t>(0xc),
__E_HaveDistCode = static_cast<int32_t>(0xd),
__E_UncompressedAligning = static_cast<int32_t>(0xf),
__E_UncompressedByte1 = static_cast<int32_t>(0x10),
__E_UncompressedByte2 = static_cast<int32_t>(0x11),
__E_UncompressedByte3 = static_cast<int32_t>(0x12),
__E_UncompressedByte4 = static_cast<int32_t>(0x13),
__E_DecodingUncompressed = static_cast<int32_t>(0x14),
__E_StartReadingFooter = static_cast<int32_t>(0x15),
__E_ReadingFooter = static_cast<int32_t>(0x16),
__E_VerifyingFooter = static_cast<int32_t>(0x17),
__E_Done = static_cast<int32_t>(0x18),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InflaterState_Unwrapped () const noexcept {
return static_cast<__InflaterState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InflaterState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InflaterState(int32_t  value__) noexcept;

/// @brief Field DecodeTop value: I32(10)
static ::System::IO::Compression::InflaterState const DecodeTop;

/// @brief Field DecodingUncompressed value: I32(20)
static ::System::IO::Compression::InflaterState const DecodingUncompressed;

/// @brief Field Done value: I32(24)
static ::System::IO::Compression::InflaterState const Done;

/// @brief Field HaveDistCode value: I32(13)
static ::System::IO::Compression::InflaterState const HaveDistCode;

/// @brief Field HaveFullLength value: I32(12)
static ::System::IO::Compression::InflaterState const HaveFullLength;

/// @brief Field HaveInitialLength value: I32(11)
static ::System::IO::Compression::InflaterState const HaveInitialLength;

/// @brief Field ReadingBFinal value: I32(2)
static ::System::IO::Compression::InflaterState const ReadingBFinal;

/// @brief Field ReadingBType value: I32(3)
static ::System::IO::Compression::InflaterState const ReadingBType;

/// @brief Field ReadingCodeLengthCodes value: I32(7)
static ::System::IO::Compression::InflaterState const ReadingCodeLengthCodes;

/// @brief Field ReadingFooter value: I32(22)
static ::System::IO::Compression::InflaterState const ReadingFooter;

/// @brief Field ReadingHeader value: I32(0)
static ::System::IO::Compression::InflaterState const ReadingHeader;

/// @brief Field ReadingNumCodeLengthCodes value: I32(6)
static ::System::IO::Compression::InflaterState const ReadingNumCodeLengthCodes;

/// @brief Field ReadingNumDistCodes value: I32(5)
static ::System::IO::Compression::InflaterState const ReadingNumDistCodes;

/// @brief Field ReadingNumLitCodes value: I32(4)
static ::System::IO::Compression::InflaterState const ReadingNumLitCodes;

/// @brief Field ReadingTreeCodesAfter value: I32(9)
static ::System::IO::Compression::InflaterState const ReadingTreeCodesAfter;

/// @brief Field ReadingTreeCodesBefore value: I32(8)
static ::System::IO::Compression::InflaterState const ReadingTreeCodesBefore;

/// @brief Field StartReadingFooter value: I32(21)
static ::System::IO::Compression::InflaterState const StartReadingFooter;

/// @brief Field UncompressedAligning value: I32(15)
static ::System::IO::Compression::InflaterState const UncompressedAligning;

/// @brief Field UncompressedByte1 value: I32(16)
static ::System::IO::Compression::InflaterState const UncompressedByte1;

/// @brief Field UncompressedByte2 value: I32(17)
static ::System::IO::Compression::InflaterState const UncompressedByte2;

/// @brief Field UncompressedByte3 value: I32(18)
static ::System::IO::Compression::InflaterState const UncompressedByte3;

/// @brief Field UncompressedByte4 value: I32(19)
static ::System::IO::Compression::InflaterState const UncompressedByte4;

/// @brief Field VerifyingFooter value: I32(23)
static ::System::IO::Compression::InflaterState const VerifyingFooter;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11283};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::InflaterState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::InflaterState, 0x4>, "Size mismatch!");

} // namespace end def System::IO::Compression
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::InflaterState, "System.IO.Compression", "InflaterState");
