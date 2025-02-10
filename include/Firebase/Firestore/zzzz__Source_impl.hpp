#pragma once
// IWYU pragma private; include "Firebase/Firestore/Source.hpp"
#include "Firebase/Firestore/zzzz__Source_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Firebase::Firestore::Source::Source(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::Source::Source()   {
}
constexpr ::Firebase::Firestore::Source  Firebase::Firestore::Source::Default{static_cast<int32_t>(0x0)};
constexpr ::Firebase::Firestore::Source  Firebase::Firestore::Source::Server{static_cast<int32_t>(0x1)};
constexpr ::Firebase::Firestore::Source  Firebase::Firestore::Source::Cache{static_cast<int32_t>(0x2)};
