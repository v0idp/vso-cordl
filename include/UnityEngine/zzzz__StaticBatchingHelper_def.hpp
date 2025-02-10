#pragma once
// IWYU pragma private; include "UnityEngine/StaticBatchingHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(StaticBatchingHelper)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine {
struct StaticBatchingHelper;
}
// Write type traits
MARK_VAL_T(::UnityEngine::StaticBatchingHelper);
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.StaticBatchingHelper
#pragma pack(push, 0)
struct CORDL_TYPE StaticBatchingHelper {
public:
// Declarations
/// @brief Method CombineMeshes, addr 0x2f726ac, size 0x44, virtual false, abstract: false, final false
static inline void CombineMeshes(::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  gos, ::UnityEngine::GameObject*  staticBatchRoot) ;

// Ctor Parameters []
// @brief default ctor
constexpr StaticBatchingHelper() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8494};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::StaticBatchingHelper, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::StaticBatchingHelper, "UnityEngine", "StaticBatchingHelper");
