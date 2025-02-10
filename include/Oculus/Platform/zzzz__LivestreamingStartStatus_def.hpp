#pragma once
// IWYU pragma private; include "Oculus/Platform/LivestreamingStartStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LivestreamingStartStatus)
// Forward declare root types
namespace Oculus::Platform {
struct LivestreamingStartStatus;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::LivestreamingStartStatus);
// Dependencies 
namespace Oculus::Platform {
// Is value type: true
// CS Name: Oculus.Platform.LivestreamingStartStatus
struct CORDL_TYPE LivestreamingStartStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LivestreamingStartStatus_Unwrapped
enum struct __LivestreamingStartStatus_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x1),
__E_Unknown = static_cast<int32_t>(0x0),
__E_NoPackageSet = static_cast<int32_t>(0xffffffff),
__E_NoFbConnect = static_cast<int32_t>(0xfffffffe),
__E_NoSessionId = static_cast<int32_t>(0xfffffffd),
__E_MissingParameters = static_cast<int32_t>(0xfffffffc),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LivestreamingStartStatus_Unwrapped () const noexcept {
return static_cast<__LivestreamingStartStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LivestreamingStartStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LivestreamingStartStatus(int32_t  value__) noexcept;

/// @brief Field MissingParameters value: I32(-4)
static ::Oculus::Platform::LivestreamingStartStatus const MissingParameters;

/// @brief Field NoFbConnect value: I32(-2)
static ::Oculus::Platform::LivestreamingStartStatus const NoFbConnect;

/// @brief Field NoPackageSet value: I32(-1)
static ::Oculus::Platform::LivestreamingStartStatus const NoPackageSet;

/// @brief Field NoSessionId value: I32(-3)
static ::Oculus::Platform::LivestreamingStartStatus const NoSessionId;

/// @brief Field Success value: I32(1)
static ::Oculus::Platform::LivestreamingStartStatus const Success;

/// @brief Field Unknown value: I32(0)
static ::Oculus::Platform::LivestreamingStartStatus const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10436};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::LivestreamingStartStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::LivestreamingStartStatus, 0x4>, "Size mismatch!");

} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::LivestreamingStartStatus, "Oculus.Platform", "LivestreamingStartStatus");
