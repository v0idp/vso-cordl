#pragma once
// IWYU pragma private; include "VROSC/UI/UISchemeGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UISchemeGenerator)
namespace UnityEngine {
struct Color;
}
namespace VROSC::UI {
struct ColorGeneration_UISchemeGenerator_Source;
}
namespace VROSC::UI {
class UIColorGetter;
}
namespace VROSC::UI {
struct UISchemeColors;
}
namespace VROSC::UI {
class UISchemeGenerator_ColorGeneration;
}
namespace VROSC::UI {
class UISchemeGenerator_NotefieldColorGeneration;
}
namespace VROSC::UI {
class UISchemeGenerator_UIColorsGeneration;
}
namespace VROSC::UI {
class UIScheme;
}
// Forward declare root types
namespace VROSC::UI {
struct ColorGeneration_UISchemeGenerator_Source;
}
namespace VROSC::UI {
class UISchemeGenerator;
}
namespace VROSC::UI {
class UISchemeGenerator_ColorGeneration;
}
namespace VROSC::UI {
class UISchemeGenerator_NotefieldColorGeneration;
}
namespace VROSC::UI {
class UISchemeGenerator_UIColorsGeneration;
}
// Write type traits
MARK_VAL_T(::VROSC::UI::ColorGeneration_UISchemeGenerator_Source);
MARK_REF_PTR_T(::VROSC::UI::UISchemeGenerator);
MARK_REF_PTR_T(::VROSC::UI::UISchemeGenerator_ColorGeneration);
MARK_REF_PTR_T(::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration);
MARK_REF_PTR_T(::VROSC::UI::UISchemeGenerator_UIColorsGeneration);
// Dependencies 
namespace VROSC::UI {
// Is value type: true
// CS Name: VROSC.UI.UISchemeGenerator/ColorGeneration/Source
struct CORDL_TYPE ColorGeneration_UISchemeGenerator_Source {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ColorGeneration_UISchemeGenerator_Source_Unwrapped
enum struct __ColorGeneration_UISchemeGenerator_Source_Unwrapped : int32_t {
__E_Primary = static_cast<int32_t>(0x0),
__E_Active = static_cast<int32_t>(0x1),
__E_Accent = static_cast<int32_t>(0x2),
__E_Instrument = static_cast<int32_t>(0x3),
__E_White = static_cast<int32_t>(0x4),
__E_Black = static_cast<int32_t>(0x5),
__E_Grey = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ColorGeneration_UISchemeGenerator_Source_Unwrapped () const noexcept {
return static_cast<__ColorGeneration_UISchemeGenerator_Source_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ColorGeneration_UISchemeGenerator_Source() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ColorGeneration_UISchemeGenerator_Source(int32_t  value__) noexcept;

/// @brief Field Accent value: I32(2)
static ::VROSC::UI::ColorGeneration_UISchemeGenerator_Source const Accent;

/// @brief Field Active value: I32(1)
static ::VROSC::UI::ColorGeneration_UISchemeGenerator_Source const Active;

/// @brief Field Black value: I32(5)
static ::VROSC::UI::ColorGeneration_UISchemeGenerator_Source const Black;

/// @brief Field Grey value: I32(6)
static ::VROSC::UI::ColorGeneration_UISchemeGenerator_Source const Grey;

/// @brief Field Instrument value: I32(3)
static ::VROSC::UI::ColorGeneration_UISchemeGenerator_Source const Instrument;

/// @brief Field Primary value: I32(0)
static ::VROSC::UI::ColorGeneration_UISchemeGenerator_Source const Primary;

/// @brief Field White value: I32(4)
static ::VROSC::UI::ColorGeneration_UISchemeGenerator_Source const White;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1622};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::ColorGeneration_UISchemeGenerator_Source, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::ColorGeneration_UISchemeGenerator_Source, 0x4>, "Size mismatch!");

} // namespace end def VROSC::UI
// Dependencies System.Object, VROSC.UI.UISchemeGenerator::ColorGeneration::Source
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.UISchemeGenerator/ColorGeneration
class CORDL_TYPE UISchemeGenerator_ColorGeneration : public ::System::Object {
public:
// Declarations
using Source = ::VROSC::UI::ColorGeneration_UISchemeGenerator_Source;

/// @brief Field _hueShift, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__hueShift, put=__cordl_internal_set__hueShift)) float_t  _hueShift;

/// @brief Field _saturationShift, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__saturationShift, put=__cordl_internal_set__saturationShift)) float_t  _saturationShift;

/// @brief Field _source, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__source, put=__cordl_internal_set__source)) ::VROSC::UI::ColorGeneration_UISchemeGenerator_Source  _source;

/// @brief Field _valueShift, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__valueShift, put=__cordl_internal_set__valueShift)) float_t  _valueShift;

/// @brief Method GetColor, addr 0x17e84d4, size 0x120, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor(::VROSC::UI::UISchemeColors  colors) ;

/// @brief Method GetColorBySource, addr 0x17e873c, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColorBySource(::VROSC::UI::UISchemeColors  colors) ;

static inline ::VROSC::UI::UISchemeGenerator_ColorGeneration* New_ctor() ;

constexpr float_t const& __cordl_internal_get__hueShift() const;

constexpr float_t& __cordl_internal_get__hueShift() ;

constexpr float_t const& __cordl_internal_get__saturationShift() const;

constexpr float_t& __cordl_internal_get__saturationShift() ;

constexpr ::VROSC::UI::ColorGeneration_UISchemeGenerator_Source const& __cordl_internal_get__source() const;

constexpr ::VROSC::UI::ColorGeneration_UISchemeGenerator_Source& __cordl_internal_get__source() ;

constexpr float_t const& __cordl_internal_get__valueShift() const;

constexpr float_t& __cordl_internal_get__valueShift() ;

constexpr void __cordl_internal_set__hueShift(float_t  value) ;

constexpr void __cordl_internal_set__saturationShift(float_t  value) ;

constexpr void __cordl_internal_set__source(::VROSC::UI::ColorGeneration_UISchemeGenerator_Source  value) ;

constexpr void __cordl_internal_set__valueShift(float_t  value) ;

/// @brief Method .ctor, addr 0x17e87ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UISchemeGenerator_ColorGeneration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UISchemeGenerator_ColorGeneration", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UISchemeGenerator_ColorGeneration(UISchemeGenerator_ColorGeneration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UISchemeGenerator_ColorGeneration", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UISchemeGenerator_ColorGeneration(UISchemeGenerator_ColorGeneration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1623};

/// @brief Field _source, offset: 0x10, size: 0x4, def value: None
 ::VROSC::UI::ColorGeneration_UISchemeGenerator_Source  ____source;

/// @brief Field _hueShift, offset: 0x14, size: 0x4, def value: None
 float_t  ____hueShift;

/// @brief Field _saturationShift, offset: 0x18, size: 0x4, def value: None
 float_t  ____saturationShift;

/// @brief Field _valueShift, offset: 0x1c, size: 0x4, def value: None
 float_t  ____valueShift;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::UISchemeGenerator_ColorGeneration, ____source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UISchemeGenerator_ColorGeneration, ____hueShift) == 0x14, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UISchemeGenerator_ColorGeneration, ____saturationShift) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UISchemeGenerator_ColorGeneration, ____valueShift) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::UISchemeGenerator_ColorGeneration, 0x20>, "Size mismatch!");

} // namespace end def VROSC::UI
// Dependencies System.Object
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.UISchemeGenerator/UIColorsGeneration
class CORDL_TYPE UISchemeGenerator_UIColorsGeneration : public ::System::Object {
public:
// Declarations
/// @brief Field _colorGetter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorGetter, put=__cordl_internal_set__colorGetter)) ::UnityW<::VROSC::UI::UIColorGetter>  _colorGetter;

/// @brief Field _default, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__default, put=__cordl_internal_set__default)) ::VROSC::UI::UISchemeGenerator_ColorGeneration*  _default;

/// @brief Field _disabled, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__disabled, put=__cordl_internal_set__disabled)) ::VROSC::UI::UISchemeGenerator_ColorGeneration*  _disabled;

/// @brief Field _highlight, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__highlight, put=__cordl_internal_set__highlight)) ::VROSC::UI::UISchemeGenerator_ColorGeneration*  _highlight;

/// @brief Method Generate, addr 0x17e85f4, size 0x140, virtual false, abstract: false, final false
inline void Generate(::VROSC::UI::UIScheme*  uIScheme, ::VROSC::UI::UISchemeColors  colors) ;

static inline ::VROSC::UI::UISchemeGenerator_UIColorsGeneration* New_ctor() ;

constexpr ::UnityW<::VROSC::UI::UIColorGetter> const& __cordl_internal_get__colorGetter() const;

constexpr ::UnityW<::VROSC::UI::UIColorGetter>& __cordl_internal_get__colorGetter() ;

constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration* const& __cordl_internal_get__default() const;

constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration*& __cordl_internal_get__default() ;

constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration* const& __cordl_internal_get__disabled() const;

constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration*& __cordl_internal_get__disabled() ;

constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration* const& __cordl_internal_get__highlight() const;

constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration*& __cordl_internal_get__highlight() ;

constexpr void __cordl_internal_set__colorGetter(::UnityW<::VROSC::UI::UIColorGetter>  value) ;

constexpr void __cordl_internal_set__default(::VROSC::UI::UISchemeGenerator_ColorGeneration*  value) ;

constexpr void __cordl_internal_set__disabled(::VROSC::UI::UISchemeGenerator_ColorGeneration*  value) ;

constexpr void __cordl_internal_set__highlight(::VROSC::UI::UISchemeGenerator_ColorGeneration*  value) ;

/// @brief Method .ctor, addr 0x17e87b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UISchemeGenerator_UIColorsGeneration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UISchemeGenerator_UIColorsGeneration", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UISchemeGenerator_UIColorsGeneration(UISchemeGenerator_UIColorsGeneration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UISchemeGenerator_UIColorsGeneration", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UISchemeGenerator_UIColorsGeneration(UISchemeGenerator_UIColorsGeneration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1624};

/// @brief Field _colorGetter, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::UIColorGetter>  ____colorGetter;

/// @brief Field _default, offset: 0x18, size: 0x8, def value: None
 ::VROSC::UI::UISchemeGenerator_ColorGeneration*  ____default;

/// @brief Field _highlight, offset: 0x20, size: 0x8, def value: None
 ::VROSC::UI::UISchemeGenerator_ColorGeneration*  ____highlight;

/// @brief Field _disabled, offset: 0x28, size: 0x8, def value: None
 ::VROSC::UI::UISchemeGenerator_ColorGeneration*  ____disabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::UISchemeGenerator_UIColorsGeneration, ____colorGetter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UISchemeGenerator_UIColorsGeneration, ____default) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UISchemeGenerator_UIColorsGeneration, ____highlight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UISchemeGenerator_UIColorsGeneration, ____disabled) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::UISchemeGenerator_UIColorsGeneration, 0x30>, "Size mismatch!");

} // namespace end def VROSC::UI
// Dependencies System.Object
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.UISchemeGenerator/NotefieldColorGeneration
class CORDL_TYPE UISchemeGenerator_NotefieldColorGeneration : public ::System::Object {
public:
// Declarations
/// @brief Field _octaveColor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__octaveColor, put=__cordl_internal_set__octaveColor)) ::VROSC::UI::UISchemeGenerator_ColorGeneration*  _octaveColor;

/// @brief Field _restingEvenColor, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__restingEvenColor, put=__cordl_internal_set__restingEvenColor)) ::VROSC::UI::UISchemeGenerator_ColorGeneration*  _restingEvenColor;

/// @brief Field _restingOddColor, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__restingOddColor, put=__cordl_internal_set__restingOddColor)) ::VROSC::UI::UISchemeGenerator_ColorGeneration*  _restingOddColor;

/// @brief Method Generate, addr 0x17e828c, size 0x128, virtual false, abstract: false, final false
inline void Generate(::VROSC::UI::UIScheme*  uIScheme, ::VROSC::UI::UISchemeColors  colors) ;

static inline ::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration* New_ctor() ;

constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration* const& __cordl_internal_get__octaveColor() const;

constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration*& __cordl_internal_get__octaveColor() ;

constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration* const& __cordl_internal_get__restingEvenColor() const;

constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration*& __cordl_internal_get__restingEvenColor() ;

constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration* const& __cordl_internal_get__restingOddColor() const;

constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration*& __cordl_internal_get__restingOddColor() ;

constexpr void __cordl_internal_set__octaveColor(::VROSC::UI::UISchemeGenerator_ColorGeneration*  value) ;

constexpr void __cordl_internal_set__restingEvenColor(::VROSC::UI::UISchemeGenerator_ColorGeneration*  value) ;

constexpr void __cordl_internal_set__restingOddColor(::VROSC::UI::UISchemeGenerator_ColorGeneration*  value) ;

/// @brief Method .ctor, addr 0x17e87bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UISchemeGenerator_NotefieldColorGeneration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UISchemeGenerator_NotefieldColorGeneration", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UISchemeGenerator_NotefieldColorGeneration(UISchemeGenerator_NotefieldColorGeneration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UISchemeGenerator_NotefieldColorGeneration", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UISchemeGenerator_NotefieldColorGeneration(UISchemeGenerator_NotefieldColorGeneration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1625};

/// @brief Field _restingEvenColor, offset: 0x10, size: 0x8, def value: None
 ::VROSC::UI::UISchemeGenerator_ColorGeneration*  ____restingEvenColor;

/// @brief Field _restingOddColor, offset: 0x18, size: 0x8, def value: None
 ::VROSC::UI::UISchemeGenerator_ColorGeneration*  ____restingOddColor;

/// @brief Field _octaveColor, offset: 0x20, size: 0x8, def value: None
 ::VROSC::UI::UISchemeGenerator_ColorGeneration*  ____octaveColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration, ____restingEvenColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration, ____restingOddColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration, ____octaveColor) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration, 0x28>, "Size mismatch!");

} // namespace end def VROSC::UI
// Dependencies UnityEngine.ScriptableObject
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.UISchemeGenerator
class CORDL_TYPE UISchemeGenerator : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using ColorGeneration = ::VROSC::UI::UISchemeGenerator_ColorGeneration;

