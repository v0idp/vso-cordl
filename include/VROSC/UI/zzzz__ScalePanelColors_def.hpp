#pragma once
// IWYU pragma private; include "VROSC/UI/ScalePanelColors.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScalePanelColors)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace VROSC::UI {
class IMappedColor;
}
namespace VROSC::UI {
class UIExplicitColor;
}
// Forward declare root types
namespace VROSC::UI {
class ScalePanelColors;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::ScalePanelColors);
// Dependencies UnityEngine.ScriptableObject
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.ScalePanelColors
class CORDL_TYPE ScalePanelColors : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field _off, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__off, put=__cordl_internal_set__off)) ::VROSC::UI::UIExplicitColor*  _off;

/// @brief Field _xAxis, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__xAxis, put=__cordl_internal_set__xAxis)) ::VROSC::UI::UIExplicitColor*  _xAxis;

/// @brief Field _yAxis, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__yAxis, put=__cordl_internal_set__yAxis)) ::VROSC::UI::UIExplicitColor*  _yAxis;

/// @brief Field _zAxis, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__zAxis, put=__cordl_internal_set__zAxis)) ::VROSC::UI::UIExplicitColor*  _zAxis;

/// @brief Method GetColorByAxis, addr 0x17e74c0, size 0x2c, virtual false, abstract: false, final false
inline ::VROSC::UI::UIExplicitColor* GetColorByAxis(int32_t  axis) ;

/// @brief Method GetMappedColors, addr 0x17e7250, size 0x1d4, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::VROSC::UI::IMappedColor*>* GetMappedColors() ;

/// @brief Method GetScalePanelColor, addr 0x17e7424, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetScalePanelColor(int32_t  axis, bool  active, bool  hovering, bool  disabled) ;

static inline ::VROSC::UI::ScalePanelColors* New_ctor() ;

constexpr ::VROSC::UI::UIExplicitColor* const& __cordl_internal_get__off() const;

constexpr ::VROSC::UI::UIExplicitColor*& __cordl_internal_get__off() ;

constexpr ::VROSC::UI::UIExplicitColor* const& __cordl_internal_get__xAxis() const;

constexpr ::VROSC::UI::UIExplicitColor*& __cordl_internal_get__xAxis() ;

constexpr ::VROSC::UI::UIExplicitColor* const& __cordl_internal_get__yAxis() const;

constexpr ::VROSC::UI::UIExplicitColor*& __cordl_internal_get__yAxis() ;

constexpr ::VROSC::UI::UIExplicitColor* const& __cordl_internal_get__zAxis() const;

constexpr ::VROSC::UI::UIExplicitColor*& __cordl_internal_get__zAxis() ;

constexpr void __cordl_internal_set__off(::VROSC::UI::UIExplicitColor*  value) ;

constexpr void __cordl_internal_set__xAxis(::VROSC::UI::UIExplicitColor*  value) ;

constexpr void __cordl_internal_set__yAxis(::VROSC::UI::UIExplicitColor*  value) ;

constexpr void __cordl_internal_set__zAxis(::VROSC::UI::UIExplicitColor*  value) ;

/// @brief Method .ctor, addr 0x17e74ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScalePanelColors() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScalePanelColors", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScalePanelColors(ScalePanelColors && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScalePanelColors", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScalePanelColors(ScalePanelColors const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1614};

/// @brief Field _xAxis, offset: 0x18, size: 0x8, def value: None
 ::VROSC::UI::UIExplicitColor*  ____xAxis;

/// @brief Field _yAxis, offset: 0x20, size: 0x8, def value: None
 ::VROSC::UI::UIExplicitColor*  ____yAxis;

/// @brief Field _zAxis, offset: 0x28, size: 0x8, def value: None
 ::VROSC::UI::UIExplicitColor*  ____zAxis;

/// @brief Field _off, offset: 0x30, size: 0x8, def value: None
 ::VROSC::UI::UIExplicitColor*  ____off;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::ScalePanelColors, ____xAxis) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::ScalePanelColors, ____yAxis) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::ScalePanelColors, ____zAxis) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::ScalePanelColors, ____off) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::ScalePanelColors, 0x38>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::ScalePanelColors);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::ScalePanelColors*, "VROSC.UI", "ScalePanelColors");
