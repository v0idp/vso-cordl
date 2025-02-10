#pragma once
// IWYU pragma private; include "VROSC/ScaleNoteButtonUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "VROSC/zzzz__Note_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScaleNoteButtonUI)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace TMPro {
class TextMeshPro;
}
namespace VROSC::UI {
class UIScalePanelButtonColoring;
}
namespace VROSC {
class ControllerInputNode;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
struct Note;
}
namespace VROSC {
struct Scale;
}
namespace VROSC {
class UIToggle;
}
// Forward declare root types
namespace VROSC {
class ScaleNoteButtonUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ScaleNoteButtonUI);
// Dependencies UnityEngine.MonoBehaviour, VROSC.Note
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ScaleNoteButtonUI
class CORDL_TYPE ScaleNoteButtonUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnNoteHovered, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnNoteHovered, put=__cordl_internal_set_OnNoteHovered)) ::System::Action_2<::VROSC::Note,bool>*  OnNoteHovered;

/// @brief Field OnSetAsStartNode, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSetAsStartNode, put=__cordl_internal_set_OnSetAsStartNode)) ::System::Action_1<::VROSC::Note>*  OnSetAsStartNode;

/// @brief Field OnSetNoteActive, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSetNoteActive, put=__cordl_internal_set_OnSetNoteActive)) ::System::Action_2<::VROSC::Note,bool>*  OnSetNoteActive;

/// @brief Field _backgroundColoring, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__backgroundColoring, put=__cordl_internal_set__backgroundColoring)) ::UnityW<::VROSC::UI::UIScalePanelButtonColoring>  _backgroundColoring;

/// @brief Field _display, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__display, put=__cordl_internal_set__display)) ::UnityW<::TMPro::TextMeshPro>  _display;

/// @brief Field _inputNode, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputNode, put=__cordl_internal_set__inputNode)) ::UnityW<::VROSC::ControllerInputNode>  _inputNode;

/// @brief Field _note, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__note, put=__cordl_internal_set__note)) ::VROSC::Note  _note;

/// @brief Field _startNoteToggle, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__startNoteToggle, put=__cordl_internal_set__startNoteToggle)) ::UnityW<::VROSC::UIToggle>  _startNoteToggle;

/// @brief Field _toggleButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggleButton, put=__cordl_internal_set__toggleButton)) ::UnityW<::VROSC::UIToggle>  _toggleButton;

/// @brief Method AssignStartNote, addr 0x1797afc, size 0x24, virtual false, abstract: false, final false
inline void AssignStartNote(::VROSC::InputDevice*  device, bool  active) ;

/// @brief Method IsHovering, addr 0x1797d9c, size 0x28, virtual false, abstract: false, final false
inline void IsHovering(bool  hovering) ;

static inline ::VROSC::ScaleNoteButtonUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1797c70, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetAxis, addr 0x1797ae0, size 0x1c, virtual false, abstract: false, final false
inline void SetAxis(int32_t  axis) ;

/// @brief Method SetText, addr 0x1797c74, size 0x128, virtual false, abstract: false, final false
inline void SetText() ;

/// @brief Method SetToScale, addr 0x1797b20, size 0xfc, virtual false, abstract: false, final false
inline void SetToScale(::VROSC::Scale  scale, ::VROSC::Note  startNote) ;

/// @brief Method Start, addr 0x179770c, size 0x3d4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Toggle, addr 0x1797c1c, size 0x54, virtual false, abstract: false, final false
inline void Toggle(::VROSC::InputDevice*  device, bool  active) ;

constexpr ::System::Action_2<::VROSC::Note,bool>* const& __cordl_internal_get_OnNoteHovered() const;

constexpr ::System::Action_2<::VROSC::Note,bool>*& __cordl_internal_get_OnNoteHovered() ;

constexpr ::System::Action_1<::VROSC::Note>* const& __cordl_internal_get_OnSetAsStartNode() const;

