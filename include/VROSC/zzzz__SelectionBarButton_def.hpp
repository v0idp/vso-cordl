#pragma once
// IWYU pragma private; include "VROSC/SelectionBarButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__UIScrollableItem_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SelectionBarButton)
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
namespace VROSC {
class UIInteractableColorSettings;
}
// Forward declare root types
namespace VROSC {
class SelectionBarButton;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SelectionBarButton);
// Dependencies VROSC.UIScrollableItem
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SelectionBarButton
class CORDL_TYPE SelectionBarButton : public ::VROSC::UIScrollableItem {
public:
// Declarations
/// @brief Field _backgroundColors, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__backgroundColors, put=__cordl_internal_set__backgroundColors)) ::VROSC::UIInteractableColorSettings*  _backgroundColors;

/// @brief Field _buttonBackground, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__buttonBackground, put=__cordl_internal_set__buttonBackground)) ::UnityW<::UnityEngine::Renderer>  _buttonBackground;

/// @brief Field _materialBlock, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialBlock, put=__cordl_internal_set__materialBlock)) ::UnityEngine::MaterialPropertyBlock*  _materialBlock;

/// @brief Field _text, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshPro>  _text;

/// @brief Field _textColors, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__textColors, put=__cordl_internal_set__textColors)) ::VROSC::UIInteractableColorSettings*  _textColors;

/// @brief Method AutoFind, addr 0x1749f00, size 0x50, virtual false, abstract: false, final false
inline void AutoFind() ;

/// @brief Method Awake, addr 0x1749cac, size 0x6c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Colorize, addr 0x1749e8c, size 0x74, virtual false, abstract: false, final false
inline void Colorize() ;

static inline ::VROSC::SelectionBarButton* New_ctor() ;

/// @brief Method SetBackground, addr 0x1749e10, size 0x7c, virtual false, abstract: false, final false
inline void SetBackground() ;

/// @brief Method Setup, addr 0x1749d18, size 0x2c, virtual true, abstract: false, final false
inline void Setup(int32_t  index, ::StringW  value) ;

/// @brief Method UpdateColors, addr 0x1749d44, size 0xcc, virtual true, abstract: false, final false
inline void UpdateColors() ;

constexpr ::VROSC::UIInteractableColorSettings* const& __cordl_internal_get__backgroundColors() const;

constexpr ::VROSC::UIInteractableColorSettings*& __cordl_internal_get__backgroundColors() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__buttonBackground() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__buttonBackground() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get__materialBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get__materialBlock() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__text() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__text() ;

constexpr ::VROSC::UIInteractableColorSettings* const& __cordl_internal_get__textColors() const;

constexpr ::VROSC::UIInteractableColorSettings*& __cordl_internal_get__textColors() ;

constexpr void __cordl_internal_set__backgroundColors(::VROSC::UIInteractableColorSettings*  value) ;

constexpr void __cordl_internal_set__buttonBackground(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set__materialBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__textColors(::VROSC::UIInteractableColorSettings*  value) ;

/// @brief Method .ctor, addr 0x1749f50, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SelectionBarButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SelectionBarButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectionBarButton(SelectionBarButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectionBarButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectionBarButton(SelectionBarButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1135};

/// @brief Field _buttonBackground, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____buttonBackground;

/// @brief Field _backgroundColors, offset: 0x40, size: 0x8, def value: None
 ::VROSC::UIInteractableColorSettings*  ____backgroundColors;

/// @brief Field _text, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____text;

/// @brief Field _textColors, offset: 0x50, size: 0x8, def value: None
 ::VROSC::UIInteractableColorSettings*  ____textColors;

/// @brief Field _materialBlock, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ____materialBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SelectionBarButton, ____buttonBackground) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::SelectionBarButton, ____backgroundColors) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::SelectionBarButton, ____text) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::SelectionBarButton, ____textColors) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::SelectionBarButton, ____materialBlock) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SelectionBarButton, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SelectionBarButton);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SelectionBarButton*, "VROSC", "SelectionBarButton");
