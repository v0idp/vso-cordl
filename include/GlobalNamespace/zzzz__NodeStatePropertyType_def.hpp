#pragma once
// IWYU pragma private; include "GlobalNamespace/NodeStatePropertyType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NodeStatePropertyType)
// Forward declare root types
namespace GlobalNamespace {
struct NodeStatePropertyType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NodeStatePropertyType);
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: NodeStatePropertyType
struct CORDL_TYPE NodeStatePropertyType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NodeStatePropertyType_Unwrapped
enum struct __NodeStatePropertyType_Unwrapped : int32_t {
__E_Acceleration = static_cast<int32_t>(0x0),
__E_AngularAcceleration = static_cast<int32_t>(0x1),
__E_Velocity = static_cast<int32_t>(0x2),
__E_AngularVelocity = static_cast<int32_t>(0x3),
__E_Position = static_cast<int32_t>(0x4),
__E_Orientation = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NodeStatePropertyType_Unwrapped () const noexcept {
return static_cast<__NodeStatePropertyType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NodeStatePropertyType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NodeStatePropertyType(int32_t  value__) noexcept;

/// @brief Field Acceleration value: I32(0)
static ::GlobalNamespace::NodeStatePropertyType const Acceleration;

/// @brief Field AngularAcceleration value: I32(1)
static ::GlobalNamespace::NodeStatePropertyType const AngularAcceleration;

/// @brief Field AngularVelocity value: I32(3)
static ::GlobalNamespace::NodeStatePropertyType const AngularVelocity;

/// @brief Field Orientation value: I32(5)
static ::GlobalNamespace::NodeStatePropertyType const Orientation;

/// @brief Field Position value: I32(4)
static ::GlobalNamespace::NodeStatePropertyType const Position;

/// @brief Field Velocity value: I32(2)
static ::GlobalNamespace::NodeStatePropertyType const Velocity;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6047};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NodeStatePropertyType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NodeStatePropertyType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NodeStatePropertyType, "", "NodeStatePropertyType");
