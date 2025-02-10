#pragma once
// IWYU pragma private; include "VROSC/UIAppearBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UIAppearBehaviour)
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
class AnimatedAppear;
}
// Forward declare root types
namespace VROSC {
class UIAppearBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::UIAppearBehaviour);
// Dependencies UnityEngine.Playables.PlayableBehaviour, UnityEngine.Vector3
namespace VROSC {
// Is value type: false
// CS Name: VROSC.UIAppearBehaviour
class CORDL_TYPE UIAppearBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief Field Appear, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Appear, put=__cordl_internal_set_Appear)) float_t  Appear;

/// @brief Field Move, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Move, put=__cordl_internal_set_Move)) float_t  Move;

/// @brief Field _colorEffect, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get__colorEffect, put=__cordl_internal_set__colorEffect)) bool  _colorEffect;

/// @brief Field _enter, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__enter, put=__cordl_internal_set__enter)) bool  _enter;

/// @brief Field _target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::VROSC::AnimatedAppear>  _target;

/// @brief Field _targetEnd, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__targetEnd, put=__cordl_internal_set__targetEnd)) ::UnityEngine::Vector3  _targetEnd;

/// @brief Field _targetStart, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get__targetStart, put=__cordl_internal_set__targetStart)) ::UnityEngine::Vector3  _targetStart;

static inline ::VROSC::UIAppearBehaviour* New_ctor() ;

/// @brief Method OnBehaviourPause, addr 0x176ff48, size 0x178, virtual true, abstract: false, final false
inline void OnBehaviourPause(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info) ;

/// @brief Method OnBehaviourPlay, addr 0x176ff00, size 0x48, virtual true, abstract: false, final false
inline void OnBehaviourPlay(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info) ;

/// @brief Method OnGraphStart, addr 0x176fea8, size 0x2c, virtual true, abstract: false, final false
inline void OnGraphStart(::UnityEngine::Playables::Playable  playable) ;

/// @brief Method OnGraphStop, addr 0x176fed4, size 0x2c, virtual true, abstract: false, final false
inline void OnGraphStop(::UnityEngine::Playables::Playable  playable) ;

/// @brief Method ProcessFrame, addr 0x17700c0, size 0xf8, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method Setup, addr 0x176fdbc, size 0xe4, virtual false, abstract: false, final false
inline void Setup(::VROSC::AnimatedAppear*  target, bool  enter) ;

constexpr float_t const& __cordl_internal_get_Appear() const;

constexpr float_t& __cordl_internal_get_Appear() ;

constexpr float_t const& __cordl_internal_get_Move() const;

constexpr float_t& __cordl_internal_get_Move() ;

constexpr bool const& __cordl_internal_get__colorEffect() const;

constexpr bool& __cordl_internal_get__colorEffect() ;

constexpr bool const& __cordl_internal_get__enter() const;

constexpr bool& __cordl_internal_get__enter() ;

constexpr ::UnityW<::VROSC::AnimatedAppear> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::VROSC::AnimatedAppear>& __cordl_internal_get__target() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetEnd() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetEnd() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetStart() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetStart() ;

constexpr void __cordl_internal_set_Appear(float_t  value) ;

constexpr void __cordl_internal_set_Move(float_t  value) ;

constexpr void __cordl_internal_set__colorEffect(bool  value) ;

constexpr void __cordl_internal_set__enter(bool  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::VROSC::AnimatedAppear>  value) ;

constexpr void __cordl_internal_set__targetEnd(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__targetStart(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x17701b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIAppearBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIAppearBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIAppearBehaviour(UIAppearBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIAppearBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIAppearBehaviour(UIAppearBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1240};

/// @brief Field _target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::AnimatedAppear>  ____target;

/// @brief Field _enter, offset: 0x18, size: 0x1, def value: None
 bool  ____enter;

/// @brief Field _colorEffect, offset: 0x19, size: 0x1, def value: None
 bool  ____colorEffect;

/// @brief Field Appear, offset: 0x1c, size: 0x4, def value: None
 float_t  ___Appear;

/// @brief Field Move, offset: 0x20, size: 0x4, def value: None
 float_t  ___Move;

/// @brief Field _targetStart, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____targetStart;

/// @brief Field _targetEnd, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____targetEnd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::UIAppearBehaviour, ____target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIAppearBehaviour, ____enter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIAppearBehaviour, ____colorEffect) == 0x19, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIAppearBehaviour, ___Appear) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIAppearBehaviour, ___Move) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIAppearBehaviour, ____targetStart) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::UIAppearBehaviour, ____targetEnd) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::UIAppearBehaviour, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::UIAppearBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::UIAppearBehaviour*, "VROSC", "UIAppearBehaviour");
