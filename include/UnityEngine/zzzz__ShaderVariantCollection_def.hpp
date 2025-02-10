#pragma once
// IWYU pragma private; include "UnityEngine/ShaderVariantCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ShaderVariantCollection)
// Forward declare root types
namespace UnityEngine {
class ShaderVariantCollection;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ShaderVariantCollection);
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ShaderVariantCollection
class CORDL_TYPE ShaderVariantCollection : public ::UnityEngine::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderVariantCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderVariantCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderVariantCollection(ShaderVariantCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderVariantCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderVariantCollection(ShaderVariantCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8631};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ShaderVariantCollection, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::ShaderVariantCollection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ShaderVariantCollection*, "UnityEngine", "ShaderVariantCollection");
