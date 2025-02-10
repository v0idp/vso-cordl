#pragma once
// IWYU pragma private; include "VROSC/ButtonWithCurve.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ButtonWithCurve)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace VROSC {
class ButtonWithCurve;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::ButtonWithCurve);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.ButtonWithCurve
class CORDL_TYPE ButtonWithCurve : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Button)) ::UnityW<::VROSC::UIButton>  Button;

 __declspec(property(get=get_Curve)) ::UnityEngine::AnimationCurve*  Curve;

/// @brief Field OnClick, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnClick, put=__cordl_internal_set_OnClick)) ::System::Action_1<::VROSC::ButtonWithCurve*>*  OnClick;

/// @brief Field _button, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__button, put=__cordl_internal_set__button)) ::UnityW<::VROSC::UIButton>  _button;

/// @brief Field _curve, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__curve, put=__cordl_internal_set__curve)) ::UnityEngine::AnimationCurve*  _curve;

/// @brief Method ClickPressed, addr 0x1771a68, size 0x20, virtual false, abstract: false, final false
inline void ClickPressed() ;

static inline ::VROSC::ButtonWithCurve* New_ctor() ;

/// @brief Method Setup, addr 0x1771974, size 0xf4, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method TearDown, addr 0x1771a88, size 0xc4, virtual false, abstract: false, final false
inline void TearDown() ;

constexpr ::System::Action_1<::VROSC::ButtonWithCurve*>* const& __cordl_internal_get_OnClick() const;

constexpr ::System::Action_1<::VROSC::ButtonWithCurve*>*& __cordl_internal_get_OnClick() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__button() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__button() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__curve() ;

constexpr void __cordl_internal_set_OnClick(::System::Action_1<::VROSC::ButtonWithCurve*>*  value) ;

constexpr void __cordl_internal_set__button(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x1771b4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Button, addr 0x1771964, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UIButton> get_Button() ;

/// @brief Method get_Curve, addr 0x177196c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_Curve() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ButtonWithCurve() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ButtonWithCurve", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ButtonWithCurve(ButtonWithCurve && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ButtonWithCurve", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ButtonWithCurve(ButtonWithCurve const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1251};

/// @brief Field _button, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____button;

/// @brief Field _curve, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____curve;

/// @brief Field OnClick, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::VROSC::ButtonWithCurve*>*  ___OnClick;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::ButtonWithCurve, ____button) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::ButtonWithCurve, ____curve) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::ButtonWithCurve, ___OnClick) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::ButtonWithCurve, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::ButtonWithCurve);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::ButtonWithCurve*, "VROSC", "ButtonWithCurve");
