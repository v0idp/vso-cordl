#pragma once
// IWYU pragma private; include "VROSC/FrameCreationBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FrameCreationBehaviour)
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace VROSC {
class FrameVisuals;
}
// Forward declare root types
namespace VROSC {
class FrameCreationBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::FrameCreationBehaviour);
// Dependencies UnityEngine.Playables.PlayableBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.FrameCreationBehaviour
class CORDL_TYPE FrameCreationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief Field Effect, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Effect, put=__cordl_internal_set_Effect)) float_t  Effect;

/// @brief Field _target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::VROSC::FrameVisuals>  _target;

static inline ::VROSC::FrameCreationBehaviour* New_ctor() ;

/// @brief Method ProcessFrame, addr 0x176789c, size 0x7c, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method Setup, addr 0x1767894, size 0x8, virtual false, abstract: false, final false
inline void Setup(::VROSC::FrameVisuals*  target) ;

constexpr float_t const& __cordl_internal_get_Effect() const;

constexpr float_t& __cordl_internal_get_Effect() ;

constexpr ::UnityW<::VROSC::FrameVisuals> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::VROSC::FrameVisuals>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set_Effect(float_t  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::VROSC::FrameVisuals>  value) ;

/// @brief Method .ctor, addr 0x1767918, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FrameCreationBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FrameCreationBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FrameCreationBehaviour(FrameCreationBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FrameCreationBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FrameCreationBehaviour(FrameCreationBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1191};

/// @brief Field _target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::FrameVisuals>  ____target;

/// @brief Field Effect, offset: 0x18, size: 0x4, def value: None
 float_t  ___Effect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::FrameCreationBehaviour, ____target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::FrameCreationBehaviour, ___Effect) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::FrameCreationBehaviour, 0x20>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::FrameCreationBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::FrameCreationBehaviour*, "VROSC", "FrameCreationBehaviour");
