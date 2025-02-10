#pragma once
// IWYU pragma private; include "DG/Tweening/Core/SafeModeReport.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SafeModeReport)
namespace DG::Tweening::Core {
struct SafeModeReport_SafeModeReportType;
}
// Forward declare root types
namespace DG::Tweening::Core {
struct SafeModeReport_SafeModeReportType;
}
namespace DG::Tweening::Core {
struct SafeModeReport;
}
// Write type traits
MARK_VAL_T(::DG::Tweening::Core::SafeModeReport_SafeModeReportType);
MARK_VAL_T(::DG::Tweening::Core::SafeModeReport);
// Dependencies 
namespace DG::Tweening::Core {
// Is value type: true
// CS Name: DG.Tweening.Core.SafeModeReport/SafeModeReportType
struct CORDL_TYPE SafeModeReport_SafeModeReportType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SafeModeReport_SafeModeReportType_Unwrapped
enum struct __SafeModeReport_SafeModeReportType_Unwrapped : int32_t {
__E_Unset = static_cast<int32_t>(0x0),
__E_TargetOrFieldMissing = static_cast<int32_t>(0x1),
__E_Callback = static_cast<int32_t>(0x2),
__E_StartupFailure = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SafeModeReport_SafeModeReportType_Unwrapped () const noexcept {
return static_cast<__SafeModeReport_SafeModeReportType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SafeModeReport_SafeModeReportType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SafeModeReport_SafeModeReportType(int32_t  value__) noexcept;

/// @brief Field Callback value: I32(2)
static ::DG::Tweening::Core::SafeModeReport_SafeModeReportType const Callback;

/// @brief Field StartupFailure value: I32(3)
static ::DG::Tweening::Core::SafeModeReport_SafeModeReportType const StartupFailure;

/// @brief Field TargetOrFieldMissing value: I32(1)
static ::DG::Tweening::Core::SafeModeReport_SafeModeReportType const TargetOrFieldMissing;

/// @brief Field Unset value: I32(0)
static ::DG::Tweening::Core::SafeModeReport_SafeModeReportType const Unset;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10849};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Core::SafeModeReport_SafeModeReportType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::SafeModeReport_SafeModeReportType, 0x4>, "Size mismatch!");

} // namespace end def DG::Tweening::Core
// Dependencies 
namespace DG::Tweening::Core {
// Is value type: true
// CS Name: DG.Tweening.Core.SafeModeReport
struct CORDL_TYPE SafeModeReport {
public:
// Declarations
using SafeModeReportType = ::DG::Tweening::Core::SafeModeReport_SafeModeReportType;

 __declspec(property(get=get_totCallbackErrors, put=set_totCallbackErrors)) int32_t  totCallbackErrors;

 __declspec(property(get=get_totMissingTargetOrFieldErrors, put=set_totMissingTargetOrFieldErrors)) int32_t  totMissingTargetOrFieldErrors;

 __declspec(property(get=get_totStartupErrors, put=set_totStartupErrors)) int32_t  totStartupErrors;

 __declspec(property(get=get_totUnsetErrors, put=set_totUnsetErrors)) int32_t  totUnsetErrors;

/// @brief Method Add, addr 0x18e62b4, size 0x3c, virtual false, abstract: false, final false
inline void Add(::DG::Tweening::Core::SafeModeReport_SafeModeReportType  type) ;

/// @brief Method GetTotErrors, addr 0x18e549c, size 0x10, virtual false, abstract: false, final false
inline int32_t GetTotErrors() ;

/// @brief Method get_totCallbackErrors, addr 0x18e6284, size 0x8, virtual false, abstract: false, final false
inline int32_t get_totCallbackErrors() ;

/// @brief Method get_totMissingTargetOrFieldErrors, addr 0x18e6274, size 0x8, virtual false, abstract: false, final false
inline int32_t get_totMissingTargetOrFieldErrors() ;

/// @brief Method get_totStartupErrors, addr 0x18e6294, size 0x8, virtual false, abstract: false, final false
inline int32_t get_totStartupErrors() ;

/// @brief Method get_totUnsetErrors, addr 0x18e62a4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_totUnsetErrors() ;

/// @brief Method set_totCallbackErrors, addr 0x18e628c, size 0x8, virtual false, abstract: false, final false
inline void set_totCallbackErrors(int32_t  value) ;

/// @brief Method set_totMissingTargetOrFieldErrors, addr 0x18e627c, size 0x8, virtual false, abstract: false, final false
inline void set_totMissingTargetOrFieldErrors(int32_t  value) ;

/// @brief Method set_totStartupErrors, addr 0x18e629c, size 0x8, virtual false, abstract: false, final false
inline void set_totStartupErrors(int32_t  value) ;

/// @brief Method set_totUnsetErrors, addr 0x18e62ac, size 0x8, virtual false, abstract: false, final false
inline void set_totUnsetErrors(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SafeModeReport() ;

// Ctor Parameters [CppParam { name: "_totMissingTargetOrFieldErrors_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_totCallbackErrors_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_totStartupErrors_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_totUnsetErrors_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SafeModeReport(int32_t  _totMissingTargetOrFieldErrors_k__BackingField, int32_t  _totCallbackErrors_k__BackingField, int32_t  _totStartupErrors_k__BackingField, int32_t  _totUnsetErrors_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10850};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <totMissingTargetOrFieldErrors>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _totMissingTargetOrFieldErrors_k__BackingField;

/// @brief Field <totCallbackErrors>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  _totCallbackErrors_k__BackingField;

/// @brief Field <totStartupErrors>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  _totStartupErrors_k__BackingField;

/// @brief Field <totUnsetErrors>k__BackingField, offset: 0xc, size: 0x4, def value: None
 int32_t  _totUnsetErrors_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DG::Tweening::Core::SafeModeReport, _totMissingTargetOrFieldErrors_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::SafeModeReport, _totCallbackErrors_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::SafeModeReport, _totStartupErrors_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::DG::Tweening::Core::SafeModeReport, _totUnsetErrors_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::DG::Tweening::Core::SafeModeReport, 0x10>, "Size mismatch!");

} // namespace end def DG::Tweening::Core
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::SafeModeReport_SafeModeReportType, "DG.Tweening.Core", "SafeModeReport/SafeModeReportType");
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::Core::SafeModeReport, "DG.Tweening.Core", "SafeModeReport");
