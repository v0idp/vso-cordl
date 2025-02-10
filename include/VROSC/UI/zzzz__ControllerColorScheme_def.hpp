#pragma once
// IWYU pragma private; include "VROSC/UI/ControllerColorScheme.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/UI/zzzz__IMappedColor_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerColorScheme)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace VROSC::UI {
class ControllerColorScheme;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::ControllerColorScheme);
// Dependencies System.Object, UnityEngine.Color, VROSC.UI.IMappedColor
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.ControllerColorScheme
class CORDL_TYPE ControllerColorScheme : public ::System::Object {
public:
// Declarations
/// @brief Field _highlight, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__highlight, put=__cordl_internal_set__highlight)) ::UnityEngine::Color  _highlight;

/// @brief Field _normal, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__normal, put=__cordl_internal_set__normal)) ::UnityEngine::Color  _normal;

/// @brief Field _pressed, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__pressed, put=__cordl_internal_set__pressed)) ::UnityEngine::Color  _pressed;

/// @brief Convert operator to "::VROSC::UI::IMappedColor"
constexpr operator  ::VROSC::UI::IMappedColor*() noexcept;

/// @brief Method GetControllerButtonColor, addr 0x17e6fd0, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetControllerButtonColor(bool  highlight, bool  pressed) ;

static inline ::VROSC::UI::ControllerColorScheme* New_ctor(::VROSC::UI::ControllerColorScheme*  other) ;

/// @brief Method ReadFromLUT, addr 0x17e6af8, size 0xa8, virtual true, abstract: false, final true
inline void ReadFromLUT(::UnityEngine::Texture2D*  texture, int32_t  row) ;

/// @brief Method Set, addr 0x17e6adc, size 0x1c, virtual false, abstract: false, final false
inline void Set(::UnityEngine::Color  normal, ::UnityEngine::Color  highlight, ::UnityEngine::Color  pressed) ;

/// @brief Method WriteToLUT, addr 0x17e6df8, size 0xc4, virtual true, abstract: false, final true
inline void WriteToLUT(::UnityEngine::Texture2D*  texture, int32_t  row) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__highlight() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__highlight() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__normal() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__normal() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__pressed() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__pressed() ;

constexpr void __cordl_internal_set__highlight(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__normal(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__pressed(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x17e6a8c, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::VROSC::UI::ControllerColorScheme*  other) ;

/// @brief Convert to "::VROSC::UI::IMappedColor"
constexpr ::VROSC::UI::IMappedColor* i___VROSC__UI__IMappedColor() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerColorScheme() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerColorScheme", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerColorScheme(ControllerColorScheme && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerColorScheme", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerColorScheme(ControllerColorScheme const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1611};

/// @brief Field _normal, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  ____normal;

/// @brief Field _highlight, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ____highlight;

/// @brief Field _pressed, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____pressed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::ControllerColorScheme, ____normal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::ControllerColorScheme, ____highlight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::ControllerColorScheme, ____pressed) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::ControllerColorScheme, 0x40>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::ControllerColorScheme);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::ControllerColorScheme*, "VROSC.UI", "ControllerColorScheme");
