#pragma once
// IWYU pragma private; include "VROSC/AdjustableMeshTintBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "VROSC/zzzz__AnimatedAppear_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdjustableMeshTintBehaviour)
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
class AdjustableMesh;
}
namespace VROSC {
struct AnimatedAppear_Mode;
}
// Forward declare root types
namespace VROSC {
class AdjustableMeshTintBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AdjustableMeshTintBehaviour);
// Dependencies UnityEngine.Color, UnityEngine.Playables.PlayableBehaviour, VROSC.AnimatedAppear::Mode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.AdjustableMeshTintBehaviour
class CORDL_TYPE AdjustableMeshTintBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief Field Tint, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Tint, put=__cordl_internal_set_Tint)) float_t  Tint;

/// @brief Field _mode, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__mode, put=__cordl_internal_set__mode)) ::VROSC::AnimatedAppear_Mode  _mode;

/// @brief Field _target, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::VROSC::AdjustableMesh>  _target;

/// @brief Field _tintColor, offset 0x1c, size 0x10 
 __declspec(property(get=__cordl_internal_get__tintColor, put=__cordl_internal_set__tintColor)) ::UnityEngine::Color  _tintColor;

static inline ::VROSC::AdjustableMeshTintBehaviour* New_ctor() ;

/// @brief Method ProcessFrame, addr 0x176f9dc, size 0xac, virtual true, abstract: false, final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method Setup, addr 0x176f9a8, size 0x2c, virtual false, abstract: false, final false
inline void Setup(::VROSC::AdjustableMesh*  target, ::VROSC::AnimatedAppear_Mode  mode) ;

constexpr float_t const& __cordl_internal_get_Tint() const;

constexpr float_t& __cordl_internal_get_Tint() ;

constexpr ::VROSC::AnimatedAppear_Mode const& __cordl_internal_get__mode() const;

constexpr ::VROSC::AnimatedAppear_Mode& __cordl_internal_get__mode() ;

constexpr ::UnityW<::VROSC::AdjustableMesh> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::VROSC::AdjustableMesh>& __cordl_internal_get__target() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__tintColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__tintColor() ;

constexpr void __cordl_internal_set_Tint(float_t  value) ;

constexpr void __cordl_internal_set__mode(::VROSC::AnimatedAppear_Mode  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::VROSC::AdjustableMesh>  value) ;

constexpr void __cordl_internal_set__tintColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x176fa88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdjustableMeshTintBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshTintBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdjustableMeshTintBehaviour(AdjustableMeshTintBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdjustableMeshTintBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdjustableMeshTintBehaviour(AdjustableMeshTintBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1236};

/// @brief Field _target, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::VROSC::AdjustableMesh>  ____target;

/// @brief Field _mode, offset: 0x18, size: 0x4, def value: None
 ::VROSC::AnimatedAppear_Mode  ____mode;

/// @brief Field _tintColor, offset: 0x1c, size: 0x10, def value: None
 ::UnityEngine::Color  ____tintColor;

/// @brief Field Tint, offset: 0x2c, size: 0x4, def value: None
 float_t  ___Tint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AdjustableMeshTintBehaviour, ____target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshTintBehaviour, ____mode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshTintBehaviour, ____tintColor) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::VROSC::AdjustableMeshTintBehaviour, ___Tint) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AdjustableMeshTintBehaviour, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::AdjustableMeshTintBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AdjustableMeshTintBehaviour*, "VROSC", "AdjustableMeshTintBehaviour");
