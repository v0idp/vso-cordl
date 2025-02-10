#pragma once
// IWYU pragma private; include "VROSC/UI/UITextColoring.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/UI/zzzz__UIInteractableColoring_def.hpp"
CORDL_MODULE_EXPORT(UITextColoring)
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC::UI {
class UITextSetting;
}
// Forward declare root types
namespace VROSC::UI {
class UITextColoring;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::UITextColoring);
// Dependencies UnityEngine.Color, VROSC.UI.UIInteractableColoring
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.UITextColoring
class CORDL_TYPE UITextColoring : public ::VROSC::UI::UIInteractableColoring {
public:
// Declarations
/// @brief Field _colorFromScheme, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__colorFromScheme, put=__cordl_internal_set__colorFromScheme)) ::UnityEngine::Color  _colorFromScheme;

/// @brief Field _textMeshPro, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__textMeshPro, put=__cordl_internal_set__textMeshPro)) ::UnityW<::TMPro::TextMeshPro>  _textMeshPro;

/// @brief Field _textSetting, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__textSetting, put=__cordl_internal_set__textSetting)) ::UnityW<::VROSC::UI::UITextSetting>  _textSetting;

/// @brief Method ApplyColor, addr 0x17e6844, size 0xc0, virtual true, abstract: false, final false
inline void ApplyColor(::UnityEngine::Color  color) ;

/// @brief Method Awake, addr 0x17e6378, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::UI::UITextColoring* New_ctor() ;

/// @brief Method OnDisable, addr 0x17e6660, size 0x104, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x17e655c, size 0x104, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0x17e6904, size 0x140, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method RemoveDumbMargins, addr 0x17e6764, size 0xc4, virtual false, abstract: false, final false
inline void RemoveDumbMargins() ;

/// @brief Method SetData, addr 0x17e6a44, size 0x8, virtual false, abstract: false, final false
inline void SetData(::VROSC::UI::UITextSetting*  setting) ;

/// @brief Method SetTextSettings, addr 0x17e637c, size 0x1e0, virtual false, abstract: false, final false
inline void SetTextSettings() ;

/// @brief Method UpdateColor, addr 0x17e6828, size 0x1c, virtual true, abstract: false, final false
inline void UpdateColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__colorFromScheme() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__colorFromScheme() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__textMeshPro() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__textMeshPro() ;

constexpr ::UnityW<::VROSC::UI::UITextSetting> const& __cordl_internal_get__textSetting() const;

constexpr ::UnityW<::VROSC::UI::UITextSetting>& __cordl_internal_get__textSetting() ;

constexpr void __cordl_internal_set__colorFromScheme(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__textMeshPro(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__textSetting(::UnityW<::VROSC::UI::UITextSetting>  value) ;

/// @brief Method .ctor, addr 0x17e6a4c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UITextColoring() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UITextColoring", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UITextColoring(UITextColoring && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UITextColoring", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UITextColoring(UITextColoring const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1609};

/// @brief Field _textMeshPro, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____textMeshPro;

/// @brief Field _textSetting, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UITextSetting>  ____textSetting;

/// @brief Field _colorFromScheme, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ____colorFromScheme;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::UITextColoring, ____textMeshPro) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UITextColoring, ____textSetting) == 0x58, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UITextColoring, ____colorFromScheme) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::UITextColoring, 0x70>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::UITextColoring);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UITextColoring*, "VROSC.UI", "UITextColoring");
