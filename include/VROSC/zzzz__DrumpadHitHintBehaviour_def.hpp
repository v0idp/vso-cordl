#pragma once
// IWYU pragma private; include "VROSC/DrumpadHitHintBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DrumpadHitHintBehaviour)
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
class DrumPadEffectOnSignal;
}
// Forward declare root types
namespace VROSC {
class DrumpadHitHintBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DrumpadHitHintBehaviour);
// Dependencies UnityEngine.Color, UnityEngine.Playables.PlayableBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DrumpadHitHintBehaviour
class CORDL_TYPE DrumpadHitHintBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief Field Color, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_Color, put=__cordl_internal_set_Color)) ::UnityEngine::Color  Color;

/// @brief Field CurrentTime, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_CurrentTime, put=__cordl_internal_set_CurrentTime)) float_t  CurrentTime;

/// @brief Field HitPower, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_HitPower, put=__cordl_internal_set_HitPower)) float_t  HitPower;

/// @brief Field _drumEffect, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__drumEffect, put=__cordl_internal_set__drumEffect)) ::UnityW<::VROSC::DrumPadEffectOnSignal>  _drumEffect;

static inline ::VROSC::DrumpadHitHintBehaviour* New_ctor() ;

/// @brief Method ProcessFrame, addr 0x1767d28, size 0x2c, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method Setup, addr 0x1767cf0, size 0x30, virtual false, abstract: false, final false
inline void Setup(::VROSC::DrumPadEffectOnSignal*  drumEffect) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_Color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_Color() ;

constexpr float_t const& __cordl_internal_get_CurrentTime() const;

constexpr float_t& __cordl_internal_get_CurrentTime() ;

constexpr float_t const& __cordl_internal_get_HitPower() const;

constexpr float_t& __cordl_internal_get_HitPower() ;

constexpr ::UnityW<::VROSC::DrumPadEffectOnSignal> const& __cordl_internal_get__drumEffect() const;

constexpr ::UnityW<::VROSC::DrumPadEffectOnSignal>& __cordl_internal_get__drumEffect() ;

constexpr void __cordl_internal_set_Color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_CurrentTime(float_t  value) ;

constexpr void __cordl_internal_set_HitPower(float_t  value) ;

constexpr void __cordl_internal_set__drumEffect(::UnityW<::VROSC::DrumPadEffectOnSignal>  value) ;

/// @brief Method .ctor, addr 0x1767d54, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DrumpadHitHintBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DrumpadHitHintBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DrumpadHitHintBehaviour(DrumpadHitHintBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DrumpadHitHintBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DrumpadHitHintBehaviour(DrumpadHitHintBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1195};

/// @brief Field _drumEffect, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::DrumPadEffectOnSignal>  ____drumEffect;

/// @brief Field CurrentTime, offset: 0x18, size: 0x4, def value: None
 float_t  ___CurrentTime;

/// @brief Field HitPower, offset: 0x1c, size: 0x4, def value: None
 float_t  ___HitPower;

/// @brief Field Color, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ___Color;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DrumpadHitHintBehaviour, ____drumEffect) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadHitHintBehaviour, ___CurrentTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadHitHintBehaviour, ___HitPower) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::DrumpadHitHintBehaviour, ___Color) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DrumpadHitHintBehaviour, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DrumpadHitHintBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DrumpadHitHintBehaviour*, "VROSC", "DrumpadHitHintBehaviour");
