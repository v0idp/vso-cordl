#pragma once
// IWYU pragma private; include "System/IO/Compression/CompressionLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompressionLevel)
// Forward declare root types
namespace System::IO::Compression {
struct CompressionLevel;
}
// Write type traits
MARK_VAL_T(::System::IO::Compression::CompressionLevel);
// Dependencies 
namespace System::IO::Compression {
// Is value type: true
// CS Name: System.IO.Compression.CompressionLevel
struct CORDL_TYPE CompressionLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CompressionLevel_Unwrapped
enum struct __CompressionLevel_Unwrapped : int32_t {
__E_Optimal = static_cast<int32_t>(0x0),
__E_Fastest = static_cast<int32_t>(0x1),
__E_NoCompression = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CompressionLevel_Unwrapped () const noexcept {
return static_cast<__CompressionLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CompressionLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CompressionLevel(int32_t  value__) noexcept;

/// @brief Field Fastest value: I32(1)
static ::System::IO::Compression::CompressionLevel const Fastest;

/// @brief Field NoCompression value: I32(2)
static ::System::IO::Compression::CompressionLevel const NoCompression;

/// @brief Field Optimal value: I32(0)
static ::System::IO::Compression::CompressionLevel const Optimal;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7741};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::CompressionLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::CompressionLevel, 0x4>, "Size mismatch!");

} // namespace end def System::IO::Compression
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::CompressionLevel, "System.IO.Compression", "CompressionLevel");
