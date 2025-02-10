#pragma once
// IWYU pragma private; include "Firebase/Firestore/FirestoreError.hpp"
#include "Firebase/Firestore/zzzz__FirestoreError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Firebase::Firestore::FirestoreError::FirestoreError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::FirestoreError::FirestoreError()   {
}
constexpr ::Firebase::Firestore::FirestoreError  Firebase::Firestore::FirestoreError::Ok{static_cast<int32_t>(0x0)};
constexpr ::Firebase::Firestore::FirestoreError  Firebase::Firestore::FirestoreError::None{static_cast<int32_t>(0x0)};
constexpr ::Firebase::Firestore::FirestoreError  Firebase::Firestore::FirestoreError::Cancelled{static_cast<int32_t>(0x1)};
constexpr ::Firebase::Firestore::FirestoreError  Firebase::Firestore::FirestoreError::Unknown{static_cast<int32_t>(0x2)};
constexpr ::Firebase::Firestore::FirestoreError  Firebase::Firestore::FirestoreError::InvalidArgument{static_cast<int32_t>(0x3)};
constexpr ::Firebase::Firestore::FirestoreError  Firebase::Firestore::FirestoreError::DeadlineExceeded{static_cast<int32_t>(0x4)};
constexpr ::Firebase::Firestore::FirestoreError  Firebase::Firestore::FirestoreError::NotFound{static_cast<int32_t>(0x5)};
constexpr ::Firebase::Firestore::FirestoreError  Firebase::Firestore::FirestoreError::AlreadyExists{static_cast<int32_t>(0x6)};
constexpr ::Firebase::Firestore::FirestoreError  Firebase::Firestore::FirestoreError::PermissionDenied{static_cast<int32_t>(0x7)};
constexpr ::Firebase::Firestore::FirestoreError  Firebase::Firestore::FirestoreError::ResourceExhausted{static_cast<int32_t>(0x8)};
constexpr ::Firebase::Firestore::FirestoreError  Firebase::Firestore::FirestoreError::FailedPrecondition{static_cast<int32_t>(0x9)};
constexpr ::Firebase::Firestore::FirestoreError  Firebase::Firestore::FirestoreError::Aborted{static_cast<int32_t>(0xa)};
constexpr ::Firebase::Firestore::FirestoreError  Firebase::Firestore::FirestoreError::OutOfRange{static_cast<int32_t>(0xb)};
constexpr ::Firebase::Firestore::FirestoreError  Firebase::Firestore::FirestoreError::Unimplemented{static_cast<int32_t>(0xc)};
constexpr ::Firebase::Firestore::FirestoreError  Firebase::Firestore::FirestoreError::Internal{static_cast<int32_t>(0xd)};
constexpr ::Firebase::Firestore::FirestoreError  Firebase::Firestore::FirestoreError::Unavailable{static_cast<int32_t>(0xe)};
constexpr ::Firebase::Firestore::FirestoreError  Firebase::Firestore::FirestoreError::DataLoss{static_cast<int32_t>(0xf)};
constexpr ::Firebase::Firestore::FirestoreError  Firebase::Firestore::FirestoreError::Unauthenticated{static_cast<int32_t>(0x10)};
