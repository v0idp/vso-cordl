#pragma once
// IWYU pragma private; include "VROSC/MicrophoneEffectsManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MicrophoneEffectsManager)
// Forward declare root types
namespace VROSC {
class MicrophoneEffectsManager;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MicrophoneEffectsManager);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MicrophoneEffectsManager
class CORDL_TYPE MicrophoneEffectsManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _active, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__active, put=__cordl_internal_set__active)) bool  _active;

/// @brief Field _preampReverb, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__preampReverb, put=__cordl_internal_set__preampReverb)) float_t  _preampReverb;

/// @brief Field _proximityReverbMultiplier, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__proximityReverbMultiplier, put=__cordl_internal_set__proximityReverbMultiplier)) float_t  _proximityReverbMultiplier;

/// @brief Field _reverbVolumeAdjustment, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__reverbVolumeAdjustment, put=__cordl_internal_set__reverbVolumeAdjustment)) float_t  _reverbVolumeAdjustment;

/// @brief Field _useProximity, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__useProximity, put=__cordl_internal_set__useProximity)) bool  _useProximity;

/// @brief Method Activate, addr 0x16eea68, size 0x84, virtual false, abstract: false, final false
inline void Activate() ;

/// @brief Method Deactivate, addr 0x16ee9dc, size 0x80, virtual false, abstract: false, final false
inline void Deactivate() ;

static inline ::VROSC::MicrophoneEffectsManager* New_ctor() ;

/// @brief Method SetPreampReverb, addr 0x16eeba0, size 0x8, virtual false, abstract: false, final false
inline void SetPreampReverb(float_t  preampReverb) ;

/// @brief Method SetPreviewReverb, addr 0x16eeba8, size 0xc0, virtual false, abstract: false, final false
inline void SetPreviewReverb(bool  enabled) ;

/// @brief Method SetProximity, addr 0x16eeaec, size 0xb4, virtual false, abstract: false, final false
inline void SetProximity(float_t  proximity) ;

/// @brief Method SetUseProximity, addr 0x16eec68, size 0xc, virtual false, abstract: false, final false
inline void SetUseProximity(bool  state) ;

constexpr bool const& __cordl_internal_get__active() const;

constexpr bool& __cordl_internal_get__active() ;

constexpr float_t const& __cordl_internal_get__preampReverb() const;

constexpr float_t& __cordl_internal_get__preampReverb() ;

constexpr float_t const& __cordl_internal_get__proximityReverbMultiplier() const;

constexpr float_t& __cordl_internal_get__proximityReverbMultiplier() ;

constexpr float_t const& __cordl_internal_get__reverbVolumeAdjustment() const;

constexpr float_t& __cordl_internal_get__reverbVolumeAdjustment() ;

constexpr bool const& __cordl_internal_get__useProximity() const;

constexpr bool& __cordl_internal_get__useProximity() ;

constexpr void __cordl_internal_set__active(bool  value) ;

constexpr void __cordl_internal_set__preampReverb(float_t  value) ;

constexpr void __cordl_internal_set__proximityReverbMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__reverbVolumeAdjustment(float_t  value) ;

constexpr void __cordl_internal_set__useProximity(bool  value) ;

/// @brief Method .ctor, addr 0x16eec74, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicrophoneEffectsManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicrophoneEffectsManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicrophoneEffectsManager(MicrophoneEffectsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicrophoneEffectsManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicrophoneEffectsManager(MicrophoneEffectsManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{763};

/// @brief Field _active, offset: 0x20, size: 0x1, def value: None
 bool  ____active;

/// @brief Field _reverbVolumeAdjustment, offset: 0x24, size: 0x4, def value: None
 float_t  ____reverbVolumeAdjustment;

/// @brief Field _preampReverb, offset: 0x28, size: 0x4, def value: None
 float_t  ____preampReverb;

/// @brief Field _proximityReverbMultiplier, offset: 0x2c, size: 0x4, def value: None
 float_t  ____proximityReverbMultiplier;

/// @brief Field _useProximity, offset: 0x30, size: 0x1, def value: None
 bool  ____useProximity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::MicrophoneEffectsManager, ____active) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneEffectsManager, ____reverbVolumeAdjustment) == 0x24, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneEffectsManager, ____preampReverb) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneEffectsManager, ____proximityReverbMultiplier) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::VROSC::MicrophoneEffectsManager, ____useProximity) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::MicrophoneEffectsManager, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MicrophoneEffectsManager);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MicrophoneEffectsManager*, "VROSC", "MicrophoneEffectsManager");
