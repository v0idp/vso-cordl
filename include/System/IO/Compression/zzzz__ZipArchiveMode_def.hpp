#pragma once
// IWYU pragma private; include "System/IO/Compression/ZipArchiveMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZipArchiveMode)
// Forward declare root types
namespace System::IO::Compression {
struct ZipArchiveMode;
}
// Write type traits
MARK_VAL_T(::System::IO::Compression::ZipArchiveMode);
// Dependencies 
namespace System::IO::Compression {
// Is value type: true
// CS Name: System.IO.Compression.ZipArchiveMode
struct CORDL_TYPE ZipArchiveMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ZipArchiveMode_Unwrapped
enum struct __ZipArchiveMode_Unwrapped : int32_t {
__E_Read = static_cast<int32_t>(0x0),
__E_Create = static_cast<int32_t>(0x1),
__E_Update = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ZipArchiveMode_Unwrapped () const noexcept {
return static_cast<__ZipArchiveMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ZipArchiveMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ZipArchiveMode(int32_t  value__) noexcept;

/// @brief Field Create value: I32(1)
static ::System::IO::Compression::ZipArchiveMode const Create;

/// @brief Field Read value: I32(0)
static ::System::IO::Compression::ZipArchiveMode const Read;

/// @brief Field Update value: I32(2)
static ::System::IO::Compression::ZipArchiveMode const Update;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11297};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IO::Compression::ZipArchiveMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::Compression::ZipArchiveMode, 0x4>, "Size mismatch!");

} // namespace end def System::IO::Compression
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::ZipArchiveMode, "System.IO.Compression", "ZipArchiveMode");
