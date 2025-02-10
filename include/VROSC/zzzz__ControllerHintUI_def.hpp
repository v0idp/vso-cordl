#pragma once
// IWYU pragma private; include "VROSC/ControllerHintUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ControllerHintUI)
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class RectTransform;
}
namespace VROSC {
class IconMesh;
}
namespace VROSC {
class TooltipData;
}
// Forward declare root types
namespace VROSC {
class ControllerHintUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ControllerHintUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ControllerHintUI
class CORDL_TYPE ControllerHintUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _currentTooltip, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentTooltip, put=__cordl_internal_set__currentTooltip)) ::VROSC::TooltipData*  _currentTooltip;

/// @brief Field _hintBackground, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__hintBackground, put=__cordl_internal_set__hintBackground)) ::UnityW<::UnityEngine::RectTransform>  _hintBackground;

/// @brief Field _hintLabelIfIcon, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__hintLabelIfIcon, put=__cordl_internal_set__hintLabelIfIcon)) ::UnityW<::TMPro::TextMeshPro>  _hintLabelIfIcon;

/// @brief Field _hintLabelText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hintLabelText, put=__cordl_internal_set__hintLabelText)) ::UnityW<::TMPro::TextMeshPro>  _hintLabelText;

/// @brief Field _iconHolder, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__iconHolder, put=__cordl_internal_set__iconHolder)) ::UnityW<::UnityEngine::RectTransform>  _iconHolder;

/// @brief Field _iconMesh, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__iconMesh, put=__cordl_internal_set__iconMesh)) ::UnityW<::VROSC::IconMesh>  _iconMesh;

/// @brief Field _textpaddingX, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__textpaddingX, put=__cordl_internal_set__textpaddingX)) float_t  _textpaddingX;

/// @brief Field _textpaddingY, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__textpaddingY, put=__cordl_internal_set__textpaddingY)) float_t  _textpaddingY;

static inline ::VROSC::ControllerHintUI* New_ctor() ;

/// @brief Method SetIcon, addr 0x1732b48, size 0x11c, virtual false, abstract: false, final false
inline bool SetIcon(::VROSC::TooltipData*  tooltip) ;

/// @brief Method SetTooltipActive, addr 0x1732970, size 0x13c, virtual false, abstract: false, final false
inline void SetTooltipActive(bool  active, ::VROSC::TooltipData*  tooltip) ;

constexpr ::VROSC::TooltipData* const& __cordl_internal_get__currentTooltip() const;

constexpr ::VROSC::TooltipData*& __cordl_internal_get__currentTooltip() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__hintBackground() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__hintBackground() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__hintLabelIfIcon() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__hintLabelIfIcon() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__hintLabelText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__hintLabelText() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__iconHolder() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__iconHolder() ;

constexpr ::UnityW<::VROSC::IconMesh> const& __cordl_internal_get__iconMesh() const;

constexpr ::UnityW<::VROSC::IconMesh>& __cordl_internal_get__iconMesh() ;

constexpr float_t const& __cordl_internal_get__textpaddingX() const;

constexpr float_t& __cordl_internal_get__textpaddingX() ;

constexpr float_t const& __cordl_internal_get__textpaddingY() const;

constexpr float_t& __cordl_internal_get__textpaddingY() ;

constexpr void __cordl_internal_set__currentTooltip(::VROSC::TooltipData*  value) ;

constexpr void __cordl_internal_set__hintBackground(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__hintLabelIfIcon(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__hintLabelText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__iconHolder(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__iconMesh(::UnityW<::VROSC::IconMesh>  value) ;

constexpr void __cordl_internal_set__textpaddingX(float_t  value) ;

constexpr void __cordl_internal_set__textpaddingY(float_t  value) ;

/// @brief Method .ctor, addr 0x1732c64, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerHintUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerHintUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerHintUI(ControllerHintUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerHintUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerHintUI(ControllerHintUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1067};

/// @brief Field _hintLabelText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____hintLabelText;

/// @brief Field _hintBackground, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____hintBackground;

/// @brief Field _hintLabelIfIcon, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____hintLabelIfIcon;

/// @brief Field _iconMesh, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::IconMesh>  ____iconMesh;

/// @brief Field _iconHolder, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____iconHolder;

/// @brief Field _textpaddingX, offset: 0x48, size: 0x4, def value: None
 float_t  ____textpaddingX;

/// @brief Field _textpaddingY, offset: 0x4c, size: 0x4, def value: None
 float_t  ____textpaddingY;

/// @brief Field _currentTooltip, offset: 0x50, size: 0x8, def value: None
 ::VROSC::TooltipData*  ____currentTooltip;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ControllerHintUI, ____hintLabelText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerHintUI, ____hintBackground) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerHintUI, ____hintLabelIfIcon) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerHintUI, ____iconMesh) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerHintUI, ____iconHolder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerHintUI, ____textpaddingX) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerHintUI, ____textpaddingY) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::VROSC::ControllerHintUI, ____currentTooltip) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ControllerHintUI, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ControllerHintUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ControllerHintUI*, "VROSC", "ControllerHintUI");
