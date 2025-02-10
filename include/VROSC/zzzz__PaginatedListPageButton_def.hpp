#pragma once
// IWYU pragma private; include "VROSC/PaginatedListPageButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PaginatedListPageButton)
namespace System {
template<typename T>
class Action_1;
}
namespace TMPro {
class TextMeshPro;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class UIToggle;
}
// Forward declare root types
namespace VROSC {
class PaginatedListPageButton;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::PaginatedListPageButton);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.PaginatedListPageButton
class CORDL_TYPE PaginatedListPageButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnPageButtonPressed, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPageButtonPressed, put=__cordl_internal_set_OnPageButtonPressed)) ::System::Action_1<int32_t>*  OnPageButtonPressed;

/// @brief Field _button, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__button, put=__cordl_internal_set__button)) ::UnityW<::VROSC::UIToggle>  _button;

/// @brief Field _selected, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__selected, put=__cordl_internal_set__selected)) bool  _selected;

/// @brief Field _targetPage, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__targetPage, put=__cordl_internal_set__targetPage)) int32_t  _targetPage;

/// @brief Field _text, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshPro>  _text;

/// @brief Method Awake, addr 0x174b250, size 0xc8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::PaginatedListPageButton* New_ctor() ;

/// @brief Method OnDestroy, addr 0x174b318, size 0xc8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetActive, addr 0x174ae94, size 0x28, virtual false, abstract: false, final false
inline void SetActive(bool  active) ;

/// @brief Method SetIsSelected, addr 0x174aef0, size 0x2c, virtual false, abstract: false, final false
inline void SetIsSelected(bool  selected) ;

/// @brief Method SetPage, addr 0x174aebc, size 0x34, virtual false, abstract: false, final false
inline void SetPage(int32_t  page, ::StringW  text) ;

/// @brief Method SetSelected, addr 0x174b3e0, size 0x4c, virtual true, abstract: false, final false
inline void SetSelected(::VROSC::InputDevice*  inputDevice, bool  shouldBeSelected) ;

constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_OnPageButtonPressed() const;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_OnPageButtonPressed() ;

constexpr ::UnityW<::VROSC::UIToggle> const& __cordl_internal_get__button() const;

constexpr ::UnityW<::VROSC::UIToggle>& __cordl_internal_get__button() ;

constexpr bool const& __cordl_internal_get__selected() const;

constexpr bool& __cordl_internal_get__selected() ;

constexpr int32_t const& __cordl_internal_get__targetPage() const;

constexpr int32_t& __cordl_internal_get__targetPage() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__text() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__text() ;

constexpr void __cordl_internal_set_OnPageButtonPressed(::System::Action_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__button(::UnityW<::VROSC::UIToggle>  value) ;

constexpr void __cordl_internal_set__selected(bool  value) ;

constexpr void __cordl_internal_set__targetPage(int32_t  value) ;

constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x174b42c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PaginatedListPageButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PaginatedListPageButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PaginatedListPageButton(PaginatedListPageButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PaginatedListPageButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PaginatedListPageButton(PaginatedListPageButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1141};

/// @brief Field _button, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UIToggle>  ____button;

/// @brief Field _text, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____text;

/// @brief Field _targetPage, offset: 0x30, size: 0x4, def value: None
 int32_t  ____targetPage;

/// @brief Field _selected, offset: 0x34, size: 0x1, def value: None
 bool  ____selected;

/// @brief Field OnPageButtonPressed, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___OnPageButtonPressed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::PaginatedListPageButton, ____button) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaginatedListPageButton, ____text) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaginatedListPageButton, ____targetPage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaginatedListPageButton, ____selected) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::PaginatedListPageButton, ___OnPageButtonPressed) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::PaginatedListPageButton, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::PaginatedListPageButton);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::PaginatedListPageButton*, "VROSC", "PaginatedListPageButton");
