#pragma once
// IWYU pragma private; include "VROSC/UIButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__UIInteractable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UIButton)
namespace System {
class Action;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class TextMesh;
}
namespace VROSC {
class ClickData;
}
namespace VROSC {
class SimpleHaptic;
}
// Forward declare root types
namespace VROSC {
class UIButton;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UIButton);
// Dependencies VROSC.UIInteractable
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIButton
class CORDL_TYPE UIButton : public ::VROSC::UIInteractable {
public:
// Declarations
 __declspec(property(get=get_InteractionStopsLaser)) bool  InteractionStopsLaser;

/// @brief Field OnButtonPress, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnButtonPress, put=__cordl_internal_set_OnButtonPress)) ::System::Action*  OnButtonPress;

 __declspec(property(get=get_Text)) ::StringW  Text;

/// @brief Field _hapticFeedBack, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__hapticFeedBack, put=__cordl_internal_set__hapticFeedBack)) ::VROSC::SimpleHaptic*  _hapticFeedBack;

/// @brief Field _label, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__label, put=__cordl_internal_set__label)) ::UnityW<::UnityEngine::TextMesh>  _label;

/// @brief Field _tmpLabel, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpLabel, put=__cordl_internal_set__tmpLabel)) ::UnityW<::TMPro::TextMeshPro>  _tmpLabel;

/// @brief Method ButtonWasPressed, addr 0x1772474, size 0x74, virtual true, abstract: false, final false
inline void ButtonWasPressed(::VROSC::ClickData*  clickData) ;

static inline ::VROSC::UIButton* New_ctor() ;

/// @brief Method SetText, addr 0x17724e8, size 0xdc, virtual false, abstract: false, final false
inline void SetText(::StringW  text) ;

/// @brief Method Start, addr 0x17723ac, size 0xc8, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::System::Action* const& __cordl_internal_get_OnButtonPress() const;

constexpr ::System::Action*& __cordl_internal_get_OnButtonPress() ;

constexpr ::VROSC::SimpleHaptic* const& __cordl_internal_get__hapticFeedBack() const;

constexpr ::VROSC::SimpleHaptic*& __cordl_internal_get__hapticFeedBack() ;

constexpr ::UnityW<::UnityEngine::TextMesh> const& __cordl_internal_get__label() const;

constexpr ::UnityW<::UnityEngine::TextMesh>& __cordl_internal_get__label() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__tmpLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__tmpLabel() ;

constexpr void __cordl_internal_set_OnButtonPress(::System::Action*  value) ;

constexpr void __cordl_internal_set__hapticFeedBack(::VROSC::SimpleHaptic*  value) ;

constexpr void __cordl_internal_set__label(::UnityW<::UnityEngine::TextMesh>  value) ;

constexpr void __cordl_internal_set__tmpLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x17725c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InteractionStopsLaser, addr 0x177230c, size 0x8, virtual true, abstract: false, final false
inline bool get_InteractionStopsLaser() ;

/// @brief Method get_Text, addr 0x1772314, size 0x98, virtual false, abstract: false, final false
inline ::StringW get_Text() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIButton(UIButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIButton(UIButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1255};

/// @brief Field _label, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextMesh>  ____label;

/// @brief Field _tmpLabel, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____tmpLabel;

/// @brief Field _hapticFeedBack, offset: 0xa0, size: 0x8, def value: None
 ::VROSC::SimpleHaptic*  ____hapticFeedBack;

/// @brief Field OnButtonPress, offset: 0xa8, size: 0x8, def value: None
 ::System::Action*  ___OnButtonPress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIButton, ____label) == 0x90, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIButton, ____tmpLabel) == 0x98, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIButton, ____hapticFeedBack) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIButton, ___OnButtonPress) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIButton, 0xb0>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UIButton);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIButton*, "VROSC", "UIButton");
