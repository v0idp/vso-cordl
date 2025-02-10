#pragma once
// IWYU pragma private; include "VROSC/InstrumentsDataController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__BaseDataController_def.hpp"
#include "VROSC/zzzz__WidgetSettings_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InstrumentsDataController)
namespace System {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace VROSC {
class InstrumentsDataController_PatchSettings;
}
namespace VROSC {
struct WidgetSettings_Identifier;
}
namespace VROSC {
class WidgetSettings;
}
// Forward declare root types
namespace VROSC {
class InstrumentsDataController;
}
namespace VROSC {
class InstrumentsDataController_PatchSettings;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::InstrumentsDataController);
MARK_REF_PTR_T(::VROSC::InstrumentsDataController_PatchSettings);
// Dependencies System.Object, VROSC.WidgetSettings::Identifier
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InstrumentsDataController/PatchSettings
class CORDL_TYPE InstrumentsDataController_PatchSettings : public ::System::Object {
public:
// Declarations
/// @brief Field InstrumentId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_InstrumentId, put=__cordl_internal_set_InstrumentId)) ::VROSC::WidgetSettings_Identifier  InstrumentId;

/// @brief Field Patch, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Patch, put=__cordl_internal_set_Patch)) ::System::Object*  Patch;

static inline ::VROSC::InstrumentsDataController_PatchSettings* New_ctor() ;

constexpr ::VROSC::WidgetSettings_Identifier const& __cordl_internal_get_InstrumentId() const;

constexpr ::VROSC::WidgetSettings_Identifier& __cordl_internal_get_InstrumentId() ;

constexpr ::System::Object* const& __cordl_internal_get_Patch() const;

constexpr ::System::Object*& __cordl_internal_get_Patch() ;

constexpr void __cordl_internal_set_InstrumentId(::VROSC::WidgetSettings_Identifier  value) ;

constexpr void __cordl_internal_set_Patch(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x183e164, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstrumentsDataController_PatchSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstrumentsDataController_PatchSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstrumentsDataController_PatchSettings(InstrumentsDataController_PatchSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstrumentsDataController_PatchSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstrumentsDataController_PatchSettings(InstrumentsDataController_PatchSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{389};

/// @brief Field InstrumentId, offset: 0x10, size: 0x4, def value: None
 ::VROSC::WidgetSettings_Identifier  ___InstrumentId;

/// @brief Field Patch, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___Patch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::InstrumentsDataController_PatchSettings, ___InstrumentId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::InstrumentsDataController_PatchSettings, ___Patch) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::InstrumentsDataController_PatchSettings, 0x20>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.BaseDataController
namespace VROSC {
// Is value type: false
// CS Name: VROSC.InstrumentsDataController
class CORDL_TYPE InstrumentsDataController : public ::VROSC::BaseDataController {
public:
// Declarations
using PatchSettings = ::VROSC::InstrumentsDataController_PatchSettings;

/// @brief Method ApplyDefaults, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ApplyDefaults(::VROSC::WidgetSettings*  widgetDefaultSettings) ;

/// @brief Method GetPosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetPosition(::VROSC::WidgetSettings_Identifier  id) ;

/// @brief Method GetQuantize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool GetQuantize(::VROSC::WidgetSettings_Identifier  id) ;

/// @brief Method GetQuantizeBeatDivision, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetQuantizeBeatDivision(::VROSC::WidgetSettings_Identifier  id) ;

/// @brief Method GetQuantizeTolerance, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t GetQuantizeTolerance(::VROSC::WidgetSettings_Identifier  id) ;

/// @brief Method GetRotation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Quaternion GetRotation(::VROSC::WidgetSettings_Identifier  id) ;

/// @brief Method GetScale, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetScale(::VROSC::WidgetSettings_Identifier  id) ;

/// @brief Method IsOpen, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool IsOpen(::VROSC::WidgetSettings_Identifier  id) ;

static inline ::VROSC::InstrumentsDataController* New_ctor() ;

/// @brief Method SetOpen, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetOpen(::VROSC::WidgetSettings_Identifier  id, bool  isOpen) ;

/// @brief Method SetPosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetPosition(::VROSC::WidgetSettings_Identifier  id, ::UnityEngine::Vector3  position) ;

/// @brief Method SetQuantize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetQuantize(::VROSC::WidgetSettings_Identifier  id, bool  quantize) ;

/// @brief Method SetQuantizeBeatDivision, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetQuantizeBeatDivision(::VROSC::WidgetSettings_Identifier  id, int32_t  division) ;

/// @brief Method SetQuantizeTolerance, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetQuantizeTolerance(::VROSC::WidgetSettings_Identifier  id, float_t  tolerance) ;

/// @brief Method SetRotation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetRotation(::VROSC::WidgetSettings_Identifier  id, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method SetScale, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetScale(::VROSC::WidgetSettings_Identifier  id, ::UnityEngine::Vector3  scale) ;

/// @brief Method .ctor, addr 0x183e15c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstrumentsDataController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstrumentsDataController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstrumentsDataController(InstrumentsDataController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstrumentsDataController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstrumentsDataController(InstrumentsDataController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{390};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::InstrumentsDataController, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::InstrumentsDataController);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentsDataController*, "VROSC", "InstrumentsDataController");
NEED_NO_BOX(::VROSC::InstrumentsDataController_PatchSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::InstrumentsDataController_PatchSettings*, "VROSC", "InstrumentsDataController/PatchSettings");