using NotefieldColorGeneration = ::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration;

using UIColorsGeneration = ::VROSC::UI::UISchemeGenerator_UIColorsGeneration;

/// @brief Field _appearAnimationColor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__appearAnimationColor, put=__cordl_internal_set__appearAnimationColor)) ::VROSC::UI::UISchemeGenerator_ColorGeneration*  _appearAnimationColor;

/// @brief Field _controllerColors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__controllerColors, put=__cordl_internal_set__controllerColors)) ::VROSC::UI::UISchemeGenerator_ColorGeneration*  _controllerColors;

/// @brief Field _notefieldColorGeneration, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__notefieldColorGeneration, put=__cordl_internal_set__notefieldColorGeneration)) ::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration*  _notefieldColorGeneration;

/// @brief Field _uiColors, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__uiColors, put=__cordl_internal_set__uiColors)) ::ArrayW<::VROSC::UI::UISchemeGenerator_UIColorsGeneration*,::Array<::VROSC::UI::UISchemeGenerator_UIColorsGeneration*>*>  _uiColors;

/// @brief Method Generate, addr 0x17e81ac, size 0xe0, virtual false, abstract: false, final false
inline void Generate(::VROSC::UI::UIScheme*  uIScheme, ::VROSC::UI::UISchemeColors  colors) ;

