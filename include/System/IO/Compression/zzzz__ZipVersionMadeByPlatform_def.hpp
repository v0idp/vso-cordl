#pragma once
// IWYU pragma private; include "System/IO/Compression/ZipVersionMadeByPlatform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZipVersionMadeByPlatform)
// Forward declare root types
namespace System::IO::Compression {
struct ZipVersionMadeByPlatform;
}
// Write type traits
MARK_VAL_T(::System::IO::Compression::ZipVersionMadeByPlatform);
// Dependencies 
namespace System::IO::Compression {
// Is value type: true
// CS Name: System.IO.Compression.ZipVersionMadeByPlatform
struct CORDL_TYPE ZipVersionMadeByPlatform {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __ZipVersionMadeByPlatform_Unwrapped
enum struct __ZipVersionMadeByPlatform_Unwrapped : uint8_t {
__E_Windows = static_cast<uint8_t>(0x0u),
__E_Unix = static_cast<uint8_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ZipVersionMadeByPlatform_Unwrapped () const noexcept {
return static_cast<__ZipVersionMadeByPlatform_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ZipVersionMadeByPlatform() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr ZipVersionMadeByPlatform(uint8_t  value__) noexcept;

/// @brief Field Unix value: U8(3)
static ::System::IO::Compression::ZipVersionMadeByPlatform const Unix;

/// @brief Field Windows value: U8(0)
static ::System::IO::Compression::ZipVersionMadeByPlatform const Windows;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11310};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::ZipVersionMadeByPlatform, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::ZipVersionMadeByPlatform, 0x1>, "Size mismatch!");

} // namespace end def System::IO::Compression
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::ZipVersionMadeByPlatform, "System.IO.Compression", "ZipVersionMadeByPlatform");
