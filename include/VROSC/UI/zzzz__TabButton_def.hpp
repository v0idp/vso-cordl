#pragma once
// IWYU pragma private; include "VROSC/UI/TabButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TabButton)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class GameObject;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace VROSC::UI {
class TabButton;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::TabButton);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.TabButton
class CORDL_TYPE TabButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnTabActivated, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTabActivated, put=__cordl_internal_set_OnTabActivated)) ::System::Action_1<::UnityW<::VROSC::UI::TabButton>>*  OnTabActivated;

 __declspec(property(get=get_Target)) ::UnityW<::UnityEngine::GameObject>  Target;

/// @brief Field _activeBackground, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeBackground, put=__cordl_internal_set__activeBackground)) ::UnityW<::UnityEngine::GameObject>  _activeBackground;

/// @brief Field _button, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__button, put=__cordl_internal_set__button)) ::UnityW<::VROSC::UIButton>  _button;

/// @brief Field _isActive, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__isActive, put=__cordl_internal_set__isActive)) bool  _isActive;

/// @brief Field _isEnabled, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__isEnabled, put=__cordl_internal_set__isEnabled)) bool  _isEnabled;

/// @brief Field _tabTarget, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__tabTarget, put=__cordl_internal_set__tabTarget)) ::UnityW<::UnityEngine::GameObject>  _tabTarget;

/// @brief Method Awake, addr 0x17e2ffc, size 0xc4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Clicked, addr 0x17e30c0, size 0x30, virtual false, abstract: false, final false
inline void Clicked() ;

static inline ::VROSC::UI::TabButton* New_ctor() ;

/// @brief Method SetActive, addr 0x17e30fc, size 0x5c, virtual false, abstract: false, final false
inline void SetActive(bool  active) ;

/// @brief Method SetEnabled, addr 0x17e30f0, size 0xc, virtual false, abstract: false, final false
inline void SetEnabled(bool  enabled) ;

constexpr ::System::Action_1<::UnityW<::VROSC::UI::TabButton>>* const& __cordl_internal_get_OnTabActivated() const;

constexpr ::System::Action_1<::UnityW<::VROSC::UI::TabButton>>*& __cordl_internal_get_OnTabActivated() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__activeBackground() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__activeBackground() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__button() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__button() ;

constexpr bool const& __cordl_internal_get__isActive() const;

constexpr bool& __cordl_internal_get__isActive() ;

constexpr bool const& __cordl_internal_get__isEnabled() const;

constexpr bool& __cordl_internal_get__isEnabled() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__tabTarget() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__tabTarget() ;

constexpr void __cordl_internal_set_OnTabActivated(::System::Action_1<::UnityW<::VROSC::UI::TabButton>>*  value) ;

constexpr void __cordl_internal_set__activeBackground(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__button(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__isActive(bool  value) ;

constexpr void __cordl_internal_set__isEnabled(bool  value) ;

constexpr void __cordl_internal_set__tabTarget(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x17e3158, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Target, addr 0x17e2ff4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_Target() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TabButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TabButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TabButton(TabButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TabButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TabButton(TabButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1598};

/// @brief Field _button, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____button;

/// @brief Field _activeBackground, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____activeBackground;

/// @brief Field _tabTarget, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____tabTarget;

/// @brief Field _isActive, offset: 0x38, size: 0x1, def value: None
 bool  ____isActive;

/// @brief Field _isEnabled, offset: 0x39, size: 0x1, def value: None
 bool  ____isEnabled;

/// @brief Field OnTabActivated, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::VROSC::UI::TabButton>>*  ___OnTabActivated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::TabButton, ____button) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::TabButton, ____activeBackground) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::TabButton, ____tabTarget) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::TabButton, ____isActive) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::TabButton, ____isEnabled) == 0x39, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::TabButton, ___OnTabActivated) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::TabButton, 0x48>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::TabButton);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::TabButton*, "VROSC.UI", "TabButton");
