#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVROverlayIntersectionMaskPrimitiveType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVROverlayIntersectionMaskPrimitiveType)
// Forward declare root types
namespace OVR::OpenVR {
struct EVROverlayIntersectionMaskPrimitiveType;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType);
// Dependencies 
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.EVROverlayIntersectionMaskPrimitiveType
struct CORDL_TYPE EVROverlayIntersectionMaskPrimitiveType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EVROverlayIntersectionMaskPrimitiveType_Unwrapped
enum struct __EVROverlayIntersectionMaskPrimitiveType_Unwrapped : int32_t {
__E_OverlayIntersectionPrimitiveType_Rectangle = static_cast<int32_t>(0x0),
__E_OverlayIntersectionPrimitiveType_Circle = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVROverlayIntersectionMaskPrimitiveType_Unwrapped () const noexcept {
return static_cast<__EVROverlayIntersectionMaskPrimitiveType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EVROverlayIntersectionMaskPrimitiveType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVROverlayIntersectionMaskPrimitiveType(int32_t  value__) noexcept;

/// @brief Field OverlayIntersectionPrimitiveType_Circle value: I32(1)
static ::OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType const OverlayIntersectionPrimitiveType_Circle;

/// @brief Field OverlayIntersectionPrimitiveType_Rectangle value: I32(0)
static ::OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType const OverlayIntersectionPrimitiveType_Rectangle;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7197};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType, "OVR.OpenVR", "EVROverlayIntersectionMaskPrimitiveType");