/// @brief Method GenerateUIColors, addr 0x17e8438, size 0x9c, virtual false, abstract: false, final false
inline void GenerateUIColors(::VROSC::UI::UIScheme*  uIScheme, ::VROSC::UI::UISchemeColors  colors) ;

static inline ::VROSC::UI::UISchemeGenerator* New_ctor() ;

/// @brief Method SetContollerColors, addr 0x17e83b4, size 0x84, virtual false, abstract: false, final false
inline void SetContollerColors(::VROSC::UI::UIScheme*  uIScheme, ::VROSC::UI::UISchemeColors  colors) ;

constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration* const& __cordl_internal_get__appearAnimationColor() const;

constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration*& __cordl_internal_get__appearAnimationColor() ;

constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration* const& __cordl_internal_get__controllerColors() const;

constexpr ::VROSC::UI::UISchemeGenerator_ColorGeneration*& __cordl_internal_get__controllerColors() ;

constexpr ::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration* const& __cordl_internal_get__notefieldColorGeneration() const;

constexpr ::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration*& __cordl_internal_get__notefieldColorGeneration() ;

constexpr ::ArrayW<::VROSC::UI::UISchemeGenerator_UIColorsGeneration*,::Array<::VROSC::UI::UISchemeGenerator_UIColorsGeneration*>*> const& __cordl_internal_get__uiColors() const;

