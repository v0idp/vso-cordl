#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/GlobalIllumination/AngularFalloffType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AngularFalloffType)
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct AngularFalloffType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::GlobalIllumination::AngularFalloffType);
// Dependencies 
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// CS Name: UnityEngine.Experimental.GlobalIllumination.AngularFalloffType
struct CORDL_TYPE AngularFalloffType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __AngularFalloffType_Unwrapped
enum struct __AngularFalloffType_Unwrapped : uint8_t {
__E_LUT = static_cast<uint8_t>(0x0u),
__E_AnalyticAndInnerAngle = static_cast<uint8_t>(0x1u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AngularFalloffType_Unwrapped () const noexcept {
return static_cast<__AngularFalloffType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AngularFalloffType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr AngularFalloffType(uint8_t  value__) noexcept;

/// @brief Field AnalyticAndInnerAngle value: U8(1)
static ::UnityEngine::Experimental::GlobalIllumination::AngularFalloffType const AnalyticAndInnerAngle;

/// @brief Field LUT value: U8(0)
static ::UnityEngine::Experimental::GlobalIllumination::AngularFalloffType const LUT;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8952};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::AngularFalloffType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::AngularFalloffType, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::Experimental::GlobalIllumination
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::AngularFalloffType, "UnityEngine.Experimental.GlobalIllumination", "AngularFalloffType");
