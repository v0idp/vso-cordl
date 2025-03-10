#pragma once
// IWYU pragma private; include "UnityEngine/MeshTopology.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshTopology)
// Forward declare root types
namespace UnityEngine {
struct MeshTopology;
}
// Write type traits
MARK_VAL_T(::UnityEngine::MeshTopology);
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.MeshTopology
struct CORDL_TYPE MeshTopology {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MeshTopology_Unwrapped
enum struct __MeshTopology_Unwrapped : int32_t {
__E_Triangles = static_cast<int32_t>(0x0),
__E_Quads = static_cast<int32_t>(0x2),
__E_Lines = static_cast<int32_t>(0x3),
__E_LineStrip = static_cast<int32_t>(0x4),
__E_Points = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MeshTopology_Unwrapped () const noexcept {
return static_cast<__MeshTopology_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MeshTopology() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MeshTopology(int32_t  value__) noexcept;

/// @brief Field LineStrip value: I32(4)
static ::UnityEngine::MeshTopology const LineStrip;

/// @brief Field Lines value: I32(3)
static ::UnityEngine::MeshTopology const Lines;

/// @brief Field Points value: I32(5)
static ::UnityEngine::MeshTopology const Points;

/// @brief Field Quads value: I32(2)
static ::UnityEngine::MeshTopology const Quads;

/// @brief Field Triangles value: I32(0)
static ::UnityEngine::MeshTopology const Triangles;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8473};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::MeshTopology, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::MeshTopology, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MeshTopology, "UnityEngine", "MeshTopology");
