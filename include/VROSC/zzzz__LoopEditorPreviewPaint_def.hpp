#pragma once
// IWYU pragma private; include "VROSC/LoopEditorPreviewPaint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LoopEditorPreviewPaint)
namespace System {
class Action;
}
namespace VROSC {
class ButtonWithCurve;
}
namespace VROSC {
class PaintInput;
}
namespace VROSC {
class Paint;
}
namespace VROSC {
class UIButton;
}
namespace VROSC {
class UIToggle;
}
// Forward declare root types
namespace VROSC {
class LoopEditorPreviewPaint;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LoopEditorPreviewPaint);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LoopEditorPreviewPaint
class CORDL_TYPE LoopEditorPreviewPaint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnPaintUpdated, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPaintUpdated, put=__cordl_internal_set_OnPaintUpdated)) ::System::Action*  OnPaintUpdated;

 __declspec(property(get=get_Paint)) ::UnityW<::VROSC::Paint>  Paint;

/// @brief Field _blurModeToggle, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__blurModeToggle, put=__cordl_internal_set__blurModeToggle)) ::UnityW<::VROSC::UIToggle>  _blurModeToggle;

/// @brief Field _fillButtons, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__fillButtons, put=__cordl_internal_set__fillButtons)) ::ArrayW<::VROSC::ButtonWithCurve*,::Array<::VROSC::ButtonWithCurve*>*>  _fillButtons;

/// @brief Field _flipHorizontal, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__flipHorizontal, put=__cordl_internal_set__flipHorizontal)) ::UnityW<::VROSC::UIButton>  _flipHorizontal;

/// @brief Field _flipVertical, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__flipVertical, put=__cordl_internal_set__flipVertical)) ::UnityW<::VROSC::UIButton>  _flipVertical;

/// @brief Field _paint, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__paint, put=__cordl_internal_set__paint)) ::UnityW<::VROSC::Paint>  _paint;

/// @brief Field _paintInput, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__paintInput, put=__cordl_internal_set__paintInput)) ::UnityW<::VROSC::PaintInput>  _paintInput;

/// @brief Method Awake, addr 0x1897898, size 0x2b8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FillButtonPressed, addr 0x1897f6c, size 0x20, virtual false, abstract: false, final false
inline void FillButtonPressed(::VROSC::ButtonWithCurve*  button) ;

/// @brief Method FlipHorizonalPressed, addr 0x1897e58, size 0x18, virtual false, abstract: false, final false
inline void FlipHorizonalPressed() ;

/// @brief Method FlipVerticalPressed, addr 0x1897edc, size 0x18, virtual false, abstract: false, final false
inline void FlipVerticalPressed() ;

static inline ::VROSC::LoopEditorPreviewPaint* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1897b50, size 0x2b8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PaintUpdated, addr 0x1898034, size 0x1c, virtual false, abstract: false, final false
inline void PaintUpdated() ;

/// @brief Method SetPainting, addr 0x1897e08, size 0x1c, virtual false, abstract: false, final false
inline void SetPainting(bool  painting) ;

constexpr ::System::Action* const& __cordl_internal_get_OnPaintUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_OnPaintUpdated() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__blurModeToggle() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__blurModeToggle() ;

constexpr ::ArrayW<::VROSC::ButtonWithCurve*,::Array<::VROSC::ButtonWithCurve*>*> const& __cordl_internal_get__fillButtons() const;

constexpr ::ArrayW<::VROSC::ButtonWithCurve*,::Array<::VROSC::ButtonWithCurve*>*>& __cordl_internal_get__fillButtons() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__flipHorizontal() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__flipHorizontal() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__flipVertical() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__flipVertical() ;

constexpr ::UnityW<::VROSC::Paint> const& __cordl_internal_get__paint() const;

constexpr ::UnityW<::VROSC::Paint>& __cordl_internal_get__paint() ;

constexpr ::UnityW<::VROSC::PaintInput> const& __cordl_internal_get__paintInput() const;

constexpr ::UnityW<::VROSC::PaintInput>& __cordl_internal_get__paintInput() ;

constexpr void __cordl_internal_set_OnPaintUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set__blurModeToggle(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__fillButtons(::ArrayW<::VROSC::ButtonWithCurve*,::Array<::VROSC::ButtonWithCurve*>*>  value) ;

constexpr void __cordl_internal_set__flipHorizontal(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__flipVertical(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__paint(::UnityW<::VROSC::Paint>  value) ;

constexpr void __cordl_internal_set__paintInput(::UnityW<::VROSC::PaintInput>  value) ;

/// @brief Method .ctor, addr 0x1898050, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Paint, addr 0x1897890, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::Paint> get_Paint() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoopEditorPreviewPaint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoopEditorPreviewPaint", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LoopEditorPreviewPaint(LoopEditorPreviewPaint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoopEditorPreviewPaint", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoopEditorPreviewPaint(LoopEditorPreviewPaint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{652};

/// @brief Field _paint, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::Paint>  ____paint;

/// @brief Field _paintInput, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::PaintInput>  ____paintInput;

/// @brief Field _blurModeToggle, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____blurModeToggle;

/// @brief Field _flipHorizontal, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____flipHorizontal;

/// @brief Field _flipVertical, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____flipVertical;

/// @brief Field _fillButtons, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::VROSC::ButtonWithCurve*,::Array<::VROSC::ButtonWithCurve*>*>  ____fillButtons;

/// @brief Field OnPaintUpdated, offset: 0x50, size: 0x8, def value: None
 ::System::Action*  ___OnPaintUpdated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LoopEditorPreviewPaint, ____paint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorPreviewPaint, ____paintInput) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorPreviewPaint, ____blurModeToggle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorPreviewPaint, ____flipHorizontal) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorPreviewPaint, ____flipVertical) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorPreviewPaint, ____fillButtons) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::LoopEditorPreviewPaint, ___OnPaintUpdated) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LoopEditorPreviewPaint, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LoopEditorPreviewPaint);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LoopEditorPreviewPaint*, "VROSC", "LoopEditorPreviewPaint");
