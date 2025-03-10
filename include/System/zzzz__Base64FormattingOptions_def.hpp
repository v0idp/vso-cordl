#pragma once
// IWYU pragma private; include "System/Base64FormattingOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Base64FormattingOptions)
// Forward declare root types
namespace System {
struct Base64FormattingOptions;
}
// Write type traits
MARK_VAL_T(::System::Base64FormattingOptions);
// Dependencies 
namespace System {
// Is value type: true
// CS Name: System.Base64FormattingOptions
struct CORDL_TYPE Base64FormattingOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Base64FormattingOptions_Unwrapped
enum struct __Base64FormattingOptions_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_InsertLineBreaks = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Base64FormattingOptions_Unwrapped () const noexcept {
return static_cast<__Base64FormattingOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Base64FormattingOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Base64FormattingOptions(int32_t  value__) noexcept;

/// @brief Field InsertLineBreaks value: I32(1)
static ::System::Base64FormattingOptions const InsertLineBreaks;

/// @brief Field None value: I32(0)
static ::System::Base64FormattingOptions const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2077};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Base64FormattingOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Base64FormattingOptions, 0x4>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::Base64FormattingOptions, "System", "Base64FormattingOptions");
