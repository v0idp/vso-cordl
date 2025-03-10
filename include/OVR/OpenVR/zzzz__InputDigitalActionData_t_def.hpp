#pragma once
// IWYU pragma private; include "OVR/OpenVR/InputDigitalActionData_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDigitalActionData_t)
// Forward declare root types
namespace OVR::OpenVR {
struct InputDigitalActionData_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::InputDigitalActionData_t);
// Dependencies 
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.InputDigitalActionData_t
struct CORDL_TYPE InputDigitalActionData_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InputDigitalActionData_t() ;

// Ctor Parameters [CppParam { name: "bActive", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "activeOrigin", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "bState", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "bChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "fUpdateTime", ty: "float_t", modifiers: "", def_value: None }]
constexpr InputDigitalActionData_t(bool  bActive, uint64_t  activeOrigin, bool  bState, bool  bChanged, float_t  fUpdateTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7287};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field bActive, offset: 0x0, size: 0x1, def value: None
 bool  bActive;

/// @brief Field activeOrigin, offset: 0x8, size: 0x8, def value: None
 uint64_t  activeOrigin;

/// @brief Field bState, offset: 0x10, size: 0x1, def value: None
 bool  bState;

/// @brief Field bChanged, offset: 0x11, size: 0x1, def value: None
 bool  bChanged;

/// @brief Field fUpdateTime, offset: 0x14, size: 0x4, def value: None
 float_t  fUpdateTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::InputDigitalActionData_t, bActive) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputDigitalActionData_t, activeOrigin) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputDigitalActionData_t, bState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputDigitalActionData_t, bChanged) == 0x11, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputDigitalActionData_t, fUpdateTime) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::InputDigitalActionData_t, 0x18>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::InputDigitalActionData_t, "OVR.OpenVR", "InputDigitalActionData_t");
