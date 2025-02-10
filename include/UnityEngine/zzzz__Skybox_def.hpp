#pragma once
// IWYU pragma private; include "UnityEngine/Skybox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
CORDL_MODULE_EXPORT(Skybox)
// Forward declare root types
namespace UnityEngine {
class Skybox;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Skybox);
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Skybox
class CORDL_TYPE Skybox : public ::UnityEngine::Behaviour {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Skybox() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Skybox", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Skybox(Skybox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Skybox", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Skybox(Skybox const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8463};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Skybox, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Skybox);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Skybox*, "UnityEngine", "Skybox");
