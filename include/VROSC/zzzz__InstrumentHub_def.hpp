#pragma once
// IWYU pragma private; include "VROSC/InstrumentHub.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__WidgetHub_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InstrumentHub)
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class WidgetController;
}
namespace VROSC {
struct WidgetSettings_Identifier;
}
// Forward declare root types
namespace VROSC {
class InstrumentHub;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InstrumentHub);
// Dependencies VROSC.WidgetHub
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InstrumentHub
class CORDL_TYPE InstrumentHub : public ::VROSC::WidgetHub {
public:
// Declarations
 __declspec(property(get=get_InstrumentSizeMultiplier)) float_t  InstrumentSizeMultiplier;

/// @brief Field _gripSpawnHeightOffset, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__gripSpawnHeightOffset, put=__cordl_internal_set__gripSpawnHeightOffset)) float_t  _gripSpawnHeightOffset;

/// @brief Field _instrumentSizeMultiplier, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__instrumentSizeMultiplier, put=__cordl_internal_set__instrumentSizeMultiplier)) float_t  _instrumentSizeMultiplier;

/// @brief Field _spawnDistanceFromBoard, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__spawnDistanceFromBoard, put=__cordl_internal_set__spawnDistanceFromBoard)) float_t  _spawnDistanceFromBoard;

/// @brief Field _spawnDistanceFromController, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__spawnDistanceFromController, put=__cordl_internal_set__spawnDistanceFromController)) float_t  _spawnDistanceFromController;

/// @brief Method GetInstrumentName, addr 0x179096c, size 0xb4, virtual false, abstract: false, final false
inline ::StringW GetInstrumentName(::VROSC::WidgetSettings_Identifier  instrumentId) ;

static inline ::VROSC::InstrumentHub* New_ctor() ;

/// @brief Method PlaceWidget, addr 0x178ff88, size 0x9e4, virtual true, abstract: false, final false
inline void PlaceWidget(::VROSC::WidgetController*  target, ::VROSC::InputDevice*  device, ::UnityEngine::Vector3  pressPos, bool  gripping, bool  userHasOpenedBefore) ;

/// @brief Method Setup, addr 0x178fa40, size 0x548, virtual false, abstract: false, final false
inline void Setup() ;

constexpr float_t const& __cordl_internal_get__gripSpawnHeightOffset() const;

constexpr float_t& __cordl_internal_get__gripSpawnHeightOffset() ;

constexpr float_t const& __cordl_internal_get__instrumentSizeMultiplier() const;

constexpr float_t& __cordl_internal_get__instrumentSizeMultiplier() ;

constexpr float_t const& __cordl_internal_get__spawnDistanceFromBoard() const;

constexpr float_t& __cordl_internal_get__spawnDistanceFromBoard() ;

constexpr float_t const& __cordl_internal_get__spawnDistanceFromController() const;

constexpr float_t& __cordl_internal_get__spawnDistanceFromController() ;

constexpr void __cordl_internal_set__gripSpawnHeightOffset(float_t  value) ;

constexpr void __cordl_internal_set__instrumentSizeMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__spawnDistanceFromBoard(float_t  value) ;

constexpr void __cordl_internal_set__spawnDistanceFromController(float_t  value) ;

/// @brief Method .ctor, addr 0x1790a20, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InstrumentSizeMultiplier, addr 0x178fa38, size 0x8, virtual false, abstract: false, final false
inline float_t get_InstrumentSizeMultiplier() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstrumentHub() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstrumentHub", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstrumentHub(InstrumentHub && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstrumentHub", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstrumentHub(InstrumentHub const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1337};

/// @brief Field _spawnDistanceFromBoard, offset: 0x30, size: 0x4, def value: None
 float_t  ____spawnDistanceFromBoard;

/// @brief Field _spawnDistanceFromController, offset: 0x34, size: 0x4, def value: None
 float_t  ____spawnDistanceFromController;

/// @brief Field _instrumentSizeMultiplier, offset: 0x38, size: 0x4, def value: None
 float_t  ____instrumentSizeMultiplier;

/// @brief Field _gripSpawnHeightOffset, offset: 0x3c, size: 0x4, def value: None
 float_t  ____gripSpawnHeightOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InstrumentHub, ____spawnDistanceFromBoard) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentHub, ____spawnDistanceFromController) == 0x34, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentHub, ____instrumentSizeMultiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentHub, ____gripSpawnHeightOffset) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InstrumentHub, 0x40>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InstrumentHub);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentHub*, "VROSC", "InstrumentHub");