constexpr ::ArrayW<::VROSC::UI::UISchemeGenerator_UIColorsGeneration*,::Array<::VROSC::UI::UISchemeGenerator_UIColorsGeneration*>*>& __cordl_internal_get__uiColors() ;

constexpr void __cordl_internal_set__appearAnimationColor(::VROSC::UI::UISchemeGenerator_ColorGeneration*  value) ;

constexpr void __cordl_internal_set__controllerColors(::VROSC::UI::UISchemeGenerator_ColorGeneration*  value) ;

constexpr void __cordl_internal_set__notefieldColorGeneration(::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration*  value) ;

constexpr void __cordl_internal_set__uiColors(::ArrayW<::VROSC::UI::UISchemeGenerator_UIColorsGeneration*,::Array<::VROSC::UI::UISchemeGenerator_UIColorsGeneration*>*>  value) ;

/// @brief Method .ctor, addr 0x17e8734, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UISchemeGenerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UISchemeGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UISchemeGenerator(UISchemeGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UISchemeGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UISchemeGenerator(UISchemeGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1626};

/// @brief Field _notefieldColorGeneration, offset: 0x18, size: 0x8, def value: None
 ::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration*  ____notefieldColorGeneration;

/// @brief Field _appearAnimationColor, offset: 0x20, size: 0x8, def value: None
 ::VROSC::UI::UISchemeGenerator_ColorGeneration*  ____appearAnimationColor;

