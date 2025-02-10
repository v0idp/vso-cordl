#pragma once
// IWYU pragma private; include "VROSC/UI/NotefieldColorScheme.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/UI/zzzz__IMappedColor_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NotefieldColorScheme)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace VROSC::UI {
class NotefieldColorScheme;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UI::NotefieldColorScheme);
// Dependencies System.Object, UnityEngine.Color, VROSC.UI.IMappedColor
namespace VROSC::UI {
// Is value type: false
// CS Name: VROSC.UI.NotefieldColorScheme
class CORDL_TYPE NotefieldColorScheme : public ::System::Object {
public:
// Declarations
/// @brief Field _octaveColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__octaveColor, put=__cordl_internal_set__octaveColor)) ::UnityEngine::Color  _octaveColor;

/// @brief Field _restingEvenColor, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__restingEvenColor, put=__cordl_internal_set__restingEvenColor)) ::UnityEngine::Color  _restingEvenColor;

/// @brief Field _restingOddColor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__restingOddColor, put=__cordl_internal_set__restingOddColor)) ::UnityEngine::Color  _restingOddColor;

/// @brief Convert operator to "::VROSC::UI::IMappedColor"
constexpr operator  ::VROSC::UI::IMappedColor*() noexcept;

/// @brief Method GetColor, addr 0x17e71e0, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetColor(bool  isOctave, bool  isOdd) ;

static inline ::VROSC::UI::NotefieldColorScheme* New_ctor(::VROSC::UI::NotefieldColorScheme*  other) ;

/// @brief Method ReadFromLUT, addr 0x17e7074, size 0xa8, virtual true, abstract: false, final true
inline void ReadFromLUT(::UnityEngine::Texture2D*  texture, int32_t  row) ;

/// @brief Method Set, addr 0x17e7234, size 0x1c, virtual false, abstract: false, final false
inline void Set(::UnityEngine::Color  restingEvenColor, ::UnityEngine::Color  restingOddColor, ::UnityEngine::Color  octaveColor) ;

/// @brief Method WriteToLUT, addr 0x17e711c, size 0xc4, virtual true, abstract: false, final true
inline void WriteToLUT(::UnityEngine::Texture2D*  texture, int32_t  row) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__octaveColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__octaveColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__restingEvenColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__restingEvenColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__restingOddColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__restingOddColor() ;

constexpr void __cordl_internal_set__octaveColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__restingEvenColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__restingOddColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x17e7024, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::VROSC::UI::NotefieldColorScheme*  other) ;

/// @brief Convert to "::VROSC::UI::IMappedColor"
constexpr ::VROSC::UI::IMappedColor* i___VROSC__UI__IMappedColor() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NotefieldColorScheme() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NotefieldColorScheme", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NotefieldColorScheme(NotefieldColorScheme && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotefieldColorScheme", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotefieldColorScheme(NotefieldColorScheme const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1613};

/// @brief Field _restingEvenColor, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  ____restingEvenColor;

/// @brief Field _restingOddColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ____restingOddColor;

/// @brief Field _octaveColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____octaveColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UI::NotefieldColorScheme, ____restingEvenColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::NotefieldColorScheme, ____restingOddColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UI::NotefieldColorScheme, ____octaveColor) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UI::NotefieldColorScheme, 0x40>, "Size mismatch!");

} // namespace end def VROSC::UI
NEED_NO_BOX(::VROSC::UI::NotefieldColorScheme);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UI::NotefieldColorScheme*, "VROSC.UI", "NotefieldColorScheme");
