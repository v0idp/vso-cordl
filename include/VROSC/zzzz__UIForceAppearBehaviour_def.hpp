#pragma once
// IWYU pragma private; include "VROSC/UIForceAppearBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
CORDL_MODULE_EXPORT(UIForceAppearBehaviour)
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace VROSC {
class UIForceAppearBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UIForceAppearBehaviour);
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIForceAppearBehaviour
class CORDL_TYPE UIForceAppearBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief Field _appear, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__appear, put=__cordl_internal_set__appear)) bool  _appear;

/// @brief Field _target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::GameObject>  _target;

static inline ::VROSC::UIForceAppearBehaviour* New_ctor() ;

/// @brief Method OnBehaviourPlay, addr 0x17702d8, size 0x154, virtual true, abstract: false, final false
inline void OnBehaviourPlay(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info) ;

/// @brief Method Setup, addr 0x17702c0, size 0x10, virtual false, abstract: false, final false
inline void Setup(::UnityEngine::GameObject*  target, bool  appear) ;

constexpr bool const& __cordl_internal_get__appear() const;

constexpr bool& __cordl_internal_get__appear() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__appear(bool  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x177042c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIForceAppearBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIForceAppearBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIForceAppearBehaviour(UIForceAppearBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIForceAppearBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIForceAppearBehaviour(UIForceAppearBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1242};

/// @brief Field _target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____target;

/// @brief Field _appear, offset: 0x18, size: 0x1, def value: None
 bool  ____appear;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIForceAppearBehaviour, ____target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIForceAppearBehaviour, ____appear) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIForceAppearBehaviour, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UIForceAppearBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIForceAppearBehaviour*, "VROSC", "UIForceAppearBehaviour");
