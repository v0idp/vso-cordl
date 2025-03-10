#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/GCHandleType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GCHandleType)
// Forward declare root types
namespace System::Runtime::InteropServices {
struct GCHandleType;
}
// Write type traits
MARK_VAL_T(::System::Runtime::InteropServices::GCHandleType);
// Dependencies 
namespace System::Runtime::InteropServices {
// Is value type: true
// CS Name: System.Runtime.InteropServices.GCHandleType
struct CORDL_TYPE GCHandleType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GCHandleType_Unwrapped
enum struct __GCHandleType_Unwrapped : int32_t {
__E_Weak = static_cast<int32_t>(0x0),
__E_WeakTrackResurrection = static_cast<int32_t>(0x1),
__E_Normal = static_cast<int32_t>(0x2),
__E_Pinned = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GCHandleType_Unwrapped () const noexcept {
return static_cast<__GCHandleType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GCHandleType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GCHandleType(int32_t  value__) noexcept;

/// @brief Field Normal value: I32(2)
static ::System::Runtime::InteropServices::GCHandleType const Normal;

/// @brief Field Pinned value: I32(3)
static ::System::Runtime::InteropServices::GCHandleType const Pinned;

/// @brief Field Weak value: I32(0)
static ::System::Runtime::InteropServices::GCHandleType const Weak;

/// @brief Field WeakTrackResurrection value: I32(1)
static ::System::Runtime::InteropServices::GCHandleType const WeakTrackResurrection;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2960};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::InteropServices::GCHandleType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::GCHandleType, 0x4>, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::GCHandleType, "System.Runtime.InteropServices", "GCHandleType");
