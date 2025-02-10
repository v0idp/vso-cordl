#pragma once
// IWYU pragma private; include "UnityEngine/TextMesh.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TextMesh)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
class TextMesh;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextMesh);
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TextMesh
class CORDL_TYPE TextMesh : public ::UnityEngine::Component {
public:
// Declarations
 __declspec(property(get=get_color, put=set_color)) ::UnityEngine::Color  color;

 __declspec(property(get=get_text, put=set_text)) ::StringW  text;

/// @brief Method get_color, addr 0x3002630, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method get_color_Injected, addr 0x3002688, size 0x44, virtual false, abstract: false, final false
inline void get_color_Injected(::ByRef<::UnityEngine::Color>  ret) ;

/// @brief Method get_text, addr 0x30025b0, size 0x3c, virtual false, abstract: false, final false
inline ::StringW get_text() ;

/// @brief Method set_color, addr 0x30026cc, size 0x54, virtual false, abstract: false, final false
inline void set_color(::UnityEngine::Color  value) ;

/// @brief Method set_color_Injected, addr 0x3002720, size 0x44, virtual false, abstract: false, final false
inline void set_color_Injected(::ByRef<::UnityEngine::Color>  value) ;

/// @brief Method set_text, addr 0x30025ec, size 0x44, virtual false, abstract: false, final false
inline void set_text(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextMesh", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextMesh(TextMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextMesh", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextMesh(TextMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12289};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextMesh, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::TextMesh);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextMesh*, "UnityEngine", "TextMesh");
