#pragma once
// IWYU pragma private; include "VROSC/Credits/CreditsLine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/Credits/zzzz__CreditsObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CreditsLine)
namespace TMPro {
class TextMeshPro;
}
namespace VROSC::Credits {
class CreditsNameData;
}
// Forward declare root types
namespace VROSC::Credits {
class CreditsLine;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Credits::CreditsLine);
// Dependencies UnityEngine.Color, VROSC.Credits.CreditsObject
namespace VROSC::Credits {
// Is value type: false
// CS Name: VROSC.Credits.CreditsLine
class CORDL_TYPE CreditsLine : public ::VROSC::Credits::CreditsObject {
public:
// Declarations
/// @brief Field _isSingleLine, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__isSingleLine, put=__cordl_internal_set__isSingleLine)) bool  _isSingleLine;

/// @brief Field _name, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::UnityW<::TMPro::TextMeshPro>  _name;

/// @brief Field _nameColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__nameColor, put=__cordl_internal_set__nameColor)) ::UnityEngine::Color  _nameColor;

/// @brief Field _singleLine, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__singleLine, put=__cordl_internal_set__singleLine)) ::UnityW<::TMPro::TextMeshPro>  _singleLine;

/// @brief Field _singleLineColor, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__singleLineColor, put=__cordl_internal_set__singleLineColor)) ::UnityEngine::Color  _singleLineColor;

/// @brief Field _title, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__title, put=__cordl_internal_set__title)) ::UnityW<::TMPro::TextMeshPro>  _title;

/// @brief Field _titleColor, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get__titleColor, put=__cordl_internal_set__titleColor)) ::UnityEngine::Color  _titleColor;

/// @brief Method Awake, addr 0x17dc58c, size 0x74, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::Credits::CreditsLine* New_ctor() ;

/// @brief Method Setup, addr 0x17dc694, size 0x50, virtual false, abstract: false, final false
inline void Setup(::VROSC::Credits::CreditsNameData*  data) ;

/// @brief Method Setup, addr 0x17dc600, size 0x4, virtual false, abstract: false, final false
inline void Setup(::StringW  text) ;

/// @brief Method SetupNameTitle, addr 0x17dc6e4, size 0xb4, virtual false, abstract: false, final false
inline void SetupNameTitle(::StringW  name, ::StringW  title) ;

/// @brief Method SetupSingleLine, addr 0x17dc604, size 0x90, virtual false, abstract: false, final false
inline void SetupSingleLine(::StringW  text) ;

/// @brief Method UpdateVisibility, addr 0x17dc798, size 0xe0, virtual true, abstract: false, final false
inline void UpdateVisibility(float_t  visible) ;

constexpr bool const& __cordl_internal_get__isSingleLine() const;

constexpr bool& __cordl_internal_get__isSingleLine() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__name() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__name() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__nameColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__nameColor() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__singleLine() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__singleLine() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__singleLineColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__singleLineColor() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__title() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__title() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__titleColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__titleColor() ;

constexpr void __cordl_internal_set__isSingleLine(bool  value) ;

constexpr void __cordl_internal_set__name(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__nameColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__singleLine(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__singleLineColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__title(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__titleColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x17dc878, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreditsLine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreditsLine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CreditsLine(CreditsLine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreditsLine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreditsLine(CreditsLine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1579};

/// @brief Field _name, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____name;

/// @brief Field _title, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____title;

/// @brief Field _singleLine, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____singleLine;

/// @brief Field _nameColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____nameColor;

/// @brief Field _titleColor, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Color  ____titleColor;

/// @brief Field _singleLineColor, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ____singleLineColor;

/// @brief Field _isSingleLine, offset: 0x70, size: 0x1, def value: None
 bool  ____isSingleLine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Credits::CreditsLine, ____name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsLine, ____title) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsLine, ____singleLine) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsLine, ____nameColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsLine, ____titleColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsLine, ____singleLineColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsLine, ____isSingleLine) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Credits::CreditsLine, 0x78>, "Size mismatch!");

} // namespace end def VROSC::Credits
NEED_NO_BOX(::VROSC::Credits::CreditsLine);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Credits::CreditsLine*, "VROSC.Credits", "CreditsLine");
