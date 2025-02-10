#pragma once
// IWYU pragma private; include "VROSC/TextDisplay.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__Node_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TextDisplay)
namespace UnityEngine {
class TextMesh;
}
// Forward declare root types
namespace VROSC {
class TextDisplay;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TextDisplay);
// Dependencies VROSC.Node
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TextDisplay
class CORDL_TYPE TextDisplay : public ::VROSC::Node {
public:
// Declarations
/// @brief Field _textMesh, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__textMesh, put=__cordl_internal_set__textMesh)) ::UnityW<::UnityEngine::TextMesh>  _textMesh;

/// @brief Method InitDisplay, addr 0x1725d44, size 0x50, virtual true, abstract: false, final false
inline void InitDisplay() ;

static inline ::VROSC::TextDisplay* New_ctor() ;

/// @brief Method Start, addr 0x1726118, size 0xc, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateDisplay, addr 0x1725e4c, size 0x98, virtual false, abstract: false, final false
inline void UpdateDisplay(::StringW  newText) ;

constexpr ::UnityW<::UnityEngine::TextMesh> const& __cordl_internal_get__textMesh() const;

constexpr ::UnityW<::UnityEngine::TextMesh>& __cordl_internal_get__textMesh() ;

constexpr void __cordl_internal_set__textMesh(::UnityW<::UnityEngine::TextMesh>  value) ;

/// @brief Method .ctor, addr 0x1725fc4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextDisplay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextDisplay(TextDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextDisplay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextDisplay(TextDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1018};

/// @brief Field _textMesh, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextMesh>  ____textMesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TextDisplay, ____textMesh) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TextDisplay, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TextDisplay);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TextDisplay*, "VROSC", "TextDisplay");
