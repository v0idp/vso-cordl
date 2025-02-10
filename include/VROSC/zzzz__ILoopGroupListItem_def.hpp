#pragma once
// IWYU pragma private; include "VROSC/ILoopGroupListItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ILoopGroupListItem)
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace VROSC {
class ILoopGroupListItem;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ILoopGroupListItem);
// Dependencies 
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ILoopGroupListItem
class CORDL_TYPE ILoopGroupListItem {
public:
// Declarations
 __declspec(property(get=get_PositionInGroup)) int32_t  PositionInGroup;

 __declspec(property(get=get_RectTransform)) ::UnityW<::UnityEngine::RectTransform>  RectTransform;

/// @brief Method SetPositionInGroup, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetPositionInGroup(int32_t  position) ;

/// @brief Method get_PositionInGroup, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_PositionInGroup() ;

/// @brief Method get_RectTransform, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::RectTransform> get_RectTransform() ;

// Ctor Parameters [CppParam { name: "", ty: "ILoopGroupListItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILoopGroupListItem(ILoopGroupListItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{721};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ILoopGroupListItem);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ILoopGroupListItem*, "VROSC", "ILoopGroupListItem");
