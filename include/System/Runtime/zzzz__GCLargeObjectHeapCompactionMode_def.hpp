#pragma once
// IWYU pragma private; include "System/Runtime/GCLargeObjectHeapCompactionMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GCLargeObjectHeapCompactionMode)
// Forward declare root types
namespace System::Runtime {
struct GCLargeObjectHeapCompactionMode;
}
// Write type traits
MARK_VAL_T(::System::Runtime::GCLargeObjectHeapCompactionMode);
// Dependencies 
namespace System::Runtime {
// Is value type: true
// CS Name: System.Runtime.GCLargeObjectHeapCompactionMode
struct CORDL_TYPE GCLargeObjectHeapCompactionMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GCLargeObjectHeapCompactionMode_Unwrapped
enum struct __GCLargeObjectHeapCompactionMode_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x1),
__E_CompactOnce = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GCLargeObjectHeapCompactionMode_Unwrapped () const noexcept {
return static_cast<__GCLargeObjectHeapCompactionMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GCLargeObjectHeapCompactionMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GCLargeObjectHeapCompactionMode(int32_t  value__) noexcept;

/// @brief Field CompactOnce value: I32(2)
static ::System::Runtime::GCLargeObjectHeapCompactionMode const CompactOnce;

/// @brief Field Default value: I32(1)
static ::System::Runtime::GCLargeObjectHeapCompactionMode const Default;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2704};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::GCLargeObjectHeapCompactionMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::GCLargeObjectHeapCompactionMode, 0x4>, "Size mismatch!");

} // namespace end def System::Runtime
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::GCLargeObjectHeapCompactionMode, "System.Runtime", "GCLargeObjectHeapCompactionMode");
