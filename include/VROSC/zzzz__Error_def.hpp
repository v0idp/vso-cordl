#pragma once
// IWYU pragma private; include "VROSC/Error.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Error)
// Forward declare root types
namespace VROSC {
struct Error;
}
// Write type traits
MARK_VAL_T(::VROSC::Error);
// Dependencies 
namespace VROSC {
// Is value type: true
// CS Name: VROSC.Error
struct CORDL_TYPE Error {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Error_Unwrapped
enum struct __Error_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Unknown = static_cast<int32_t>(0x1),
__E_NoConnection = static_cast<int32_t>(0x2),
__E_AlreadyLoadingSession = static_cast<int32_t>(0x3),
__E_AlreadySavingSession = static_cast<int32_t>(0x4),
__E_SessionAlreadyExists = static_cast<int32_t>(0x5),
__E_SessionNotFound = static_cast<int32_t>(0x6),
__E_SessionAlreadyUpVoted = static_cast<int32_t>(0x7),
__E_SessionAlreadyFavorited = static_cast<int32_t>(0x8),
__E_AppNeedsUpdating = static_cast<int32_t>(0x9),
__E_UserLacksPermission = static_cast<int32_t>(0xa),
__E_AlreadyLoadingData = static_cast<int32_t>(0xb),
__E_HTTPBadRequest = static_cast<int32_t>(0x7d0),
__E_HTTPUnauthorized = static_cast<int32_t>(0x7d1),
__E_HTTPForbidden = static_cast<int32_t>(0x7d2),
__E_HTTPTimeout = static_cast<int32_t>(0x7d3),
__E_HTTPNotFound = static_cast<int32_t>(0x7d4),
__E_FileDoesNotExist = static_cast<int32_t>(0xbb8),
__E_DirectoryDoesNotExist = static_cast<int32_t>(0xbb9),
__E_FileAlreadyExists = static_cast<int32_t>(0xbba),
__E_CantAccessFile = static_cast<int32_t>(0xbbb),
__E_FileStreamAlreadyOpen = static_cast<int32_t>(0xbbc),
__E_NotEnoughSpace = static_cast<int32_t>(0xbbd),
__E_FileInvalid = static_cast<int32_t>(0xbbe),
__E_FileInvalidData = static_cast<int32_t>(0xbbf),
__E_FBEmailAlreadyInUse = static_cast<int32_t>(0xfa0),
__E_FBEmailBadlyFormatted = static_cast<int32_t>(0xfa1),
__E_FBWrongPassword = static_cast<int32_t>(0xfa2),
__E_FBDeviceBlocked = static_cast<int32_t>(0xfa3),
__E_FBUserDoesntExist = static_cast<int32_t>(0xfa4),
__E_FBEmailNeeded = static_cast<int32_t>(0xfa5),
__E_FBPasswordNeeded = static_cast<int32_t>(0xfa6),
__E_FBDataDoesntExist = static_cast<int32_t>(0xfa7),
__E_FBWriteBatchInProgress = static_cast<int32_t>(0xfa8),
__E_FBWriteBatchNotStarted = static_cast<int32_t>(0xfa9),
__E_FBUserNotLoggedIn = static_cast<int32_t>(0xfaa),
__E_FBUserNotVerified = static_cast<int32_t>(0xfab),
__E_FailedToLoadSpatialAnchors = static_cast<int32_t>(0x1388),
__E_FailedToLocalizeSpatialAnchor = static_cast<int32_t>(0x1389),
__E_NoSpatialAnchorsFound = static_cast<int32_t>(0x138a),
__E_NoSpatialAnchorInTransform = static_cast<int32_t>(0x138b),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Error_Unwrapped () const noexcept {
return static_cast<__Error_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Error() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Error(int32_t  value__) noexcept;

/// @brief Field AlreadyLoadingData value: I32(11)
static ::VROSC::Error const AlreadyLoadingData;

/// @brief Field AlreadyLoadingSession value: I32(3)
static ::VROSC::Error const AlreadyLoadingSession;

/// @brief Field AlreadySavingSession value: I32(4)
static ::VROSC::Error const AlreadySavingSession;

/// @brief Field AppNeedsUpdating value: I32(9)
static ::VROSC::Error const AppNeedsUpdating;

/// @brief Field CantAccessFile value: I32(3003)
static ::VROSC::Error const CantAccessFile;

/// @brief Field DirectoryDoesNotExist value: I32(3001)
static ::VROSC::Error const DirectoryDoesNotExist;

/// @brief Field FBDataDoesntExist value: I32(4007)
static ::VROSC::Error const FBDataDoesntExist;

/// @brief Field FBDeviceBlocked value: I32(4003)
static ::VROSC::Error const FBDeviceBlocked;

/// @brief Field FBEmailAlreadyInUse value: I32(4000)
static ::VROSC::Error const FBEmailAlreadyInUse;

/// @brief Field FBEmailBadlyFormatted value: I32(4001)
static ::VROSC::Error const FBEmailBadlyFormatted;

/// @brief Field FBEmailNeeded value: I32(4005)
static ::VROSC::Error const FBEmailNeeded;

/// @brief Field FBPasswordNeeded value: I32(4006)
static ::VROSC::Error const FBPasswordNeeded;

/// @brief Field FBUserDoesntExist value: I32(4004)
static ::VROSC::Error const FBUserDoesntExist;

/// @brief Field FBUserNotLoggedIn value: I32(4010)
static ::VROSC::Error const FBUserNotLoggedIn;

/// @brief Field FBUserNotVerified value: I32(4011)
static ::VROSC::Error const FBUserNotVerified;

/// @brief Field FBWriteBatchInProgress value: I32(4008)
static ::VROSC::Error const FBWriteBatchInProgress;

/// @brief Field FBWriteBatchNotStarted value: I32(4009)
static ::VROSC::Error const FBWriteBatchNotStarted;

/// @brief Field FBWrongPassword value: I32(4002)
static ::VROSC::Error const FBWrongPassword;

/// @brief Field FailedToLoadSpatialAnchors value: I32(5000)
static ::VROSC::Error const FailedToLoadSpatialAnchors;

/// @brief Field FailedToLocalizeSpatialAnchor value: I32(5001)
static ::VROSC::Error const FailedToLocalizeSpatialAnchor;

/// @brief Field FileAlreadyExists value: I32(3002)
static ::VROSC::Error const FileAlreadyExists;

/// @brief Field FileDoesNotExist value: I32(3000)
static ::VROSC::Error const FileDoesNotExist;

/// @brief Field FileInvalid value: I32(3006)
static ::VROSC::Error const FileInvalid;

/// @brief Field FileInvalidData value: I32(3007)
static ::VROSC::Error const FileInvalidData;

/// @brief Field FileStreamAlreadyOpen value: I32(3004)
static ::VROSC::Error const FileStreamAlreadyOpen;

/// @brief Field HTTPBadRequest value: I32(2000)
static ::VROSC::Error const HTTPBadRequest;

/// @brief Field HTTPForbidden value: I32(2002)
static ::VROSC::Error const HTTPForbidden;

/// @brief Field HTTPNotFound value: I32(2004)
static ::VROSC::Error const HTTPNotFound;

/// @brief Field HTTPTimeout value: I32(2003)
static ::VROSC::Error const HTTPTimeout;

/// @brief Field HTTPUnauthorized value: I32(2001)
static ::VROSC::Error const HTTPUnauthorized;

/// @brief Field NoConnection value: I32(2)
static ::VROSC::Error const NoConnection;

/// @brief Field NoSpatialAnchorInTransform value: I32(5003)
static ::VROSC::Error const NoSpatialAnchorInTransform;

/// @brief Field NoSpatialAnchorsFound value: I32(5002)
static ::VROSC::Error const NoSpatialAnchorsFound;

/// @brief Field None value: I32(0)
static ::VROSC::Error const None;

/// @brief Field NotEnoughSpace value: I32(3005)
static ::VROSC::Error const NotEnoughSpace;

/// @brief Field SessionAlreadyExists value: I32(5)
static ::VROSC::Error const SessionAlreadyExists;

/// @brief Field SessionAlreadyFavorited value: I32(8)
static ::VROSC::Error const SessionAlreadyFavorited;

/// @brief Field SessionAlreadyUpVoted value: I32(7)
static ::VROSC::Error const SessionAlreadyUpVoted;

/// @brief Field SessionNotFound value: I32(6)
static ::VROSC::Error const SessionNotFound;

/// @brief Field Unknown value: I32(1)
static ::VROSC::Error const Unknown;

/// @brief Field UserLacksPermission value: I32(10)
static ::VROSC::Error const UserLacksPermission;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{598};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Error, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Error, 0x4>, "Size mismatch!");

} // namespace end def VROSC
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Error, "VROSC", "Error");
