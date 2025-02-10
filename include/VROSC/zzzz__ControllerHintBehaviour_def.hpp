#pragma once
// IWYU pragma private; include "VROSC/ControllerHintBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__HighlightControllerComponents_def.hpp"
#include "VROSC/zzzz__NoteBoard_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ControllerHintBehaviour)
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace VROSC {
class HighlightControllerComponents;
}
namespace VROSC {
class NoteBoardNoteController;
}
namespace VROSC {
class TouchableObjectsController;
}
// Forward declare root types
namespace VROSC {
class ControllerHintBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ControllerHintBehaviour);
// Dependencies UnityEngine.Color, UnityEngine.Playables.PlayableBehaviour, VROSC.HighlightControllerComponents::Component, VROSC.NoteBoard::PlayAxis
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ControllerHintBehaviour
class CORDL_TYPE ControllerHintBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief Field Axis, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_Axis, put=__cordl_internal_set_Axis)) ::VROSC::NoteBoard_PlayAxis  Axis;

/// @brief Field FromColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_FromColor, put=__cordl_internal_set_FromColor)) ::UnityEngine::Color  FromColor;

/// @brief Field OnlyHovering, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get_OnlyHovering, put=__cordl_internal_set_OnlyHovering)) bool  OnlyHovering;

/// @brief Field ToColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_ToColor, put=__cordl_internal_set_ToColor)) ::UnityEngine::Color  ToColor;

/// @brief Field UpdateAllTouchables, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_UpdateAllTouchables, put=__cordl_internal_set_UpdateAllTouchables)) bool  UpdateAllTouchables;

/// @brief Field Visible, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Visible, put=__cordl_internal_set_Visible)) float_t  Visible;

/// @brief Field _highlight, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__highlight, put=__cordl_internal_set__highlight)) ::UnityW<::VROSC::HighlightControllerComponents>  _highlight;

/// @brief Field _noteboardController, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__noteboardController, put=__cordl_internal_set__noteboardController)) ::UnityW<::VROSC::NoteBoardNoteController>  _noteboardController;

/// @brief Field _touchables, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__touchables, put=__cordl_internal_set__touchables)) ::UnityW<::VROSC::TouchableObjectsController>  _touchables;

/// @brief Field component, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_component, put=__cordl_internal_set_component)) ::VROSC::HighlightControllerComponents_Component  component;

static inline ::VROSC::ControllerHintBehaviour* New_ctor() ;

/// @brief Method ProcessFrame, addr 0x1767abc, size 0xe8, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method Setup, addr 0x1767a9c, size 0x18, virtual false, abstract: false, final false
inline void Setup(::VROSC::HighlightControllerComponents*  highlight, ::VROSC::TouchableObjectsController*  touchables) ;

constexpr ::VROSC::NoteBoard_PlayAxis const& __cordl_internal_get_Axis() const;

constexpr ::VROSC::NoteBoard_PlayAxis& __cordl_internal_get_Axis() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_FromColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_FromColor() ;

constexpr bool const& __cordl_internal_get_OnlyHovering() const;

constexpr bool& __cordl_internal_get_OnlyHovering() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_ToColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_ToColor() ;

constexpr bool const& __cordl_internal_get_UpdateAllTouchables() const;

constexpr bool& __cordl_internal_get_UpdateAllTouchables() ;

constexpr float_t const& __cordl_internal_get_Visible() const;

constexpr float_t& __cordl_internal_get_Visible() ;

constexpr ::UnityW<::VROSC::HighlightControllerComponents> const& __cordl_internal_get__highlight() const;

constexpr ::UnityW<::VROSC::HighlightControllerComponents>& __cordl_internal_get__highlight() ;

constexpr ::UnityW<::VROSC::NoteBoardNoteController> const& __cordl_internal_get__noteboardController() const;

constexpr ::UnityW<::VROSC::NoteBoardNoteController>& __cordl_internal_get__noteboardController() ;

constexpr ::UnityW<::VROSC::TouchableObjectsController> const& __cordl_internal_get__touchables() const;

constexpr ::UnityW<::VROSC::TouchableObjectsController>& __cordl_internal_get__touchables() ;

constexpr ::VROSC::HighlightControllerComponents_Component const& __cordl_internal_get_component() const;

constexpr ::VROSC::HighlightControllerComponents_Component& __cordl_internal_get_component() ;

constexpr void __cordl_internal_set_Axis(::VROSC::NoteBoard_PlayAxis  value) ;

constexpr void __cordl_internal_set_FromColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_OnlyHovering(bool  value) ;

constexpr void __cordl_internal_set_ToColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_UpdateAllTouchables(bool  value) ;

constexpr void __cordl_internal_set_Visible(float_t  value) ;

constexpr void __cordl_internal_set__highlight(::UnityW<::VROSC::HighlightControllerComponents>  value) ;

constexpr void __cordl_internal_set__noteboardController(::UnityW<::VROSC::NoteBoardNoteController>  value) ;

constexpr void __cordl_internal_set__touchables(::UnityW<::VROSC::TouchableObjectsController>  value) ;

constexpr void __cordl_internal_set_component(::VROSC::HighlightControllerComponents_Component  value) ;

/// @brief Method .ctor, addr 0x1767ba4, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerHintBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerHintBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerHintBehaviour(ControllerHintBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerHintBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerHintBehaviour(ControllerHintBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1193};

/// @brief Field _noteboardController, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::NoteBoardNoteController>  ____noteboardController;

/// @brief Field _highlight, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::VROSC::HighlightControllerComponents>  ____highlight;

/// @brief Field _touchables, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::TouchableObjectsController>  ____touchables;

/// @brief Field component, offset: 0x28, size: 0x4, def value: None
 ::VROSC::HighlightControllerComponents_Component  ___component;

/// @brief Field Visible, offset: 0x2c, size: 0x4, def value: None
 float_t  ___Visible;

/// @brief Field FromColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ___FromColor;

/// @brief Field ToColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ___ToColor;

/// @brief Field Axis, offset: 0x50, size: 0x4, def value: None
 ::VROSC::NoteBoard_PlayAxis  ___Axis;

/// @brief Field UpdateAllTouchables, offset: 0x54, size: 0x1, def value: None
 bool  ___UpdateAllTouchables;

/// @brief Field OnlyHovering, offset: 0x55, size: 0x1, def value: None
 bool  ___OnlyHovering;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ControllerHintBehaviour, ____noteboardController) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerHintBehaviour, ____highlight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerHintBehaviour, ____touchables) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerHintBehaviour, ___component) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerHintBehaviour, ___Visible) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerHintBehaviour, ___FromColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerHintBehaviour, ___ToColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerHintBehaviour, ___Axis) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerHintBehaviour, ___UpdateAllTouchables) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerHintBehaviour, ___OnlyHovering) == 0x55, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ControllerHintBehaviour, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ControllerHintBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ControllerHintBehaviour*, "VROSC", "ControllerHintBehaviour");