constexpr ::System::Action_1<::VROSC::Note>*& __cordl_internal_get_OnSetAsStartNode() ;

constexpr ::System::Action_2<::VROSC::Note,bool>* const& __cordl_internal_get_OnSetNoteActive() const;

constexpr ::System::Action_2<::VROSC::Note,bool>*& __cordl_internal_get_OnSetNoteActive() ;

constexpr ::UnityW<::VROSC::UI::UIScalePanelButtonColoring> const& __cordl_internal_get__backgroundColoring() const;

constexpr ::UnityW<::VROSC::UI::UIScalePanelButtonColoring>& __cordl_internal_get__backgroundColoring() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__display() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__display() ;

constexpr ::UnityW<::VROSC::ControllerInputNode> const& __cordl_internal_get__inputNode() const;

constexpr ::UnityW<::VROSC::ControllerInputNode>& __cordl_internal_get__inputNode() ;

constexpr ::VROSC::Note const& __cordl_internal_get__note() const;

constexpr ::VROSC::Note& __cordl_internal_get__note() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__startNoteToggle() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__startNoteToggle() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__toggleButton() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__toggleButton() ;

constexpr void __cordl_internal_set_OnNoteHovered(::System::Action_2<::VROSC::Note,bool>*  value) ;

constexpr void __cordl_internal_set_OnSetAsStartNode(::System::Action_1<::VROSC::Note>*  value) ;

constexpr void __cordl_internal_set_OnSetNoteActive(::System::Action_2<::VROSC::Note,bool>*  value) ;

constexpr void __cordl_internal_set__backgroundColoring(::UnityW<::VROSC::UI::UIScalePanelButtonColoring>  value) ;

constexpr void __cordl_internal_set__display(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__inputNode(::UnityW<::VROSC::ControllerInputNode>  value) ;

constexpr void __cordl_internal_set__note(::VROSC::Note  value) ;

constexpr void __cordl_internal_set__startNoteToggle(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__toggleButton(::UnityW<::VROSC::UIToggle>  value) ;

/// @brief Method .ctor, addr 0x1797dc4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScaleNoteButtonUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScaleNoteButtonUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScaleNoteButtonUI(ScaleNoteButtonUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScaleNoteButtonUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScaleNoteButtonUI(ScaleNoteButtonUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1353};

/// @brief Field _note, offset: 0x20, size: 0x4, def value: None
 ::VROSC::Note  ____note;

/// @brief Field _toggleButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____toggleButton;

/// @brief Field _startNoteToggle, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____startNoteToggle;

/// @brief Field _inputNode, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::ControllerInputNode>  ____inputNode;

/// @brief Field _display, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____display;

/// @brief Field _backgroundColoring, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIScalePanelButtonColoring>  ____backgroundColoring;

/// @brief Field OnSetAsStartNode, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<::VROSC::Note>*  ___OnSetAsStartNode;

/// @brief Field OnSetNoteActive, offset: 0x58, size: 0x8, def value: None
 ::System::Action_2<::VROSC::Note,bool>*  ___OnSetNoteActive;

/// @brief Field OnNoteHovered, offset: 0x60, size: 0x8, def value: None
 ::System::Action_2<::VROSC::Note,bool>*  ___OnNoteHovered;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ScaleNoteButtonUI, ____note) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleNoteButtonUI, ____toggleButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleNoteButtonUI, ____startNoteToggle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleNoteButtonUI, ____inputNode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleNoteButtonUI, ____display) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleNoteButtonUI, ____backgroundColoring) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleNoteButtonUI, ___OnSetAsStartNode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleNoteButtonUI, ___OnSetNoteActive) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::ScaleNoteButtonUI, ___OnNoteHovered) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ScaleNoteButtonUI, 0x68>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ScaleNoteButtonUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ScaleNoteButtonUI*, "VROSC", "ScaleNoteButtonUI");
