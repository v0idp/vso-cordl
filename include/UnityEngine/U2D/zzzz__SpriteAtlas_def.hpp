#pragma once
// IWYU pragma private; include "UnityEngine/U2D/SpriteAtlas.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SpriteAtlas)
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::U2D {
class SpriteAtlas;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::U2D::SpriteAtlas);
// Dependencies UnityEngine.Object
namespace UnityEngine::U2D {
// Is value type: false
// CS Name: UnityEngine.U2D.SpriteAtlas
class CORDL_TYPE SpriteAtlas : public ::UnityEngine::Object {
public:
// Declarations
/// @brief Method CanBindTo, addr 0x2f97128, size 0x44, virtual false, abstract: false, final false
inline bool CanBindTo(::UnityEngine::Sprite*  sprite) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpriteAtlas() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpriteAtlas", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpriteAtlas(SpriteAtlas && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpriteAtlas", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpriteAtlas(SpriteAtlas const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8661};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::U2D::SpriteAtlas, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::U2D
NEED_NO_BOX(::UnityEngine::U2D::SpriteAtlas);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::U2D::SpriteAtlas*, "UnityEngine.U2D", "SpriteAtlas");
