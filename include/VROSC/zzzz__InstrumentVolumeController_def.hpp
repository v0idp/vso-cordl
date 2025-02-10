#pragma once
// IWYU pragma private; include "VROSC/InstrumentVolumeController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InstrumentVolumeController)
namespace VROSC {
class InstrumentController;
}
namespace VROSC {
class InstrumentDataController;
}
// Forward declare root types
namespace VROSC {
class InstrumentVolumeController;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InstrumentVolumeController);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InstrumentVolumeController
class CORDL_TYPE InstrumentVolumeController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Volume)) float_t  Volume;

/// @brief Field _dataController, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataController, put=__cordl_internal_set__dataController)) ::VROSC::InstrumentDataController*  _dataController;

/// @brief Field _instrument, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__instrument, put=__cordl_internal_set__instrument)) ::UnityW<::VROSC::InstrumentController>  _instrument;

/// @brief Method CalculateVolume, addr 0x170e9f4, size 0x4, virtual true, abstract: false, final false
inline void CalculateVolume() ;

static inline ::VROSC::InstrumentVolumeController* New_ctor() ;

/// @brief Method SetVolumeMultiplier, addr 0x170e994, size 0x60, virtual false, abstract: false, final false
inline void SetVolumeMultiplier(float_t  volume) ;

/// @brief Method Setup, addr 0x170e98c, size 0x8, virtual true, abstract: false, final false
inline void Setup(::VROSC::InstrumentController*  instrument, ::VROSC::InstrumentDataController*  dataController) ;

constexpr ::VROSC::InstrumentDataController* const& __cordl_internal_get__dataController() const;

constexpr ::VROSC::InstrumentDataController*& __cordl_internal_get__dataController() ;

constexpr ::UnityW<::VROSC::InstrumentController> const& __cordl_internal_get__instrument() const;

constexpr ::UnityW<::VROSC::InstrumentController>& __cordl_internal_get__instrument() ;

constexpr void __cordl_internal_set__dataController(::VROSC::InstrumentDataController*  value) ;

constexpr void __cordl_internal_set__instrument(::UnityW<::VROSC::InstrumentController>  value) ;

/// @brief Method .ctor, addr 0x170e9f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Volume, addr 0x170e968, size 0x24, virtual false, abstract: false, final false
inline float_t get_Volume() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstrumentVolumeController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstrumentVolumeController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstrumentVolumeController(InstrumentVolumeController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstrumentVolumeController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstrumentVolumeController(InstrumentVolumeController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{878};

/// @brief Field _instrument, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::InstrumentController>  ____instrument;

/// @brief Field _dataController, offset: 0x28, size: 0x8, def value: None
 ::VROSC::InstrumentDataController*  ____dataController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InstrumentVolumeController, ____instrument) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentVolumeController, ____dataController) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InstrumentVolumeController, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InstrumentVolumeController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentVolumeController*, "VROSC", "InstrumentVolumeController");
