#pragma once
// IWYU pragma private; include "Firebase/Firestore/ServerTimestampBehavior.hpp"
#include "Firebase/Firestore/zzzz__ServerTimestampBehavior_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Firebase::Firestore::ServerTimestampBehavior::ServerTimestampBehavior(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::ServerTimestampBehavior::ServerTimestampBehavior()   {
}
constexpr ::Firebase::Firestore::ServerTimestampBehavior  Firebase::Firestore::ServerTimestampBehavior::None{static_cast<int32_t>(0x0)};
constexpr ::Firebase::Firestore::ServerTimestampBehavior  Firebase::Firestore::ServerTimestampBehavior::Estimate{static_cast<int32_t>(0x1)};
constexpr ::Firebase::Firestore::ServerTimestampBehavior  Firebase::Firestore::ServerTimestampBehavior::Previous{static_cast<int32_t>(0x2)};
