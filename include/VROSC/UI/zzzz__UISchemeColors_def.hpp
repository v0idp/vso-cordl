#pragma once
// IWYU pragma private; include "VROSC/UI/UISchemeColors.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UISchemeColors)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace VROSC::UI {
struct UISchemeColors;
}
// Write type traits
MARK_VAL_T(::VROSC::UI::UISchemeColors);
// Dependencies UnityEngine.Color
namespace VROSC::UI {
// Is value type: true
// CS Name: VROSC.UI.UISchemeColors
struct CORDL_TYPE UISchemeColors {
public:
// Declarations
/// @brief Method .ctor, addr 0x17e8140, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::VROSC::UI::UISchemeColors  other) ;

/// @brief Method .ctor, addr 0x17e8190, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Color  primaryColor, ::UnityEngine::Color  activeColor, ::UnityEngine::Color  accentColor, ::UnityEngine::Color  instrumentColor) ;

// Ctor Parameters []
// @brief default ctor
constexpr UISchemeColors() ;

// Ctor Parameters [CppParam { name: "PrimaryColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "ActiveColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "AccentColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "InstrumentColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
constexpr UISchemeColors(::UnityEngine::Color  PrimaryColor, ::UnityEngine::Color  ActiveColor, ::UnityEngine::Color  AccentColor, ::UnityEngine::Color  InstrumentColor) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1621};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field PrimaryColor, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Color  PrimaryColor;

/// @brief Field ActiveColor, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  ActiveColor;

/// @brief Field AccentColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  AccentColor;

/// @brief Field InstrumentColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  InstrumentColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::UISchemeColors, PrimaryColor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UISchemeColors, ActiveColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UISchemeColors, AccentColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UISchemeColors, InstrumentColor) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::UISchemeColors, 0x40>, "Size mismatch!");

} // namespace end def VROSC::UI
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UISchemeColors, "VROSC.UI", "UISchemeColors");
