#pragma once
// IWYU pragma private; include "Firebase/Storage/ErrorInternal.hpp"
#include "Firebase/Storage/zzzz__ErrorInternal_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Firebase::Storage::ErrorInternal::ErrorInternal(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Firebase::Storage::ErrorInternal::ErrorInternal()   {
}
constexpr ::Firebase::Storage::ErrorInternal  Firebase::Storage::ErrorInternal::ErrorNone{static_cast<int32_t>(0x0)};
constexpr ::Firebase::Storage::ErrorInternal  Firebase::Storage::ErrorInternal::ErrorUnknown{static_cast<int32_t>(0x1)};
constexpr ::Firebase::Storage::ErrorInternal  Firebase::Storage::ErrorInternal::ErrorObjectNotFound{static_cast<int32_t>(0x2)};
constexpr ::Firebase::Storage::ErrorInternal  Firebase::Storage::ErrorInternal::ErrorBucketNotFound{static_cast<int32_t>(0x3)};
constexpr ::Firebase::Storage::ErrorInternal  Firebase::Storage::ErrorInternal::ErrorProjectNotFound{static_cast<int32_t>(0x4)};
constexpr ::Firebase::Storage::ErrorInternal  Firebase::Storage::ErrorInternal::ErrorQuotaExceeded{static_cast<int32_t>(0x5)};
constexpr ::Firebase::Storage::ErrorInternal  Firebase::Storage::ErrorInternal::ErrorUnauthenticated{static_cast<int32_t>(0x6)};
constexpr ::Firebase::Storage::ErrorInternal  Firebase::Storage::ErrorInternal::ErrorUnauthorized{static_cast<int32_t>(0x7)};
constexpr ::Firebase::Storage::ErrorInternal  Firebase::Storage::ErrorInternal::ErrorRetryLimitExceeded{static_cast<int32_t>(0x8)};
constexpr ::Firebase::Storage::ErrorInternal  Firebase::Storage::ErrorInternal::ErrorNonMatchingChecksum{static_cast<int32_t>(0x9)};
constexpr ::Firebase::Storage::ErrorInternal  Firebase::Storage::ErrorInternal::ErrorDownloadSizeExceeded{static_cast<int32_t>(0xa)};
constexpr ::Firebase::Storage::ErrorInternal  Firebase::Storage::ErrorInternal::ErrorCancelled{static_cast<int32_t>(0xb)};
