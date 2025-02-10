#pragma once
// IWYU pragma private; include "VROSC/LaunchpadHitHintBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LaunchpadHitHintBehaviour)
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
class LaunchPadEffectOnSignal;
}
// Forward declare root types
namespace VROSC {
class LaunchpadHitHintBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LaunchpadHitHintBehaviour);
// Dependencies UnityEngine.Color, UnityEngine.Playables.PlayableBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LaunchpadHitHintBehaviour
class CORDL_TYPE LaunchpadHitHintBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief Field Color, offset 0x1c, size 0x10 
 __declspec(property(get=__cordl_internal_get_Color, put=__cordl_internal_set_Color)) ::UnityEngine::Color  Color;

/// @brief Field CurrentTime, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_CurrentTime, put=__cordl_internal_set_CurrentTime)) float_t  CurrentTime;

/// @brief Field _effect, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__effect, put=__cordl_internal_set__effect)) ::UnityW<::VROSC::LaunchPadEffectOnSignal>  _effect;

static inline ::VROSC::LaunchpadHitHintBehaviour* New_ctor() ;

/// @brief Method ProcessFrame, addr 0x17680d0, size 0x24, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method Setup, addr 0x176806c, size 0x5c, virtual false, abstract: false, final false
inline void Setup(::VROSC::LaunchPadEffectOnSignal*  effect) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_Color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_Color() ;

constexpr float_t const& __cordl_internal_get_CurrentTime() const;

constexpr float_t& __cordl_internal_get_CurrentTime() ;

constexpr ::UnityW<::VROSC::LaunchPadEffectOnSignal> const& __cordl_internal_get__effect() const;

constexpr ::UnityW<::VROSC::LaunchPadEffectOnSignal>& __cordl_internal_get__effect() ;

constexpr void __cordl_internal_set_Color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_CurrentTime(float_t  value) ;

constexpr void __cordl_internal_set__effect(::UnityW<::VROSC::LaunchPadEffectOnSignal>  value) ;

/// @brief Method .ctor, addr 0x17680f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LaunchpadHitHintBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LaunchpadHitHintBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LaunchpadHitHintBehaviour(LaunchpadHitHintBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LaunchpadHitHintBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LaunchpadHitHintBehaviour(LaunchpadHitHintBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1199};

/// @brief Field _effect, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::LaunchPadEffectOnSignal>  ____effect;

/// @brief Field CurrentTime, offset: 0x18, size: 0x4, def value: None
 float_t  ___CurrentTime;

/// @brief Field Color, offset: 0x1c, size: 0x10, def value: None
 ::UnityEngine::Color  ___Color;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LaunchpadHitHintBehaviour, ____effect) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchpadHitHintBehaviour, ___CurrentTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::LaunchpadHitHintBehaviour, ___Color) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LaunchpadHitHintBehaviour, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LaunchpadHitHintBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LaunchpadHitHintBehaviour*, "VROSC", "LaunchpadHitHintBehaviour");
