#pragma once
// IWYU pragma private; include "VROSC/Error.hpp"
#include "VROSC/zzzz__Error_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VROSC::Error::Error(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::VROSC::Error::Error()   {
}
constexpr ::VROSC::Error  VROSC::Error::None{static_cast<int32_t>(0x0)};
constexpr ::VROSC::Error  VROSC::Error::Unknown{static_cast<int32_t>(0x1)};
constexpr ::VROSC::Error  VROSC::Error::NoConnection{static_cast<int32_t>(0x2)};
constexpr ::VROSC::Error  VROSC::Error::AlreadyLoadingSession{static_cast<int32_t>(0x3)};
constexpr ::VROSC::Error  VROSC::Error::AlreadySavingSession{static_cast<int32_t>(0x4)};
constexpr ::VROSC::Error  VROSC::Error::SessionAlreadyExists{static_cast<int32_t>(0x5)};
constexpr ::VROSC::Error  VROSC::Error::SessionNotFound{static_cast<int32_t>(0x6)};
constexpr ::VROSC::Error  VROSC::Error::SessionAlreadyUpVoted{static_cast<int32_t>(0x7)};
constexpr ::VROSC::Error  VROSC::Error::SessionAlreadyFavorited{static_cast<int32_t>(0x8)};
constexpr ::VROSC::Error  VROSC::Error::AppNeedsUpdating{static_cast<int32_t>(0x9)};
constexpr ::VROSC::Error  VROSC::Error::UserLacksPermission{static_cast<int32_t>(0xa)};
constexpr ::VROSC::Error  VROSC::Error::AlreadyLoadingData{static_cast<int32_t>(0xb)};
constexpr ::VROSC::Error  VROSC::Error::HTTPBadRequest{static_cast<int32_t>(0x7d0)};
constexpr ::VROSC::Error  VROSC::Error::HTTPUnauthorized{static_cast<int32_t>(0x7d1)};
constexpr ::VROSC::Error  VROSC::Error::HTTPForbidden{static_cast<int32_t>(0x7d2)};
constexpr ::VROSC::Error  VROSC::Error::HTTPTimeout{static_cast<int32_t>(0x7d3)};
constexpr ::VROSC::Error  VROSC::Error::HTTPNotFound{static_cast<int32_t>(0x7d4)};
constexpr ::VROSC::Error  VROSC::Error::FileDoesNotExist{static_cast<int32_t>(0xbb8)};
constexpr ::VROSC::Error  VROSC::Error::DirectoryDoesNotExist{static_cast<int32_t>(0xbb9)};
constexpr ::VROSC::Error  VROSC::Error::FileAlreadyExists{static_cast<int32_t>(0xbba)};
constexpr ::VROSC::Error  VROSC::Error::CantAccessFile{static_cast<int32_t>(0xbbb)};
constexpr ::VROSC::Error  VROSC::Error::FileStreamAlreadyOpen{static_cast<int32_t>(0xbbc)};
constexpr ::VROSC::Error  VROSC::Error::NotEnoughSpace{static_cast<int32_t>(0xbbd)};
constexpr ::VROSC::Error  VROSC::Error::FileInvalid{static_cast<int32_t>(0xbbe)};
constexpr ::VROSC::Error  VROSC::Error::FileInvalidData{static_cast<int32_t>(0xbbf)};
constexpr ::VROSC::Error  VROSC::Error::FBEmailAlreadyInUse{static_cast<int32_t>(0xfa0)};
constexpr ::VROSC::Error  VROSC::Error::FBEmailBadlyFormatted{static_cast<int32_t>(0xfa1)};
constexpr ::VROSC::Error  VROSC::Error::FBWrongPassword{static_cast<int32_t>(0xfa2)};
constexpr ::VROSC::Error  VROSC::Error::FBDeviceBlocked{static_cast<int32_t>(0xfa3)};
constexpr ::VROSC::Error  VROSC::Error::FBUserDoesntExist{static_cast<int32_t>(0xfa4)};
constexpr ::VROSC::Error  VROSC::Error::FBEmailNeeded{static_cast<int32_t>(0xfa5)};
constexpr ::VROSC::Error  VROSC::Error::FBPasswordNeeded{static_cast<int32_t>(0xfa6)};
constexpr ::VROSC::Error  VROSC::Error::FBDataDoesntExist{static_cast<int32_t>(0xfa7)};
constexpr ::VROSC::Error  VROSC::Error::FBWriteBatchInProgress{static_cast<int32_t>(0xfa8)};
constexpr ::VROSC::Error  VROSC::Error::FBWriteBatchNotStarted{static_cast<int32_t>(0xfa9)};
constexpr ::VROSC::Error  VROSC::Error::FBUserNotLoggedIn{static_cast<int32_t>(0xfaa)};
constexpr ::VROSC::Error  VROSC::Error::FBUserNotVerified{static_cast<int32_t>(0xfab)};
constexpr ::VROSC::Error  VROSC::Error::FailedToLoadSpatialAnchors{static_cast<int32_t>(0x1388)};
constexpr ::VROSC::Error  VROSC::Error::FailedToLocalizeSpatialAnchor{static_cast<int32_t>(0x1389)};
constexpr ::VROSC::Error  VROSC::Error::NoSpatialAnchorsFound{static_cast<int32_t>(0x138a)};
constexpr ::VROSC::Error  VROSC::Error::NoSpatialAnchorInTransform{static_cast<int32_t>(0x138b)};
