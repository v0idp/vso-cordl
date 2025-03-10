#pragma once
// IWYU pragma private; include "System/Diagnostics/DebuggerBrowsableState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebuggerBrowsableState)
// Forward declare root types
namespace System::Diagnostics {
struct DebuggerBrowsableState;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::DebuggerBrowsableState);
// Dependencies 
namespace System::Diagnostics {
// Is value type: true
// CS Name: System.Diagnostics.DebuggerBrowsableState
struct CORDL_TYPE DebuggerBrowsableState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DebuggerBrowsableState_Unwrapped
enum struct __DebuggerBrowsableState_Unwrapped : int32_t {
__E_Never = static_cast<int32_t>(0x0),
__E_Collapsed = static_cast<int32_t>(0x2),
__E_RootHidden = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DebuggerBrowsableState_Unwrapped () const noexcept {
return static_cast<__DebuggerBrowsableState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DebuggerBrowsableState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DebuggerBrowsableState(int32_t  value__) noexcept;

/// @brief Field Collapsed value: I32(2)
static ::System::Diagnostics::DebuggerBrowsableState const Collapsed;

/// @brief Field Never value: I32(0)
static ::System::Diagnostics::DebuggerBrowsableState const Never;

/// @brief Field RootHidden value: I32(3)
static ::System::Diagnostics::DebuggerBrowsableState const RootHidden;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3382};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::DebuggerBrowsableState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::DebuggerBrowsableState, 0x4>, "Size mismatch!");

} // namespace end def System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggerBrowsableState, "System.Diagnostics", "DebuggerBrowsableState");
