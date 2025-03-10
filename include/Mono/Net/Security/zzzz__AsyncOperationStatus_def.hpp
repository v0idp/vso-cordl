#pragma once
// IWYU pragma private; include "Mono/Net/Security/AsyncOperationStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncOperationStatus)
// Forward declare root types
namespace Mono::Net::Security {
struct AsyncOperationStatus;
}
// Write type traits
MARK_VAL_T(::Mono::Net::Security::AsyncOperationStatus);
// Dependencies 
namespace Mono::Net::Security {
// Is value type: true
// CS Name: Mono.Net.Security.AsyncOperationStatus
struct CORDL_TYPE AsyncOperationStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AsyncOperationStatus_Unwrapped
enum struct __AsyncOperationStatus_Unwrapped : int32_t {
__E_Initialize = static_cast<int32_t>(0x0),
__E_Continue = static_cast<int32_t>(0x1),
__E_ReadDone = static_cast<int32_t>(0x2),
__E_Complete = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AsyncOperationStatus_Unwrapped () const noexcept {
return static_cast<__AsyncOperationStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AsyncOperationStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AsyncOperationStatus(int32_t  value__) noexcept;

/// @brief Field Complete value: I32(3)
static ::Mono::Net::Security::AsyncOperationStatus const Complete;

/// @brief Field Continue value: I32(1)
static ::Mono::Net::Security::AsyncOperationStatus const Continue;

/// @brief Field Initialize value: I32(0)
static ::Mono::Net::Security::AsyncOperationStatus const Initialize;

/// @brief Field ReadDone value: I32(2)
static ::Mono::Net::Security::AsyncOperationStatus const ReadDone;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7387};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::Net::Security::AsyncOperationStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::AsyncOperationStatus, 0x4>, "Size mismatch!");

} // namespace end def Mono::Net::Security
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::AsyncOperationStatus, "Mono.Net.Security", "AsyncOperationStatus");
