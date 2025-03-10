#pragma once
// IWYU pragma private; include "OVR/OpenVR/HmdVector2_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HmdVector2_t)
// Forward declare root types
namespace OVR::OpenVR {
struct HmdVector2_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::HmdVector2_t);
// Dependencies 
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.HmdVector2_t
struct CORDL_TYPE HmdVector2_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HmdVector2_t() ;

// Ctor Parameters [CppParam { name: "v0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "v1", ty: "float_t", modifiers: "", def_value: None }]
constexpr HmdVector2_t(float_t  v0, float_t  v1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7216};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field v0, offset: 0x0, size: 0x4, def value: None
 float_t  v0;

/// @brief Field v1, offset: 0x4, size: 0x4, def value: None
 float_t  v1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::HmdVector2_t, v0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdVector2_t, v1) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::HmdVector2_t, 0x8>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdVector2_t, "OVR.OpenVR", "HmdVector2_t");
