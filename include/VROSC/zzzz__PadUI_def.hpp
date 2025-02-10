#pragma once
// IWYU pragma private; include "VROSC/PadUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PadUI)
namespace System {
class Action;
}
namespace UnityEngine {
class Transform;
}
namespace VROSC {
class Grabable;
}
namespace VROSC {
class TransformMover;
}
namespace VROSC {
class UIHoldButton;
}
// Forward declare root types
namespace VROSC {
class PadUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PadUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PadUI
class CORDL_TYPE PadUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnDeletePressed, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDeletePressed, put=__cordl_internal_set_OnDeletePressed)) ::System::Action*  OnDeletePressed;

/// @brief Field _UIContent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__UIContent, put=__cordl_internal_set__UIContent)) ::UnityW<::UnityEngine::Transform>  _UIContent;

/// @brief Field _active, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get__active, put=__cordl_internal_set__active)) bool  _active;

/// @brief Field _align, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__align, put=__cordl_internal_set__align)) bool  _align;

/// @brief Field _alignment, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__alignment, put=__cordl_internal_set__alignment)) ::UnityW<::UnityEngine::Transform>  _alignment;

/// @brief Field _deleteButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__deleteButton, put=__cordl_internal_set__deleteButton)) ::UnityW<::VROSC::UIHoldButton>  _deleteButton;

/// @brief Field _drumHovered, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__drumHovered, put=__cordl_internal_set__drumHovered)) bool  _drumHovered;

/// @brief Field _drumMover, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__drumMover, put=__cordl_internal_set__drumMover)) ::UnityW<::VROSC::TransformMover>  _drumMover;

/// @brief Field _drumgrabbed, offset 0x53, size 0x1 
 __declspec(property(get=__cordl_internal_get__drumgrabbed, put=__cordl_internal_set__drumgrabbed)) bool  _drumgrabbed;

/// @brief Field _extendedHover, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__extendedHover, put=__cordl_internal_set__extendedHover)) ::UnityW<::VROSC::Grabable>  _extendedHover;

/// @brief Field _openSettingsOnHover, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__openSettingsOnHover, put=__cordl_internal_set__openSettingsOnHover)) bool  _openSettingsOnHover;

/// @brief Field _settingsHovered, offset 0x52, size 0x1 
 __declspec(property(get=__cordl_internal_get__settingsHovered, put=__cordl_internal_set__settingsHovered)) bool  _settingsHovered;

/// @brief Field _shouldBeActiveThisFrame, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get__shouldBeActiveThisFrame, put=__cordl_internal_set__shouldBeActiveThisFrame)) bool  _shouldBeActiveThisFrame;

/// @brief Method Awake, addr 0x1742318, size 0x274, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Delete, addr 0x1742b60, size 0x1c, virtual false, abstract: false, final false
inline void Delete() ;

/// @brief Method DrumGrabbed, addr 0x174283c, size 0x20, virtual false, abstract: false, final false
inline void DrumGrabbed(bool  grabbed) ;

/// @brief Method DrumHovered, addr 0x174287c, size 0x20, virtual false, abstract: false, final false
inline void DrumHovered(bool  drumHovered) ;

/// @brief Method LateUpdate, addr 0x17428d0, size 0x290, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::VROSC::PadUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17425bc, size 0x274, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetOpenSettingsOnHover, addr 0x1742830, size 0xc, virtual false, abstract: false, final false
inline void SetOpenSettingsOnHover(bool  onHover) ;

/// @brief Method SettingsHovered, addr 0x174285c, size 0x20, virtual false, abstract: false, final false
inline void SettingsHovered(bool  hovered) ;

/// @brief Method Setup, addr 0x174258c, size 0x30, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method UpdateHover, addr 0x174289c, size 0x34, virtual true, abstract: false, final false
inline void UpdateHover() ;

constexpr ::System::Action* const& __cordl_internal_get_OnDeletePressed() const;

constexpr ::System::Action*& __cordl_internal_get_OnDeletePressed() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__UIContent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__UIContent() ;

constexpr bool const& __cordl_internal_get__active() const;

constexpr bool& __cordl_internal_get__active() ;

constexpr bool const& __cordl_internal_get__align() const;

constexpr bool& __cordl_internal_get__align() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__alignment() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__alignment() ;

constexpr ::UnityW<::VROSC::UIHoldButton> const& __cordl_internal_get__deleteButton() const;

constexpr ::UnityW<::VROSC::UIHoldButton>& __cordl_internal_get__deleteButton() ;

constexpr bool const& __cordl_internal_get__drumHovered() const;