/// @brief Field _controllerColors, offset: 0x28, size: 0x8, def value: None
 ::VROSC::UI::UISchemeGenerator_ColorGeneration*  ____controllerColors;

/// @brief Field _uiColors, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::VROSC::UI::UISchemeGenerator_UIColorsGeneration*,::Array<::VROSC::UI::UISchemeGenerator_UIColorsGeneration*>*>  ____uiColors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::UISchemeGenerator, ____notefieldColorGeneration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UISchemeGenerator, ____appearAnimationColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UISchemeGenerator, ____controllerColors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::UISchemeGenerator, ____uiColors) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::UISchemeGenerator, 0x38>, "Size mismatch!");

} // namespace end def VROSC::UI
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::ColorGeneration_UISchemeGenerator_Source, "VROSC.UI", "UISchemeGenerator/ColorGeneration/Source");
NEED_NO_BOX(::VROSC::UI::UISchemeGenerator);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UISchemeGenerator*, "VROSC.UI", "UISchemeGenerator");
NEED_NO_BOX(::VROSC::UI::UISchemeGenerator_ColorGeneration);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UISchemeGenerator_ColorGeneration*, "VROSC.UI", "UISchemeGenerator/ColorGeneration");
NEED_NO_BOX(::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UISchemeGenerator_NotefieldColorGeneration*, "VROSC.UI", "UISchemeGenerator/NotefieldColorGeneration");
NEED_NO_BOX(::VROSC::UI::UISchemeGenerator_UIColorsGeneration);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::UISchemeGenerator_UIColorsGeneration*, "VROSC.UI", "UISchemeGenerator/UIColorsGeneration");
