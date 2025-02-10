#pragma once
// IWYU pragma private; include "UnityEngine/AnimationState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__TrackedReference_def.hpp"
CORDL_MODULE_EXPORT(AnimationState)
// Forward declare root types
namespace UnityEngine {
class AnimationState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AnimationState);
// Dependencies UnityEngine.TrackedReference
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AnimationState
class CORDL_TYPE AnimationState : public ::UnityEngine::TrackedReference {
public:
// Declarations
static inline ::UnityEngine::AnimationState* New_ctor() ;

/// @brief Method .ctor, addr 0x2f52d74, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationState(AnimationState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationState(AnimationState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12026};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimationState, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AnimationState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationState*, "UnityEngine", "AnimationState");