constexpr bool& __cordl_internal_get__drumHovered() ;

constexpr ::UnityW<::VROSC::TransformMover> const& __cordl_internal_get__drumMover() const;

constexpr ::UnityW<::VROSC::TransformMover>& __cordl_internal_get__drumMover() ;

constexpr bool const& __cordl_internal_get__drumgrabbed() const;

constexpr bool& __cordl_internal_get__drumgrabbed() ;

constexpr ::UnityW<::VROSC::Grabable> const& __cordl_internal_get__extendedHover() const;

constexpr ::UnityW<::VROSC::Grabable>& __cordl_internal_get__extendedHover() ;

constexpr bool const& __cordl_internal_get__openSettingsOnHover() const;

constexpr bool& __cordl_internal_get__openSettingsOnHover() ;

constexpr bool const& __cordl_internal_get__settingsHovered() const;

constexpr bool& __cordl_internal_get__settingsHovered() ;

constexpr bool const& __cordl_internal_get__shouldBeActiveThisFrame() const;

constexpr bool& __cordl_internal_get__shouldBeActiveThisFrame() ;

constexpr void __cordl_internal_set_OnDeletePressed(::System::Action*  value) ;

constexpr void __cordl_internal_set__UIContent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__active(bool  value) ;

constexpr void __cordl_internal_set__align(bool  value) ;

constexpr void __cordl_internal_set__alignment(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__deleteButton(::UnityW<::VROSC::UIHoldButton>  value) ;

constexpr void __cordl_internal_set__drumHovered(bool  value) ;

constexpr void __cordl_internal_set__drumMover(::UnityW<::VROSC::TransformMover>  value) ;

constexpr void __cordl_internal_set__drumgrabbed(bool  value) ;

constexpr void __cordl_internal_set__extendedHover(::UnityW<::VROSC::Grabable>  value) ;

constexpr void __cordl_internal_set__openSettingsOnHover(bool  value) ;

constexpr void __cordl_internal_set__settingsHovered(bool  value) ;

constexpr void __cordl_internal_set__shouldBeActiveThisFrame(bool  value) ;

/// @brief Method .ctor, addr 0x1742b7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PadUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PadUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PadUI(PadUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PadUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PadUI(PadUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1118};

/// @brief Field _alignment, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____alignment;

/// @brief Field _align, offset: 0x28, size: 0x1, def value: None
 bool  ____align;

/// @brief Field _deleteButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::UIHoldButton>  ____deleteButton;

/// @brief Field _drumMover, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::TransformMover>  ____drumMover;

/// @brief Field _extendedHover, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::VROSC::Grabable>  ____extendedHover;

/// @brief Field _UIContent, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____UIContent;

/// @brief Field _openSettingsOnHover, offset: 0x50, size: 0x1, def value: None
 bool  ____openSettingsOnHover;

/// @brief Field _drumHovered, offset: 0x51, size: 0x1, def value: None
 bool  ____drumHovered;

/// @brief Field _settingsHovered, offset: 0x52, size: 0x1, def value: None
 bool  ____settingsHovered;

/// @brief Field _drumgrabbed, offset: 0x53, size: 0x1, def value: None
 bool  ____drumgrabbed;

/// @brief Field _active, offset: 0x54, size: 0x1, def value: None
 bool  ____active;

/// @brief Field _shouldBeActiveThisFrame, offset: 0x55, size: 0x1, def value: None
 bool  ____shouldBeActiveThisFrame;

/// @brief Field OnDeletePressed, offset: 0x58, size: 0x8, def value: None
 ::System::Action*  ___OnDeletePressed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PadUI, ____alignment) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::PadUI, ____align) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::PadUI, ____deleteButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::PadUI, ____drumMover) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::PadUI, ____extendedHover) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::PadUI, ____UIContent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::PadUI, ____openSettingsOnHover) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::PadUI, ____drumHovered) == 0x51, "Offset mismatch!");

static_assert(offsetof(::VROSC::PadUI, ____settingsHovered) == 0x52, "Offset mismatch!");

static_assert(offsetof(::VROSC::PadUI, ____drumgrabbed) == 0x53, "Offset mismatch!");

static_assert(offsetof(::VROSC::PadUI, ____active) == 0x54, "Offset mismatch!");

static_assert(offsetof(::VROSC::PadUI, ____shouldBeActiveThisFrame) == 0x55, "Offset mismatch!");

static_assert(offsetof(::VROSC::PadUI, ___OnDeletePressed) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PadUI, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PadUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PadUI*, "VROSC", "PadUI");
