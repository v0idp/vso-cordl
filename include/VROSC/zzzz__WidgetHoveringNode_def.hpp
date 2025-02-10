#pragma once
// IWYU pragma private; include "VROSC/WidgetHoveringNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(WidgetHoveringNode)
namespace VROSC {
class Interactable;
}
namespace VROSC {
class WidgetHoveringController;
}
// Forward declare root types
namespace VROSC {
class WidgetHoveringNode;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::WidgetHoveringNode);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.WidgetHoveringNode
class CORDL_TYPE WidgetHoveringNode : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _parent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__parent, put=__cordl_internal_set__parent)) ::UnityW<::VROSC::WidgetHoveringController>  _parent;

/// @brief Field _reactTo, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__reactTo, put=__cordl_internal_set__reactTo)) ::UnityW<::VROSC::Interactable>  _reactTo;

/// @brief Method Awake, addr 0x173d128, size 0x110, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::WidgetHoveringNode* New_ctor() ;

/// @brief Method OnDestroy, addr 0x173d238, size 0x110, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetHovering, addr 0x173d350, size 0x94, virtual false, abstract: false, final false
inline void SetHovering(bool  hovering) ;

/// @brief Method Setup, addr 0x173d348, size 0x8, virtual false, abstract: false, final false
inline void Setup(::VROSC::WidgetHoveringController*  parent) ;

constexpr ::UnityW<::VROSC::WidgetHoveringController> const& __cordl_internal_get__parent() const;

constexpr ::UnityW<::VROSC::WidgetHoveringController>& __cordl_internal_get__parent() ;

constexpr ::UnityW<::VROSC::Interactable> const& __cordl_internal_get__reactTo() const;

constexpr ::UnityW<::VROSC::Interactable>& __cordl_internal_get__reactTo() ;

constexpr void __cordl_internal_set__parent(::UnityW<::VROSC::WidgetHoveringController>  value) ;

constexpr void __cordl_internal_set__reactTo(::UnityW<::VROSC::Interactable>  value) ;

/// @brief Method .ctor, addr 0x173d3e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WidgetHoveringNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WidgetHoveringNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WidgetHoveringNode(WidgetHoveringNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WidgetHoveringNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WidgetHoveringNode(WidgetHoveringNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1102};

/// @brief Field _parent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::WidgetHoveringController>  ____parent;

/// @brief Field _reactTo, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::Interactable>  ____reactTo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::WidgetHoveringNode, ____parent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::WidgetHoveringNode, ____reactTo) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::WidgetHoveringNode, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::WidgetHoveringNode);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::WidgetHoveringNode*, "VROSC", "WidgetHoveringNode");
