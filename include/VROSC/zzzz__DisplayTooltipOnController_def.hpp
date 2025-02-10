#pragma once
// IWYU pragma private; include "VROSC/DisplayTooltipOnController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__HighlightControllerComponents_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DisplayTooltipOnController)
namespace VROSC {
class ControllerInputNode;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class TooltipData;
}
// Forward declare root types
namespace VROSC {
class DisplayTooltipOnController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DisplayTooltipOnController);
// Dependencies UnityEngine.MonoBehaviour, VROSC.HighlightControllerComponents::Component
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DisplayTooltipOnController
class CORDL_TYPE DisplayTooltipOnController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _component, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__component, put=__cordl_internal_set__component)) ::VROSC::HighlightControllerComponents_Component  _component;

/// @brief Field _controllerInputNode, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__controllerInputNode, put=__cordl_internal_set__controllerInputNode)) ::UnityW<::VROSC::ControllerInputNode>  _controllerInputNode;

/// @brief Field _text, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::StringW  _text;

/// @brief Field _tooltipData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__tooltipData, put=__cordl_internal_set__tooltipData)) ::VROSC::TooltipData*  _tooltipData;

/// @brief Method Awake, addr 0x1733eb8, size 0x78, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method HoverEnd, addr 0x1734168, size 0x48, virtual false, abstract: false, final false
inline void HoverEnd(::VROSC::InputDevice*  device) ;

/// @brief Method HoverStart, addr 0x1734094, size 0x48, virtual false, abstract: false, final false
inline void HoverStart(::VROSC::InputDevice*  device) ;

static inline ::VROSC::DisplayTooltipOnController* New_ctor() ;

/// @brief Method Setup, addr 0x1733f30, size 0x164, virtual false, abstract: false, final false
inline void Setup() ;

constexpr ::VROSC::HighlightControllerComponents_Component const& __cordl_internal_get__component() const;

constexpr ::VROSC::HighlightControllerComponents_Component& __cordl_internal_get__component() ;

constexpr ::UnityW<::VROSC::ControllerInputNode> const& __cordl_internal_get__controllerInputNode() const;

constexpr ::UnityW<::VROSC::ControllerInputNode>& __cordl_internal_get__controllerInputNode() ;

constexpr ::StringW const& __cordl_internal_get__text() const;

constexpr ::StringW& __cordl_internal_get__text() ;

constexpr ::VROSC::TooltipData* const& __cordl_internal_get__tooltipData() const;

constexpr ::VROSC::TooltipData*& __cordl_internal_get__tooltipData() ;

constexpr void __cordl_internal_set__component(::VROSC::HighlightControllerComponents_Component  value) ;

constexpr void __cordl_internal_set__controllerInputNode(::UnityW<::VROSC::ControllerInputNode>  value) ;

constexpr void __cordl_internal_set__text(::StringW  value) ;

constexpr void __cordl_internal_set__tooltipData(::VROSC::TooltipData*  value) ;

/// @brief Method .ctor, addr 0x17341b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DisplayTooltipOnController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DisplayTooltipOnController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DisplayTooltipOnController(DisplayTooltipOnController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisplayTooltipOnController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisplayTooltipOnController(DisplayTooltipOnController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1073};

/// @brief Field _component, offset: 0x20, size: 0x4, def value: None
 ::VROSC::HighlightControllerComponents_Component  ____component;

/// @brief Field _controllerInputNode, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::ControllerInputNode>  ____controllerInputNode;

/// @brief Field _text, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____text;

/// @brief Field _tooltipData, offset: 0x38, size: 0x8, def value: None
 ::VROSC::TooltipData*  ____tooltipData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DisplayTooltipOnController, ____component) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::DisplayTooltipOnController, ____controllerInputNode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::DisplayTooltipOnController, ____text) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::DisplayTooltipOnController, ____tooltipData) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DisplayTooltipOnController, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DisplayTooltipOnController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DisplayTooltipOnController*, "VROSC", "DisplayTooltipOnController");
