#pragma once
// IWYU pragma private; include "Firebase/Firestore/FirestoreError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FirestoreError)
// Forward declare root types
namespace Firebase::Firestore {
struct FirestoreError;
}
// Write type traits
MARK_VAL_T(::Firebase::Firestore::FirestoreError);
// Dependencies 
namespace Firebase::Firestore {
// Is value type: true
// CS Name: Firebase.Firestore.FirestoreError
struct CORDL_TYPE FirestoreError {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FirestoreError_Unwrapped
enum struct __FirestoreError_Unwrapped : int32_t {
__E_Ok = static_cast<int32_t>(0x0),
__E_None = static_cast<int32_t>(0x0),
__E_Cancelled = static_cast<int32_t>(0x1),
__E_Unknown = static_cast<int32_t>(0x2),
__E_InvalidArgument = static_cast<int32_t>(0x3),
__E_DeadlineExceeded = static_cast<int32_t>(0x4),
__E_NotFound = static_cast<int32_t>(0x5),
__E_AlreadyExists = static_cast<int32_t>(0x6),
__E_PermissionDenied = static_cast<int32_t>(0x7),
__E_ResourceExhausted = static_cast<int32_t>(0x8),
__E_FailedPrecondition = static_cast<int32_t>(0x9),
__E_Aborted = static_cast<int32_t>(0xa),
__E_OutOfRange = static_cast<int32_t>(0xb),
__E_Unimplemented = static_cast<int32_t>(0xc),
__E_Internal = static_cast<int32_t>(0xd),
__E_Unavailable = static_cast<int32_t>(0xe),
__E_DataLoss = static_cast<int32_t>(0xf),
__E_Unauthenticated = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FirestoreError_Unwrapped () const noexcept {
return static_cast<__FirestoreError_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FirestoreError() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FirestoreError(int32_t  value__) noexcept;

/// @brief Field Aborted value: I32(10)
static ::Firebase::Firestore::FirestoreError const Aborted;

/// @brief Field AlreadyExists value: I32(6)
static ::Firebase::Firestore::FirestoreError const AlreadyExists;

/// @brief Field Cancelled value: I32(1)
static ::Firebase::Firestore::FirestoreError const Cancelled;

/// @brief Field DataLoss value: I32(15)
static ::Firebase::Firestore::FirestoreError const DataLoss;

/// @brief Field DeadlineExceeded value: I32(4)
static ::Firebase::Firestore::FirestoreError const DeadlineExceeded;

/// @brief Field FailedPrecondition value: I32(9)
static ::Firebase::Firestore::FirestoreError const FailedPrecondition;

/// @brief Field Internal value: I32(13)
static ::Firebase::Firestore::FirestoreError const Internal;

/// @brief Field InvalidArgument value: I32(3)
static ::Firebase::Firestore::FirestoreError const InvalidArgument;

/// @brief Field None value: I32(0)
static ::Firebase::Firestore::FirestoreError const None;

/// @brief Field NotFound value: I32(5)
static ::Firebase::Firestore::FirestoreError const NotFound;

/// @brief Field Ok value: I32(0)
static ::Firebase::Firestore::FirestoreError const Ok;

/// @brief Field OutOfRange value: I32(11)
static ::Firebase::Firestore::FirestoreError const OutOfRange;

/// @brief Field PermissionDenied value: I32(7)
static ::Firebase::Firestore::FirestoreError const PermissionDenied;

/// @brief Field ResourceExhausted value: I32(8)
static ::Firebase::Firestore::FirestoreError const ResourceExhausted;

/// @brief Field Unauthenticated value: I32(16)
static ::Firebase::Firestore::FirestoreError const Unauthenticated;

/// @brief Field Unavailable value: I32(14)
static ::Firebase::Firestore::FirestoreError const Unavailable;

/// @brief Field Unimplemented value: I32(12)
static ::Firebase::Firestore::FirestoreError const Unimplemented;

/// @brief Field Unknown value: I32(2)
static ::Firebase::Firestore::FirestoreError const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11206};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Firebase::Firestore::FirestoreError, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::FirestoreError, 0x4>, "Size mismatch!");

} // namespace end def Firebase::Firestore
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::FirestoreError, "Firebase.Firestore", "FirestoreError");
