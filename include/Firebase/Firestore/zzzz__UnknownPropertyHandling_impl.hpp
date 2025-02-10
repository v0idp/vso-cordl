#pragma once
// IWYU pragma private; include "Firebase/Firestore/UnknownPropertyHandling.hpp"
#include "Firebase/Firestore/zzzz__UnknownPropertyHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Firebase::Firestore::UnknownPropertyHandling::UnknownPropertyHandling(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::UnknownPropertyHandling::UnknownPropertyHandling()   {
}
constexpr ::Firebase::Firestore::UnknownPropertyHandling  Firebase::Firestore::UnknownPropertyHandling::Ignore{static_cast<int32_t>(0x0)};
constexpr ::Firebase::Firestore::UnknownPropertyHandling  Firebase::Firestore::UnknownPropertyHandling::Warn{static_cast<int32_t>(0x1)};
constexpr ::Firebase::Firestore::UnknownPropertyHandling  Firebase::Firestore::UnknownPropertyHandling::Throw{static_cast<int32_t>(0x2)};
