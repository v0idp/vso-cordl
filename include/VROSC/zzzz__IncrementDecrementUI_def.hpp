#pragma once
// IWYU pragma private; include "VROSC/IncrementDecrementUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IncrementDecrementUI)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace TMPro {
class TextMeshPro;
}
namespace VROSC {
class IntNode;
}
namespace VROSC {
class UIButton;
}
// Forward declare root types
namespace VROSC {
class IncrementDecrementUI;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::IncrementDecrementUI);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.IncrementDecrementUI
class CORDL_TYPE IncrementDecrementUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnValueChanged, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnValueChanged, put=__cordl_internal_set_OnValueChanged)) ::System::Action_1<int32_t>*  OnValueChanged;

/// @brief Field _decrementButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__decrementButton, put=__cordl_internal_set__decrementButton)) ::UnityW<::VROSC::UIButton>  _decrementButton;

/// @brief Field _display, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__display, put=__cordl_internal_set__display)) ::UnityW<::TMPro::TextMeshPro>  _display;

/// @brief Field _incrementButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__incrementButton, put=__cordl_internal_set__incrementButton)) ::UnityW<::VROSC::UIButton>  _incrementButton;

/// @brief Field _output, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__output, put=__cordl_internal_set__output)) ::UnityW<::VROSC::IntNode>  _output;

/// @brief Method Awake, addr 0x1782604, size 0x2e4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DecrementButtonPressed, addr 0x1782bd0, size 0x70, virtual true, abstract: false, final false
inline void DecrementButtonPressed() ;

/// @brief Method IncrementButtonPressed, addr 0x1782b60, size 0x70, virtual true, abstract: false, final false
inline void IncrementButtonPressed() ;

static inline ::VROSC::IncrementDecrementUI* New_ctor() ;

/// @brief Method OnDestroy, addr 0x17828e8, size 0x1bc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetDisabled, addr 0x1782aa4, size 0x54, virtual false, abstract: false, final false
inline void SetDisabled(::System::Object*  disabler, bool  shouldBeDisabled) ;

/// @brief Method SetValue, addr 0x1782af8, size 0x68, virtual false, abstract: false, final false
inline void SetValue(int32_t  value) ;

/// @brief Method ValueChanged, addr 0x1782c40, size 0x1c, virtual false, abstract: false, final false
inline void ValueChanged(int32_t  value) ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnValueChanged() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnValueChanged() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__decrementButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__decrementButton() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__display() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__display() ;

constexpr ::UnityW<::VROSC::UIButton> const& __cordl_internal_get__incrementButton() const;

constexpr ::UnityW<::VROSC::UIButton>& __cordl_internal_get__incrementButton() ;

constexpr ::UnityW<::VROSC::IntNode> const& __cordl_internal_get__output() const;

constexpr ::UnityW<::VROSC::IntNode>& __cordl_internal_get__output() ;

constexpr void __cordl_internal_set_OnValueChanged(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__decrementButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__display(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__incrementButton(::UnityW<::VROSC::UIButton>  value) ;

constexpr void __cordl_internal_set__output(::UnityW<::VROSC::IntNode>  value) ;

/// @brief Method .ctor, addr 0x1782c5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IncrementDecrementUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IncrementDecrementUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IncrementDecrementUI(IncrementDecrementUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IncrementDecrementUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IncrementDecrementUI(IncrementDecrementUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1308};

/// @brief Field _incrementButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____incrementButton;

/// @brief Field _decrementButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::VROSC::UIButton>  ____decrementButton;

/// @brief Field _display, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____display;

/// @brief Field _output, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::VROSC::IntNode>  ____output;

/// @brief Field OnValueChanged, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnValueChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::IncrementDecrementUI, ____incrementButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::IncrementDecrementUI, ____decrementButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::IncrementDecrementUI, ____display) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::IncrementDecrementUI, ____output) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::IncrementDecrementUI, ___OnValueChanged) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::IncrementDecrementUI, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::IncrementDecrementUI);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::IncrementDecrementUI*, "VROSC", "IncrementDecrementUI");
