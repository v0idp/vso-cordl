#pragma once
// IWYU pragma private; include "UnityEngine/LightmapBakeType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightmapBakeType)
// Forward declare root types
namespace UnityEngine {
struct LightmapBakeType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LightmapBakeType);
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.LightmapBakeType
struct CORDL_TYPE LightmapBakeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LightmapBakeType_Unwrapped
enum struct __LightmapBakeType_Unwrapped : int32_t {
__E_Realtime = static_cast<int32_t>(0x4),
__E_Baked = static_cast<int32_t>(0x2),
__E_Mixed = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LightmapBakeType_Unwrapped () const noexcept {
return static_cast<__LightmapBakeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LightmapBakeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LightmapBakeType(int32_t  value__) noexcept;

/// @brief Field Baked value: I32(2)
static ::UnityEngine::LightmapBakeType const Baked;

/// @brief Field Mixed value: I32(1)
static ::UnityEngine::LightmapBakeType const Mixed;

/// @brief Field Realtime value: I32(4)
static ::UnityEngine::LightmapBakeType const Realtime;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8469};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LightmapBakeType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::LightmapBakeType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightmapBakeType, "UnityEngine", "LightmapBakeType");
