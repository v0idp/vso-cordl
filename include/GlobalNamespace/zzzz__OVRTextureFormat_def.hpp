#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTextureFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTextureFormat)
// Forward declare root types
namespace GlobalNamespace {
struct OVRTextureFormat;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRTextureFormat);
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTextureFormat
struct CORDL_TYPE OVRTextureFormat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRTextureFormat_Unwrapped
enum struct __OVRTextureFormat_Unwrapped : int32_t {
__E_NONE = static_cast<int32_t>(0x0),
__E_KTX2 = static_cast<int32_t>(0x1),
__E_PNG = static_cast<int32_t>(0x2),
__E_JPEG = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRTextureFormat_Unwrapped () const noexcept {
return static_cast<__OVRTextureFormat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRTextureFormat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OVRTextureFormat(int32_t  value__) noexcept;

/// @brief Field JPEG value: I32(3)
static ::GlobalNamespace::OVRTextureFormat const JPEG;

/// @brief Field KTX2 value: I32(1)
static ::GlobalNamespace::OVRTextureFormat const KTX2;

/// @brief Field NONE value: I32(0)
static ::GlobalNamespace::OVRTextureFormat const NONE;

/// @brief Field PNG value: I32(2)
static ::GlobalNamespace::OVRTextureFormat const PNG;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6080};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTextureFormat, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTextureFormat, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTextureFormat, "", "OVRTextureFormat");
