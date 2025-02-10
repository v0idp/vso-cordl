#pragma once
// IWYU pragma private; include "VROSC/UI/UIExplicitColor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/UI/zzzz__IMappedColor_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIExplicitColor)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace VROSC::UI {
class UIExplicitColor;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::UIExplicitColor);
// Dependencies System.Object, UnityEngine.Color, VROSC.UI.IMappedColor
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.UIExplicitColor
class CORDL_TYPE UIExplicitColor : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BaseColor)) ::UnityEngine::Color  BaseColor;

/// @brief Field _baseColor, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__baseColor, put=__cordl_internal_set__baseColor)) ::UnityEngine::Color  _baseColor;

/// @brief Field _disabledColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__disabledColor, put=__cordl_internal_set__disabledColor)) ::UnityEngine::Color  _disabledColor;

/// @brief Field _hoverColor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__hoverColor, put=__cordl_internal_set__hoverColor)) ::UnityEngine::Color  _hoverColor;

/// @brief Convert operator to "::VROSC::UI::IMappedColor"
constexpr operator  ::VROSC::UI::IMappedColor*() noexcept;

/// @brief Method GetColor, addr 0x17e5374, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor(bool  disabled, bool  hovering) ;

static inline ::VROSC::UI::UIExplicitColor* New_ctor(::VROSC::UI::UIExplicitColor*  other) ;

/// @brief Method ReadFromLUT, addr 0x17e75ec, size 0xa8, virtual true, abstract: false, final true
inline void ReadFromLUT(::UnityEngine::Texture2D*  texture, int32_t  row) ;

/// @brief Method Set, addr 0x17e75c4, size 0x1c, virtual false, abstract: false, final false
inline void Set(::UnityEngine::Color  baseColor, ::UnityEngine::Color  hoverColor, ::UnityEngine::Color  disabledColor) ;

/// @brief Method SetColor, addr 0x17e5568, size 0x2c, virtual false, abstract: false, final false
inline void SetColor(::VROSC::UI::UIExplicitColor*  other) ;

/// @brief Method WriteToLUT, addr 0x17e7694, size 0xc4, virtual true, abstract: false, final true
inline void WriteToLUT(::UnityEngine::Texture2D*  texture, int32_t  row) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__baseColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__baseColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__disabledColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__disabledColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__hoverColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__hoverColor() ;

constexpr void __cordl_internal_set__baseColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__disabledColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__hoverColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x17e7574, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::VROSC::UI::UIExplicitColor*  other) ;

/// @brief Method get_BaseColor, addr 0x17e75e0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_BaseColor() ;

/// @brief Convert to "::VROSC::UI::IMappedColor"
constexpr ::VROSC::UI::IMappedColor* i___VROSC__UI__IMappedColor() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIExplicitColor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIExplicitColor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIExplicitColor(UIExplicitColor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIExplicitColor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIExplicitColor(UIExplicitColor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1616};

/// @brief Field _baseColor, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  ____baseColor;

/// @brief Field _hoverColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ____hoverColor;

/// @brief Field _disabledColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____disabledColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::UIExplicitColor, ____baseColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIExplicitColor, ____hoverColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UIExplicitColor, ____disabledColor) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::UIExplicitColor, 0x40>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::UIExplicitColor);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UIExplicitColor*, "VROSC.UI", "UIExplicitColor");
