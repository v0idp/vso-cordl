#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_Mouse_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_Mouse_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Mouse_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_Mouse_t);
// Dependencies 
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.VREvent_Mouse_t
struct CORDL_TYPE VREvent_Mouse_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VREvent_Mouse_t() ;

// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "button", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr VREvent_Mouse_t(float_t  x, float_t  y, uint32_t  button) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7233};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 float_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 float_t  y;

/// @brief Field button, offset: 0x8, size: 0x4, def value: None
 uint32_t  button;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::VREvent_Mouse_t, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_Mouse_t, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_Mouse_t, button) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_Mouse_t, 0xc>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Mouse_t, "OVR.OpenVR", "VREvent_Mouse_t");
