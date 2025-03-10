#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IMouseEventInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMouseEventInternal)
namespace UnityEngine::UIElements {
class IPointerEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IMouseEventInternal;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IMouseEventInternal);
// Dependencies 
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IMouseEventInternal
class CORDL_TYPE IMouseEventInternal {
public:
// Declarations
 __declspec(property(get=get_recomputeTopElementUnderMouse, put=set_recomputeTopElementUnderMouse)) bool  recomputeTopElementUnderMouse;

 __declspec(property(get=get_sourcePointerEvent, put=set_sourcePointerEvent)) ::UnityEngine::UIElements::IPointerEvent*  sourcePointerEvent;

 __declspec(property(get=get_triggeredByOS, put=set_triggeredByOS)) bool  triggeredByOS;

/// @brief Method get_recomputeTopElementUnderMouse, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_recomputeTopElementUnderMouse() ;

/// @brief Method get_sourcePointerEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::IPointerEvent* get_sourcePointerEvent() ;

/// @brief Method get_triggeredByOS, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_triggeredByOS() ;

/// @brief Method set_recomputeTopElementUnderMouse, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_recomputeTopElementUnderMouse(bool  value) ;

/// @brief Method set_sourcePointerEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_sourcePointerEvent(::UnityEngine::UIElements::IPointerEvent*  value) ;

/// @brief Method set_triggeredByOS, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_triggeredByOS(bool  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IMouseEventInternal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMouseEventInternal(IMouseEventInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4037};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IMouseEventInternal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IMouseEventInternal*, "UnityEngine.UIElements", "IMouseEventInternal");
