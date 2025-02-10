#pragma once
// IWYU pragma private; include "VROSC/Credits/CreditsHeader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/Credits/zzzz__CreditsObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CreditsHeader)
namespace TMPro {
class TextMeshPro;
}
// Forward declare root types
namespace VROSC::Credits {
class CreditsHeader;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Credits::CreditsHeader);
// Dependencies UnityEngine.Color, VROSC.Credits.CreditsObject
namespace VROSC::Credits {
// Is value type: false
// CS Name: VROSC.Credits.CreditsHeader
class CORDL_TYPE CreditsHeader : public ::VROSC::Credits::CreditsObject {
public:
// Declarations
/// @brief Field _name, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::UnityW<::TMPro::TextMeshPro>  _name;

/// @brief Field _nameColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__nameColor, put=__cordl_internal_set__nameColor)) ::UnityEngine::Color  _nameColor;

/// @brief Method Awake, addr 0x17dc460, size 0x34, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::Credits::CreditsHeader* New_ctor() ;

/// @brief Method Setup, addr 0x17dc494, size 0x8c, virtual false, abstract: false, final false
inline void Setup(::StringW  name) ;

/// @brief Method UpdateVisibility, addr 0x17dc520, size 0x58, virtual true, abstract: false, final false
inline void UpdateVisibility(float_t  visible) ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__name() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__name() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__nameColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__nameColor() ;

constexpr void __cordl_internal_set__name(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set__nameColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x17dc57c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreditsHeader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreditsHeader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CreditsHeader(CreditsHeader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreditsHeader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreditsHeader(CreditsHeader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1578};

/// @brief Field _name, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____name;

/// @brief Field _nameColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____nameColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Credits::CreditsHeader, ____name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::Credits::CreditsHeader, ____nameColor) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Credits::CreditsHeader, 0x40>, "Size mismatch!");

} // namespace end def VROSC::Credits
NEED_NO_BOX(::VROSC::Credits::CreditsHeader);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Credits::CreditsHeader*, "VROSC.Credits", "CreditsHeader");
