#pragma once
// IWYU pragma private; include "OVR/OpenVR/HmdColor_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HmdColor_t)
// Forward declare root types
namespace OVR::OpenVR {
struct HmdColor_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::HmdColor_t);
// Dependencies 
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.HmdColor_t
struct CORDL_TYPE HmdColor_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HmdColor_t() ;

// Ctor Parameters [CppParam { name: "r", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "g", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "b", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "a", ty: "float_t", modifiers: "", def_value: None }]
constexpr HmdColor_t(float_t  r, float_t  g, float_t  b, float_t  a) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7219};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field r, offset: 0x0, size: 0x4, def value: None
 float_t  r;

/// @brief Field g, offset: 0x4, size: 0x4, def value: None
 float_t  g;

/// @brief Field b, offset: 0x8, size: 0x4, def value: None
 float_t  b;

/// @brief Field a, offset: 0xc, size: 0x4, def value: None
 float_t  a;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::HmdColor_t, r) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdColor_t, g) == 0x4, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdColor_t, b) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdColor_t, a) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::HmdColor_t, 0x10>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdColor_t, "OVR.OpenVR", "HmdColor_t");
