#pragma once
// IWYU pragma private; include "Firebase/Storage/ErrorInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ErrorInternal)
// Forward declare root types
namespace Firebase::Storage {
struct ErrorInternal;
}
// Write type traits
MARK_VAL_T(::Firebase::Storage::ErrorInternal);
// Dependencies 
namespace Firebase::Storage {
// Is value type: true
// CS Name: Firebase.Storage.ErrorInternal
struct CORDL_TYPE ErrorInternal {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ErrorInternal_Unwrapped
enum struct __ErrorInternal_Unwrapped : int32_t {
__E_ErrorNone = static_cast<int32_t>(0x0),
__E_ErrorUnknown = static_cast<int32_t>(0x1),
__E_ErrorObjectNotFound = static_cast<int32_t>(0x2),
__E_ErrorBucketNotFound = static_cast<int32_t>(0x3),
__E_ErrorProjectNotFound = static_cast<int32_t>(0x4),
__E_ErrorQuotaExceeded = static_cast<int32_t>(0x5),
__E_ErrorUnauthenticated = static_cast<int32_t>(0x6),
__E_ErrorUnauthorized = static_cast<int32_t>(0x7),
__E_ErrorRetryLimitExceeded = static_cast<int32_t>(0x8),
__E_ErrorNonMatchingChecksum = static_cast<int32_t>(0x9),
__E_ErrorDownloadSizeExceeded = static_cast<int32_t>(0xa),
__E_ErrorCancelled = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ErrorInternal_Unwrapped () const noexcept {
return static_cast<__ErrorInternal_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ErrorInternal() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ErrorInternal(int32_t  value__) noexcept;

/// @brief Field ErrorBucketNotFound value: I32(3)
static ::Firebase::Storage::ErrorInternal const ErrorBucketNotFound;

/// @brief Field ErrorCancelled value: I32(11)
static ::Firebase::Storage::ErrorInternal const ErrorCancelled;

/// @brief Field ErrorDownloadSizeExceeded value: I32(10)
static ::Firebase::Storage::ErrorInternal const ErrorDownloadSizeExceeded;

/// @brief Field ErrorNonMatchingChecksum value: I32(9)
static ::Firebase::Storage::ErrorInternal const ErrorNonMatchingChecksum;

/// @brief Field ErrorNone value: I32(0)
static ::Firebase::Storage::ErrorInternal const ErrorNone;

/// @brief Field ErrorObjectNotFound value: I32(2)
static ::Firebase::Storage::ErrorInternal const ErrorObjectNotFound;

/// @brief Field ErrorProjectNotFound value: I32(4)
static ::Firebase::Storage::ErrorInternal const ErrorProjectNotFound;

/// @brief Field ErrorQuotaExceeded value: I32(5)
static ::Firebase::Storage::ErrorInternal const ErrorQuotaExceeded;

/// @brief Field ErrorRetryLimitExceeded value: I32(8)
static ::Firebase::Storage::ErrorInternal const ErrorRetryLimitExceeded;

/// @brief Field ErrorUnauthenticated value: I32(6)
static ::Firebase::Storage::ErrorInternal const ErrorUnauthenticated;

/// @brief Field ErrorUnauthorized value: I32(7)
static ::Firebase::Storage::ErrorInternal const ErrorUnauthorized;

/// @brief Field ErrorUnknown value: I32(1)
static ::Firebase::Storage::ErrorInternal const ErrorUnknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11685};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Storage::ErrorInternal, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Storage::ErrorInternal, 0x4>, "Size mismatch!");

} // namespace end def Firebase::Storage
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Storage::ErrorInternal, "Firebase.Storage", "ErrorInternal");
