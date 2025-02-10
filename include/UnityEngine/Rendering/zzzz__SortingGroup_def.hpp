#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SortingGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortingGroup)
// Forward declare root types
namespace UnityEngine::Rendering {
class SortingGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::SortingGroup);
// Dependencies UnityEngine.Behaviour
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.SortingGroup
class CORDL_TYPE SortingGroup : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_sortingLayerID)) int32_t  sortingLayerID;

 __declspec(property(get=get_sortingOrder)) int32_t  sortingOrder;

/// @brief Method GetSortingGroupByIndex, addr 0x2fa16f4, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Rendering::SortingGroup> GetSortingGroupByIndex(int32_t  index) ;

static inline ::UnityEngine::Rendering::SortingGroup* New_ctor() ;

/// @brief Method .ctor, addr 0x2fa17a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_invalidSortingGroupID, addr 0x2fa16cc, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_invalidSortingGroupID() ;

/// @brief Method get_sortingLayerID, addr 0x2fa1730, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_sortingLayerID() ;

/// @brief Method get_sortingOrder, addr 0x2fa176c, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_sortingOrder() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SortingGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SortingGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SortingGroup(SortingGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SortingGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SortingGroup(SortingGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8919};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SortingGroup, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::SortingGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SortingGroup*, "UnityEngine.Rendering", "SortingGroup");
