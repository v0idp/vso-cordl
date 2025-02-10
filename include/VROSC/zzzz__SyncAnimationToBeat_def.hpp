#pragma once
// IWYU pragma private; include "VROSC/SyncAnimationToBeat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SyncAnimationToBeat)
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace VROSC {
class SyncAnimationToBeat;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SyncAnimationToBeat);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SyncAnimationToBeat
class CORDL_TYPE SyncAnimationToBeat : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _animationMatchesBPM, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__animationMatchesBPM, put=__cordl_internal_set__animationMatchesBPM)) float_t  _animationMatchesBPM;

/// @brief Field _animator, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__animator, put=__cordl_internal_set__animator)) ::UnityW<::UnityEngine::Animator>  _animator;

/// @brief Method BPMChanged, addr 0x1714ee8, size 0x4, virtual false, abstract: false, final false
inline void BPMChanged(double_t  newBPM) ;

static inline ::VROSC::SyncAnimationToBeat* New_ctor() ;

/// @brief Method OnDisable, addr 0x1714df0, size 0xf8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1714b9c, size 0xfc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SyncAnimator, addr 0x1714c98, size 0x158, virtual false, abstract: false, final false
inline void SyncAnimator() ;

constexpr float_t const& __cordl_internal_get__animationMatchesBPM() const;

constexpr float_t& __cordl_internal_get__animationMatchesBPM() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__animator() ;

constexpr void __cordl_internal_set__animationMatchesBPM(float_t  value) ;

constexpr void __cordl_internal_set__animator(::UnityW<::UnityEngine::Animator>  value) ;

/// @brief Method .ctor, addr 0x1714eec, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SyncAnimationToBeat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SyncAnimationToBeat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SyncAnimationToBeat(SyncAnimationToBeat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyncAnimationToBeat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyncAnimationToBeat(SyncAnimationToBeat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{908};

/// @brief Field _animationMatchesBPM, offset: 0x20, size: 0x4, def value: None
 float_t  ____animationMatchesBPM;

/// @brief Field _animator, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ____animator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SyncAnimationToBeat, ____animationMatchesBPM) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::SyncAnimationToBeat, ____animator) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SyncAnimationToBeat, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SyncAnimationToBeat);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SyncAnimationToBeat*, "VROSC", "SyncAnimationToBeat");
