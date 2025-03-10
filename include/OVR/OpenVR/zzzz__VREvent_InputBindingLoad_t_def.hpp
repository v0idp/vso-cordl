#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_InputBindingLoad_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_InputBindingLoad_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_InputBindingLoad_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_InputBindingLoad_t);
// Dependencies 
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.VREvent_InputBindingLoad_t
struct CORDL_TYPE VREvent_InputBindingLoad_t {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VREvent_InputBindingLoad_t() ;

// Ctor Parameters [CppParam { name: "ulAppContainer", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "pathMessage", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "pathUrl", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "pathControllerType", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr VREvent_InputBindingLoad_t(uint64_t  ulAppContainer, uint64_t  pathMessage, uint64_t  pathUrl, uint64_t  pathControllerType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7255};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field ulAppContainer, offset: 0x0, size: 0x8, def value: None
 uint64_t  ulAppContainer;

/// @brief Field pathMessage, offset: 0x8, size: 0x8, def value: None
 uint64_t  pathMessage;

/// @brief Field pathUrl, offset: 0x10, size: 0x8, def value: None
 uint64_t  pathUrl;

/// @brief Field pathControllerType, offset: 0x18, size: 0x8, def value: None
 uint64_t  pathControllerType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::VREvent_InputBindingLoad_t, ulAppContainer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_InputBindingLoad_t, pathMessage) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_InputBindingLoad_t, pathUrl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VREvent_InputBindingLoad_t, pathControllerType) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_InputBindingLoad_t, 0x20>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_InputBindingLoad_t, "OVR.OpenVR", "VREvent_InputBindingLoad_t");
