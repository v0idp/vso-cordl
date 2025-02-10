#pragma once
// IWYU pragma private; include "VROSC/OctaveControlUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OctaveControlUI)
namespace TMPro {
class TextMeshPro;
}
namespace VROSC {
class IntNode;
}
namespace VROSC {
class SynthController;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace VROSC {
class OctaveControlUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::OctaveControlUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.OctaveControlUI
class CORDL_TYPE OctaveControlUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _decrementButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__decrementButton, put=__cordl_internal_set__decrementButton)) ::UnityW<::VROSC::UIButton>  _decrementButton;

/// @brief Field _display, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__display, put=__cordl_internal_set__display)) ::UnityW<::TMPro::TextMeshPro>  _display;

/// @brief Field _incrementButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__incrementButton, put=__cordl_internal_set__incrementButton)) ::UnityW<::VROSC::UIButton>  _incrementButton;

/// @brief Field _instrumentController, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrumentController, put=__cordl_internal_set__instrumentController)) ::UnityW<::VROSC::SynthController>  _instrumentController;

/// @brief Field _output, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__output, put=__cordl_internal_set__output)) ::UnityW<::VROSC::IntNode>  _output;

/// @brief Method DecrementButtonPressed, addr 0x17832e4, size 0x30, virtual true, abstract: false, final false
inline void DecrementButtonPressed() ;

/// @brief Method IncrementButtonPressed, addr 0x17832b4, size 0x30, virtual true, abstract: false, final false
inline void IncrementButtonPressed() ;

static inline ::VROSC::OctaveControlUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1783398, size 0x11c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x1783234, size 0x80, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Setup, addr 0x1783064, size 0x10, virtual true, abstract: false, final false
inline void Setup(::VROSC::SynthController*  instrumentController) ;

/// @brief Method Start, addr 0x1783074, size 0x1c0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateDisplayAndOutput, addr 0x1783314, size 0x84, virtual true, abstract: false, final false
inline void UpdateDisplayAndOutput() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__decrementButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__decrementButton() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__display() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__display() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__incrementButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__incrementButton() ;

constexpr ::UnityW<::VROSC::SynthController> const& __cordl_internal_get__instrumentController() const;

constexpr ::UnityW<::VROSC::SynthController>& __cordl_internal_get__instrumentController() ;

constexpr ::UnityW<::VROSC::IntNode> const& __cordl_internal_get__output() const;

constexpr ::UnityW<::VROSC::IntNode>& __cordl_internal_get__output() ;

constexpr void __cordl_internal_set__decrementButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__display(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__incrementButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__instrumentController(::UnityW<::VROSC::SynthController>  value) ;

constexpr void __cordl_internal_set__output(::UnityW<::VROSC::IntNode>  value) ;

/// @brief Method .ctor, addr 0x17834b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OctaveControlUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OctaveControlUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OctaveControlUI(OctaveControlUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OctaveControlUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OctaveControlUI(OctaveControlUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1310};

/// @brief Field _incrementButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____incrementButton;

/// @brief Field _decrementButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____decrementButton;

/// @brief Field _display, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____display;

/// @brief Field _output, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::IntNode>  ____output;

/// @brief Field _instrumentController, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::SynthController>  ____instrumentController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::OctaveControlUI, ____incrementButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::OctaveControlUI, ____decrementButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::OctaveControlUI, ____display) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::OctaveControlUI, ____output) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::OctaveControlUI, ____instrumentController) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::OctaveControlUI, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::OctaveControlUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OctaveControlUI*, "VROSC", "OctaveControlUI");
