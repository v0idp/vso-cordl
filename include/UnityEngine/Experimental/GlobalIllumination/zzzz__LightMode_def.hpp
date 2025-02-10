#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/GlobalIllumination/LightMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightMode)
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::GlobalIllumination::LightMode);
// Dependencies 
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// CS Name: UnityEngine.Experimental.GlobalIllumination.LightMode
struct CORDL_TYPE LightMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __LightMode_Unwrapped
enum struct __LightMode_Unwrapped : uint8_t {
__E_Realtime = static_cast<uint8_t>(0x0u),
__E_Mixed = static_cast<uint8_t>(0x1u),
__E_Baked = static_cast<uint8_t>(0x2u),
__E_Unknown = static_cast<uint8_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LightMode_Unwrapped () const noexcept {
return static_cast<__LightMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LightMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr LightMode(uint8_t  value__) noexcept;

/// @brief Field Baked value: U8(2)
static ::UnityEngine::Experimental::GlobalIllumination::LightMode const Baked;

/// @brief Field Mixed value: U8(1)
static ::UnityEngine::Experimental::GlobalIllumination::LightMode const Mixed;

/// @brief Field Realtime value: U8(0)
static ::UnityEngine::Experimental::GlobalIllumination::LightMode const Realtime;

/// @brief Field Unknown value: U8(3)
static ::UnityEngine::Experimental::GlobalIllumination::LightMode const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8950};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::LightMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::LightMode, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::Experimental::GlobalIllumination
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::LightMode, "UnityEngine.Experimental.GlobalIllumination", "LightMode");
