#pragma once
// IWYU pragma private; include "System/IO/Compression/ZipVersionNeededValues.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZipVersionNeededValues)
// Forward declare root types
namespace System::IO::Compression {
struct ZipVersionNeededValues;
}
// Write type traits
MARK_VAL_T(::System::IO::Compression::ZipVersionNeededValues);
// Dependencies 
namespace System::IO::Compression {
// Is value type: true
// CS Name: System.IO.Compression.ZipVersionNeededValues
struct CORDL_TYPE ZipVersionNeededValues {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint16_t;

/// @brief Nested struct __ZipVersionNeededValues_Unwrapped
enum struct __ZipVersionNeededValues_Unwrapped : uint16_t {
__E_Default = static_cast<uint16_t>(0xau),
__E_ExplicitDirectory = static_cast<uint16_t>(0x14u),
__E_Deflate = static_cast<uint16_t>(0x14u),
__E_Deflate64 = static_cast<uint16_t>(0x15u),
__E_Zip64 = static_cast<uint16_t>(0x2du),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ZipVersionNeededValues_Unwrapped () const noexcept {
return static_cast<__ZipVersionNeededValues_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint16_t () const noexcept {
return static_cast<uint16_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ZipVersionNeededValues() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr ZipVersionNeededValues(uint16_t  value__) noexcept;

/// @brief Field Default value: U16(10)
static ::System::IO::Compression::ZipVersionNeededValues const Default;

/// @brief Field Deflate value: U16(20)
static ::System::IO::Compression::ZipVersionNeededValues const Deflate;

/// @brief Field Deflate64 value: U16(21)
static ::System::IO::Compression::ZipVersionNeededValues const Deflate64;

/// @brief Field ExplicitDirectory value: U16(20)
static ::System::IO::Compression::ZipVersionNeededValues const ExplicitDirectory;

/// @brief Field Zip64 value: U16(45)
static ::System::IO::Compression::ZipVersionNeededValues const Zip64;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11309};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x0, size: 0x2, def value: None
 uint16_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::ZipVersionNeededValues, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::ZipVersionNeededValues, 0x2>, "Size mismatch!");

} // namespace end def System::IO::Compression
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::ZipVersionNeededValues, "System.IO.Compression", "ZipVersionNeededValues");
