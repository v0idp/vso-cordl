#pragma once
// IWYU pragma private; include "VROSC/AudioReactive/EmitParticlesOnBeat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/AudioReactive/zzzz__AudioReactiveBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EmitParticlesOnBeat)
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace VROSC::AudioReactive {
class EmitParticlesOnBeat;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::AudioReactive::EmitParticlesOnBeat);
// Dependencies VROSC.AudioReactive.AudioReactiveBehaviour
namespace VROSC::AudioReactive {
// Is value type: false
// CS Name: VROSC.AudioReactive.EmitParticlesOnBeat
class CORDL_TYPE EmitParticlesOnBeat : public ::VROSC::AudioReactive::AudioReactiveBehaviour {
public:
// Declarations
/// @brief Field _maxAmount, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxAmount, put=__cordl_internal_set__maxAmount)) int32_t  _maxAmount;

/// @brief Field _minAmount, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__minAmount, put=__cordl_internal_set__minAmount)) int32_t  _minAmount;

/// @brief Field _system, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__system, put=__cordl_internal_set__system)) ::UnityW<::UnityEngine::ParticleSystem>  _system;

/// @brief Method Awake, addr 0x17d95f8, size 0x4, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::AudioReactive::EmitParticlesOnBeat* New_ctor() ;

/// @brief Method OnBeat, addr 0x17d95fc, size 0x38, virtual true, abstract: false, final false
inline void OnBeat(int32_t  beat) ;

constexpr int32_t const& __cordl_internal_get__maxAmount() const;

constexpr int32_t& __cordl_internal_get__maxAmount() ;

constexpr int32_t const& __cordl_internal_get__minAmount() const;

constexpr int32_t& __cordl_internal_get__minAmount() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get__system() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get__system() ;

constexpr void __cordl_internal_set__maxAmount(int32_t  value) ;

constexpr void __cordl_internal_set__minAmount(int32_t  value) ;

constexpr void __cordl_internal_set__system(::UnityW<::UnityEngine::ParticleSystem>  value) ;

/// @brief Method .ctor, addr 0x17d9634, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EmitParticlesOnBeat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EmitParticlesOnBeat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmitParticlesOnBeat(EmitParticlesOnBeat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmitParticlesOnBeat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmitParticlesOnBeat(EmitParticlesOnBeat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1553};

/// @brief Field _system, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ____system;

/// @brief Field _minAmount, offset: 0x38, size: 0x4, def value: None
 int32_t  ____minAmount;

/// @brief Field _maxAmount, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____maxAmount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::AudioReactive::EmitParticlesOnBeat, ____system) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::EmitParticlesOnBeat, ____minAmount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::AudioReactive::EmitParticlesOnBeat, ____maxAmount) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::AudioReactive::EmitParticlesOnBeat, 0x40>, "Size mismatch!");

} // namespace end def VROSC::AudioReactive
NEED_NO_BOX(::VROSC::AudioReactive::EmitParticlesOnBeat);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::AudioReactive::EmitParticlesOnBeat*, "VROSC.AudioReactive", "EmitParticlesOnBeat");
