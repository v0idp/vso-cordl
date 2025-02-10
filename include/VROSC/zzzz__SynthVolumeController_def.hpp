#pragma once
// IWYU pragma private; include "VROSC/SynthVolumeController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__InstrumentVolumeController_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SynthVolumeController)
namespace VROSC {
class InstrumentController;
}
namespace VROSC {
class InstrumentDataController;
}
namespace VROSC {
class SynthController;
}
// Forward declare root types
namespace VROSC {
class SynthVolumeController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SynthVolumeController);
// Dependencies VROSC.InstrumentVolumeController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SynthVolumeController
class CORDL_TYPE SynthVolumeController : public ::VROSC::InstrumentVolumeController {
public:
// Declarations
/// @brief Field _driveNormalizationInfluence, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__driveNormalizationInfluence, put=__cordl_internal_set__driveNormalizationInfluence)) float_t  _driveNormalizationInfluence;

/// @brief Field _helmDefaultVolume, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__helmDefaultVolume, put=__cordl_internal_set__helmDefaultVolume)) float_t  _helmDefaultVolume;

 __declspec(property(get=get__synth)) ::UnityW<::VROSC::SynthController>  _synth;

/// @brief Method CalculateVolume, addr 0x170f9c0, size 0x234, virtual true, abstract: false, final false
inline void CalculateVolume() ;

static inline ::VROSC::SynthVolumeController* New_ctor() ;

/// @brief Method OnDestroy, addr 0x170f8f4, size 0xcc, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PatchChanged, addr 0x170f84c, size 0xa8, virtual false, abstract: false, final false
inline void PatchChanged() ;

/// @brief Method Setup, addr 0x170f6a8, size 0x1a4, virtual true, abstract: false, final false
inline void Setup(::VROSC::InstrumentController*  instrument, ::VROSC::InstrumentDataController*  dataController) ;

constexpr float_t const& __cordl_internal_get__driveNormalizationInfluence() const;

constexpr float_t& __cordl_internal_get__driveNormalizationInfluence() ;

constexpr float_t const& __cordl_internal_get__helmDefaultVolume() const;

constexpr float_t& __cordl_internal_get__helmDefaultVolume() ;

constexpr void __cordl_internal_set__driveNormalizationInfluence(float_t  value) ;

constexpr void __cordl_internal_set__helmDefaultVolume(float_t  value) ;

/// @brief Method .ctor, addr 0x170fbf4, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get__synth, addr 0x170f630, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::SynthController> get__synth() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthVolumeController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthVolumeController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthVolumeController(SynthVolumeController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthVolumeController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthVolumeController(SynthVolumeController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{880};

/// @brief Field _helmDefaultVolume, offset: 0x30, size: 0x4, def value: None
 float_t  ____helmDefaultVolume;

/// @brief Field _driveNormalizationInfluence, offset: 0x34, size: 0x4, def value: None
 float_t  ____driveNormalizationInfluence;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SynthVolumeController, ____helmDefaultVolume) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::SynthVolumeController, ____driveNormalizationInfluence) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SynthVolumeController, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SynthVolumeController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SynthVolumeController*, "VROSC", "SynthVolumeController");
