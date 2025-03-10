#pragma once
// IWYU pragma private; include "System/UriIdnScope.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UriIdnScope)
// Forward declare root types
namespace System {
struct UriIdnScope;
}
// Write type traits
MARK_VAL_T(::System::UriIdnScope);
// Dependencies 
namespace System {
// Is value type: true
// CS Name: System.UriIdnScope
struct CORDL_TYPE UriIdnScope {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UriIdnScope_Unwrapped
enum struct __UriIdnScope_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_AllExceptIntranet = static_cast<int32_t>(0x1),
__E_All = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UriIdnScope_Unwrapped () const noexcept {
return static_cast<__UriIdnScope_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UriIdnScope() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UriIdnScope(int32_t  value__) noexcept;

/// @brief Field All value: I32(2)
static ::System::UriIdnScope const All;

/// @brief Field AllExceptIntranet value: I32(1)
static ::System::UriIdnScope const AllExceptIntranet;

/// @brief Field None value: I32(0)
static ::System::UriIdnScope const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7448};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::UriIdnScope, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::UriIdnScope, 0x4>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::UriIdnScope, "System", "UriIdnScope");
